https://codeforces.com/problemset/problem/1/A
// 1A. Theatre Square
using namespace std;
using ull = unsigned long long;
int main() {
    ull n, m, a; cin >> n >> m >> a;
    ull res = ceil((double) n / a) * ceil((double) m / a); cout << res;
    // cout << ceil(0.1 * (n / a)) * ceil(0.1 * (m / a));
    // cout << (n / a + (n % a != 0)) * (m / a + (m % a != 0));
}
https://codeforces.com/problemset/problem/3/A
// 3A. Shortest path of the king
using namespace std;
int main() {
    string str, ing; cin >> str >> ing;
    int dx = abs(str[0] - ing[0]); // counts cols
    int dy = abs(str[1] - ing[1]); // counts rows
    cout << max(dx, dy) << endl;
    while(str != ing) {
        string move = "";
        if(str[0] < ing[0]) {
            move += 'R'; str[0]++; // cout << 'R';
        } else if(str[0] > ing[0]) {
            move += 'L'; str[0]--; // cout << 'L';
        } if(str[1] < ing[1]) {
            move += 'U'; str[1]++; // cout << 'U';
        } else if(str[1] > ing[1]) {
            move += 'D'; str[1]--; // cout << 'D';
        } cout << move << endl;
    }
}
https://codeforces.com/problemset/problem/4/B
// 4B. Before an Exam
using namespace std;
int main() {
    int day, fullera; cin >> day >> fullera;
    vector <int> minera(day), maxera(day);
    for(int i = 0; i < day; ++i) cin >> minera[i] >> maxera[i];
    int fullminera = accumulate(minera.begin(), minera.end(), 0);
    int fullmaxera = accumulate(maxera.begin(), maxera.end(), 0);
    /* if(fullminera <= fullera && fullmaxera >= fullera) {
        cout << "YES" << endl;
        for(int i = 0; i < day; ++i) {
            int rem = min(minera[i] + fullera - fullminera, maxera[i]);
            cout << rem;
            if(i + 1 < day) cout << ' ';
            else cout << endl;
            fullera -= (rem - minera[i]);
        }
    } 
    else cout << "NO" << endl; */
    if(fullera < fullminera || fullera > fullmaxera) {
        cout << "NO"; return 0;
    } cout << "YES\n"; vector <int> res(day);
    int rem = fullera - fullminera;
    for(int i = 0; i < day; i++) {
        int extra = min(rem, maxera[i] - minera[i]);
        res[i] = minera[i] + extra; rem -= extra;
    }
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
}
https://codeforces.com/problemset/problem/4/C
// 4C. Registration system
using namespace std;
int main() {
    int t; cin >> t;
    map <string, int> mp;
    while(t--) {
        string str; cin >> str;
        if(!mp[str]) cout << "OK" << endl;
        else cout << str << mp[str] << endl;
        // cout << (mp[str] == 0 ? "OK" : str + to_string(mp[str]))<< endl;
        ++mp[str];
    }
}
https://codeforces.com/problemset/problem/5/A
// 5A. Chat Server's Outgoing Traffic
using namespace std;
int main() {
    string str; int len = 0;
    set <string> user;
    while(getline(cin, str)) {
        if(str[0] == '+') {
    		str[0] = '*'; user.insert(str);
        }
        if(str[0] == '-') {
            str[0] = '*'; user.erase(str);
        }
        else {
            size_t pos = str.find(':');
            if (pos != string::npos) {
                int strlen = str.size() - pos - 1;
                len += strlen * user.size();
            }
        }
    } cout << len;
}
http://codeforces.com/contest/9/problem/A
// 9A. Die Roll
using namespace std;
int main() {
    int y, x; cin >> y >> x;
    int maxi = max(y, x); 
    int q = (6 - maxi) + 1;
    if(q == 1) cout << "1/6" << endl;
    else if(q == 2)	cout << "1/3" << endl;
    else if(q == 3)	cout << "1/2" << endl;
    else if(q == 4) cout << "2/3" << endl;
    else if(q == 5) cout << "5/6" << endl;
    else if(q == 6) cout << "1/1" << endl;
    else if(q == 0) cout << "0/1" << endl; /*
    string arr[] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1", "0/1"};
    cout << arr[maxi] << endl; */
}
https://codeforces.com/problemset/problem/16/A
// 16A. Flag
using namespace std;
int main() {
    int row, col; cin >> row >> col;
    vector <string> vec(row);
    for(int i = 0; i < row; i++) cin >> vec[i];
    bool ok = true;
    for(int i = 0; i < row && ok; i++) {
        for(int j = 1; j < col; j++) {
            if(vec[i][j] != vec[i][0]) {
                ok = false; break;
            }
        }
        if(i > 0 && vec[i][0] == vec[i - 1][0])	ok = false;
    }
    cout << (ok ? "YES" : "NO");
    /* string str, prvcolor = "";
    for(int i = 0; i < row; i++) {
        cin >> str;
        for(int j = 1; j < col; j++) {
            if(str[j] != str[0]) {
                cout << "NO"; return 0;
            }
        }
        if(i > 0 && str == prvcolor) {
                cout << "NO"; return 0;
        } prvcolor = str;
    } cout << "YES"; */
}
https://codeforces.com/problemset/problem/16/B
// 16B. Burglar and Matches
using namespace std;
int main() {
    int m, n; cin >> m >> n;
    vector <pair <int, int>> vec(n);
    /* int x, y; 
    for(int i = 0; i < n; i++) {
        cin >> x >> y; 
        vec.push_back({y, x});
    }
    sort(vec.rbegin(), vec.rend());
    long long cnt = 0, res = 0;
    for(auto &p : vec) {
        int take = min(n - cnt, (long long)p.second);
        res += 1LL * take * p.first;
        cnt += take; 
        if(cnt == m) break;
    } */
    for(int i = 0; i < n; i++) cin >> vec[i].second >> vec[i].first;
    sort(vec.rbegin(), vec.rend());
    long long res = 0;
    for(int i = 0; i < n && m > 0; i++) {
        int take = min(m, vec[i].second);
        res += 1LL * take * vec[i].first;
        m -= take;
    } cout << res << endl;
}
https://codeforces.com/problemset/problem/17/A
// 17A. Noldbach problem
using namespace std;
const int mx = 2000;
vector <bool> isprime(mx + 1, true);
void sieve() {
    isprime[0] = isprime[1] = false;
    for(int i = 2; i * i <= mx; i++) {
        if(isprime[i]) {
            for(int j = i * i; j <= mx; j += i)	isprime[j] = false;
        }
    }
}
vector <int> getsieve(int n) {
    vector <int> primes = {2};
    isprime[0] = isprime[1] = false;
    for(int i = 4; i <= n; i += 2) isprime[i] = false;
    for(int i = 3; i <= n; i += 2) {
        if(isprime[i]) {
            primes.push_back(i);
            for(int j = i * i; j <= n; j += 2 * i) isprime[j] = false;
        }
    } return primes;
}
int main() {
    // sieve();
    int n, k; cin >> n >> k; /*
    vector <int> primes;
    for(int i = 2; i <= n; i++) {
        if(isprime[i]) primes.push_back(i);
    }
    int cnt = 0;
    for(int i = 0; i + 1 < primes.size(); i++) {
        int val = primes[i] + primes[i + 1] + 1;
        if(val <= n && isprime[val]) cnt++;
    } 
    */
    vector <int> primes = getsieve(n);
    unordered_set <int> primeset(primes.begin(), primes.end());
    int cnt = 0;
    for(size_t i = 1; i < primes.size(); i++) {
        int sum = primes[i - 1] + primes[i] + 1;
        if(primeset.count(sum)) cnt++;
    }
    cout << (cnt >= k ? "YES" : "NO");
}
https://codeforces.com/problemset/problem/18/C
// 18C. Stripe
using namespace std;
int main(){
    int n, cnt = 0; cin >> n;
    vector <int> vec(n + 1), prefix(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> vec[i];
        prefix[i] = prefix[i - 1] + vec[i];
    }
    int total = prefix[n];
    for(int i = 1; i < n; i++){
        if(prefix[i] == total - prefix[i])
            cnt++;
    }/*
    for(int i = 0; i < n; i++)    cin >> vec[i];
    partial_sum(vec.begin(), vec.end(), prefix.begin());
    for(int i = 0; i < n - 1; i++){
        if(2 * prefix[i] == prefix[n - 1])    cnt++;
    } */
    cout << cnt;
}
https://codeforces.com/problemset/problem/22/A
// 22A. Second Order Statistics
using namespace std;
int main() {
    int n; cin >> n; /*
    set <int> st; int x;
    for(int i = 0; i < n; i++) {
        cin >> x; st.insert(x);
    }
    if(st.size() <= 1)  cout << "NO" << endl;
    else {
        st.erase(st.begin()); cout << *st.begin();
    } */
    vector <int> vec(n);
    for(auto &x : vec) cin >> x;
    sort(vec.begin(), vec.end());
    for(int i = 1; i < n; i++) {
        if(vec[i] != vec[i - 1]) {
            cout << vec[i]; return 0;
        }
    } cout << "NO";
}
https://codeforces.com/problemset/problem/23/A
// 23A. You're Given a String...
using namespace std;
int main() {
    string str; cin >> str;
    map <string, int> mp;, /*
    for (int i = 0; i < (int)str.size(); i++) {
        for (int j = 1; i + j <= (int)str.size(); j++)
            mp[str.substr(i, j)]++;
    }
    */
    int len = str.size();
    for(int i = 0; i < len; i++) {
        string tmp = "";
        for(int j = i; j < len; j++) {
            tmp += str[j];
            mp[tmp]++;
        }
    } int res = 0;
    for (auto &p : mp) {
        if (p.second >= 2) {
            res = max(res, (int)p.first.size());
        }
    } cout << res;
}
https://codeforces.com/problemset/problem/25/A
// 25A. IQ test
using namespace std;
int main() {
    int n; cin >> n; 
    int arr[n], odd = 0, even = 0;
    // int evenodd[2] = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2) odd++;
        else even++;
        // evenodd[arr[i] % 2]++;
    }
    int parity = (odd > even) ? 0 : 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == parity) {
            cout << i + 1 << endl; break;
        }
    } /*
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == ((evenodd[0] >= evenodd[1]) ? 1 : 0))
            cout << i + 1 << " ";
    } */ /*
    int idxeven = idxodd = -1;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x % 2 == 0) { even++; idxeven = i;}
        else { odd++; idxodd = i; }
    }
    cout << (odd == 1 ? idxodd : idxeven); */
}
https://codeforces.com/problemset/problem/25/B
// 25B. Phone numbers
using namespace std;
int main() {
    int n, i = 0; cin >> n;
    string str; cin >> str; /*
    int first = (n % 3 == 1 ? 2 : 3);
    cout << s.substr(0, first);
    for (int i = first; i < n; i += 3) {
        cout << '-' << s.substr(i, 3);
    } */
    if(n == 2 || n % 3 == 1) {
        cout << str[0] << str[1]; i = 2;
    }
    else {
        cout << str[0] << str[1] << str[2]; i = 3;
    }
    while(i < n) {
        cout << '-';
        if(n - i >= 3) {
            cout << str[i] << str[i + 1] << str[i + 2]; i += 3;
        }
        else {
            cout << str[i] << str[i + 1]; i += 2;
        }
    }
}
https://codeforces.com/problemset/problem/26/A
// 26A. Almost Prime
using namespace std;
int main() {
    int n, res = 0; cin >> n;
    vector <int> cnt(n + 1, 0);
    for(int i = 2; i <= n; ++i) {
        if(cnt[i] == 0) {
            for(int j = i; j <= n; j += i) cnt[j]++;
        }
        if(cnt[i] == 2) res++;
    } cout << res << " ";
}
https://codeforces.com/problemset/problem/27/A
// 27A.Next Test
using namespace std;
int main() {
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int tmp = 1;
    for(int x : vec) {
        if(x == tmp) ++tmp;
        else if(x > tmp) break;
    } cout << tmp << " "; /*
    bool vis[200] = {false};
    while(n--) {
        int x; cin >> x;
        vis[x] = true;
    }
    for(int i = 1;; ++i) {
        if(!vis[i]) {
            cout << i << " "; break;
        }
    } */
}
https://codeforces.com/problemset/problem/29/A
// 29A. Spit Problem
using namespace std;
int main() {
    int n; cin >> n;
    vector <int> x(n), d(n);
    for(int i = 0; i < n; ++i) cin >> x[i] >> d[i];
    bool found = false;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(x[i] + d[i] == x[j] && x[j] + d[j] == x[i]) {
                cout << "YES"; return 0;
            }
        } 
    } cout << "NO";
}
https://codeforces.com/problemset/problem/31/A
// 31A. Worms Evolution
using namespace std;
int main() {
    int n; cin >> n;
    vector <pair <int, int>> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i].first; vec[i].second = i;
    }
    sort(vec.begin(), vec.end());
    for(int k = 0; k < n; k++) {
        int l = 0, r = n - 1;
        while(l < r) {
            if(l == k) {
                l++; continue;
            }
            if(r == k) {
                r--; continue;
            }
            int sum = vec[l].first + vec[r].first;
            if(sum == vec[k].first) {
                cout << vec[k].second  + 1 << " " << vec[l].second + 1 << " " << vec[r].second + 1 << endl;
                return 0;
            }
            else if(sum < vec[k].first) l++;
            else r--;
        }
    } /*
    vector <int> vec(n);
    for(int i = 0; i < n; ++i) cin >> vec[i];
    for(int i = 0; i < n; ++i) {
        unordered_map <int, int> vis;
        for(int j = 0; j < n; ++j) {
            if(i == j) continue;
            int need = vec[i] - vec[j];
            if(vis.find(need) != vis.end()) {
                int k = vis[need];
                cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                return 0;
            } vis[vec[j]] = j;
        }
    } */ cout << "-1" << endl;
}
https://codeforces.com/problemset/problem/32/A
// 32A. Reconnaissance
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector <int> arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int j = 0, cnt = 0; /*
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(arr[j] - arr[i] > k) break;
            cnt++;
        }
    } */
    for(int i = 0; i < n; ++i) {
        while(j < n && arr[j] - arr[i] <= k) ++j;
        cnt += max(0, j - i - 1);
    } cout << cnt * 2;
}
https://codeforces.com/problemset/problem/32/B
// 32B. Borze
using namespace std;
int main() {
    string str; cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '.') cout << '0';
        else {
            cout << (str[i + 1] == '.' ? '1' : '2'); ++i;
        }
    }
}
https://codeforces.com/problemset/problem/34/B
// 34B. Sale
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector <int> prices(n);
    for(int i = 0; i < n; i++) cin >> prices[i];
    sort(prices.begin(), prices.end());
    int total = 0;
    for(int i = 0; i < m && prices[i] < 0; i++) total -= prices[i];
    cout << total;
}
https://codeforces.com/problemset/problem/40/A
// 40A. Find Color
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    int neg = (a < 0) + (b < 0);
    int tmp = a * a + b * b;
    int dis = sqrt(tmp);
    if(dis * dis == tmp) cout << "black";
    else {
        bool res = (neg == 1) ? (dis % 2) : (dis % 2 == 0);
        cout << (res ? "black" : "white");
    } /*
    double x, y; cin >> x >> y;
    double tmp = sqrt(x * x + y * y);
    int res = (int)tmp;
    if(res == tmp || x == 0 || y == 0) return true;
    return ((x * y > 0) == (res % 2 == 0)); */
}
https://codeforces.com/problemset/problem/84/A
// 84A. Toy Army
using namespace std;
int main() {
    int n; cin >> n;
    // cout << n + n / 2;
    // cout << (2 * n) - (n / 2);
    cout << 3 * n / 2;
}
https://codeforces.com/problemset/problem/339/A
// 339A. Helpful Maths
using namespace std;
int main() {
    string str; cin >> str;
    sort(str.begin(), str.end()); /*
    int mid = (str.size() - 1) / 2;
    for(int i = mid; i < (int)str.size(); i++) {
        if(i > mid) cout << '+';
        cout << str[i];
    } */
    string res = "";
    for(char ch : str) {
        if(ch == '+') continue;
        if(!res.empty()) res += '+';
        res += ch;
    } cout << res;
}
https://codeforces.com/problemset/problem/433/A
// 433A. Kitahara Haruki's Gift
using namespace std;
int main() {
    int n; cin >> n;
    int one = 0, two = 0;
    for(int i = 0; i < n; i++) {
        int w; cin >> w;
        if(w == 100) one++;
        else if(w == 200) two++;
    }
    if (one % 2 == 1 || (two % 2 == 1 && one == 0)) cout << "NO" << endl;
    else cout << "YES" << endl;  
}
https://codeforces.com/problemset/problem/459/A
// 459A. Pashmak and Garden
using namespace std;
int main() {
    int x1, x2, y1, y2; /*
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2 - x1, dy = y2 - y1;
    // The two possible third/fourth corners
    int x3 = x1 + dy, y3 = y1 - dx;
    int x4 = x2 + dy, y4 = y2 - dx;

    if (x3 == x4 && y3 == y4) cout << -1 << endl;
    else 
        cout << x3 << ' ' << y3 << ' '
             << x4 << ' ' << y4 << endl; */
    if(cin >> x1 >> y1 >> x2 >> y2) {
        int dx = abs(x1 - x2), dy = abs(y1 - y2);
        if (x1 == x2) {
            int d = dy;
            cout << x1 + d << " " << y1 << " " << x2 + d << " " << y2 << endl;
        } else if (y1 == y2) {
            int d = dx;
            cout << x1 << " " << y1 + d << " " << x2 << " " << y2 + d << endl;
        } else if (dx == dy)
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        else cout << -1 << endl;
    }
}
https://codeforces.com/problemset/problem/552/B
// 552B. Vanya and Books
using namespace std;
using ll = long long;
int main() {
    ll n, digits = 0; cin >> n;
    for(ll i = 9; n > 0; i *= 10) {
        digits += n; n -= i;
    } cout << digits << endl;
    /* ll n; cin >> n;
    ll sum = 0, digits = 1, cnt = 9;
    while (n >= cnt) {
        sum += cnt * digits; n -= cnt;
        digits++; cnt *= 10;
    }
    sum += n * digits;
    cout << sum << ''; */
}
https://codeforces.com/problemset/problem/554/B
// 554B. Ohana Cleans Up
using namespace std;
int main() {
    int n; cin >> n;
    /* if (cin >> n) {
        map<string, int> row_counts;
        int max_clean_rows = 0;
        for (int i = 0; i < n; ++i) {
            string row; cin >> row;
            row_counts[row]++;
            max_clean_rows = max(max_clean_rows, row_counts[row]);
        }
        cout << max_clean_rows << "\n";
    } */
    map <string, int> mp;
    for(int i = 0; i < n; ++i) {
        string str; cin >> str;
        ++mp[str];
    }
    int ma = 0;
    for (const auto& [s, c] : mp)
        ma = max(ma, c);
    cout << ma;
}
https://codeforces.com/problemset/problem/574/A?mobile=false
// 574A. Bear and Elections
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int bribes = 0;
    while (true) {
        int rivalidx = 1;
        for (int i = 2; i < n; i++) {
            if (a[i] >= a[rivalidx]) rivalidx = i;
        }
        if (a[0] > a[rivalidx]) break;
        a[0]++; a[rivalidx]--; bribes++;
    }
    cout << bribes << endl;
    /*
    int n, a;
    cin >> n >> a;

    int start = a;
    vector<int> cnt(1001, 0);

    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1000; i >= a; --i) {
        if (cnt[i] == 0) continue;
        if (a + cnt[i] <= i) {
            cnt[i - 1] += cnt[i];
            a += cnt[i];
        } else {
            a = i + 1;
        }
    }
    cout << a - start << '
';
    */ /*
    int n, a;
    cin >> n >> a;

    priority_queue<int> pq;

    for (int i = 1; i < n; ++i) {
        int votes;
        cin >> votes;
        pq.push(votes);
    }

    int answer = 0;

    while (!pq.empty() && pq.top() >= a) {
        int votes = pq.top();
        pq.pop();

        --votes;  // Opponent loses one vote
        ++a;      // Limak gains one vote
        ++answer;

        pq.push(votes);
    }

    cout << answer << '
'; */
}
https://codeforces.com/problemset/problem/602/A
// 602A. Two Bases
using namespace std;
using ll = long long;
ll convert(int n, int x) {
    ll val = 0;
    for(int i = 0; i < n; ++i) {
        ll dig; cin >> dig;
        val = val * x + dig;
    } return val;
}
int main() {
    int n, x; cin >> n >> x;
    ll res1 = convert(n, x);
    int m, y; cin >> m >> y;
    ll res2 = convert(m, y);

    cout << (res1 < res2 ? "<" : res1 > res2 ? ">" : "=") << '';
}
https://codeforces.com/problemset/problem/633/A
// 633A. Ebony and Ivory
using namespace std;
using ll = long long;
int main() {
    ll a, b, c; cin >> a >> b >> c;
    if(a > b) swap(a, b);
    bool ok = false;
    for(ll i = 0; i * a <= c; ++i) {
        if((c - a * i) % b == 0) {
            ok = true; break;
        }
    } cout << (ok ? "Yes" : "No");
}
https://codeforces.com/problemset/problem/705/B
// 705B. Spider Man
using namespace std;
int main() {
    int n; cin >> n; /*
    if (cin >> n) {
        long long temp = 0;
        for (int i = 0; i < n; i++) {
            long long a; cin >> a;
            temp = (temp + a - 1) % 2;
            if (temp != 0) cout << 1 << "\n";
            else cout << 2 << "\n";
        }
    } */
    int parity = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        parity ^= (x - 1) & 1;
        cout << (parity ? 1 : 2) << endl;
    }
}
https://codeforces.com/problemset/problem/708/A
// 708A. Letters Cyclic Shift
using namespace std;
int main() {
    string str; cin >> str;
    int i = 0;
    while(i < str.length() && str[i] == 'a') i++;
    if(i == str.length()) str[i - 1] = 'z';
    while(i < str.length() && str[i] != 'a') {
        str[i]--; i++;
    } /*
    bool changed = false;
    for(char &ch : str) {
        if(ch == 'a') {
            if(changed) break;
        }
        else {
            ch--; changed = true;
        }
    } if(!changed) str.back() = 'z'; */
    cout << str;
}
https://codeforces.com/problemset/problem/982/A
// 982A. Row
using namespace std;
int main() {
    int n; cin >> n;
    string str; cin >> str;
    str = "0" + str + "0"; /*
    bool ok = str.find("000") == string::npos &&
    	str.find("11") == string::npos;
    cout << (ok ? "Yes" : "No"); */
    bool flg = false;
    for (int i = 1; i <= n; ++i) {
        if (str[i] == '0' && str[i - 1] == '0' && str[i + 1] == '0') {
            flg = false; break;
        }
        if (str[i] == '1' && (str[i - 1] == '1' || str[i + 1] == '1')) {
            flg = false; break;
        }
    }
    cout << flg ? " Yes" : "No";
}
https://codeforces.com/problemset/problem/990/A
// 990A. Commentary Boxes
using namespace std;
int main() {
    long long n, m, a, b; cin >> n >> m >> a >> b;
    long long removecost = (n % m) * b;
    long long addcost = (m - (n % m)) * a;
    cout << min(removecost, addcost) << endl;
}
https://codeforces.com/problemset/problem/1100/A
// 1100A. Roman and Browser
using namespace std;
int main() {
    int n, k; cin >> n >> k; /*
    int browser[201];
    for(int i = 1; i <= n; i++) cin >> browser[i];
    int maxd = -1;
    for(int i = 0; i < k; i++) {
        int diff = 0;
        for(int j = 1; j <= n; j++) {
            if(j % k != i) diff += browser[j];
        }
        maxd = max(maxd, abs(diff));
    } cout << maxd << endl; */
    vector <int> vec(n);
    for(int &x : vec) cin >> x;
    vector <int> rem(k, 0); 
    int total = 0, res = 0;
    for(int i = 0; i < n; i++) {
        rem[i % k] += vec[i];
        total += vec[i];
    }
    for(int i = 0; i < k; i++) res = max(res, abs(total - rem[i]));
    cout << res << " ";
}
https://codeforces.com/problemset/problem/1117/B
// 1117B. Emotes
using namespace std;
using lli = long long;
int main() {
    int n, m, k; cin >> n >> m >> k;
    vector <lli> vec(n); 
    for(lli &x : vec) cin >> x; /*
    lli ein = 0, duo = 0;
    for(lli x : vec) {
        if(x > ein) {
            duo = ein; ein = x;
        }
        else if (x > duo) duo = x;
    }
    lli full = m / (k + 1);
    lli extra = m % (k + 1);

    lli ans = full * (first * k + second) + extra * first;
    cout << ans << ' '; */
    
    sort(vec.rbegin(), vec.rend());
    lli full = m / (k + 1);
    lli rem  = m % (k + 1);
    lli happ = full * (1LL * k * vec[0] + vec[1]) + rem * vec[0];
    cout << happ << ' ';
}
https://codeforces.com/problemset/problem/1243/A
// 1243A. Maximum Square
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> vec(n);
        for(int &x : vec) cin >> x;
        sort(vec.rbegin(), vec.rend());
        int res = 1;
        for(int i = 0; i < n; i++) {
            if(i + 1 <= vec[i]) res = i + 1;
            // res = max(res, min(vec[i], n - i));
        }
        cout << res << endl;
    } /*
    vector <int> freq(1001, 0);
    for(int i = 0; i < t; i++) {
        int x; cin >> x; freq[x]++;
    }
    int cnt = 0;
    for(int i = 1000; i >= 1; i--) {
        cnt += freq[i];
        if(cnt >= i) {
            cout << i << ' '; return;
        }
    } */
}
https://codeforces.com/contest/1245/problem/A
// 1245A. Good ol' Numbers Coloring
using namespace std;
int main() {
    int t; cin >> t; 
    while(t--) {
        int x, y; cin >> x >> y;
    	if(gcd(x, y) == 1) cout << "Finite" << endl;
    	else cout << "Infinite" << endl;
    }
}
https://codeforces.com/problemset/problem/1255/A
// 1255A. Changing Volume
using namespace std;
using ll = long long;
int main() {
    int t; cin >> t;
    while(t--) {
		ll a, b; cin >> a >> b;
        ll k = abs(a - b); /*
        ll cnt = diff / 5 + (diff % 5 > 0) + (diff % 5 > 2);
        cout << cnt << " "; */
        cout << k / 5 + (k % 5) / 2 + k % 5 % 2 << ' ';
    }
}
https://codeforces.com/problemset/problem/1257/A
// 1257A. Two Rival Students
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, x, a, b; cin >> n >> x >> a >> b;
        cout << min(n - 1, abs(a - b) + x) << endl;
    }
}
https://codeforces.com/problemset/problem/1257/B?mobile=false
// 1257B. Magic Stick
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        if (x == 1 && y > 1 || x <= 3 && y > 3) cout << "No" << endl;
    	else cout << "yes" << endl; /*
        if(x >= y) cout << "Yes" << endl;
        else {
            if((x <= 3 && y > 3) || x == 1) cout << "No" << endl;
            else cout << "Yes" << endl;
        } *//*
        set <int> vis;
        while(x < y && !vis.count(x)) {
            vis.insert(x); x = (x / 2) * 3;
        }
        cout << (x >= y ? "Yes" : "No"); */
    }
}
void a902() {
    int n, m;
    cin >> n >> m;
    int b = 0, e = 0, t1, t2;
    for (int i = 0; i < n; ++i) {
        cin >> t1 >> t2;
        if (t1 <= e && t2 > e)
            e = t2;
    }
    if (e >= m)
        cout << "YES";
    else 
        cout << "NO";
}

void b911() {
    int n, a, b;
    cin >> n >> a >> b;
    int mi = 0;
    for (int i = 1; i < n; ++i) {
        int temp = min(a / i, b / (n - i));
        mi = max(mi, temp);
    }
    cout << mi;
}

long long buffer[500005] = {0};
long long buf2[500005] = {0};

void b432() {
    int n;
    cin >> n;
    // cout << n << endl;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp >> buf2[i];
        buffer[temp]++;
    }
    for (int i = 0; i < n; ++i) {
        cout << n - 1 + buffer[buf2[i]] << " " << n - 1 - buffer[buf2[i]] << endl;
    }
}

void b592() {
    long long n;
    cin >> n;
    n -= 2;
    cout << n * n;
}

void b362() {
    int n, m;
    cin >> n >> m;
    int buf[3000] = {0};
    for (int i = 0; i < m; ++i)
        cin >> buf[i];
    sort(buf, buf + m);
    if (buf[0] == 1 || buf[m - 1] == n)
        cout << "NO";
    else {
        bool b = false;
        for (int i = 0; i < m - 2; ++i) 
            if (buf[i] + 1 == buf[i + 1] && buf[i] + 2 == buf[i + 2]) {
                b = true;
                break;
            }
        if (b)
            cout << "NO";
        else 
            cout << "YES";
    }
}

void b734() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int mi;
    mi = min(k2, k5);
    mi = min(mi, k6);
    long long sum = 0;
    sum += mi * 256L;
    k2 -= mi;
    mi = min(k2, k3);
    sum += mi * 32;
    cout << sum;
}

void c977() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    sort(buffer, buffer + n);
    int sum = 0;
    if (k == n)
         cout << buffer[n - 1];
    else if (buffer[k - 1] == buffer[k])
        cout << -1;
    else if (k == 0) {
        if (buffer[0] > 1)
            cout << 1;
        else 
            cout << -1;
    } else
        cout << buffer[k - 1];
}

void a1263() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] >= a[2])
        cout << (a[0] + a[1] + a[2]) / 2;
    else 
        cout << a[1] + a[0];
    cout << endl;
}

void a799() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int num = (n + k - 1) / k;
    num--;
    if (num * t > d)
        cout << "YES";
    else 
        cout << "NO";
}

void b998() {
    int n, b;
    cin >> n >> b;
    int a[1000] = {0};
    int on = 0, en = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0)
            en++;
        else 
            on++;
        if (en == on && i < n - 1)
            v.push_back(abs(a[i + 1] - a[i]));
    }
    if (en != on || v.size() == 0)
        cout << 0;
    else {
        sort(v.begin(), v.end());
        int sum = 0;
        int i = 0;

        while(sum + v[i] <= b && i < v.size()) {
            sum += v[i];
            i++;
        }
        cout << i;
    }
}

void c903() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    sort(buffer, buffer + n);
    int ma = 0;
    int i = 0;
    while(i < n) {
        int num = 1;
        while(i < n - 1 && buffer[i] == buffer[i + 1]) {
            i++;
            num++;
        }
        if (num > ma)
            ma = num;
        i++;
    }
    cout << ma;
}

void b365() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    for (int i = 2; i < n; ++i)
        if (buffer[i] == buffer[i - 1] + buffer[i - 2])
            buf2[i] = 1;
    int ma = 0;
    int i = 2;
    while(i < n) {
        int num = 0;
        while (i < n && buf2[i] == 1) {
            i++;
            num++;
        }
        if (num > ma)
            ma = num;
        i++;
    }
    if (n == 1)
        cout << 1;
    else 
        cout << ma + 2;
}

void b1011() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << 0;
        return;
    }
    if (n == m || m / n == 1) {
        cout << 1;
        return;
    }
    int a[105] = {0};
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    sort(a, a + 101);
    int ma = m / n;
    ma = min(ma, a[100]);
    if (ma == 1)
        cout << 1;
    else {
        for(int i = ma; i > 1; --i) {
            int sum = 0;
            for (int j = 100; a[j] >= i; --j)
                sum += a[j] / i;
            if (sum >= n) {
                cout << i;
                return;
            }
        }
        cout << 1;
    }
}
int bs(int v, int begin, int end) {
    if (begin >= end)
        return end;
    int half = (begin + end) / 2;
    if (v > buffer[half])
        return bs(v, half + 1, end);
    else if (v == buffer[half])
        return half;
    else 
        return bs(v, begin, half);
}
void b474() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> buffer[i];
        buffer[i] += buffer[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        cout << bs(temp, 1, n) << endl;
    }
}
