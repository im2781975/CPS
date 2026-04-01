#include<bits/stdc++.h>
using namespace std;
//Processes q queries on a sorted vector type 1 finds first element ≥ k Or type 2 finds first element > k
void bound(vector <int> vec) {
    sort(vec.begin(), vec.end()); 
    int q; cin >> q;
    while(q--) {
        int type, k; cin >> type >> k;
        auto it = (type == 1) ? lower_bound(vec.begin(), vec.end(), k) : upper_bound(vec.begin(), vec.end(), k);
        if(it == vec.end()) cout << -1 << endl;
        else cout << *it << endl;
    }
}
// prints a merged 3x3 grid using overlay rules
void mergegrid(int a[3][3], int b[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            char c1 = a[i][j], c2 = b[i][j];
            if(c1 == c2) cout << c1 << " ";
            else if(c1 != c2 && c1 == '.') cout << c2 << " ";
            else if(c1!= c2 && c2 == '.') cout << c1 << " ";
            else cout << 'x';
        }
        cout << endl;
    }
}
// Check if all characters in the string are the same
bool isbeautiful(string str) {
    int x = count(str.begin(), str.end(), str[0]);
    if(x == str[0]) return 1;
    return 0;
    // return count(str.begin(), str.end(), str[0]) == (int)str.size();
}
void maxlen(int n) {
    int cnt = 0, maxlen = 0;
    for(int i = 0; i < n; i++) {
        string str; cin >> str;
        if(isbeautiful(str)) {
            ++cnt; maxlen = max(maxlen, (int)str.length());
        }
    }
    cout << (cnt ? maxlen : 0);
}
// Counts how many prefix sums go negative while scanning left-to-right
void cntprefixsum(int *arr, int n) {
    int cnt = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum < 0) { cnt++; sum = 0;}
    }
    cout << cnt;
}
// finds the maximum value of negative prefix sums from paired array elements.
void maxprefixsum(int *arr, int *tmp, int n) {
    int curr = 0, maxi = 0;
    for(int i = 0; i < n; i++) {
        curr -= (arr[i] + tmp[i]);
        if(curr > maxi) maxi = curr;
    }
    cout << maxi;
}
