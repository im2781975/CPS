#include<iostream>
#include<string>
using namespace std;
string caps(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
    return s;
}
void MakeCapital(string s)
{
    if(s[0] >= 97 && s[0] <= 122)
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
    else
    {
        int z = 1;
        while(z < s.size())
        {
            if(s[z] >= 97 && s[z] <= 122)
            {
                cout << caps(s);
                return;
            }
            z++;
        }
        cout << caps(s);
    }
}
void BasedCondition() {
    int n, k;
    cin >> n >> k;
    int total = k;
    string s;
    cin >> s;
    string temp = s;
    vector<int> ans(n, 0);
    int flip = 0; 
    for(int i = 0; i < n; i++) {
        if(k == 0) break;
        int bitt = s[i] - '0';
        if((bitt == 0 && flip % 2 == 0) || (bitt == 1 && flip % 2 == 1)) {
            if(k % 2 == 0) {
                // even 
                ans[i]++;
                flip++;
                k--;
                if(k == 0) break;
            }
        } else {
            if(k % 2 != 0) {
                // odd
                ans[i]++;
                flip++;
                k--;
                if(k == 0) break;
            }
        }
    }
    if(k) {
        ans[n - 1] += k;
    }
    for(int i = 0; i < n; i++) {
        if((total - ans[i]) % 2 == 1) {
            if(temp[i] == '0') {
                temp[i] = '1';
            } else {
                temp[i] = '0';
            }
        }
    }
    cout << temp << endl;
    for(auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
void BasedCondition(){
    int t;
    cin >> t;
    
    while(t){
        int n, a, b;
        cin >> n >> a >> b;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        vector<int> prefix(n, 0);
        prefix[0] = arr[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i - 1] + arr[i];
        }

        int ans = prefix[n - 1] * b;
        int prev = b * arr[0];

        for(int i = 0; i < n; i++){
            ans = min(ans, prev + arr[i] * a + (prefix[n - 1] - prefix[i] - (n - i - 1) * arr[i]) * b);
            if(i + 1 != n){
                prev += (arr[i + 1] - arr[i]) * b;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
void BasedCondition(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi = INT_MIN ;
    for(auto i:arr){
        maxi = max(maxi , i);
    }
    vector<int> maxelems ;
    for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            maxelems.push_back(i);
        }
    }
    int size = maxelems.size();
    int zero = size/2;
    if(zero!=0){
        int k = -1;
        for(int i=zero-1 ;i>=0;i--){
            k = maxelems[i];
            arr[k] = 0;
        }
    }
    return 0;
}
void BasedCondition(){
    // https://codeforces.com/contest/1859/problem/A
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    bool f = false;
    vector<int> b, c;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    for(int i = 0; i < n; i++) {
        if(v[i] == mx) c.push_back(v[i]);
        else b.push_back(v[i]);
    }

    if(b.size() == 0 || c.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << b.size() << " " << c.size() << "\n";
    for(auto i : b) cout << i << " ";
    cout << "\n";
    for(auto i : c) cout << i << " ";
    cout << "\n";

    return 0;
}
void solve_ballonIcpc()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tmp = 0;
    char arr[50] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[s[i]] == 0)
            tmp += 2;
        else
            tmp += 1;
        arr[s[i]]++;
    }
  cout << tmp << "\n";
}
void solveContest1790ProblemA()
{
    string s = "314159265358979323846264338327";
    string ns;
    cin >> ns;
    int temp = 0;
    for (int i = 0; i < ns.length(); i++)
    {
        if (ns[i] == s[i])
            temp++;
        else
            break;
    }
    cout << temp << "\n";
}
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            if(i + 2 < n) {
                if(s[i + 1] == '0')    ans += 2;
                else if(s[i + 2] == '0')
                    ans++;
            }
            else if(i + 1 < n) {
                if(s[i + 1] == '0') ans += 2;
            }
        }
    }
    cout << ans ;
}
void solve1(){
    int n;
    cin >> n;
    int ans = 0;
    string res = "";
    int prev = 2;
    while (ans < n) {
        if (prev == 2) {
            prev = 1;
        } else {
            prev = 2;
        }
        res += to_string(prev);
        ans += prev;
    }
    cout <<ans ;
}
void solve(){
    string x;
    string v = "vaporeon", j = "jolteon", f = "flareon", e = "espeon", u = "umbreon", l = "leafeon", g = "glaceon", s = "sylveon";
    cin >> x;
    int z = 0, count[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    while (z++ < 8) {
        if (x[0] != '.') {
            if (x[0] == v[0]) count[0]++;
            if (x[0] == j[0]) count[1]++;
            if (x[0] == f[0]) count[2]++;
            if (x[0] == e[0]) count[3]++;
            if (x[0] == u[0]) count[4]++;
            if (x[0] == l[0]) count[5]++;
            if (x[0] == g[0]) count[6]++;
            if (x[0] == s[0]) count[7]++;
            break;
        }

        if (x[z - 1] != '.') {
            if (x[z - 1] == v[z - 1]) count[0]++;
            if (x[z - 1] == j[z - 1]) count[1]++;
            if (x[z - 1] == f[z - 1]) count[2]++;
            if (x[z - 1] == e[z - 1]) count[3]++;
            if (x[z - 1] == u[z - 1]) count[4]++;
            if (x[z - 1] == l[z - 1]) count[5]++;
            if (x[z - 1] == g[z - 1]) count[6]++;
            if (x[z - 1] == s[z - 1]) count[7]++;
        }
    }

    z = 0;
    int max = 0;
    while (z++ < 8)
        if (count[z - 1] > count[max])
            max = z - 1;

    switch (max) {
        case (0): {
            cout << "vaporeon";
            break;
        }
        case (1): {
            cout << "jolteon";
            break;
        }
        case (2): {
            cout << "flareon";
            break;
        }
        case (3): {
            cout << "espeon";
            break;
        }
        case (4): {
            cout << "umbreon";
            break;
        }
        case (5): {
            cout << "leafeon";
            break;
        }
        case (6): {
            cout << "glaceon";
            break;
        }
        case (7): {
            cout << "sylveon";
            break;
        }
    }
}
void solve1() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    int i = 0;
    
    while (i < s.size() - 1) {
        if (s[i] == '0') {
            if (s[i + 1] == '0') 
                ans += 2;
            else if (s[i + 1] == '1' && s[i + 2] == '0') 
                ans += 1;
        }
        i++;
    }
    cout << ans << endl;
}

int main()
{
    string s;
    cin >> s;
    MakeCapital(s);
    cout<<caps(s);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
void CheckFirstLast() {
    //performs sorting on the first n characters of the string in ascending order 
    //& the remaining characters in descending order. After sorting, it checks 
    //if the first and last characters in the string are in non-decreasing order
    //If yes, it prints "YES"; otherwise, it prints "NO".
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ch;
    int i = 0, f = s.size() - 1;
    int b = 0, e = s.size() - 1;
    // Sort the first n characters in ascending order
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (s[j] < s[min])
                min = j;
        ch = s[min];
        s[min] = s[i];
        s[i] = ch;
    }
    // Sort the remaining characters in descending order
    for (int i = n; i < s.size(); i++) {
        int min = i;
        for (int j = i + 1; j < s.size(); j++)
            if (s[j] > s[min]) // Change to descending order
                min = j;
        ch = s[min];
        s[min] = s[i];
        s[i] = ch;
    }
    // Check if the first and last characters are in non-decreasing order
    i = 0;
    while (i < s.size() / 2) {
        if (s[i++] > s[f--]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
void PalindromeAddition() {
    string s, s2;
    cin >> s;
    int i = 0, n = s.size() - 1, c = 0, count = 0;
    char ch;
    
    while (true) {
        c = 0, n = s.size() - 1, i = 0;
        
        while (i < s.size() / 2) {
            if (s[i++] != s[n--]) {
                c++;
                break;
            }
        }
        if (c == 0) break;
        s2 = s;
        i = 0, n = s.size() - 1;
        
        while (i < s.size() / 2) {
            ch = s[i];
            s[i] = s[n];
            s[n] = ch;
            i++;
            n--;
        }
        i = 0;
        int carry = 0;
        
        while (i < s.size()) {
            ch = (s[i] - '0') + (s2[i] - '0') + carry;
            s[i] = (ch % 10) + '0';
            carry = ch / 10;
            i++;
        }
        if (carry > 0) {
            s.push_back(carry + '0');
        }
        count++;
    }
    cout << count << " " << s;
    return 0;
}
void BasedCondition() {
    int n, r, b;
    cin >> n >> r >> b;
    int k = 0;
    string ans = "";
    ans += 'R';
    int cnt = ceil((float)r / (b + 1));
    cout << cnt << endl;

    while (k < n) {
        for (int i = 0; i < cnt && k < n; i++) {
            ans += 'R';
            k++;
        }
        if (k < n) {
            ans += 'B';
            k++;
        }
    }

    int d = r / (b + 1);
    int remm = r % (b + 1);

    ans = "";

    for (int i = 0; i <= b; i++) {
        for (int i = 0; i < d; i++) {
            ans += 'R';
        }
        if (remm) {
            ans += 'R';
            remm--;
        }
        if (i != b) ans += 'B';
    }

    cout << ans << endl;

    return 0;
}
void SubStr() {
    string s;
    cin >> s;
    int index = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s.find(s[i], i + 1) >= s.length()) {
            index = i;
            break;
        }
    }
    cout << s.substr(index) << endl;
    return 0;
}
void ConsecutiveString() {
    //checks if there are consecutive characters in the string. 
    //If there are, it outputs "YES"; otherwise, it outputs "NO".
    string s;
    cin >> s;
    char prev = s[0];
    int ans = 1;
    bool res = true;

    if (s.length() == 1)
        res = false;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            ans++;
        } else {
            if (ans == 1) {
                res = false;
                break;
            } else {
                prev = s[i];
                ans = 1;
            }
        }
    }
    if (res && ans != 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
void BasedCondition()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && (s[i + 1] > '1' && s[i + 1] <= '9'))
        {
            int n = s[i + 1] - '0';
            for (int j = 0; j < n; j++)
                cout << s[i];
            i++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            cout << s[i];
    }
    return 0;
}
void BasedCondition(){
    string s;
    int x;
    cin >> s;
    cin >> x;
    int z = 0;
    string k = "Final";

    while (z++ < x) {
        if (z == 1) {
            cout << s << endl;
            s += '-';
            continue;
        }
        s += k;
        if (z == x) {
            s += "Wallahy";
        }
        cout << s;
        if (z < x) {
            cout << endl;
        }
    }
    return 0;
}
void BasedCondition() {
    //takes input for the number of fruits (x), the names of the fruits (y), the number of people (f), 
    // & the names and preferences of each person. The output will be the name of the person with the maximum number of preferred fruits.
    int x, z = 0;
    cin >> x;
    string y[x];
    
    while (z++ < x)
        cin >> y[z - 1];

    int f, m;
    cin >> f;
    string name[f], d;
    int scr[f];
    z = 0;
    while (z++ < f)
        scr[z - 1] = 0;

    z = 0;
    
    while (z++ < f) {
        cin >> name[z - 1];
        cin >> m;
        int dd = 0;
        while (dd++ < m) {
            cin >> d;
            int r = 0;

            while (r++ < x)
                if (d == y[r - 1])
                    scr[z - 1]++;
        }
    }
    int max = 0;
    z = 1;
    while (z++ < f) {
        if (scr[z - 1] > scr[max])
            max = z - 1;

        if (scr[z - 1] == scr[max])
            if (name[z - 1] < name[max])
                max = z - 1;
    }
    cout << name[max];
    return 0;
}
void solve(){
    //https://codeforces.com/contest/1859/problem/B
    int n;
    cin >> n;
    int s;
    int op = 0;
    int mn = 1e10;
    int mx = 0;
    int f = 0;
    int sum = 0;
    int temp = 0;
    vector<vector<int>>v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        for(int j = 0 ; j < s ; j++){
            int num;
            cin >> num; 
            v[i].push_back(num);
            if(mn > num){
                mn = num;
                temp = i;
                sum = num;
            }
        } 
    }
    for(int i = 0 ; i < n ; i++){
        sort(v[i].begin() ,v[i].end());
        sum+= v[i][1];
    }
    for(int i = 0 ; i < n ; i++){
        op= max(op , sum - v[i][1]);
    }
    cout << op << "\n";
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int m, n, d = 0;
    cin >> m >> n;
    string x, y, z, s, res[m * n];

    while (d++ < m * n) {
        cin >> x >> y >> z;
    
        if (y == "0000000000" && z == "0000000000") {
            if (d == 1)
                cout << x;
            else
                cout << endl << x;
        }else {
            if (z == s)
                cout << x;
            if (z == "0000000000")
                cout << endl << x;
        }
        s = x;
    }
}
void solve2() {
    string s;
    getline(cin, s);
    
    unsigned int i;
    for(i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    
    for(i = 0; i < s.size(); i++) {
        if(s[i] < 97 || s[i] > 122) {
            s.erase(i, 1);
            i--;
        }
    }
    unsigned int z = 0, c = 0, f = s.size() - 1;
    z = 0;
    while (z++ < s.size() / 2) {
        if (s[z - 1] != s[f--]) {
            c++;
            break;
        }
    }
    if (c == 0)
        cout << "I'll make the saddle";
    else
        cout << "Alas, Jon, You failed my test";
    return 0;
}
void solve3() {
    int x;
    string s;
    cin >> x >> s;

    if (s.size() <= x) {
        cout << s;
    } else {
        cout << s[0];
        if (s[0] == s[s.size() - 1] && s.size() - 1 > 0) {
            cout << s.size() - 1;
        } else {
            if (s.size() - 2 > 0) {
                cout << s.size() - 2 << s[s.size() - 1];
            } else {
                cout << s[s.size() - 1];
            }
        }
    }
}
void solve4() {
    string s;
    cin >> s;
    int sum = 0, sumn = 0, z = 0;

    while (z++ < s.size())
        sum += (s[z - 1] - 48);

    while (true) {
        if (sum < 10)
            break;
        else {
            sumn = 0;
            while (sum > 0) {
                sumn += sum % 10;
                sum /= 10;
            }
            sum = sumn;
        }
    }
    cout << sum;
}
void solve5() {
    string x, y;
    cin >> x >> y;

    int z = 0, c = 0;
    while (z++ < x.size())
        if (x[z - 1] != y[z - 1])
            c++;
        cout << c;
}
void solve6() {
    string s;
    int c = 0, d = 0, z = 0;
    cin >> s;
    while (true) {
        if (s[z] == s[++z]) 
            c++;
        else 
            break;
    }
    while (z < s.size()) {
        d = 0;

        while (z < s.size()) {
            if (s[z] == s[++z]) 
                d++;
            else 
                break;
        }
        if (c != d) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
void solve7() {
    int x, z = 0, maxl = 0, maxch = 0, maxchi = 0;
    cin >> x;
    string s[x];

    while (z++ < x)
        cin >> s[z - 1];

    z = 0;
    while (z++ < x) {
        if (s[z - 1].size() >= s[maxl].size())
            maxl = z - 1;

        int y = 0;
        int sum = 0;
        while (y++ < s[z - 1].size())
            sum += (s[z - 1][y - 1] - 64);

        if (sum >= maxch) {
            maxch = sum;
            maxchi = z - 1;
        }
    }
    cout << s[maxchi] << "\n" << s[maxl];
}
void solve8() {
    string s, d;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);

    int z = 0, f = 0;
    while (z++ < s.size()) {
        if (s[z - 1] != 'a' && s[z - 1] != 'u' && s[z - 1] != 'o' && s[z - 1] != 'i' && s[z - 1] != 'e' && s[z - 1] != 'y') {
            d[f] = '.';
            d[f + 1] = s[z - 1];
            f += 2;
        }
    }
    z = 0;
    while (z++ < f)
        cout << d[z - 1];
}
void problem3() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp1 = 0, temp2 = 0, f = 0;
        int l;
        cin >> l;
        string x;
        cin >> x;
        for (int j = 0; j < x.length(); j++) {
            if (x[j] == 'U') 
                temp1 += 1;
            else if (x[j] == 'D') 
                temp1 -= 1;
            else if (x[j] == 'R')  
                temp2 += 1;
            else if (x[j] == 'L') 
                temp2 -= 1;
            if (temp1 == 1 && temp2 == 1) {
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if (f == 0) 
            cout << "NO\n";
    }
}
void solveE()
{
    string s, s2;
    cin >> s >> s2;
    int temp = 0;
    int temp2 = 0;
    int len1 = s.length(), len2 = s2.length();
    if (s[len1 - 1] == 'M')
        temp = 1;
    else if (s[len1 - 1] == 'L')
        temp = (len1)*2;
    else if (s[len1 - 1] == 'S')
        temp = len1 * -1;

    if (s2[len2 - 1] == 'M')
        temp2 = 1;
    else if (s2[len2 - 1] == 'L')
        temp2 = len2 * 2;
    else if (s2[len2 - 1] == 'S')
        temp2 = len2 * -1;

  // sec string
    if (temp > temp2)
        cout << ">" << "\n";
    else if (temp < temp2)
        cout << "<" << "\n";
    else
        cout << "=" << "\n";
    temp = 0;
    temp2 = 0;
}
void solve9() {
    string x, y = "heavy", z = "metal";
    cin >> x;
    long long h = -5, m, c = 0;

    for (int i = 0;; i++) {
        h = x.find(y, h + 5);

        if (h > -1) {
            m = x.length();

            for (int j = 0;; j++) {
                m = x.rfind(z, m - 1);

                if (m > -1 && m > h + 4)
                    c++;
                else 
                    break;
            }
        }else
            break;
    }
    cout << c;
}
void solve10() {
    string s;
    cin >> s;
    int z = 0, c = 0;
    
    while (z++ < s.size()) {
        if (s[z-1] == 'h' && c == 0) {
            c++;
            continue;
        }
        if (s[z-1] == 'e' && c == 1) {
            c++;
            continue;
        }
        if (s[z-1] == 'l' && c == 2) {
            c++;
            continue;
        }
        if (s[z-1] == 'l' && c == 3) {
            c++;
            continue;
        }
        if (s[z-1] == 'o' && c == 4) {
            c++;
            break;
        }
    }
    if (c == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
void solve11() {
    string s, d, r;
    int z = 0;

    cin >> s >> d;
    while (z++ < s.size()) {
        if (s[z - 1] == d[z - 1])
            r += '0';
        else
            r += '1';
    }
    cout << r;
}
#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans = 0;

int q(int x, int y) {
    int n = 0;
    memset(b, 0, sizeof b);

    for (int i = x; i <= y; i++) {
        b[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) n++;
    }
    return n;
}

int main() {
    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        ans += q(i, i);
        for (int j = i + 1; j < len; j++) {
            ans += q(i, j);
        }
    }
    cout << ans << endl;
    return 0;
}
void solve()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        a[i] = 2021;

    int k;
    int ans = -1;

    for (int i = 1; i <= 100000; i++)
    {
        int x = i;
        while (x)
        {
            int k = x % 10;
            a[k]--;
            x /= 10;
            if (a[k] == -1)
            {
                ans = i;
                break;
            }
        }
        if (ans != -1)
            break;
    }
    cout << ans - 1 << endl;
}
void solve()
{
    string s[100];
    unsigned int a[100][50];
    for (int i = 0;i<100;i++){
        cin>>s[i];
    }
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            a[i][j] = s[i][j] - '0';
        }
    }

    cout<<endl<<endl;
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int t = 1;
    int ans[50];
    int prod = 0,carry = 0;;
    for (int i = 49;i>=0;i--){
            prod = 0;
        for (int j = 0;j<100;j++){
            prod += a[j][i];
        }
        prod += carry;
        ans[i] = prod%10;
        carry = prod/10;

        cout<<t<<"-"<<prod<<"-"<<carry<<endl;
        t++;
    }
    cout<<carry;
    for(int i = 0;i<50;i++){
        cout<<ans[i];
    }
}
void solve()
{
    string s;
    cin>>s;
    int a[1000];
    for (int i = 0;i<=999;i++){
        a[i] = s[i] - '0';
    }
    long long int maxi = 1,num = 1;
    for (int i = 0;i<=987;i++){
        num = 1;
        for(int j = i;j<=i+12;j++)
            num *= a[j];
            if (num>maxi)
                maxi = num;
}
cout<<maxi;
//cout<<a[0];
}
void solve()
{
    int main()
{
  code();
 
  // tc
    {
       string s, m[N] ;
       cin>>s;
       int cnt=0  , cnt2=0  , cnt3=0   ;
       for(int i = 0 ; i <s.size() ; i++)
       {
        if(s[i] == '1')
        {
            cnt++;
        }
        else if(s[i] == '2')
        {
           cnt2++;
        }
        else if(s[i] == '3')
        {
           cnt3++;
        }

       }
       int i =0;
       while (cnt--)
       {
       m[i]='1';
       m[i+1]='+';
       i+=2;
     }
     while(cnt2--){
     m[i]='2';
       m[i+1]='+';
       i+=2;
     }
     while(cnt3--){
        m[i]='3';
       m[i+1]='+';
       i+=2;
     }
     for(int j = 0 ; j <s.size() ; j++)
       cout<<m[j];
     }


}
string ToCode(double n)
	{
		if (n == 0)
			return "0";
		string s = "";
		string a = "";
		while (n > 0)
		{
			a = to_string(((int)n % 2 == 0) ? 0 : 1);
			n = floor(n / 2);
			s = a + s;
		}
		return s;
	}

	int ToInt(string s)
	{
		int ans = 0;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] == '1')
				ans += pow(2, s.length() - i - 1);
		}
		return ans;
	}
string AddTime(string s, int n) {
		string a = "";
		a += s[0];
		a += s[1];
		string b = "";
		b += s[3];
		b += s[4];
		int h = atoi(a.c_str());
		int m = atoi(b.c_str());
		int t = h * 60 + m;
		t += n;
		int hour = t / 60 % 24;
		int min = t % 60;
		string ho = "";
		string mi = "";
		if (hour < 10)
			ho += "0";
		if (min < 10)
			mi += "0";
		ho += to_string(hour);
		mi += to_string(min);
		return ho + ":" + mi;
	}
	bool Divi_on_11(string s)
	{
		long long sum1 = 0;
		long long sum2 = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 == 0)
				sum1 += s[i] - '0';
			else
				sum2 += s[i] - '0';
		}
		if (sum1 == sum2)
		{
			return true;
			return 0;
		}
		long long ans = abs(sum1 - sum2);
		if (ans % 11 == 0)
			return true;
		return false;
	}
long long ToDec(string s,int syst)
	{
		int c = 0;
		long long ans = 0;
		for (int i = s.length() - 1; i >= 0;i--)
		{
			ans += pow(syst, c)*(s[i] - '0');
			c++;
		}
		return ans;
	}

	void Bubble_sort(int arr[], int size)
	{
		for (int i = 0; i < size - 1; i++)
			for (int j = 0; j < size - i - 1; j++)		
				if (arr[j] ==0)
					Swap(arr, j, j + 1);
	}

	char Compare(string s1, string s2)
	{
		if (s1.length() < s2.length())
			return '<';
		if (s2.length() < s1.length())
			return '>';
		for (int i = 0; i < s1.length(); i++)
		{
			if (s1[i] > s2[i])
				return '>';
			if (s1[i] < s2[i])
				return '<';
		}
		return '=';
	}
void SortString(string ar[],int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int i = 0; i < n - 1; i++)
				for (int j = 0; j < n - i - 1; j++)
					if (ar[j] > ar[j + 1])
					{
						string temp = ar[j];
						ar[j] = ar[j + 1];
						ar[j + 1] = temp;
					}
		}
	}

	string Sum(string a, string b)
	{
		vector <int> v1;
		vector <int> v2;
		for (int i = 0; i < a.length(); i++)
		{
			v1.push_back((a[i] - '0'));
		}
		for (int i = 0; i < b.length(); i++)
		{
			v2.push_back((b[i] - '0'));
		}
		reverse(v1.begin(), v1.end());
		reverse(v2.begin(), v2.end());
		int lenght;
		if (v1.size() > v2.size())
			lenght = v1.size() + 1;
		else
			lenght = v2.size() + 1;
		v2.reserve(lenght);
		v1.reserve(lenght);
		for (int ix = 0; ix < lenght; ix++)
		{
			v2[ix] += v1[ix]; 
			v2[ix + 1] += (v2[ix] / 10);
			v2[ix] %= 10; 
		}
		if (v2[v2.size() - 1] == 0)
			v2.erase(v2.end() - 1);
		reverse(v2.begin(), v2.end());
		string aa = "";
		for (int i = 0; i < v2.size(); i++)
			aa += to_string(v2[i]);
		return aa;
	}
    int main()
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			if (s.length() <= 10)
				cout << s << endl;
			else
			{
				cout << s[0];
				int cnt = 0;
				for (int j = 1; j < s.length() - 1; j++)
					cnt++;
				cout << cnt;
				cout << s[s.length() - 1] << endl;
			}
		}
		return 0;
	}
#include<bits/stdc++.h>
using namespace std;
void occurance()
{
    int n, flag=0;
    cin >> n;
    string s="ibrahim";
    for(int i=0; i<n; i++)
    {
        char x;
        cin >> x;
        if(x==s[i])
            flag=1;
        //if at least one char match,it will print 'YES'.
    }
    if(flag==1)
        cout<<"Yes";
    else
        cout<< "No";
    return 0;
}
void ASCI()
{
    int n;
    cin >> n;
    vector<char>vec(n);
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
        vec[i] = s[i];
    cout<< static_cast<int>(vec[n-1]);
}
void MakePattern()
{
    int n;
    cin >> n;
    char arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j]; 
    }
    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++) 
        {
            if(arr[i][j]==arr[i-1][j-1] && arr[i][j]==arr[i+1][j+1] && arr[i][j]==arr[i+1][j-1] && arr[i][j]==arr[i-1][j+1] && arr[i][j]=='#')
            {
                cout << i+1 << " " << j+1 ;
                return 0; 
            }
        }
    }
    cout << "Pattern not found";
    return 0;
}
void UniqueChar()
{
    int n;
    cin >> n;
    vector<char>vec;
    string s;
    cin >> s;
    int i=1, cur=0;
    while(i <= n)
    {
        if(s[cur] == s[i])
        {
            vec.push_back(s[i]);
            cur=i+1;
            i++;
        }
        i++;
    }
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
}
void IsPalindrome
{
    int n, k;
    cin >>n >>k;
    string s;
    cin >> s;
    if( k==0)
        cout << 1 ;
        //If k is zero, it outputs 1 because no changes are needed
        //to make a string of any length a palindrome. 
    else
    {
        bool ans=true;
        for(int i=0; i< n/2; i++)
        {
            if(s[i]!= s[n - i- 1])
            {
                ans = false;
                break;
            }
        }
        if(ans || n==1)
            cout<< 1;
        else
            cout<<2;
    }
}
void SwitchPattern()
{
    char c;
    int x, y;
    while(cin >> c >> x >> y)
    {
        if(x < y)
            swap(x, y);
        switch(c)
        {
            case ('R'):
            {
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<x; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
            case ('S'):
            {
                for(int i=0; i<y; i++)
                {
                    for(int j=0; j<x; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
            case ('T'):
            {
                for(int i=0; i<x; i++)
                {
                    for(int j=0; j<=i; j++)
                        cout<<"*";
                    cout<<"\n";
                }
                break;
            }
        }
    }
}
void ChangeFormat()
{
    string s;
    cin >>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>= 65 && s[i]<=90)
            s[i]+=32;
        else if(s[i]>=92 && s[i]<=122)
            s[i]-=32;
    }
    for(int i=0; i<s.size(); i++)
        cout << s[i];
}
void unique()
{
    string s;
    cin >>s;
    int i=0, cnt=0, flag=0;
    while(i < s.size())
    {
        if(s[i] == s[i+1])
            cnt++;
        else
            cnt=0;
        if(cnt >=6)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1)
        cout << "Yes";
    else
        cout << "No";
}
void CountDigit()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>=48 && s[i]<=57)
            cnt++;
    }
    cout << cnt;
    return 0;
}
void RemoveSubString()
{
    string a, b;
    int i=0;
    char ch=' ';
    cin >> a;
    int cnt=0;
    while(i < a.size())
    {
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B')
        {
            i +=3;
            cnt++;
        }
        else
        {
            if(b.size()!=0 && cnt!=0)
            {
                b+=ch;
                b+=a[i];
            }
            else
            {
                b+=a[i];
                i++;
                cnt=0;
            }
        }
    }
    cout << b;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include<iostream>
#include<stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0) 
	{
		f=0;
		n=-n;
	}
	string ans=""; 
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void solve( int n , string red , vector<string> red_or_blue)
{
    for(ll i = 0 ; i < n ; i++)
    {
        if(red_or_blue[i] == red)
        {
            cout << "R" <<ed;
            return;
        }
    }

    cout<< "B" <<ed;
}
string s;
	cin>>s;
	int count=0;
	int best=0;
	int i=0;
	int j=0;
	//cout<<s.size()<<endl;
	while(i<(s.size()-1))
	{
		if(s[i]==s[i+1])
		{
			count+=1;
			best=(best>count)?best:count;
			i++;
		}
		else{
			count=1;
			best=(best>count)?best:count;
			i++;
		}
       j++;
 
	}
 
	cout<<best<<endl;
	*/
	/*string s;
	cin>>s;
	//cout<<s.size()<<endl;
	int n=s.size();
	int count=0;int best=0;
	int i=0;
	while(i<n)
	{
 
		if(s[i]==s[i+1])
		{
 
			count+=1;
			best=max(best,count);
			i+=1;
		}
		else{
            if(s[i]==s[i-1]){
            count+=1;
			best=max(best,count);
			i++;
            }
		}
	}
	cout<<best<<endl;
-----
string s;
    //getline(cin,s);
    cin>>s;
    cout<<s<<endl;
    int k=s.length();
    cout<<k<<endl;
 
    bool answer =true;
    int z=k-1;
    for(int i=0;i<(k/2);i++)
    {
        if(s[i]!=s[z-i])
            answer=false;
    }
    cout<<answer<<endl;
-----
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;

    scanf("%d", &n);

    char* string = malloc(101);
    char* string1 = malloc(10000);
    char* string2 = malloc(10000);

    for(int i = 0; i <= n; i++) {

        gets(string);
        strcat(string1, string);

    }

    strcpy(string2, string1);
    strrev(string2);

    if(strncmp(string1 + 1, string2, strlen(string2) - 2) == 0)
        printf("YES");
    else
        printf("NO");


    return 0;

}
int main()
{
	#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ss second
#define ff first
int main(void)
{
        
       /*ll a,b,i,c=0,d=0;
       cin>>a>>b;
       string s;
       for(i=0;i<b;i++)
       {
              cin>>s;
              ll f=0;
              for(char x : s)
              if(x=='0')
              {
                f=1;
                break;
              }
              if(f)
              c++;
              else
              {
                d=max(c,d);
                c=0;
              }
       }
       d=max(c,d);
       cout<<d<<endl; */

           /*ll n,i,j=0;
           cin>>n;
           string s[101];
           for(i=0;i<n;i++)
           {
                if(i==n/2)
                s[0]+='D';
                else
                s[0]+='*';
          }
          ll c=3;
          for(i=1;i<n/2+1;i++)
          {
                ll f=0,c1=0;
                for(j=0;j<n;j++)
                {
                        if(s[i-1][j+1]=='D')
                        f=1;
                        
                        if(f)
                        {
                        s[i]+='D';
                        c1++;
                        }
                        else
                        s[i]+='*';
                        if(c1==c)
                        f=0;
                        
                        
               }
               c+=2;
        }
        for(i=0;i<n/2+1;i++)
        cout<<s[i]<<endl;
        for(i=n/2-1;i>=0;i--)
        cout<<s[i]<<endl;*/
        
        /

     /* */

        /*ll i,j,n;
        string s;
        cin>>s;
        s+="WUB";
        n=s.length();
        
        for(i=0;i<n;i++)
        {
                if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
                i+=2;
                else
                {
                        string p;
                        while(i<n && !(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'))
                        {
                                p+=s[i];
                                i++;
                         } 
                         i+=2;
                     cout<<p<<" ";
                }
       }
       cout<<endl;  */

     
      /*ll i,j=0,n;
      string s;
      cin>>s;
      n=s.length();
      for(i=0;i<n/2;i++)
      {
           if(s[i]!=s[n-1-i])
           j++;
      }
      if(!((n%2!=0 && j<=1) || (n%2==0 && j==1)))
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl; */
      /*string a,b;
      cin>>a;
      for(char x : a)
      {
        char p=x;
                if((x-'0')>4)
                {
                      p=('0'+('9'-x));
                }
                b+=p;
      }
      ll i=0;
      for(char x : b)
      {
                if(x!='0')
                {
                i=1;
                
                }
                else
                {
                        if(i==0)
                        {
                                cout<<9;
                                i=1;
                                continue;
                         }
                }                
                if(i)
                cout<<x;
      }*/
      
                /*string s;
                cin>>s;
                ll i,j=0,k=0,n;
                n=s.length();
                if(n%2)
                {
                        cout<<-1<<endl;
                        continue;
                }
                for(char x : s)
                {
                     if(x=='0')
                     j++;
                     else
                     k++;
                }
                cout<<abs(j-k)/2<<endl;      */
                 */
        
        ll t;
        cin>>t;
        while(t--)
        {
                string s;
                cin>>s;
                ll n=s.length();
                if(n>10)
                cout<<s[0]<<(n-2)<<s[n-1]<<endl;
                else
                cout<<s<<endl;
        }               
      
}              
// Bits ++
#include <iostream>
#include <string>


using namespace::std;
int main()
{
   
    int n,X=0;
    
    cin >> n;

    string s1="++X",s2="X++",s3="--X",s4="X--";
    
    while (n--)
    {
        string s;

        cin >> s;
        
        if (s==s1 || s==s2)
        {
            X=X+1;
        }
        else if (s==s3 || s==s4)
        {
            X=X-1;
        }
        
    }
    
    cout << X << endl;
    
    return 0;
}

//Black Square
/*
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace::std;
int main()
{
    
    int i,a[4],sum=0,n;
    
    for (i=0; i<4; i++)
    {
        cin >> a[i];
    }
    
    string s;
    
    cin >> s;
    
    n=s.length();
    
    for (i=0; i<n; i++)
    {
        if (s[i]=='1')
        {
            sum=sum+a[0];
        }
        else if (s[i]=='2')
        {
            sum=sum+a[1];
        }
        else if (s[i]=='3')
        {
            sum=sum+a[2];
        }
        else if (s[i]=='4')
        {
            sum=sum+a[3];
        }
    }
    
    cout << sum;
    
    
}
#include <iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace::std;
int main()
{
    int t,i,n;
    
    cin >> t;
    
    n=t;
    
    while (t--)
    {
        
        string s,s1;
        
        cin >> s;
        
        int a=s.length();
        
        if (a>10)
        {
            s1=s[0]+to_string(a-2)+s[a-1];
        }
        else if(a<=10)
        {
            s1=s;
        }
        
        cout << s1 << endl;
    }
}
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void solve( int n , string red , vector<string> red_or_blue)
{
    for(ll i = 0 ; i < n ; i++)
    {
        if(red_or_blue[i] == red)
        {
            cout << "R" <<ed;
            return;
        }
    }

    cout<< "B" <<ed;
}
int main()
{
  code();
    int cnt = 0; 
   tc
    {
       string s;
       cin>>s ;
      
        if(s[0] == '+')
        {
            ++cnt;
        }
              if(s[2] == '+')
        {
            cnt++;
        }
                if(s[0] == '-')
        {
            --cnt;
        }
              if(s[2] == '-')
        {
            cnt--;
        }
     }
     cout<<cnt;

} */
#include<iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, sf;
        cin >> s;
        sf = s.substr(0, 6);
        string home;

        int t = (s[0] - '0') * 10 + (s[1] - '0');

        if (t == 33)
            home = "zhejiang,";
        else if (t == 11)
            home = "beijing,";
        else if (t == 71)
            home = "Taiwan,";
        else if (t == 81)
            home = "Hong Kong,";
        else if (t == 82)
            home = "Macao,";
        else if (t == 54)
            home = "Tibet,";
        else if (t == 21)
            home = "Liaoning,";
        else if (t == 31)
            home = "shanghai,";

        cout << "He/She is from " << home;
        cout << "and his/her birthday is on "
             << s[10] << s[11] << "," << s[12] << s[13] << "," << s[6] << s[7] << s[8] << s[9]
             << " based on the table." << endl;
    }
}
int main()
{
    int n, t;
    string home, a;
    
    cin >> n;
    
    for (int k = 0; k < n; k++)
    {
        cin >> a;
        t = (a[0] - '0') * 10 + a[1] - '0';
        
        switch (t)
        {
            case 11: home = "Beijing"; break;
            case 31: home = "Shanghai"; break;
            case 21: home = "Liaoning"; break;
            case 33: home = "Zhejiang"; break;
            case 54: home = "Tibet"; break;
            case 71: home = "Taiwan"; break;
            case 81: home = "Hong Kong"; break;
            case 82: home = "Macao"; break;
            default: break;
        }
        
        cout << "He/She is from " << home << ", and his/her birthday is on "
             << a[10] << a[11] << "," << a[12] << a[13] << "," << a[6] << a[7] << a[8] << a[9]
             << " based on the table." << endl;
    }
    return 0;
}
int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		
		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++) 
		{
			if(s[i]<0) ans++; 
		}
		cout<<ans/2<<endl;
	}
	return 0;
}
#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;
		
	}
	
	return 0;
}
*

#include<iostream>
#include<stdio.h> 
#include<cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A'; 
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';	
		}
		cout<<s<<endl;
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			} 
		}
		cout<<endl;
	}
	return 0;
}



#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else 
				{
					cout<<"no"<<endl;
					break;
				}	
				if(c+1==l) 
				{
					cout<<"yes"<<endl;
				}
			}			
		}
		else cout<<"no"<<endl;
	}
	return 0;
}
#include<iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl; 
	}
	return 0;
}


#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
#include<iostream>
#include<sstream>
#include<string>
#include<set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
} 
*

#include<iostream>
#include<string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
int countstring(string s){
    if(s.length()==3){
        int a=countstring(s.substr(0,s.length()/2));
        int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
        if(s[0]==s[1]){
            return a+b+1;
        }else{
            return a+b;
        }
    }
    if(s.length()==2){
        if(s[0]==s[1]){
            return 1;
        }else{
            return 0;
        }
    }
    if(s.length()==1){
        return 0;
    }
    int a=countstring(s.substr(0,s.length()/2));
    int b=countstring(s.substr(s.length()/2,s.length()-s.length()/2));
    
    return a+b;
}
----
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
-----
string s;
      cin>>s;
      if( s.size() > 10)
      {
        for(ll i = 0 ; i < s.size() ; i++)
        {
            cout<<s[0] << s.size() - 2 << s[s.size()-1]<<ed;
            break;
        }
      }
      else
      {
        cout<<s<<ed;
      }
   }
------
int Q12()
{
    int s,ca,cd;

  string str;
    cin>>s;
    cin>>str;
    while(s)
    {
        s--;
        if(str[s]=='D')
            cd+=1;
        else if(str[s]=='A')
            ca+=1;
    }
       if(cd>ca)
        cout<<"Danik";
    else if(ca>cd)
        cout<<"Anton";
    else if(ca==cd)
        cout<<"Friendship";
}
int main()
{
    string s1,s2;
 cin>>s1>>s2;
 for(int i=0; i<s1.length() ; i++ )
 {
     s1[i] = tolower(s1[i]);
     s2[i] = tolower(s2[i]);
 }
 if(s1>s2)
    cout<<"1";
 else if(s1<s2)
    cout<<"-1";
 else
    cout<<"0";
}
int main()
{
    int check[26] ={0} , ans = 0 ,len ;
char str[100] ={'0'};
//scanf("%s",&str);
//scanf("%s",&str)==1
 while(scanf("%s",&str))
 {
     int temp = 0 ;
     len = strlen(str);
     for(int i=0;i<len;i++)
     {
         temp = str[i] - 97 ;
         check[temp]++ ;
     }

  for(int j=0 ; j<26 ; j++)
     {
         if(check[j]>=1)
            ans++;

     }

if(ans%2==0)
     printf("CHAT WITH HER!\n");
else
     printf("IGNORE HIM!\n");

    return 0;
}
int main()
{
    string s ;
int l=0 , n = 0 ;
cin >> s ;
for(int i=0 ; i< s.length() ; i ++ )
{
    if(s[i]>= 65 && s[i]<= 90 )
        l++;
    else
        n++;
}
if(l>n)
{   for(int i=0 ; i< s.length() ; i ++ )
    {
        s[i]=toupper(s[i]);

    }
    cout<<s;
}
else
{
    for(int i=0 ; i< s.length() ; i ++ )
    {
        s[i]=tolower(s[i]);

    }
    cout<<s;
}
}
int main()
{
    int s ,c = 0 ;
string s_old ,s_new ;
cin >>s ;
cin>>s_old;
c=1;
for(int i = 0 ; i < s-1 ; i++)
{    cin>>s_new ;
        if(s_new != s_old)
        {
            c++;
            s_old = s_new ;
        }
}
cout<<c ;
}
int main()
{
    int x , c = 0;
string str ;
cin >> x ;
cin >> str ;
for(int i = 0 ; i < (x - 1) ; ++i ){
    if( str[ i ] == str [ i + 1 ])
        c++ ;
}

cout<<c;
}
int main()
{
string str ;
int  s[4] ={0} , c = 0, temp = 0;
for (int i = 0 ; i < 4 ; i ++ ) {
    cin >> s[ i ] ;
}
cin >> str ;
for (int i = 0 ; i < str.length() ; i ++ ){

    if (str[ i ] == '\0') break ;

  temp =  str[i] - '0' ;
    c+= s[temp - 1];
}
cout << c  ;
}
int main()
{
char ch='a' ;
int c = 0 ;
string  str ;
cin >>str ;
    for (int i = 0 ; i < str.length() ; ++i ){
     //    cout<<"character number "<< i << " " <<(ch - str [ i ]) <<endl ;
         if ((ch - str [ i ])<= -13 ){  // -25 < -13
                c+= 26 + (ch - str [ i ]) ;
                ch = str[ i ] ;
         }
         else if ((ch - str [ i ])> -13 && (ch - str [ i ]) <= -1 ){  //   -13 < (ch - str [ i ]) <= -1
                c+=(ch - str [ i ]) *-1 ;
                ch = str[ i ] ;
         }
         else if ((ch - str [ i ]) > 13 ){

                c+= 26 - (ch - str [ i ]);
                ch = str[ i ] ;
         }
         else {
                c+= (ch - str [ i ]);
                ch = str[ i ] ;
         }



    }
    cout << c ;
}
int main()
{
    string s;
    char p='a';
    int cnt=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if((abs(s[i]-p))>13)
            cnt+=(26%(abs(s[i]-p)));
        else
            cnt+=(abs(s[i]-p));
        p=s[i];
    }
    cout<<cnt;
}

