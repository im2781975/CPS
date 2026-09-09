// 23A
void solve() {
    string s;
    cin >> s;

    map<string, int> cnt;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        string cur;
        for (int j = i; j < n; j++) {
            cur += s[j];
            cnt[cur]++;
        }
    }

    int ans = 0;
    for (auto &p : cnt) {
        if (p.second >= 2) {
            ans = max(ans, (int)p.first.size());
        }
    }

    cout << ans << '
';
}
void solve() {
    string s;
    cin >> s;

    map<string, int> mp;
    for (int i = 0; i < (int)s.size(); i++) {
        for (int len = 1; i + len <= (int)s.size(); len++) {
            mp[s.substr(i, len)]++;
        }
    }

    int ans = 0;
    for (auto &p : mp) {
        if (p.second > 1) ans = max(ans, (int)p.first.size());
    }

    cout << ans << '
';
}
