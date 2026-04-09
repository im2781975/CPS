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
