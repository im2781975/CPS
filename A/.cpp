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
const int x = 10010;
int wt[x], item[x], dp[x][x];
void knapsack(int n, int W) {
    for(int i = 1; i <= n; i++) cin >> wt[i] >> item[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < W; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j >= wt[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + item[i]);
        }
    }
    cout << dp[n][W];
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
// calculate sum of the first two integers in each triplet, find and print the largest sum decreased by 1
void maxsum(int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        maxi = max(maxi, a + b);
    }
    cout << maxi - 1 << endl;
}
void maxsum(int n) {
    int maxi = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        sum = -(a + b); maxi = max(maxi, sum);
    }
    cout << maxi << endl;
}
//sum of prime numbers
const int x = 1e5;
bool vis[x]; int prime[x], cnt = 0;
void printprime() {
    for(int i = 2; i < x; ++i) vis[i] = true;
    for(int i = 2; i < x; ++i) {
        if(vis[i]) {
            prime[cnt++] = i;
            for(int j = i * 2; j < x; j += i) vis[j] = false;
        }
    }
    int sum = 0;
    for(int i = 0; i < 25; i++) sum += prime[i];
    cout << sum << endl;
}
// find and print the 1-based index of the unique element in
void findunqIdx(int *arr, int n) {
    int unqIdx = -1;
    if(arr[0] != arr[1]) 
        unqIdx = (arr[1] == arr[2]) ? 0 : 1;
    else {
        for(int i = 2; i < n; ++i) {
            if(arr[i] != arr[0]) {
                unqIdx = i; break;
            }
        }
    }
    cout << unqIdx + 1;
}
//Sum consecutive integer Diffrence
void sumdiff(int a, int b, int c) {
    int arr[3] = {a, b, c}; sort(arr, arr + 3);
    cout << abs(arr[1] - arr[0]) + abs(arr[2] - arr[1]);
}
// finding the minimum steps to make two integers equal using only +1 or -1 operations.
void cntstep(int n) {
    while(n--) {
        int a, b; cin >> a >> b;
        int diff = abs(a - b);
        cout << (diff % 2 == 0 ? 1 : 2) << endl;
    }
}
//Find the nxt number which contain unique digits
bool Isdistinct(int num) {
    set <int> digits;
    while(num > 0) {
        int dig = num % 10;
        if(digits.count(dig)) return false;
        digits.insert(dig); num /= 10;
    } return true;
}
void isdistinct(int n) {
    while(++n) {
        int x = n, mask = 0;
        bool unq = true;
        while(x > 0) {
            int d = x % 10;
            if(mask && (1 << d)) {
                unq = false; break;
            }
            mask |= 1 << d; x /= 10;
        }
        if(unq) cout << n << endl;
    }
}
// determine if all the levels from 1 to n are covered by the unique elements present in two given arrays
void removedup(int n) {
    int a, b; cin >> a >> b;
    set <int> lev;
    for(int i = 0; i < a; i++) {
        int x; cin >> x;
        lev.insert(x - 1);
    }
    for(int i = 0; i < b; i++) {
        int x; cin >> x;
        lev.insert(x - 1);
    }
    cout << (lev.size() == n ? "Become the Guy." : "No one"); /*
    bool lev[n + 1];
    for(int i = 0; i < a; i++) lev[i] = true;
    for(int i = 0; i < b; i++) lev[i] = true;
    for(int i = 1; i <= n; i++){
        if(!Levels[i]) return 0;
    }
    cout << "Become the Guy"; */
}
//calculate and display 2^num to find the sum of the digits of the resulting number
int multTwo(int n) {
    vector <int> dig = {1};
    for(int i = 0; i < n; i++) {
        int curr = 0;
        for(auto &d : dig) {
            int x = d * 2 + curr;
            d = x % 10; curr = x / 10;
        }
        while(curr) {
            dig.push_back(curr % 10); curr /= 10;
        }
    }
    int sum = 0;
    for(int i = dig.size() - 1; i >= 0; i--) {
        sum += dig[i]; cout << dig[i] << endl;
    }
    cout << sum << " ";
}
void checkdiag(vector <vector <char>> grid, int n) {
    int diag = grid[0][0];
    for(int i = 0; i < n; i++) {
        if(grid[i][i] != diag || grid[i][n - i - 1] != diag) {
            cout << "NO"; return 0;
        }
    }
    char Offdiag = grid[0][1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && i + j != n - 1) {
                if(grid[i][j] != Offdiag) {
                    cout << "NO"; return 0;
                }
            }
        }
    } cout << "Yes";
}
// fill a string with alternating 'B' and 'W' characters.
void fillchar(int r, int c) {
    for(int i = 0; i < r; i++) {
        string str(c, ' '); cin >> str;
        for(int j = 0; j < c; j++)
            str[j] = (str[j] == '.' ? ((i + j) % 2 ? 'W' : 'B') : str[j]);
        cout << str << endl;
    }
}
//an arr represent the number of additional sockets available from various devices 
//Each device can contribute a certain number of additional sockets.
//determine how many devices need to use to ensure that you have enough sockets to accommodate a given number of devices
void cntDevice() {
    int supply, socket, device; cin >> supply >> socket >> device;
    vector <int> arr(supply);
    for(int i = 0; i < supply; i++) cin >> arr[i];
    if(socket >= device) return cout << 0, 0;
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < supply; i++) {
        socket += arr[i] - 1;
        if(socket >= device) return cout << i + 1, 0;
    }
    cout << -1;
}
void collatz(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        (x % 2 == 0) ? x /= 2 : x = 3 * x + 1;
        cout << x << " ";
    }
}
