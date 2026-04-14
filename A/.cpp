#include<bits/stdc++.h>
using namespace std;
// calculate a penalty score for "bad" patterns in binary strings 
void penalty(string str) {
    int res = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '0') {
            if(str[i + 1] == '0') res += 2;
            else if (i + 2 < str.size() && str[i + 1] == '1' && str[i + 2] == '0') res += 1;
        }
    } cout << res << endl;
}
int cntunq(string str, int x, int y) {
    int freq[26] = {0}; int unq = 0;
    for(int i = x; i <= y; i++) freq[str[i] - 'a']++;
    for(int i = 0; i < 26; i++) {
        if(freq[i] == 1) unq++;
    } cout << unq;
}
// Find first number exceeding any digit's 2021-use limit
int findnum() {
    int budget[10] = {2021};
    int res = -1;
    for(int i = 1; i <= 100000; i++) {
        int tmp = i;
        while(tmp > 0) {
            int dig = tmp % 10; budget[dig]--;
            if(budget[dig] < 0){ res = i; break;}
            tmp /= 10;
        } if(res != -1) break;
    } cout << res - 1;
}
// computes the shortest path from node 1 to node 2021 in a graph
const int x = 2021;
int dist[x + 1][x + 1];
void minpath() {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x; j++) dist[i][j] = INT_MAX;
    }
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= x; j++)
            if (abs(i - j) <= 21)
                dist[i][j] = dist[j][i] = (1LL * i * j) / __gcd(i, j);
    for (int k = 1; k <= x; k++)
        for (int i = 1; i <= x; i++)
            for (int j = 1; j <= x; j++)
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[j][i] = dist[i][k] + dist[k][j];
    cout << dist[1][2021];
}
// Computes the nth term of sequence: 1, 4, 7, 15, 31,_ _
void nthterm(int n) {
    while(cin >> n) {
        if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << 2 << endl;
        else {
            int res = 1;
            for(int i = 1; i < n; i++) res = res * 2 + 1;
            cout << res;
        }
    }
}
const int x = 20010; int dp[x];
// Spend maximum possible money using unlimited coins
void spendmax(int money, int items) {
    vector <int> cost(items);
    for(int i = 0; i < items; i++) cin >> cost[i];
    for(int i = 0; i < items; i++) {
        int price = cost[i];
        for(int j = money; j >= price; j--) dp[j] = max(dp[j], dp[j - price] + price);
    } cout << money - dp[money];
}
// counting Chinese characters in mixed ASCII/Chinese text.
void cntchar(string str) {
    int nonAscii = 0;
    for(auto ch : str) {
        if ((unsigned char)ch >= 128) nonAscii++;
    } cout << nonAscii / 2;
}
void capitalize(string str) {
    if(!str.empty()) str[0] = toupper(str[0]);
    for (size_t i = 0; i + 1 < s.size(); i++) {
            if (str[i] == ' ') str[i + 1] = toupper(str[i + 1]);
    } cout << str;
}
// Checks if each string is a legal C++ identifier
bool isvalidIdentifier(const string &str) {
    if(str.empty()) return false;
    if(!isalpha(str[0]) && str[0] != '_') return false;
    for (size_t i = 1; i < str.size(); i++) {
        if (!isalnum(str[i]) && str[i] != '_') return false;
    } return true;
}
// Find element with largest absolute value in matrix and output its 1-based position + value
void findmax(int row, int col, vector <vector <int>> grid) {
    int mx = INT_MIN, row = 0, col = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(grid[i][j] > abs(mx)) {
                mx = grid[i][j]; row = i + 1; col = j + 1;
            }
        }
    } cout << mx << " " << row << " " << col << endl;
}
