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
void digsubtract() {
    string str, ing; cin >> str >> ing;
    reverse(str.begin(), str.end());
    reverse(ing.begin(), ing.end());
    int n = str.length(), m = ing.length();
    string res;
    for(int i = 0, j = 0; i < n; i++, j++) {
        if(j < m - 1 && ing[j] < '9' && ing[j + 1] == '0') {
            int ans = 10 - (str[i] - '0') + (ing[j] - '0');
            res += (ans > 9) ? "01" : string(1, '0' + ans);
            j++;
        }
        else {
            int a = ing[j] - '0', b = str[i] - '0';
            int diff = a - b;
            if(diff < 0) {
                diff += 10;
                if(j + 1 < m) ing[j + 1]--;
            }
            res += '0' + diff;
        }
    }
    reverse(res.begin(), res.end());
    for(char ch : res) {
        if(ch < '0' || ch > '9') {
            cout << -1; return;
        }
    }
    // Remove leading zeros
    size_t i = 0;
    while(i < res.size() && res[i] == '0') i++;
    if(i == res.size()) cout << '0';
    else cout << str.substr(i);
}
// creates an n×n grid with exactly k rooks ('R') placed on the main diagonal, but only on even-numbered rows.
void placerooks(int n, int k) {
    if(k > (n + 1) / 2) {
        cout << -1; return;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j)
            cout << (i % 2 == 0 && j == i && k-- > 0 ? 'R' : '.');
    }
}
// Maximum number of elements with distinct abs values can select from the array.
void GoodBye(int n) {
    vector <int> vec(101);
    for(int i = 0; i < n; i++) {
        int x; cin >> x; vec[abs(x)]++;
    }
    int cnt = 0;
    for(int i = 0; i <= 100; i++)
        cnt += min(vec[i], i == 0 ? 1 : 2);
    cout << cnt;
}
// Divide numbers 1 to (n×k) into n groups of exactly k numbers each, such that every group has an even sum.
void Dividegrp(int n, int k) {
    if(k == 1) {
        cout << "YES";
        for(int i = 1; i <= n; ++i)
            cout << i << " ";
        return;
    }
    if((n * k) % 2 || n % k) {
        cout << "No"; return;
    }
    cout << "Yes";
    for(int grp = 1; grp <= n; grp++) {
        for(int i = 0; i < k; i++) {
            int num = (grp - 1) * k + i + 1;
            cout << (num % 2 == 0 ? num * 2 : num) << " ";
        }
        cout << " ";
    }
}
// Balanced bracket assignment
void Balbracket() {
    int t; cin >> t; string res; 
    map <int, int> cntL, cntR;
    for(int test = 0; test < t; ++test) {
        int n; cin >> n;
        int posL = posR = 0;
        string moves;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            if(cntL[a] < cntR[a] || posL == n / 2) {
                cntL[a]++; posL++;
                moves += 'L';
            }
            else {
                cntR[a]++; posR++;
                moves += 'R';
            }
        }
        res += moves + ' ';
    }
    for(auto& p : cntL) {
        if(cntR[p.first] != p.second) {
            cout << "NO"; return;
        }
    }
}
void isAlike(string str, string ing) {
    bool flag = true;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 97) str[i] -= 32;
        if(ing[i] >= 97) ing[i] -= 32;
        if(str[i] != ing[i]) {
            flag = false; break;
        }
    }
    cout << (flag) ? "YES" : "NO";
}
void findmin(string str) {
    int b = count(str.begin(), str.end(), 'b');
    int n = count(str.begin(), str.end(), 'n');
    int o = count(str.begin(), str.end(), 'o'); /*
    for (char c : str) {
        if (islower(c)) freq[c - 'a']++;
    }
    int b = freq['b' - 'a'], o = freq['o' - 'a'], n = freq['n' - 'a']; */
    if(b < 2 || n < 2 || o < 2) cout << 0;
    else cout << min({b, o, n}) - 1;
}
void Bubble(vector <pair <int, int>> &arr) { /*
    vector <pair <int, int>> data = {{3, 2}, {1, 4}, {4, 1}, {2, 3}};
    Bubble(data, 4); */
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j].first > arr[j + 1].first) swap(arr[j], arr[j + 1]);
        }
    }
}
void Quicksort(int *arr, int left, int right) {
    if(left >= right) return;
    int piv = arr[left];
    int i = left, j = right;
    while(i <= j) {
        while(arr[i] < piv) i++;
        while(arr[j] > piv) j--;
        if(i <= j) swap(arr[i++], arr[j--]);
    }
    Quicksort(arr, left, j);
    Quicksort(arr, i, right);
}
//How much we can divide a rod into a equal part
void cntparts(int n) {
    if(n == 1) cout << "0 1";
    else {
        int d = 2, parts = n / 2;
        for(int x : {3, 5, 7}) {
            if(n % x == 0 && n / x > parts)
                parts = n / x, d = x;
        }
        cout << parts << " " << n - parts << endl;
    }
}
// Checks if three numbers arr[0], arr[1], arr[2] can form a right-angled triangle with arr[2] as hypotenuse.
void IsrightAngled(int *arr) {
    (arr[0] == arr[1] == arr[2] - 1 && arr[0] + arr[1] > arr[2]) cout << "Yes" : cout << "No"; /*
    int a, b, c; cin >> a >> b >> c;
    cout << (a == b && a == c - 1 && 2*a > c ? "Yes" : "No") << " "; */
}
// Counts dots in pentagonal pattern
void cntdots(int x) {
    cout << (x * x * (x * x + 1)) / 2 << " ";
}
// generates all combinations of 5 indices (0,1,2,3,4) where consecutive indices 
// differ by at most 1, then finds the maximum sum of arr[][]
const int x = 5;
void findsum() {
    int arr[x][x];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; i++) arr[i][j] = i + j;
    }
    int maxi = INT_MIN, cnt = 0;
    for(int i = 0; i <= 1; i++) 
    for(int j = i; j <= 2; j++)
    for(int k = j; k <= 3; k++)
    for(int l = k; l <= 4; l++) {
        int sum = arr[0][0] + arr[1][i] + arr[2][j] + arr[3][k] + arr[4][l];
        if(sum > maxi) maxi = sum;
        cnt++;
    }
    cout << maxi << " " << cnt << endl;
}
// count how many numbers within range [a,b]do not contain the digit '4' & '26'
void cntrange() {
    const int x = 1e5;
    vector <int> prefix(x + 1, 0);
    for(int i = 1; i <= x; i++) {
        int tmp = i, valid = 1;
        while(tmp) {
            int d = tmp % 10;
            if (d == 4 || (d == 2 && (tmp / 10) % 10 == 6)) {
                valid = 0; break;
            }
            tmp /= 10;
        }
        prefix[i] = prefix[i - 1] + valid;
    }
    int a, b;
    while (cin >> a >> b, a || b) {
        if (a > b) swap(a, b);
        cout << prefix[b] - prefix[a - 1] << " ";
} 
//convert the string in (int, char) pair
vector <pair <int, char>> process(string str) {
    vector <pair <int, char>> res;
    int pos = 0;
    while(pos < str.length()) {
        int len = 0, start = pos;
        while(pos < str.length() && isdigit(str[pos])) {
            len = len * 10 + (str[pos] - '0'); pos++;
        }
        if(start == pos) len = 1;
        if(pos < str.length()) res.push_back({len, str[pos]}), pos++;
    }
    return res;
}
// find the minimal unused capacity of a knapsack of size cap given n items of various sizes. 
void knapsack(int n, int cap) {
    vector <int> arr(cap + 1, 0);
    for(int i = 0; i < n; i++) {
        int sz; cin >> sz;
        for(int j = sz; j <= cap; j++) 
            arr[j] = max(arr[j - sz] + sz, arr[j]);
    }
    cout << cap - arr[cap];
}
const int x = 10010;
int wt[x], item[x], dp[x][x];
void knapsack(int n, int W) {
    for(int i = 1; i <= n; i++) cin >> wt[i] >> item[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < W; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j >= wt[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + item[i]);
        }
    }
    cout << dp[n][W];
}
void pascaltriangle(int n) { /*
    vector <int> prv = {1}; cout << "1 ";
    for(int i = 1; i < n; i++) {
        vector <int> curr(i + 1);
        curr[0] = curr[i] = 1;
        for(int j = 1; j < i; j++)
            curr[j] = prv[j - 1] + prv[j];
        prv = curr;
        for(x : curr) cout << x << " ";
    } */
    vector <vector <int>> arr(n, vector <int> (n, 0));
    arr[0][0] = 1;
    for(int i = 1; i < n; i++) {
        arr[i][0] = 1; arr[i][i] = 1;
        for(int j = 1; j < i; j++)
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
}
// finds the length of the longest non-decreasing subsequence (LNS)
int longestIncreasing(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxlen = 1, currlen = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) {
            currlen++; maxlen = max(currlen, maxlen);
        }
        else currlen = 1;
    }
    return n - maxlen;
}
// Finds sum of "middle" subarray after making exactly 5 two-pointer adjustments.
void subarrsum(int n) {
    vector <int> arr(n + 1);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int left = 1, right = n, moves = 5;
    while(moves > 0 && left < right) {
        int leftsum = arr[left] + arr[left - 1];
        if(leftsum < arr[right]) left += 2;
        else if(leftsum > arr[right]) right--;
        else {
            left += 2; right--; 
            moves -= 2; continue;
        } moves--;
    } 
    int sum = 0;
    for(int i = max(left - 1, 1); i <= right; i++) sum += arr[i];
    cout << sum << endl;
}
// finds the longest subarray where adjacent elements have the SAME absolute difference.
void subarrlen(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int maxlen = 1, cnt = 1;
    for(int i = 1; i < n; i++) {
        int curr = abs(arr[i] - arr[i - 1]);
        if(i == 1 || curr == abs(arr[i - 1] - arr[i - 2])) {
            cnt++; maxlen = max(maxlen, cnt);
        }
        else cnt = 2;
    }
    cout << maxlen;
}
// Counts how many times a "first value" from one pair matches a "second value" from a different pair.
void matchpair(int n) {
    vector <pair <int, int>> pairs(n);
    for(auto &p : pairs) cin >> p.first >> p.second;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && pairs[i].first != pairs[i].second) cnt++;
        }
    } /*
    vector <int> first(n), second(n);
    for(int i = 0; i < n; i++) cin >> first[i] >> second[i];
    unordered_map <int, int> freq;
    for(int x : second) freq[x]++;
    int cnt = 0;
    for(int x : first) cnt += freq[x]; */
    cout << cnt;
}
// the Linear Sieve for Euler's Totient function (φ(n))
const int x = 1e5 + 10;
bool isprime[x];
int phi[x], prime[x / 10], cnt = 0;
void eulertotient() {
    fill(isprime, isprime + x, true);
    isprime[0] = isprime[1] = false;
    for(int i = 0; i < x; i++) phi[i] = i;
    for(int i = 2; i < x; i++) {
        if(isprime[i]) {
            prime[cnt++] = i; phi[i] = i - 1;
        }
        for(int j = 0; j < cnt && i * prime[j] < x; j++) {
            int num = i * prime[j];
            isprime[num] = false;
            if(i % prime[j] == 0) {
                phi[num] = phi[i] * prime[j]; break;
            }
            else phi[num] = phi[i] * (prime[j] - 1);
        }
    }
}
//Count Consecutive Duplicate & count the number of distinct contiguous segments in an array of integers
void cntunqDup(int n) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i]; /*
    int dup = 0, changes = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) dup++;
        else changes++;
    }
    cout << dup << " " << changes + 1; */
    int seg = 1, longestDup = 1, curr = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i - 1]) {
            curr++; longestDup = max(curr, longestDup);
        }
        else { seg++; curr = 1; }
    }
    cout << seg << " " << longestDup << endl;
}
//find the maximum gap between adj elements in an array after removing one element 
// in a way that minimizes the maximum gap between the remaining adj elements. 
void maxgap(int n, vector <int> arr) {
    int mindiff = INT_MAX, pos = -1;
    for(int i = 2; i < n; i++) {
        int diff = arr[i] - arr[i - 2];
        if(diff < mindiff) {
            mindiff = diff; pos = i - 1;
        }
    }
    int maxgap = 0;
    for(int i = 0; i < n - 1; i++) {
        if(i == pos && i + 1 < n) {
            maxgap = max(maxgap, arr[i + 2] - arr[i]); i++;
        }
        else maxgap = max(maxgap, arr[i + 1] - arr[i]);
    }
    cout << maxgap;
}
// calculate the total exercise done for each muscle group over the n days 
//and determine which muscle group has the maximum exercise.
void exercise(int n, vector <int> exercise) {
    int chest = biceps = back = 0;
    for(int i = 0; i < 3; i++) {
        switch(i % 3) {
            case 0: chest += exercise[i]; break;
            case 1: biceps += exercise[i]; break; 
            case 2: back += exercise[i]; break;
        }
    }
    int maxVal = max({chest, biceps, back});
    if(maxVal == chest) cout << chest;
    else if(maxVal == biceps) cout << biceps;
    else cout << back;
}
// calculate sum of the first two integers in each triplet, find and print the largest sum decreased by 1
void maxsum(int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        maxi = max(maxi, a + b);
    }
    cout << maxi - 1 << endl;
}
void maxsum(int n) {
    int maxi = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        sum = -(a + b); maxi = max(maxi, sum);
    }
    cout << maxi << endl;
}
//sum of prime numbers
const int x = 1e5;
bool vis[x]; int prime[x], cnt = 0;
void printprime() {
    for(int i = 2; i < x; ++i) vis[i] = true;
    for(int i = 2; i < x; ++i) {
        if(vis[i]) {
            prime[cnt++] = i;
            for(int j = i * 2; j < x; j += i) vis[j] = false;
        }
    }
    int sum = 0;
    for(int i = 0; i < 25; i++) sum += prime[i];
    cout << sum << endl;
}
int lcm(int a, int b){ return (a * (b / __gcd(a, b))); }
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
bool Isprime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
bool Isperfect(int x) {
    if(x >= 0) {
        int n = sqrt(x); return(n * n == x);
    }
    return false;
}
// find and print the 1-based index of the unique element in
void findunqIdx(int *arr, int n) {
    int unqIdx = -1;
    if(arr[0] != arr[1]) 
        unqIdx = (arr[1] == arr[2]) ? 0 : 1;
    else {
        for(int i = 2; i < n; ++i) {
            if(arr[i] != arr[0]) {
                unqIdx = i; break;
            }
        }
    }
    cout << unqIdx + 1;
}
//Sum consecutive integer Diffrence
void sumdiff(int a, int b, int c) {
    int arr[3] = {a, b, c}; sort(arr, arr + 3);
    cout << abs(arr[1] - arr[0]) + abs(arr[2] - arr[1]);
}
// finding the minimum steps to make two integers equal using only +1 or -1 operations.
void cntstep(int n) {
    while(n--) {
        int a, b; cin >> a >> b;
        int diff = abs(a - b);
        cout << (diff % 2 == 0 ? 1 : 2) << endl;
    }
}
//Find the nxt number which contain unique digits
bool Isdistinct(int num) {
    set <int> digits;
    while(num > 0) {
        int dig = num % 10;
        if(digits.count(dig)) return false;
        digits.insert(dig); num /= 10;
    } return true;
}
void isdistinct(int n) {
    while(++n) {
        int x = n, mask = 0;
        bool unq = true;
        while(x > 0) {
            int d = x % 10;
            if(mask && (1 << d)) {
                unq = false; break;
            }
            mask |= 1 << d; x /= 10;
        }
        if(unq) cout << n << endl;
    }
}
// determine if all the levels from 1 to n are covered by the unique elements present in two given arrays
void removedup(int n) {
    int a, b; cin >> a >> b;
    set <int> lev;
    for(int i = 0; i < a; i++) {
        int x; cin >> x;
        lev.insert(x - 1);
    }
    for(int i = 0; i < b; i++) {
        int x; cin >> x;
        lev.insert(x - 1);
    }
    cout << (lev.size() == n ? "Become the Guy." : "No one"); /*
    bool lev[n + 1];
    for(int i = 0; i < a; i++) lev[i] = true;
    for(int i = 0; i < b; i++) lev[i] = true;
    for(int i = 1; i <= n; i++){
        if(!Levels[i]) return 0;
    }
    cout << "Become the Guy"; */
}
//calculate and display 2^num to find the sum of the digits of the resulting number
int multTwo(int n) {
    vector <int> dig = {1};
    for(int i = 0; i < n; i++) {
        int curr = 0;
        for(auto &d : dig) {
            int x = d * 2 + curr;
            d = x % 10; curr = x / 10;
        }
        while(curr) {
            dig.push_back(curr % 10); curr /= 10;
        }
    }
    int sum = 0;
    for(int i = dig.size() - 1; i >= 0; i--) {
        sum += dig[i]; cout << dig[i] << endl;
    }
    cout << sum << " ";
}
void checkdiag(vector <vector <char>> grid, int n) {
    int diag = grid[0][0];
    for(int i = 0; i < n; i++) {
        if(grid[i][i] != diag || grid[i][n - i - 1] != diag) {
            cout << "NO"; return 0;
        }
    }
    char Offdiag = grid[0][1];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && i + j != n - 1) {
                if(grid[i][j] != Offdiag) {
                    cout << "NO"; return 0;
                }
            }
        }
    } cout << "Yes";
}
// fill a string with alternating 'B' and 'W' characters.
void fillchar(int r, int c) {
    for(int i = 0; i < r; i++) {
        string str(c, ' '); cin >> str;
        for(int j = 0; j < c; j++)
            str[j] = (str[j] == '.' ? ((i + j) % 2 ? 'W' : 'B') : str[j]);
        cout << str << endl;
    }
}
//an arr represent the number of additional sockets available from various devices 
//Each device can contribute a certain number of additional sockets.
//determine how many devices need to use to ensure that you have enough sockets to accommodate a given number of devices
void cntDevice() {
    int supply, socket, device; cin >> supply >> socket >> device;
    vector <int> arr(supply);
    for(int i = 0; i < supply; i++) cin >> arr[i];
    if(socket >= device) return cout << 0, 0;
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < supply; i++) {
        socket += arr[i] - 1;
        if(socket >= device) return cout << i + 1, 0;
    }
    cout << -1;
}
void collatz(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        (x % 2 == 0) ? x /= 2 : x = 3 * x + 1;
        cout << x << " ";
    }
}
// determine two values for each citizen: minimum & maximum distance to any other citizen.
void linelandmail(int n) {
    vector <int> arr(n); int mx, mn;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) {
        int mx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
        int mn = (i == 0 ? arr[1] - arr[0] : i == n - 1 ? arr[n - 1] - arr[n - 2] : min(arr[i] - arr[i - 1], arr[i + 1] - arr[i]));
        cout << mx << " " << mn << endl;
    }
}
