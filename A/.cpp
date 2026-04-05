#include<bits/stdc++.h>
using namespace std;
// find the minimal unused capacity of a knapsack of size cap given n items of various sizes. 
void knapsack(int n, int cap) {
    vector <int> arr(cap + 1, 0);
    for(int i = 0; i < n; i++) {
        int sz; cin >> sz;
        for(int j = sz; j <= cap; j++) 
            arr[j] = max(arr[j - sz] + sz, arr[j]);
    }
    cout << cap - arr[cap];
}
void pascaltriangle(int n) { /*
    vector <int> prv = {1}; cout << "1 ";
    for(int i = 1; i < n; i++) {
        vector <int> curr(i + 1);
        curr[0] = curr[i] = 1;
        for(int j = 1; j < i; j++)
            curr[j] = prv[j - 1] + prv[j];
        prv = curr;
        for(x : curr) cout << x << " ";
    } */
    vector <vector <int>> arr(n, vector <int> (n, 0));
    arr[0][0] = 1;
    for(int i = 1; i < n; i++) {
        arr[i][0] = 1; arr[i][i] = 1;
        for(int j = 1; j < i; j++)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
// finds the length of the longest non-decreasing subsequence (LNS)
int longestIncreasing(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxlen = 1, currlen = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) {
            currlen++; maxlen = max(currlen, maxlen);
        }
        else currlen = 1;
    }
    return n - maxlen;
}
// Finds sum of "middle" subarray after making exactly 5 two-pointer adjustments.
void subarrsum(int n) {
    vector <int> arr(n + 1);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int left = 1, right = n, moves = 5;
    while(moves > 0 && left < right) {
        int leftsum = arr[left] + arr[left - 1];
        if(leftsum < arr[right]) left += 2;
        else if(leftsum > arr[right]) right--;
        else {
            left += 2; right--; 
            moves -= 2; continue;
        } moves--;
    } 
    int sum = 0;
    for(int i = max(left - 1, 1); i <= right; i++) sum += arr[i];
    cout << sum << endl;
}
// finds the longest subarray where adjacent elements have the SAME absolute difference.
void subarrlen(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxlen = 1, cnt = 1;
    for(int i = 1; i < n; i++) {
        int curr = abs(arr[i] - arr[i - 1]);
        if(i == 1 || curr == abs(arr[i - 1] - arr[i - 2])) {
            cnt++; maxlen = max(maxlen, cnt);
        }
        else cnt = 2;
    }
    cout << maxlen;
}
// Counts how many times a "first value" from one pair matches a "second value" from a different pair.
void matchpair(int n) {
    vector <pair <int, int>> pairs(n);
    for(auto &p : pairs) cin >> p.first >> p.second;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && pairs[i].first != pairs[i].second) cnt++;
        }
    } /*
    vector <int> first(n), second(n);
    for(int i = 0; i < n; i++) cin >> first[i] >> second[i];
    unordered_map <int, int> freq;
    for(int x : second) freq[x]++;
    int cnt = 0;
    for(int x : first) cnt += freq[x]; */
    cout << cnt;
}
// the Linear Sieve for Euler's Totient function (φ(n))
const int x = 1e5 + 10;
bool isprime[x];
int phi[x], prime[x / 10], cnt = 0;
void eulertotient() {
    fill(isprime, isprime + x, true);
    isprime[0] = isprime[1] = false;
    for(int i = 0; i < x; i++) phi[i] = i;
    for(int i = 2; i < x; i++) {
        if(isprime[i]) {
            prime[cnt++] = i; phi[i] = i - 1;
        }
        for(int j = 0; j < cnt && i * prime[j] < x; j++) {
            int num = i * prime[j];
            isprime[num] = false;
            if(i % prime[j] == 0) {
                phi[num] = phi[i] * prime[j]; break;
            }
            else phi[num] = phi[i] * (prime[j] - 1);
        }
    }
}
//Count Consecutive Duplicate & count the number of distinct contiguous segments in an array of integers
void cntunqDup(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i]; /*
    int dup = 0, changes = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) dup++;
        else changes++;
    }
    cout << dup << " " << changes + 1; */
    int seg = 1, longestDup = 1, curr = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
            curr++; longestDup = max(curr, longestDup);
        }
        else { seg++; curr = 1; }
    }
    cout << seg << " " << longestDup << endl;
}
//find the maximum gap between adj elements in an array after removing one element 
// in a way that minimizes the maximum gap between the remaining adj elements. 
void maxgap(int n, vector <int> arr) {
    int mindiff = INT_MAX, pos = -1;
    for(int i = 2; i < n; i++) {
        int diff = arr[i] - arr[i - 2];
        if(diff < mindiff) {
            mindiff = diff; pos = i - 1;
        }
    }
    int maxgap = 0;
    for(int i = 0; i < n - 1; i++) {
        if(i == pos && i + 1 < n) {
            maxgap = max(maxgap, arr[i + 2] - arr[i]); i++;
        }
        else maxgap = max(maxgap, arr[i + 1] - arr[i]);
    }
    cout << maxgap;
}
// calculate the total exercise done for each muscle group over the n days 
//and determine which muscle group has the maximum exercise.
void exercise(int n, vector <int> exercise) {
    int chest = biceps = back = 0;
    for(int i = 0; i < 3; i++) {
        switch(i % 3) {
            case 0: chest += exercise[i]; break;
            case 1: biceps += exercise[i]; break; 
            case 2: back += exercise[i]; break;
        }
    }
    int maxVal = max({chest, biceps, back});
    if(maxVal == chest) cout << chest;
    else if(maxVal == biceps) cout << biceps;
    else cout << back;
}
