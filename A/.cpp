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

