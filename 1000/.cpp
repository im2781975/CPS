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
// extracts the highest place value (power of 10) from each digit position
void cntprocess(int n) {
    vector <int> res;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        while(x > 0) {
            int pos = 1;
            while(pos * x <= 10) pos *= 10;
            res.push_back(pos); x -= pos;
        }
    }
    cout << res << endl;
    for(auto x : res) cout << x << " ";
}
// extracts non-zero place values from a single integer n 
void extractval(int n) {
    vector <int> res; int val = 1;
    while(n > 10) {
        int dig = n % 10;
        if(dig) res.push_back(dig * val);
        n /= 10; val *= 10;
    }
    cout << res.size() << endl;
    for(auto x : res) cout << x << " ";
}
// counts how many times a new maximum or minimum is found in the array
void cnttime(int n, vector <int> arr) {
    int cnt = 0; 
    int maxi = arr[0], mini = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxi){ maxi = arr[i]; ++cnt; }
        if(arr[i] < mini){ mini = arr[i]; ++cnt;}
    }
    cout << cnt;
}
void luckyNumber(int num) {
    int cnt = 0;
    while(num > 0) {
        int dig = num % 10;
        if(dig == 4 || dig == 7) ++cnt;
        num /= 10;
    }
    cout << (cnt == 4 || cnt == 7 ? "YES" : "NO") << endl;
}
// finds the first element that breaks a sequence of three identical consecutive numbers
void findpos(vector <int> arr) {
    for(int i = 0; i < n - 2; i++) {
        if(arr[i] != arr[i + 1] || arr[i + 1] != arr[i + 2]) cout << i + 1 << endl; return 0;
    }
    return 0;
}
// removes all '-' characters by shifting them right
void removechar(string str) {
    int pos = 0;
    for(char ch : str) {
        if(ch == '+') str[pos++] = '+';
    }
    cout << str.substr(0, pos);
    // cout << regex_replace(str, regex("-"), "") << endl;
}
// count of integers ≤ n that are either perfect squares OR perfect cubes
void cntdigits(int n) {
    cout << ((int) cbrt(n)) + ((int) sqrt(n)) - ((int) sqrt(cbrt(n)));
}
// adds two digits from the ends of the string until their sum > 10
void adddigits(string str) {
    int len = str.length();
    for(int i = len - 1, j = len - 2; j >= 0; i--, j--) {
        int sum = (str[i] - '0') + (str[j] - '0');
        if(sum > 10) {
            cout << str.substr(0, j) << (sum - 10) << str.substr(i + 1) << endl; return 0;
        }
    }
    cout << (str[0] - '0') + (str[1] - '0') << str.substr(2) << endl;
}
void sortlowercase(string str) {
    int freq[26] = {0};
    for(char ch : str) freq[ch - 'a']++;
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < freq[i]; j++) cout << (char)('a' + i);
    }
}
// Knapsack with bit-count costs
void knapsack(int n, int k) {
    vector <int> cost(n), val(k);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cost[i] = __builtin_popcount(x);
    }
    for(int i = 0; i < n; i++) cin >> val[i];
    vector <vector <int>> dp(n + 1, vector <int> (k + 1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= k; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j >= cost[i - 1]) 
                dp[i][j] = max(dp[i][j], dp[i - 1][j - cost[i - 1]] + val[i - 1]);
        } 
    }
    cout << dp[n][k] << endl;
}
// sorts items by first value and accumulates second values when first > current m
void sortbyfirst(int n, int m) {
    vector <pair <int, int>> items(n);
    for(int i = 0; i < n; i++) cin >> items[i].first >> items[i].second;
    sort(items.begin(), items.end());
    for(auto &p : items) {
        if(p.first > m) m += p.second;
        cout << m << " ";
    }
}
void isArithmetic(int x, int y, int z) {
    vector <vector <int>> perm {
        {x, y, z}, {x, z, y}, {y, x, z}, 
        {y, z, x}, {z, x, y}, {z, y, x}};
    for(auto &p : perm) {
        // Check if b - a == c - b (common difference)
        int a = p[0], b = p[1], c = p[2];
        if(2 * b == a + c) {
            cout << "Yes"; return 0;
        }
    }
    cout << "No";
    /* if(2 * b == a + c || 2 * a == b + c || 2 * c == a + b) cout << "Yes"
    else cout << "No"; */
}
// Maximum product after optimal pairing
void maxproduct(vector <int> a, vector <int> b) {
    int n = vec.size();
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) swap(a[i], b[i]);
    }
    int maxA = *max_element(a.begin(), a.end());
    int maxB = *max_element(b.begin(), b.end());
    cout << maxA * maxB << endl;
}
// Optimal upgrade allocation for turn-based battle victory
void survive() {
    int hrhealth, hrdmg, emphealth, empdmg, boost, dmgperboost, healthperboost;
    cin >> hrhealth >> hrdmg >> emphealth >> empdmg >> boost >> dmgperboost >> healthperboost;
    for(int curr = 0; curr <= boost; ++curr) {
        int boosthealth = hrhealth + healthperboost * curr;
        int boostdmg = hrdmg + dmgperboost * (boost - curr);
        int roundTokillemp = (emphealth + boostdmg - 1) / boostdmg;
        int roundTosurvive = (boosthealth + empdmg - 1) / empdmg;
        if(roundTokillemp <= roundTosurvive) {
            cout << "Yes"; return;
        }
    }
    cout << "NO";
}
// Counts 0s and 1s in a binary string.
void countbits(string str) {
    int zero = 0, one = 0;
    for(char ch : str) {
        if(ch == '0') zero++; 
        else one++;
    }
    if(zero != one) {
        cout << min(zero, one) << endl;
        return;
    }
    int opt1 = min(zero - (str[0] == '0'), one - (str[0] != '0'));
    int opt2 = min(zero - (str.back() == '0'), one - (str.back() != '0'));
    cout << max(opt1, opt2);
}
// can you make the GCD of the whole array greater than 1
void GCDarr() {
    int l, r, k; cin >> l >> r >> k;
    if(l == r) {
        cout << (l == 1 ? "NO" : "YES"); return;
    }
    int evens = (r / 2) - ((l - 1) / 2);
    cout << (evens <= k ? "YES" : "NO");
}
// Given an integer.change at most one digit in the decimal repr of so that the resulting number is divisible by 7
void DIVseven(int n) {
    if(n % 7 == 0) cout << n << endl;
    else {
        int r = n % 7;
        cout << (r <= n % 10 ? n - r : n + 7 - r)
    }
}
// sells n segments [l, r] with cost c. He wants to maximize the number of distinct integers he gets
void Hello(int n) {
    int minL = 1e9, maxr = -1, best = 1e9;
    for(int i = 0; i < n; i++) {
        int l, r, c; cin >> l >> r >> c;
        minL = min(minL, l); maxr = max(maxr, r);
        if(r - l + 1 == maxr - minl + 1)
            best = min(bext, c);
        int seg = 1e9, leftmin = 1e9, rightmin = 1e9;
        if (l == minL) leftmin = min(leftmin, c);
        if (r == maxr) rightmin = min(rightmin, c);
        if (leftmin < 1e9 && rightmin < 1e9)
            seg = leftmin + rightmin;
        cout << min(best, seg) << " ";
    }
}

