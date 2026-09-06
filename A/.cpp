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
/* the parity of an integer n as the sum of the bits in binary representation. the number 21 = (10101)2 has three 1s in its binary representation so it has parity 3(mod2), or 1.
->1 2 10 21 0
<- The parity of 1 is 1(mod2).
 The parity of 10 is 1(mod2). 
 The parity of 1010 is 2(mod2). 
 The parity of 10101 is 3(mod2).*/
#include <bits/stdc++.h>
#define PI 3.14159265359
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int> >
typedef long long ll;
using namespace std;
int main()
{
    int n, cnt, temp, it;
    bool a[35];
    while(1){
        scanf("%d", &n);
        if(!n) return 0;
        cnt = 0; temp = n; it = 0;
        while(temp){
            if(temp % 2) cnt++, a[it++] = 1;
            else a[it++] = 0;
            temp /= 2;
        }
        printf("The parity of ");
        for(int i=it-1; i>=0; i--) printf("%d", a[i]);
        printf(" is %d (mod 2).\n", cnt);
    }

}
using namespace std;
void main() {
    int n; cin >> n;
    int p = 0, l = 0; 
    // Position variables for forward/backward (p) and left/right (l)
    int mx1 = INT_MIN, mn1 = INT_MAX; 
    // Maximum and minimum for vertical movement
    int mx2 = INT_MIN, mn2 = INT_MAX; 
    // Maximum and minimum for horizontal movement
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        int x; cin >> x;
        if (str == "maju"){
            p += x;
            mx1 = max(mx1, p);
            mn1 = min(mn1, p);
        }else if (str == "mundur") {
            p -= x;
            mx1 = max(mx1, p);
            mn1 = min(mn1, p);
        } else if (str == "kanan") {
            l += x;
            mx2 = max(mx2, l);
            mn2 = min(mn2, l);
        } else if (str == "kiri") {
            l -= x;
            mx2 = max(mx2, l);
            mn2 = min(mn2, l);
        }
    }
    // Calculate total distances for vertical (p) and horizontal (l) directions
    int totalVertical = 0;
    int totalHorizontal = 0;

    if (mx1 > 0)
        totalVertical += mx1;
    if (mn1 < 0)
        totalVertical += abs(mn1);
    if (mx2 > 0)
        totalHorizontal += mx2;
    if (mn2 < 0)
        totalHorizontal += abs(mn2);
    if (totalVertical > totalHorizontal)
        cout << totalVertical << " " << totalHorizontal;
    else
        cout << totalHorizontal << " " << totalVertical;
    return 0;
}
using namespace std;
void main() {
    string s; cin >> s;
    int x, n, k, q; cin >> x >> n >> k >> q;
    vector<int> v;

    if (k == 2) {
        string response;
        for (int i = 1; i <= n; i++) {
            cout << 2 << " " << i << " " << n + 1 << endl;
            cin >> response;
            if (response == "bisajadi") {
                v.push_back(i);
            }
        }
        cout << v.size() << " ";
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
        cin >> response;
        if (response == "ya") {
            return 0;
        }
    }

    if (q >= n + 1) {
        string response;
        for (int i = 1; i <= n; i++) {
            cout << 1 << " " << i << endl;
            cin >> response;

            if (response == "ya") {
                cout << 1 << " " << i << endl;
                return 0;
            } else if (response == "bisajadi") {
                v.push_back(i);
            }
        }
        cout << v.size() << " ";
        for (int i : v)
            cout << i << " ";
        cout << endl;

        cin >> response;
        if (response == "ya") 
            return 0;
    }
    // Binary search to narrow down
    int l = 1, r = n, ans = -1;
    string response;

    while (l <= r) {
        int m = (l + r) / 2;
        cout << 1 << " " << m << endl;
        cin >> response;

        if (response == "bisajadi") {
            ans = m;
            l = m + 1;
        } else if (response == "tidak") {
            r = m - 1;
        } else
            return 0;
    }
    cout << ans << " ";
    for (int i = 1; i <= ans; i++) {
        cout << i << " ";
    }
    cout << endl;
    cin >> response;
    if (response == "ya")
        return 0;
    return 0;
}
using namespace std;
// 8 OSN 2007 Sesi 2 (pecahan biasa ke campuran)
// converts a fraction into a mixed fraction if the numerator is larger than the denominator 
void main(){
    string str; cin >> str;
    int frac = str.find('/');
    int x = stoi(0, frac);
    int y = stoi(frac + 1);
    int gcd = __gcd(x, y);
    x /= gcd; y /= gcd;
    if (x / y == 0)
        cout << x << "/" << y;
    else
        cout << x / y << " " << x % y << "/" << y;
}
using namespace std;
void main(){
    int n, k; cin >> n >> k;
    int res = 1, arr[k];
    for(int i = 0; i < k; i++){
        string str; cin >> str;
        arr[k] = stoi(str);
    }
    for(int i = 1; i < k; i++){
        if(arr[i] < arr[i - 1]){
            res++;
            break;
        }
    }
    cout << res;
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i % 2 == 0 && j % 2 == 0)
                cout << "#";
            else if(i % 2 == 1 && j % 2 == 1)
                cout << "*";
            else
                cout << "₹";
        }
    }
}
using namespace std;
void main(){
    int n, w, h; cin >> n >> w >> h;
    int arr[w][h];
    for(int i = 0; i < n; i++){
        int a, b, c, d, val; cin >> a >> b >> c >> d >> val;
        for(int j = b; j <= d; j++){
            for(int k = a; k <= c; k++)
                arr[j][k] = val;
        }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++)
            cout << arr[i][j] << " ";
    }
}
using namespace std;
void main(){
    int n, m, k, v; cin >> n >> m >> k >> v;
    int arr[n], res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != v && abs(v - arr[i]) % k == 0 && abs(v - arr[i]) / k < m)
            res++;
    }
    cout << res;
}
using namespace std;
void main(){
    int n; cin >> n;
    int res = 0, arr[n], seq[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        res += n * arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> seq[n];
        res += n * seq[n];
    }
    cout << res;
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    (n % 4 == 0 && m % 4 == 0) ? cout << "Yes" : cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    set <int> st;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        st.insert(x);
    }
    if(st.size() == 1)
        cout << 1;
    else if(st.size() == n)
        cout << n;
    else
        cout << n - 1;
}
using namespace std;
void main(){
    int n, q; cin >> n >> q;
    int res = 0, ans = 0;
    while(q--){
        int x, y, z; cin >> x >> y >> z;
        if(x == 1){
            if(y == n){
                ans += z; res += z;
            }
            else
                res += z;
        }
        else if(x == 2){
            if(y == n){
                ans -= z; 
                res -= z;
            }
            else
                ans -= z;
        }
    }
    cout << max(abs(res), abs(ans));
}
using namespace std;
void main(){
    int n, m; cin >> n >> m;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            if(x == 1)
                flag = 1;
        }
    }
    (flag) ? cout << "Yes" : cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    pair <int> pr[n];
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        pr[i] = {x + y, x};
    }
    int cnt = 0, startTime = 0;
    for(int i = 0; i < n; i++){
        if(pr[i].second >= startTime){
            cnt++;
            startTime = pr[i].first;
        }
    }
    cout << cnt;
}
using namespace std;
void main(){
    int n, cnt = 0; cin >> n;
    string str, ing; cin >> str >> ing;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(str[i] > ing[i]){
            if(flag == 0){
                cnt++;
                flag = 1;
            }
        }
        else if(str[i] < ing[i])
            flag = 0;
    }
    cout << cnt;
}
using namespace std;
void main(){
    string str; cin >> str;
    int n, z; cin >> n >> z;
    vector <int> idx(1001, 0);
    vector <int> ans(n + 1);
    vector <pair <int, int> >pr(n + 1);
    for(int i = 1; i <= n; i++){
        int t, a, b; cin >> t >> a >> b;
        idx[t] = i;
        pr[i] = {t, a + 1};
    }
    sort(pr.begin() + 1, pr.end());
    for(int i = 1; i <= n; i++){
        ans[i] = pr[i].first;
        int j = i;
        while(pr[i].second != j){
            swap(ans[j], ans[j - 1]);
            j--;
        }
    }
    for(int i = 1; i <= n; i++)
        cout << idx[ans[i]] << " ";
}
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> vec(n);
    int x, cur = 0;
    for(int i = 0; i < vec[i]; i++)
        cin >> vec[i];
    int mid = (accumulate(vec.begin(), vec.end(), 0) + 1) /2;
    int x, cur = 0;
    for(int i = n - 1; i >= 0; i--){
        cur += vec[i];
        if(cur > mid){
            x = vec[i];
            break;
        }
    }
    cout << (x < mid ? cout << "Yes" : cout << "No");
}
using namespace std;
void main(){
    char ch; cin >> ch;
    (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'r' || ch == 's') ? cout << "Yes" : cout << "No";
}
#include<bits/stdc++.h>
using namespace std;
void main(){
    int n; cin >> n;
    int x = 0, y = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        char ch; cin >> ch;
        if(ch == 'U')
            x++;
        if(ch == 'D')
            x--;
        if(ch == 'R')
            y++;
        if(ch == 'L')
            y--;
        if(x == 1 && y == 1)
            flag = 1
    }
    (flag) ? cout << "Yes" : cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    string str; cin >> str;
    int l = 0, r = n - 1, cnt = 0;
    int x = str[l], y = str[r];
    bool flag = 0;
    while(x != y){
        l++; r--;
        x = str[l]; y = str[r];
        if(cnt >= n)
            flag = 1;
    }
    (flag)? cout << "0" : cout << n - cnt;
}
#include<bits/stdc++.h>
using namespace std;
void main(){
    int n; cin >> n;
    vector <int> vec(n);
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] < 0){
            vec[i] *= -1;
            cnt++;
        }
        sum += vec[i];
    }
    sort(vec.begin(), vec.end());
    if(cnt % 2 == 1)
        sum -= 2 * vec[0];
    cout << sum;
}
using namespace std;
void main(){
    int a, b, c; cin >> a >> b >> c;
    (a + b == c) ? cout << "+" : cout << "-";
}
using namespace std;
void main(){
    int n; cin << n;
    int even = odd = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2 == 0)
            even++;
        else
            odd++;
    }
    (even > odd) ? cout << "Yes" : cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    string str; cin >> str;
    if(str.length() == 1){
        cout << "Yes";
        continue;
    }
    bool flag = 1;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(str[i] == str[j]){
                if((i + j) % 2 == 1)
                    flag = 0;
            }
        }
    }
    (flag) ? cout << "Yes": cout << "No";
}
using namespace std;
void main(){
    int n, q; cin >> n >> q;
    int arr[n];
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        int x, y, k; cin >> x >> y >> k;
        int sum = 0, segmentSum = 0;
        for(int j = 1; j <= n; j++)
            sum += arr[j];
        segmentSum = (y - x + 1) * k;
        int newSum = sum - (arr[x] * (y - x + 1)) + segmentSum;
        (newSum % 2 == 1) ? cout << "Yes" : cout << "No";
    }
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <pair <int, int> >vec(n);
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        vec.push_back(make_pair(x, y));
    }
    int prv = 0, res = 0, mx = INT_MIN;
    for(int i = 0; i < vec.size(); i++){
        prv = vec[i].second;
        int j = i + 1;
        while(vec[j].first <= prv)
            j++;
        i = j - 1;
        res++;
    }
    cout << res;
    /*for(int i = 0; i < n; i++){
        prv = vec[i].second;
        int tmp = 0, j = 0;
        while(vec[j].first <= prv && j < n){
            j++; 
            tmp++;
        }
        if(tmp > mx){
            res = vec[i].first;
            mx = tmp;
        }
        i = j - 1;
    }
    cout << res; */
}
using namespace std;
void main(){
    string str; cin >> str;
    int res = 0;
    string ing = "codeforces";
    for(int i = 0; i < 10; i++){
        if(str[i]!= ing[i])
            res++;
    }
    cout << res;
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <int> vec(n);
    int mx = tmp = 0;
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++){
        if(vec[i] == 0){
            tmp++;
            mx = max(mx, tmp);
        }
        else
            tmp = 0;
    }
    cout << mx;
}
using namespace std;
void main(){
    int n; cin >> n;
    int mn1 = mn2 = mn3 = INT_MAX;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        string str; cin >> str;
        if(str == "11")
            min3 = min(min3, x);
        else if(str == "01")
            min1 = min(min1, x);
        else if(str == "10")
            min2 = min(min2, x);
    }
    int res = min(min3, min1 + min2);
    (res >= INT_MAX) ? cout << -1: cout << res;
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n][n], mx = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cin >> arr[i][j];
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i-1; j++)
            arr[i - 1][j] = max(arr[i - 1][j] + arr[i][j], arr[i - 1][j] + arr[i][j + 1]);
        }
        cout << arr[1][1] << endl;
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n], neg = 0, res = 1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        res *= arr[i];
        if(arr[i] < 0)
            neg++;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(arr[i]) > abs(arr[j]))
                swap(arr[i], arr[j]);
        }
    }
    if(n == 5)
        cout << res;
    else{
        if(neg % 2 == 0){
            res = 1;
            for(int i = n - 1; i >= n - 5; i--)
                res *= arr[i];
        }
        else
            res = 1;
    }
    cout << res;
}
using namespace std;
void main(){
    int trg; cin >> trg;
    int curSz = 0, stepSz = 5, stepCnt = 0;
    for(;curSum + stepSz <= trg;){
        curSum += stepSz;
        stepCnt++;
    }
    if(curSum != trg)
        stepCnt++;
    cout << stepCnt;
}
using namespace std;
void main(){
    int a; cin >> a;
    cout << (a + 4) / 5;
}
using namespace std;
void main(){
    int a, b, c, res = 0; cin >> a >> b >> c;
    res += a * b * c;
    if(a == 1)
        res += c;
    else if(b == 1)
        res += max(a, max(b, c));
    else if(c == 1)
        res += a;
    else if(a == 1 && b == 1)
        res += 2;
    if(a == 1 && b == 1 && c == 1)
        res = 3;
    if(a == 1 && c == 1)
        res = a + b + c;
    cout << res;
}
using namespace std;
void main(){
    int multiplier, decrement, limit;
    cin >> multiplier >> decrement >> limit;
    int sum = 0, cnt = 0;
    while(cnt <= limit){
        sum += cnt;
        cnt++;
    }
    sum *= multiplier;
    sum -= decrement;
    (sum < 0)? cout << 0 : cout << sum;
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    string delimiter; cin >> delimiter;
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1)
            cout << delimiter;
    }
    cout << "\n";
    int incr; cin >> incr;
    for(int i = 0; i < n; i++)
        arr[i] += incr;
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1)
            cout << delimiter;
    }
    int m; cin >> m;
    string str[m];
    for(int i = 0; i < m; i++)
        cin >> str[i];
    cin >> delimiter;
    for (int i = 0; i < m; ++i){
        cout << strArr[i];
        if (i < m - 1)
            cout << delimiter;
    }
    cout << endl;
}
using namespace std;
void main(){
    int num1, num2; cin >> num1 >> num2;
    int large = num1;
    int res = tmpSum = flag = 0;
    if(num1 < num2)
        cout << num1;
    else if(num1 == num2)
        cout << num1 + 1;
    else if(num1 > num2){
        while(num1 > num2){
            if(num1 <= num2 && num1 % num2 != 0)
                res += 2;
            if (flag == 0 || num1 <= num2 && num1 % num2 != 0)
                res += num1;
            if (num1 > num2)
                res += num1 / num2;
            if (num1 % 2 == 1)
                num1 = num1 + 1;
            num1 = num1 / num2;
            flag = 1;
        }
    }
    cout << res;
}
using namespace std;
void main(){
    int num1, num2; cin >> num1 >> num2;
    int tmp = 0;
    if(num1 < num2)
        cout << num1;
    else if(num1 == num2)
        cout << num1 + 1;
    else{
        tmp = num1 / num2;
        num1 = num1 + num1 / num2;
        num1 = num1 + tmp / num2;
        cout << num1; 
    }
}
using namespace std;
void main(){
    string str; cin >> str;
    if(str[0] > 90)
        str[0] -= 32;
    cout << str;
}
using namespace std;
void main(){
    int num, nxt, tmp; cin >> num;
    int nxt = num;
    int dig1 = num % 10; num /= 10;
    int dig2 = num % 10; num /= 10;
    int dig3 = num % 10; num /= 10;
    int dig4 = num % 10; num /= 10;
    while(true){
        nxt += num; tmp = nxt;
        dig1 = tmp % 10; tmp /= 10;
        dig2 = tmp % 10; tmp /= 10;
        dig3 = tmp % 10; tmp /= 10;
        dig4 = tmp % 10; tmp /= 10;
        
        if (dig1 != dig2 && dig1 != dig3 && dig1 != dig4 &&
            dig2 != dig3
            && dig2 != dig4 && dig3 != dig4)
            break;
    }
}
using namespace std;
void main(){
    string str; cin >> str;
    int len = str.size();
    if(str == "wjmzbmr")
        cout << "chat with her";
    else if(len % 2 == 1)
        cout << "Ignore Him";
    else
        cout << "Chat with her";
}
using namespace std;
void main(){
    int var1, var2, var3, var4; cin >> var1 >> var2 >> var3 >> var4;
    if (var1 != var2 && var1 != var3 && var1 != var4 && var2 != var3 && var2 != var4 && var3 != var4)
        cout << 0;
    if (var1 == var2 && var1 != var3 && var1 != var4 && var3 != var4 || 
        var1 == var3 && var1 != var2 && var1 != var4 && var2 != var4 || 
        var1 == var4 && var1 != var2 && var1 != var3 && var3 != var2 || 
        var2 == var3 && var2 != var4 && var2 != var1 && var4 != var1 || 
        var2 == var4 && var2 != var3 && var2 != var1 && var3 != var1 || 
        var3 == var4 && var3 != var2 && var3 != var1 && var2 != var1)
        cout << 1;
    else if (var1 == var2 && var1 == var3 && var1 != var4 || 
             var1 == var2 && var1 == var4 && var1 != var3 || 
             var1 == var3 && var1 == var4 && var1 != var2 || 
             var2 == var3 && var2 == var4 && var2 != var1)
        cout << 2;
    else if (var1 == var2 && var3 == var4 && var1 != var3 || 
             var1 == var3 && var2 == var4 && var1 != var2 || 
             var1 == var4 && var2 == var3 && var1 != var2)
        cout << 2;
    else if (var1 == var2 && var1 == var3 && var1 == var4)
        cout << 3;
}
using namespace std;
void main(){
    int n; cin >> n;
    int cnt = 0;
    string arr[300];
    for(int i = n - 1; i >= 0; i--)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == "++X" || arr[i] == "X++")
            cnt++;
        else if(arr[i] == "--X" || arr[i] == "X--")
            cnt--;
    }
    cout << cnt;
}
using namespace std;
void main(){
    int len, width, sidelen; cin >> len >> width >> sidelen;
    int area = len * len;
    int sqrArea = sidelen * sidelen;
    int res = area / sqrArea;
    if(area % sqrArea != 0)
        cout << res + 1;
    else if(area % sqrArea == 0)
        cout << res;
}
using namespace std;
void main(){
    int n, incr, arr[100]; cin >> n >> incr >> arr[100];
    int IsProcessed = 0, curIdx = 0;
    int tmpIdx = incr;
    if(n == 0 || incr == 0)
        cout << 0;
    while(true){
        if(arr[curIdx] <= 0){
            cout << 0;
            break;
        }
        if(IsProcessed == 0)
            tmpIdx -= 1;
        if(arr[tmpIdx] != arr[tmpIdx + 1]){
            cout << incr << " ";
            break;
        }
        incr += 1;
        IsProcessed = 1;
        curIdx += 1;
    }
}
using namespace std;
void main(){
    int div1, div2, div3, div4, cnt;
    cin >> div1 >> div2 >> div3 >> div4 >> cnt;
    int divCnt = 0;
    while(cnt > 0){
        if(cnt % div1 == 0 || cnt % div2 == 0 || cnt % div3 == 0 || cnt % div4 == 0)
            divCnt += 1;
        cnt -= 1;
    }
    cout << divCnt;
}
using namespace std;
void main(){
    int l, r, divisor; cin >> l >> r >> divisor;
    int totalDiv = l / divisor;
    int rangeStartDiv = r / divisor;
    if(l % divisor != 0)
        totalDiv += 1;
    if(r % divisor != 0)
        rangeStartDiv += 1;
    totalDiv *= rangeStartDuv;
    cout << totalDiv;
} 
using namespace std;
void main(){
    int total, cur, step; cin >> total >> cur >> step;
    cur += step;
    while(cur <= 0 || cur > total){
        if(cur <= 0)
            cur += total;
        if(cur > total)
            cur -= total;
    }
    cout << cur;
}
using namespace std;
void main(){
    string str, ing; cin >> str >> ing;
    reverse(str.begin(), str.end());
    if(str == ing)
        cout << "Yes";
    else if(str != ing)
        cout << "No";
}
using namespace std;
void main(){
    int x, y; cin >> x >> y;
    if(x > y){
        x -= y; x /= 2;
        cout << y << " " << x;
    }
    else if(y > x){
        y -= x; y /= 2;
        cout << x << " " << y;
    }
    else if(x == y)
        cout << y << " " << 0;
}
using namespace std;
void main(){
    int games; cin >> games;
    string str; cin >> str;
    int win1 = win2 = idx = 0;
    while(games > 0){
        if(res[idx] == 'A')
            win1++;
        if(res[idx] == 'D')
            win2++;
        idx += 1;
        games -= 1;
    }
    if(win1 > win2)
        cout << "Anton";
    else if(win1 < win2)
        cout << "Danik";
    else
        cout << "Friendship";
}
