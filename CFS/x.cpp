using namespace std;
https://codeforces.com/problemset/problem/1/A
// 1A. Theatre Square
int main(){
    unsigned long long n, m, a; cin >> n >> m >> a;
    cout << ceil((double)n / a) * ceil((double)m / a);
    // cout << ceil(0.1 * (n / a)) * ceil(0.1  * (m / a));
    //cout << (n / a + (n % a != 0)) * (m / a + (m % a != 0))
    int r1 = n / a, r2 = m / a;
    if(n % a != 0)    r1++;
    if(m % a != 0)    r2++;
    cout << r1 * r2;
}
https://codeforces.com/problemset/problem/3/A
// 3A.Shortest path of the king
using namespace std;
int main() {
    string init, end; cin >> init >> end;
    // dx counts colums, dy counts rows
    int dx = abs(init[0] - end[0]);
    int dy = abs(init[1] - end[1]);
    cout << max(dx, dy) << endl;
    while(init != end) {
        string move = "";
        if(init[0] < end[0]) {
        	move += 'R'; init[0]++;
            // cout << 'R';
        }
        else if(init[0] > end[0]) {
        	move += 'L'; init[0]--;
            // cout << 'L';
        }
        if(init[1] < end[1]) {
        	move += 'U'; init[1]++;
            // cout << 'U';
        }
        else if(init[1] > end[1]) {
        	move += 'D'; init[1]--;
            // cout << 'D';
        }
        // cout << endl;
        cout << move << endl;
    }
}
https://codeforces.com/problemset/problem/4/B
// 4B. Before an Exam
using namespace std;
int main() {
    int days, totaltime; cin >> days >> totaltime;
    vector <int> mintime(days), maxtime(days);
    for(int i = 0; i < days; i++) cin >> mintime[i] >> maxtime[i];
    int totalmintime = accumulate(mintime.begin(), mintime.end(), 0);
    int totalmaxtime = accumulate(maxtime.begin(), maxtime.end(), 0);
    if(totaltime < totalmintime || totaltime > totalmaxtime) {
        cout << "NO"; return 0;
    }
    cout << "YES" << endl; vector <int> res(days);
    int rem = totaltime - totalmintime;
    for(int i = 0; i < days; i++) {
        int extra = min(rem, maxtime[i] - mintime[i]);
        res[i] = mintime[i] + extra;
        rem -= extra;
    }
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    /* 
    if(totalmintimee <= totaltime && totalmaxtime >= totaltime){
        cout << "YES\n";
        for(int i = 0; i < days; i++){
            int t = min(mintime[i] + totaltime - totalmintime, maxtime[i])
            cout << t << (i + 1 < days) ? ' ' : '\n';
            totaltime -= (t - mintime[i]);
        }
    }
    else    cout << "NO"; */
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
