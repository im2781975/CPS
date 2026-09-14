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
#include<bits/stdc++.h>
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
