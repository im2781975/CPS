#include<bits/stdc++.h>
using namespace std;
void present(int n) {
    vector <int> freq(n + 1);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x >= 1 && x <= n) freq[x - 1] = i + 1;
    }
    for(int i = 0; i < freq.size(); i++) cout << freq[i] << " ";
}
void newpassword(int n, int k) {
    // n -> total len, k -> cycle len
    char str[26] = {};
    for(int i = 0; i < 26; i++) str[i] = 'a' + i;
    string str = "abcdefghijklmnopqrstuvwxyz";
    /*for(int i = 97; i <= 122; i++) str[i - 97] = i; */
    for(int i = 0; i < n / k; i++) {
        for(int j = 0; j < k; j++) cout << str[j] << " ";
        cout << endl;
    } // remaining char
    for(int i = 0; i < n % k; i++) cout << str[i] << " ";
}
// given a flag of length n colored with three colors: 'W', 'B', 'R' Determine if the flag is validly colored.
void check(int n, string str) {
    if(n == 1) {
        cout << (str == "W" ? "Yes" : "NO"); return;
    }
    if(n == 2) {
        cout << (str == "WW" || str == "RB" || str == "BR" ? "Yes" : "NO"); return;
    }
    bool valid = true; int i = 0;
    while(i < n) {
        while(i < n && str[i] == 'W') i++;
        if(i == n) break;
        int blue = red = 0;
        while(i < n && str[i] != 'W')
            (str[i++] == 'B' ? blue : red)++;
        if(blue == 0 || red == 0) {
            valid = false; break;
        }
    }
    cout << (valid ? "YES" : "NO");
}
//determine if a string composed of the characters 'R', 'B', and 'W' satisfies 
// specific adjacency rules for the characters 'R' and 'B'
void issatisfied(string str) {
    int n = str.size();
    for(int i = 0; i < n; i++) {
        if(str[i] == 'R' || str[i] == 'B') {
            bool validadj = (i > 0 && str[i - 1] != 'W') || (i < n - 1 && str[i + 1] != 'W');
            if(!validadj) {
                cout << "NO"; return;
            }
            if(i > 0 && str[i - 1] == 'W' && (i == n - 1 || str[i + 1] != 'B')) {
                cout << "No"; return;
            }
            if(i < n - 1 && str[i + 1] == 'W' && (i == 0 || str[i - 1] != 'B')) {
                cout << "NO"; return;
            }
        }
    }
    cout << "YES";
}
// Finds the next year > input where all 4 digits are unique.
bool hasunqyear(int year) {
    /* int y; cin >> y;
    while (!hasunqyear(++y)); cout << y; */
    int dig[10] = {0};
    while(year > 10) {
        int num = year % 10;
        if(dig[num] > 0) return false;
        dig[num]++; year /= 10;
    }
    return true;
}
void cntchar(string str) {
    int upper = 0, lower = 0, dig = 0, special = 0;
    for(char ch : str) {
        if(isupper(ch)) upper++;
        else if(islower(ch)) lower++;
        else if(isdigit(ch)) dig++;
        else special++;
    }
    if(upper > lower) transform(str.begin(), str.end(), str.begin(), ::toupper);
    else transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << " " << upper << " " << lower << " " << dig << " " << special << endl;
}
// calculates the total steps needed to reach query elements from both ends of an array
void cntsteps(int n, int m) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int forward = 0, backward = 0;
    for(int i = 0; i < m; i++) {
        int trg; cin >> trg;
        auto it = find(arr.begin(), arr.end(), trg);
        if(it != arr.end()) {
            int idx = it - arr.begin();
            forward += idx + 1;
            backward += n - idx;
        }
    }
    cout << forward << " " << backward << endl;
}
