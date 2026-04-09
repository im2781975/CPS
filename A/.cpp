#include<bits/stdc++.h>
using namespace std;
// Find the Winner and the Dissenters
void findwinner(int n, vector <int> arr) {
    map <int, int> cnt;
    for(int x : arr) {
        if(x >= 1 && x <= 3) cnt[x]++;
    }
    int winner = 1;
    if (cnt[2] > cnt[1] && cnt[2] > cnt[3]) winner = 2;
    else if (cnt[3] >= cnt[1] && cnt[3] >= cnt[2]) winner = 3;
    int notwinner = 0;
    for(int x : a) {
        if(x != winner) notwinner++;
    }
    cout << cnt[1] << " " << cnt[2] << " " << cnt[3] << " " << notwinner << endl;
}
// transformation and printing of each input using the formula 4x + 1.
void transform(int n, int *arr) {
    for(int i = 0; i < n; i++) arr[i] = arr[i] * 4 + 1;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
// compute 2**n
const int x = 1000000007;
void compute(int n) {
    int w = 1;
    for(int i = 0; i < n; ++i) w = (w * 2) % x;
    cout << (w * (w + 1) / 2) % MOD;
}
// computes the index of the first element such that the sum of the prefix
// up to that element is at least half of the total array sum
void computeIdx(int n, int *arr) {
    int sum = 0, prefix = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    int half = sum / 2 + sum % 2;
    for(int i = 0; i < n; i++) {
        prefix += arr[i];
        if(prefix >= half) {
            cout << i + 1; break;
        }
    }
}
// finds the largest divisor of val present in the array,
void finddivisor(int n, int val, int *arr) {
    int maxdivisor = 0;
    for(int i = 0; i < n; i++) {
        if(val % arr[i] == 0 && arr[i] > maxdivisor) maxdivisor = arr[i];
    } cout << val / maxdivisor;
}
//counts how many different numbers in the set appear in the input array
void cntappear(int n, int *arr) {
    set <int> distinct;
    for (int i = 0; i < n; ++i) {
        if (1 <= r[i] && r[i] <= 100) distinct.insert(r[i]);
    } cout << distinct.size();
}
// select a specific subset of elements from arr to form a sum in a pattern related to n % 3
void formsum(int n, int *arr) {
    sort(arr, arr + n);
    int res = 0, skip = 0;
    if(n % 3 == 1) {
        res += arr[0]; skip = 1;
    }
    else if(n % 3 == 2) {
        res += arr[0] + arr[1]; skip = 2;
    } 
    for(int i = 0; i < n / 3; i++) {
        int p = skip + 1 + 3 * i;
        res += arr[p] + arr[p + 1]:
    }
}
// prints the first letter of each word in the line 
void firstchar(string str) {
    cout << str[0];
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') cout << str[i + 1];
    }
}
// Given an integer n, it constructs and prints a special integer sequence
// that “encodes” n using groups of 3s and 3, -2 pairs.
void encode(int n) {
    vector <int> arr;
    for(int i = 0; i < n / 3; i++) arr.push_back(3);
    // For each leftover element (0, 1, or 2), add (3, -2)
    for(int i = 0; i < n % 3; i++) {
        arr.push_back(3); arr.push_back(-2);
    }
    cout << arr.size() << endl;
    for(int x : arr) cout << x << " ";
}
void powertwo(int64_t n, int64_t mx) {
    if(n > 26) {
        cout << mx; return 0;
    }
    int64_t power = 1;
    for (int i = 0; i < n; ++i) power *= 2;
    cout << x % power;
}
