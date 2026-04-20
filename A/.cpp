// finds the shortest contiguous substring of s1 that contains all characters from s2 ("123") at least once
string Minimum_Window(string s, string t) {
    if (s.length() < t.length()) return "-1";
    unordered_map<char, int> required;
    for (char c : t) required[c]++;
    int needed = required.size(); 
    int have = 0;
    
    unordered_map <char, int> window;
    int left = 0, minLen = INT_MAX, minStart = 0;
    for (int right = 0; right < s.length(); right++) {
        window[s[right]]++;
        
        if (required.count(s[right]) && window[s[right]] == required[s[right]]) {
            have++;
        }
        while (have == needed && left <= right) {
            int currLen = right - left + 1;
            if (currLen < minLen) {
                minLen = currLen;
                minStart = left;
            }
            
            window[s[left]]--;
            if (required.count(s[left]) && window[s[left]] < required[s[left]]) {
                have--;
            }
            left++;
        }
    }
    return minLen == INT_MAX ? "-1" : s.substr(minStart, minLen);
}
string Minimum_Window(string s, string t) {
    int freq[256] = {0};
    int required = 0, formed = 0;
    
    for (char c : t) {
        if (freq[(int)c]++ == 0) required++;
    }
    int minLen = INT_MAX, start = 0;
    int left = 0;
    
    for (int right = 0; right < s.length(); right++) {
        if (--freq[(int)s[right]] == 0) formed++;
        // Shrink window while valid
        while (formed == required && left <= right) {
            int currLen = right - left + 1;
            if (currLen < minLen) {
                minLen = currLen;
                start = left;
            }
            if (++freq[(int)s[left++]] == 1) formed--;
        }
    }
    return minLen == INT_MAX ? "-1" : s.substr(start, minLen);
}
string substr(string str) {
    string ing = "123";
    string res = Minimum_Window(str, ing);
    cout << (res == "-1" ? "0" : res);
}
// Maximum sum of exactly K non-overlapping subarrays, each of minimum length M
void maxsum(int n, int m, int k) {
    vector <int> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    vector <int> prefix(n+1);
    for(int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + arr[i];
    vector <vector <int>> dp(k + 1, vector<int> (n+1, 0));
    
    for(int i = 1; i <= k; i++) {
        for(int j = i*m; j <= n; j++) {
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - m] + prefix[j] - prefix[j - m]);
        }
    } cout << dp[k][n] << endl;
}
// range sum queries on two array 
void rangesum(int n) {
    vector <int> suff1(n + 1, 0);
    vector <int> arr(n);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        suff1[i] = suff1[i - 1] + arr[i];
    }
    sort(arr.begin() + 1, arr.begin() + 1 + n);
    vector <int> suff2(n + 1, 0);
    for(long long i = 1; i <= n; i++) {
        suff2[i] = suff2[i - 1] + arr[i]; 
    }
    int m; cin >> m;
    while(m--) {
        int type, l, r; cin >> type >> l >> r;
        cout << (type == 1 ? suff1[r] - suff1[l - 1] : suff2[r] - suff2[l - 1]) << ' ';
    }
}
bool issubseq(int seq, int n) {
    while(seq > 0 && n > 0) {
        if(n % 10 == seq % 10) seq /= 10;
        n /= 10;
    } return seq == 0;
}
// Compute a total penalty based on how many new values appear between 
// the first and second occurrence of each repeated element
int minswap(int *arr, int n) {
    bool vis[n] = {}; int res = 0;
    for(int i = 0; i < n; ++i) {
        if(vis[arr[i]]) continue;
        vis[arr[i]] = true; int cnt = 0;
        for(int j = i + 1; j < 2 * n; j++) {
            if(!vis[arr[j]]) cnt++;
            else if(arr[i] == arr[j]) {
                res += cnt; break;
            }
        }
    } return res;
}
// find if the first half of the string has a repeated block, and if it does,
//it saves k - 1 operations as an optimization or penalty reduction
void findhalf(int n, string str) {
    int opr = n, k = n / 2;
    while(k >= 2) {
        if(str.substr(0, k) == str.substr(k, k)) {
            opr -= (k - 1); break;
        } k--;
    } cout << opr;
}
// For each element (ordered by increasing power), compute a final value res[i] as its own coin plus 
//the sum of the k largest coins from any elements with strictly lower or equal power processed so far.
const int x = 100005;
int power[x], coin[x], res[x];
map <int, int> mp; priority_queue <int> pq;
void computeval(int n, int k) {
    for(int i = 1; i <= n; i++) {
        cin >> power[i]; mp[power[i]] = i;
    }
    for(int i = 1; i <= n; i++) cin >> coin[i];
    sort(power + 1, power + n + 1);
    for (int i = 1; i <= n; i++) {
        int idx = mp[power[i]];
        res[idx] = coin[idx];

        vector <int> temp;
        for (int j = 0; j < k && !pq.empty(); j++) {
            int co = pq.top(); pq.pop();
            res[idx] += co;
            temp.push_back(co);
        }
        for (int x : temp) pq.push(x);
        pq.push(coin[idx]);
    }
    for(int i = 1; i <= n; i++) cout << res[i] << " ";
}
// sorts the input numbers by how “deeply divisible by 3” they are (ascending), 
// and if two numbers have the same depth, it puts the larger one first.
bool comp(const pair <int, long long>& p1, const pair <int, long long>& p2) {
    if (p1.first == p2.first) return p1.second > p2.second;  
    return p1.first < p2.first;       
}
void deeplydiv(int n) {
    vector <pair<int, long long>> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int y_val = 0;
        int tmp = x;
        while (tmp != 0) {
            tmp /= 3; y_val++;
        } v.push_back({y_val, x});
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < n; i++) cout << v[i].second << " ";
}
// find a short arithmetic‑like structures around each element, where the gap is a power of two.
void findarithmetic(vector <long long> x, int n) {
    sort(x.begin(), x.end());
    vector<long long> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 32; j++) {
            long long diff = 1LL << j;         // 2^j
            long long lx = x[i] - diff;
            long long rx = x[i] + diff;

            bool isl = binary_search(x.begin(), x.end(), lx);
            bool isr = binary_search(x.begin(), x.end(), rx);

            if (isl && isr && res.size() < 3) {
                res = {lx, x[i], rx};
            } else if (isl && res.size() < 2) {
                res = {lx, x[i]};
            } else if (isr && res.size() < 2) {
                res = {rx, x[i]};
            }
        }
    }
    if (res.empty()) {
        res.push_back(x[0]);
    }
    cout << res.size() << ' ';
    for (long long val : res) cout << val << ' ';
}
