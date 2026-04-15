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
// Sorts m events chronologically by timestamp for timeline processing.
void sortevents(int m) {
    vector <pair <int, int>> edges(m);
    for(int i = 0; i < m; i++) cin >> edges[i].first >> edges[i].second;
    sort(edges.begin(), edges.end());
    for(auto &e : edges) cout << e.first << " " << e.second << endl;
}
// Counts digits (0-9) in each of n input strings and outputs the count per string
void cntdig(string str) {
    int cnt = 0;
    for(char ch : str) {
        if(isdigit(ch)) cnt++;
    } cout << cnt;
}
// Divides numbers 1→n into groups of size m, computes average contribution per group.
void computeavg(int n, int m) {
    while(cin >> n >> m) {
        vector <int> res; int sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += 2LL * i;
            if(i % m == 0) {
                res.push_back(sum / m); sum = 0;
            }
        }
        if(n % m != 0) {
            int rem = n % m; res.push_back(sum / rem);
        }
        for(size_t i = 0; i < res.size(); i++) cout << res[i] << " ";
    }
}
void removezeros(string &str) {
    /* string a, b;
    while (cin >> a >> b) {
        removezeros(a); removezeros(b);
        cout << (a == b ? "YES" : "NO") << endl;
    } */
    while(!str.empty() && str.back() == '0') str.pop_back();
    if (!str.empty() && str.back() == '.') str.pop_back();
}
// Extracts 5 characters starting at position 6 from input strings and prepends "6".
void extractchar(string str) {
    cout << "6" + str.substr(6, 5);
}
void pattern() {
    char op; int n;
    bool first = true;
    while (cin >> op && op != '@') {
        cin >> n; cin.ignore(); 
        if (!first) cout << endl;
        first = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + n; j++) {
                if (j == n - 1 - i || j == n - 1 + i) cout << op;
                else cout << " ";
            }
            cout << endl;
        }
    }
}
// Converts decimal integer n to base r (2-16) with proper negative sign.
string tobase(int n, int r) {
    bool neg = n < 0;
    if(neg) n = -n;
    string dig = "0123456789ABCDEF", res;
    if(n == 0) res = "0";
    else {
        while(n > 0) {
            res += dig[n % r]; n /= r;
        }
    }
    if(neg) res += '-';
    reverse(res.begin(), res.end()); return res;
}
// hexadecimal addition program 
void hexsum(int a, int b) {
    while(cin >> hex >> a >> b) {
        int sum = a + b;
        cout << uppercase << hex;
        if(sum < 0) cout << "-" << -sum << endl;
        else cout << sum << endl;
    }
}
// Find minimum path length to collect exactly half the grid's total sum using DFS backtracking.
void findminpath(int n, int m) {
    vector <vector<int>> grid(n, vector<int> (m));
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            totalSum += grid[i][j];
        }
    }
    int halfSum = totalSum / 2;
    int minSteps = INT_MAX;
    
    function <void(int, int, int, int)> dfs = [&](int x, int y, int curSum, int steps) {
        if (curSum == halfSum) {
            minSteps = min(minSteps, steps);
            return;
        }
        if (curSum > halfSum) return;
        
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                vector<vector<int>> vis(n, vector<int>(m, 0));
                vis[x][y] = 1;  
                vis[nx][ny] = 1; 
                dfs(nx, ny, curSum + grid[nx][ny], steps + 1);
            }
        }
    };
    dfs(0, 0, grid[0][0], 1);
    cout << (minSteps != INT_MAX ? minSteps : -1) << endl;
    return 0;
}
// Precomputes and answers range queries for how many numbers in [a,b] contain neither digit '4' NOR substring "26".
void luckyrange() {
    vector <int> prefix(1000002, 0);
    prefix[0] = 1;
    for (int i = 1; i <= 1000001; i++) {
        string str = to_string(i);
        bool good = true;
        for (size_t j = 0; j < s.size(); j++) {
            if (str[j] == '4') {
                good = false; break;
            }
            if (j + 1 < str.size() && str[j] == '2' && str[j + 1] == '6') {
                good = false; break;
            }
        }
        prefix[i] = prefix[i - 1] + (good ? 1 : 0);
    }
    int a, b;
    while (cin >> a >> b, a || b) {
        cout << prefix[b] - prefix[a - 1] << endl;
    }
    return 0;
}
// Checks if ing appears as a reverse subsequence in str with strictly decreasing positions (no character reuse).
bool matchrev(const string &str, const string &ing) {
    if(str == ing) return true;
    if(str.size() < ing.size()) return false;
    size_t prvpos = str.rfind(ing.back());
    if(prvpos == string::npos) return false;
    for(int i = ing.size() - 2; i >= 0; --i) {
        size_t pos = str.rfind(ing[i], prvpos);
        if(pos == string::npos || pos >= prvpos) return false;
        prvpos = pos;
    } return true;
}
// Finds elements in array A that are not in forbidden set B, prints them sorted, or "NULL" if none exist.
void findval(int n, int m) {
    while(cin >> n >> m) {
        unordered_set <int> forbidden;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        // forbidden values
        for(int i = 0; i < m; i++) {
            int x; cin >> x; forbidden.insert(x);
        }
        sort(arr.begin(), arr.end());
        bool first = true;
        for(int val : arr) {
            if(!forbidden.count(val)) {
                if(!first) cout << " ";
                cout << val;
                first != first;
            }
        }
        cout << (first ? "NULL" : endl);
    }
}
// Josephus Problem variant - simulates elimination game with variable counting steps
void simulate(int n, int k) {
    queue <int> q;
    for(int i = 1; i <= n; i++) q.push(i);
    while(k--) {
        int x; cin >> x;
        int steps = x % q.size();
        for(int i = 0; i < steps; i++) {
            q.push(q.front()); q.pop();
        }
        cout << q.front() << " "; q.pop();
    }
}
// Compares two strings character by character after converting both to 
// uppercase, using the first differing position to decide order
void cmprstr(string a, string b) {
    for(size_t i = 0; i < a.size(); i++) {
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
        if(a[i] > b[i]) return cout << 1, 0;
        if(a[i] < b[i]) return cout << -1, 0;
    } /*
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout << a.compare(b); */
}
string digsum(string str, int k) {
    while(str.size() > k) {
        string tmp = "";
        for(int i = 0; i < str.size(); i += k) {
            int sum = 0;
            for(int j = 0; j < k && i + j < str.size(); j++) sum += str[i + j] - '0';
            next += to_string(sum);
        }
        str = next;
    } return str;
}
void convertstr(string str) {
    vector <int> res;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= '0' && str[i] <= '9') res.push_back(str[i] - '0');
    }
    sort(res.begin(), res.end()); cout << res[0];
    for(int i = 1; i < res.size(); i++) cout << "+" << res[i];
}
// Converts a string of digits "1", "2", "3" into a mathematical sum expression in ascending digit order.
void buildexpr(string str) {
    int cnt1 = cnt2 = cnt3 = 0;
    for(char ch : str) {
        if(ch == '1') ++cnt1;
        else if(ch == '2') ++cnt2;
        else if(ch == '3') ++cnt3;
    }
    string res;
    int cnt[4] = {0, cnt1, cnt2, cnt3};
    for(int dig = 1; dig <= 3; ++dig) {
        int d = cnt[dig];
        if(d == 0) continue;
        for(int i = 0; i < d; ++i) {
            res += char('0' + dig); res += '+';
        }
    } if(!res.empty()) res.pop_back();
}
