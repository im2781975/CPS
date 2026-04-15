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
/*
 * p1.cpp
 *
 *  Created on: Oct 24, 2014
 *      Author: Ayman Mostafa
 */

#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
//int c=0,odd=0;
void hanoi(int n,char from ,char to ,char use) {
if(n>0)
{
    hanoi(n-1,from,use,to);
    cout<<"move from "<<from<<" to "<<to<<endl;
    hanoi(n-1,use,to,from);
}
}
int fact(int x)
{
    if(x==1) return 1;
    return fact(x-1)*x;
}
/*int res(int x)
{
    if (x==1) return (c);
    c++;
    x=x/10;
    return(res(x));
}*/
/*int req(int cra,int loa)
{
        //if(loa==1) return cra;
     //   if(cra==loa) return (pow(2,c)+odd);
     //   if(cra+odd+1==loa) return (pow(2,c-1)+odd);
    //  if(cra+odd==loa) return pow(2,c);
    if(cra==loa) return pow(2,c);
    if(cra<=loa&&odd>loa) return ((pow(2,c))+(odd/loa)+(odd%loa));
    if(cra<=loa&&odd<=loa) return ((pow(2,c))+1);

        if(cra%2==0)
        {
            cra=cra/2;
            c++;
        }
        else{
            cra=(cra+1)/2;
            c++;
            odd++;
        }
        req(cra,loa);
}*/
/*int rev(int n)
{
    if(n==0) return odd;
     odd=rev(n/10)+(n%10)*pow(10,c++);
}*/
void bea(int **x,int n)
{
    int s=0,k=0,m=0;
    for(int i=n-1;i>=0;i--,s=0,m++)
    {
        while(s<pow(3,n))
        {
            for(k=0;k<pow(3,m);k++) x[s++][i]=1;
            for(k=0;k<pow(3,m);k++) x[s++][i]=2;
            for(k=0;k<pow(3,m);k++) x[s++][i]=3;
        }
    }
}
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
void swaplong(long *x,long *y)
{
    long t=*x;
    *x=*y;
    *y=t;
}
struct x{
    char y[100];
    int z;
};
int gcd(int y,int z){
	if(z>y) swap(&z,&y);
	if(y==z) return y;
    for(int i=z;i>0;i--)
    {
        if(y%i==0&&z%i==0) return i;
    }
}
int check(int y)
{
    int f=y,z=y,dd=0;
    do{
        y=f;
        f=0;
        while(y>0)
        {
            f+=((y%10)*(y%10));
            y/=10;
        }
     if(f==1) return 1;
        if(f==z) return 0;
        dd++;
    }while(dd<1000);
    return 0;
}
int lcm(int x,int y)
{
	for(int i=y;i<=x*y;i++)
	{
		if(i%x==0&&i%y==0) return i;
	}
	return -1;
}
int luck(int x)
{
	int y[]={4,7,47,74,444,447,474,477,744,747,774,777};
	for(int i=0;i<12&&y[i]<=x;i++)
	{
		if(x%y[i]==0) return 1;
	}
	return 0;
}
int binary (int x)
{
	int c=0;
	while(x>0)
	{
		if(x%2==1) c++;
		x/=2;
	}
	return c;
}
int hex(int x)
{
	int y=0,i=0;
	while(x>0)
	{
		y+=((x%10)*pow(16,i++));
		x/=10;
	}
	return binary(y);
}
int getGCD(int a, int b)
{
	while( 1 )
	    {
	        a = a % b;
			if( a == 0 )
				return b;
			b = b % a;

	        if( b == 0 )
				return a;
	    }
}
string caps (string s)
{
	int z=0;
	while(z++<s.size())
	{
		if(s[z-1]>=65&&s[z-1]<=90) s[z-1]+=32;
		else s[z-1]-=32;
	}
	return s;
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("in.txt", "rt", stdin);
#endif
    //hanoi(2,'A','C','B');
    /*int x=0,y=0;
    while(y++<5){cin>>x;
    cout<<fact(x)<<endl;
    }*/
    //-------------------------------------------------------------------------------------------------------------------
/*  int x=0,z=0;
    while(z++<10){
        cin>>x;
        c=1;
        cout<<res(x)<<endl;
    }*/
    //-------------------------------------------------------------------------------------------------------------------
    /*int x=0,y=0,z=0;
    while(z++<10)
    {
        cin>>x;
        cin>>y;
        c=0;
        odd=0;
        cout<<req(x,y)<<endl;
    }*/
    //-------------------------------------------------------------------------------------------------------------------
    /*    int n=0;
        while(cin>>n)
        {
            int d=pow(3,n);
            int **x = new int*[d];
    for(int w = 0; w < d; ++w)
        x[w] = new int[5];
            bea(x,n);
                for(int r=0;r<pow(3,n);r++)
                {
                    for(int c=0;c<n;c++)
                        cout<<x[r][c];
                    cout<<"\n";
                }
    for(int q = 0; q < d ; ++q)
        delete(x[q]);
    delete [] x;
    cout<<endl;
}*/
    //-------------------------------------------------------------------------------------------------------------------
        /*c=0,odd=0;
            cout<<req(1024,5);*/
    //-------------------------------------------------------------------------------------------------------------------
        /*  c=0,odd=0;
            cout<<rev(524130);*/
    //-------------------------------------------------------------------------------------------------------------------
    /*int x[5],y=5;
    while(y-->0) cin>>x[y];
    for(int j=0;j<5;j++)
    {
        int min=j;
        for(int i=j+1;i<5;i++)
            if(x[i]<x[min]) min=i;
        swap(x[min],x[j]);
    }
    cout<<x[2]<<endl;*/
    //----------------------------------------------
    /*int x,z,c=0,f=0;
    cin>>x;
    int *y=new int [x];
    z=x;
    while(z-->0) cin>>y[f++];
    z=x;
    f=0;
    while(z-->1)
    {
        if(y[f]<y[f+++1]) continue;
        else {c=-1; break;}
    }
    if(c==0) cout<<"Ordered\n0\n";
    else{
        c=0;
        for(int i=0;i<x-1;i++)
            for(int j=0;j<(x-1)-i;j++)
                if(y[j]>y[j+1]){swap(y[j+1],y[j]); c++;}
        f=1;
        cout<<y[0];
        while(x-->1) cout<<" "<<y[f++];
        cout<<endl<<c<<endl;
    }*/
    //--------------------------------------------
    /*int x=0,z=0,m=0,c=0;
    cin>>x;
    z=x;
    char *y=new char[x];
    while(z-->0&&++m)
    {
        int f=0,s=x;
        while(s-->0) {cin>>y[f++]; if(y[f-1]=='#') {cout<<m<<" "<<f<<endl; c++;}}
    }
    if(c==0) cout<<"No hiding places"<<endl;
    else cout<<c<<endl;*/
    //-----------------------------------------------
    /*unsigned long long z,x,y,c,m,s;
    cin>>x;
    while(x-->0)
    {
        cin>>y;
        c=0;
        m=1;
        s=y;
        while(y-->0)
        {
            cin>>z;
            if(z%2==0&&m%2==0) c++;
            if(z%2!=0&&m%2!=0) c++;
            m++;
        }
        if(c==s) cout<<"YES\n";
        else cout<<"NO\n";
    }*/
    //------------------------------------------
    /*int n,m,z,c,f,po;
    while(cin>>n>>m&&n>0&&m>0)
    {
        c=0,f=0;
        while(n-->0)
        {
            cin>>z;
            if(z==m)
            {
                if(c==0) po=f;
                c++;
            }
            f++;
        }
        if(c==0) cout<<"-1"<<endl;
        else cout<<c<<" "<<po<<endl;
        //----------------------------------------------------
    }*/
      /*int x;
      cin>>x;
      int z=0;
      char *y=new char[x];
       double *f=new double[x+1];
      while(z++<x) cin>>y[z-1];
      z=0;
      while(z++<=x) cin>>f[z-1];
      z=0;
      while(z++<x)
      {
          switch(y[z-1]){
          case('+'): f[z]=f[z-1]+f[z]; break;
          case('-'): f[z]=f[z-1]-f[z]; break;
          case('*'): f[z]=f[z-1]*f[z]; break;
          case('/'): f[z]=f[z-1]/f[z]; break;
          }
      }
      printf("%0.2f\n",f[x]);*/
//-------------------------------------------------------------
      /*char x[10][10],y;
      int c=0;
      for(int i=0;i<10;i++)
      {
          c=0;
          for(int j=0;j<10;j++)
          {
              cin>>y;
              x[i][j]=y;
              if(y=='*') c++;
          }
          if(c==10){cout<<"YES\n"; return 0;}
      }
      for(int i=0;i<10;i++)
            {
              c=0;
              for(int j=0;j<10;j++)
                  if(x[j][i]=='*') c++;
              if(c==10){cout<<"YES\n"; return 0;}
            }
      cout<<"NO\n";*/
//----------------------------------------------------------------
      /* int m,s=0,w=0;
       char r;
       cin>>m;
       struct x f[1000];
       while(s++<m)
       {
           cin>>f[s].y>>f[s].z;
       }
       cin>>r;
       s=0,w=0;
       while(s++<m)
       {
           if(f[s].y[0]==r) w+=f[s].z;
       }
       cout<<w<<endl;*/
//------------------------------------------------------------
      /* int x,z,f,c=0,h=100001;
       cin>>x;
       int y[h];
       z=0;
       while(z++<h) y[z-1]=-1;
       z=0;
       while(z++<x)
       {
    	   cin>>f;
    	   y[f]=f;
       }
       z=0;
              while(z++<h)
              {
           	   if(y[z-1]==-1) continue;
           	   else{
           		   c++;
           	   }
              }
       z=0;
       cout<<c<<endl;
       while(z++<h)
       {
    	   if(y[z-1]==-1) continue;
    	   else{
    		   cout<<y[z-1];
    		   f=z-1;
    		   break;
    	   }
       }
       z=0;
       while(z++<h)
       {
    	   if(y[z-1]==-1||z-1==f) continue;
    	   else cout<<" "<<y[z-1];
       }
       cout<<endl;*/
//-----------------------------------------------------------
       /*int x;
       cin>>x;
       char *y=new char[x];
       int *s=new int[x];
       int *r=new int [x];
       int z=0,i=0,h=26;
       char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
       while(z++<x) cin>>y[z-1];
       for(z=0;z<x;z++)
    	   for(i=0;i<h;i++)
    		   if(y[z]==a[i])
    			   s[z]=i+1;
       i=x;
       for(z=0;z<x;z++)
       {
    	   int max=0;
    	   for(h=0;h<x;h++)
    		   if(s[h]>=s[max])
    			   max=h;
    	   r[max]=i--;
    	   s[max]=0;
       }
       z=1;
       cout<<r[0];
       while(z++<x) cout<<" "<<r[z-1];
       cout<<endl;*/
//-----------------------------------------------------------
    /*char x[1000][1000];
       int r,c,minr,minc,min,p=0,i,j;
       cin>>r>>c;
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
               cin>>x[i][j];
       for(i=0;i<r;i++)
           for(j=0;j<c;j++)
           {
               if(x[i][j]=='E')
               {
                   if(p==0)
                   {
                       min=(i-1)+(j-1);
                       minr=i+1,minc=j+1;
                       p++;
                   }
                   else{
                       if(min>((i-1)+(j-1)))
                       {
                           min=(i-1)+(j-1);
                           minr=i+1,minc=j+1;
                       }
                   }
               }
           }
       if(p==0) cout<<"-1"<<endl;
       else cout<<minr<<" "<<minc<<endl;*/
//----------------------------------------------------------------
/*long long x=0,z=0,f=0,ie=-1,io=-1,so=0,se=0;
      cin>>x;
      long long *e=new long long [x];
      long long *o=new long long [x];
      while(z++<x)
      {
          cin>>f;
          if(f%2==0) e[++ie]=f;
          else {
             o[++io]=f;
          }
      }
      z=0;
      if(io>-1){cout<<o[io];
      so++;
      while(io-->0){
          cout<<" "<<o[io];so++;}}
      z=0;
      if(ie>-1){
          if(so>0) cout<<" ";
          cout<<e[z];
          se++;
      while(z++<ie){
          cout<<" "<<e[z]; se++;}}
      z=0;
      cout<<endl;*/
//-------------------------------------------------------
      /*unsigned long long x,y;
      cin>>x;
      y=x*365*24*60;
      cout<<y<<endl;*/
//---------------------------------------------------
    /*  int x,y,z;
      cin>>x;
      while(x-->0){
          cin>>y>>z;
          int *a=new int [z];
          int f=0,s=0,c=0;
          while(s++<z) cin>>a[s-1];
          for(int j=0;j<z;j++)
                    {
                        int min=j;
                        for(int i=j+1;i<z;i++)
                            if(a[i]<a[min]) min=i;
                        swap(a[min],a[j]);
                    }
         // cout<<a[0]<<" "<<a[z-1]<<endl;
          s=0;
          while(s++<z)
          {
              if(f+a[s-1]<=y)
              {
                  f+=a[s-1];
                  c++;
              }
              else break;
          }
          cout<<c<<" "<<f<<endl;
      }*/
//---------------------------------------------------------------
     /* char c;
      int x,y;
      while(cin>>c>>x>>y){
          if(x<y) swap(&x,&y);
          switch(c){
          case('R'):{
              for(int i=0;i<y;i++)
                  {for(int j=0;j<x;j++)
                      cout<<"*";
                   cout<<endl;
                  }
              break;
          }
          case('S'):{
                      for(int i=0;i<y;i++)
                          {for(int j=0;j<x;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          case('T'):{
                      for(int i=0;i<x;i++)
                          {for(int j=0;j<=i;j++)
                              cout<<"*";
                           cout<<endl;
                          }
                      break;
                  }
          }
      }*/
//----------------------------------------------------------------------
      /*int x[12];
      int y=0;
      while(y++<12) cin>>x[y-1];
      cin>>y;
      int min=22,mini=0,minj=0,i=0,j=0,po=0;
      for(i=0;i<11;i++)
      {
          for(j=i+1;j<12;j++)
          {
              if(x[i]+x[j]>y)
              {
                  po++;
                  if(((i-0)+(j-0))<min)
                  {
                      min=(i-0)+(j-0);
                      mini=i;
                      minj=j;
                  }
              }
          }
      }
      if(po==0) cout<<"NULL";
      else cout<<mini+1<<" "<<minj+1;*/
      /*char x[10];
      int f=0,y=0;
      cin>>x;
      while(y++<10)
          if(x[y-1]=='F')
              f++;
      if(f==1||f==2||f==5||f==8||f==9)
          cout<<"NO"<<endl;
      else
          cout<<"YES"<<endl;*/
//------------------------------------------------------------
      /*long double l=0,r=0,x=0,y=0;
      cin>>l>>r;
      if(l<1||r<1) return 0;
      x=l*l;
      y=.5*r*r;
      if(x<=y) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;*/
//----------------------------------------------------------
/*long long x[3],c=0;
      int y=0;
      while(y++<3) cin>>x[y-1];
      y=0;
      int min=0;
      while(y++<3){
    	  if(x[min]>x[y]) min=y;
      }
      int ff=0;
      float ffs=x[min],sds=10;
      while(ffs>10)
      {
    	  ffs/=10;
    	  ff++;
      }
      ffs=pow(sds,ff-1);
      y=0;
      while(y++<3) x[y-1]-=ffs;
      while(true){
          if(x[0]==x[1]&&x[0]==x[2])
          {
              c=c+x[0];
              break;
          }
           if(x[0]>x[1]&&x[0]>x[2])
      {
          swap(x[0],x[2]);
          if(x[0]>x[1])
              swap(x[0],x[1]);
      }
      if(x[0]>x[1]&&x[0]<=x[2])
      {
          swap(x[0],x[1]);
      }
      if(x[0]>x[2]&&x[0]<=x[1])
            {
              swap(x[0],x[2]);
            swap(x[1],x[2]);
            }
      if(x[0]<=x[1]&&x[0]<=x[2]&&x[1]>x[2])
           {
              swap(x[2],x[1]);
           }
      if(x[0]==0&&x[1]==0) break;
          if(x[0]+x[1]+x[2]>3)
          {
              x[2]-=2;
              x[1]-=1;
              c++;
          }
          else{
              if(x[0]+x[1]+x[2]==3)
              {
                  c++;
                 break;
              }
              else break;
          }
      }
      cout<<c+ffs<<endl;*/
//-----------------------------------------------------------
      /*int x;
      cin>>x;
      char y[1000][3];
      char *z=new char[x];
      int f=0,gr=0,pi=0,green=0,pink=0;
      for(int s=0;s<x;s++)
      {
          for(int ss=0;ss<3;ss++)
              cin>>y[s][ss];
      }
      for(int r=0;r<x;r++)
      {
          int g=0,rr=0;
          if(pi==5)
          {
              z[f++]='g';
              r++;
              green++;
              pi=0;
          }
          if(gr==5)
                  {
                      z[f++]='p';
                      r++;
                      pink++;
                      gr=0;
                  }
          for(int c=0;c<3;c++)
          {
              if(y[r][c]=='G')
              {
                  g++;
                  break;
              }
              if(y[r][c]=='B')
                          {
                              rr++;
                          }
          }
          if(g==1)
          {
              z[f++]='g';
              gr++;
              green++;
          }
          if(rr==3){
              z[f++]='p';
              pi++;
              pink++;
          }
      }
      gr=0;
      cout<<pink*3<<" "<<green*3<<endl;
      while(gr++<x)
      {
          if(z[gr-1]=='g') cout<<"Green"<<endl;
          if(z[gr-1]=='p') cout<<"Pink"<<endl;
      }
*/

//------------------------------------------------------------------
    /* int n=0,x=0,c=0,s=0;
     char y[3];
     cin>>n;
     while(c++<n)
     {
    	 cin>>y;
    	 s=0;
    	 while(s++<2)
    	 {
    		 if(y[s-1]=='+'){
    			 x++;
    			 break;
    		 }
    		 if(y[s-1]=='-'||y[s-1]=='�'){
    		     			 x--;
    		     			 break;
    		     		 }
    	 }
     }
     cout<<x<<endl;*/
//-------------------------------------------------------------------
    /*int x;
	cout<<"enter no. of programs\n";
	cin>>x;
	float *arr=new float [x];
	float *bur=new float [x];
	float *burw=new float [x];
	bool *boo=new bool [x];
	float *fin=new float [x];
	int z=0;
	while(z++<x)
	{
		cout<<"enter the arrival time of p"<<z<<endl;
		cin>>arr[z-1];
		cout<<"and its burst time\n";
		cin>>bur[z-1];
	}
	cout<<"enter the fixed time:\n";
	int q=0;
	cin>>q;
	z=0;
	float sum=0;
	while(z++<x)
	{
		sum+=bur[z-1];
		burw[z-1]=bur[z-1];
		fin[z-1]=-1;
	}
	int c=0,min=0,mini=0;
	while(c<sum)
	{
		z=0;
		while(z++<x)
		{
			if(arr[z-1]<=c&&fin[z-1]==-1)
			{
				boo[z-1]==true;
			}
		}
		min=-1,z=0;
		while(z++<x)
		{
			if(min>bur[z-1]&&boo[z-1]==true)
			{
				mini=z-1;
				min=bur[z-1];
			}
		}
		if(bur[mini]>=q)
		{
			burw[mini]-=q;
		}
		else
		{
			burw[mini]=0;
		}
		if(bur[mini]==0)
		{
			fin[mini]=c;
		}
	}
	z=0;
	while(z++<x)
	{
		float fff=fin[z-1]-arr[z-1];
		cout<<"T(a) of p"<<z-1<<" = "<<fff;
		cout<<"\nT(w) of p"<<z-1<<" = "<<fff-bur[z-1]<<endl;
	}*/
//--------------------------------------------------------------
/* long long n,y,max=1,c=0;
    cin>>n>>y;
    long long x=n;
    while(x<=y)
    {
    	n=x;
    	c=1;
    	 while(n>1)
    	    {

    	    	if(n%2!=0) n=3*n+1;
    	    	else n=n/2;
    	    	c++;
    	    }
    	 if(c>max) max=c;
    	 x++;
    }
    cout<<max;*/
//----------------------------------------------------------------
   /* int x,z=1,h=0,l=0,y,f;
    cin>>x;
    cin>>y;
    while(z++<x)
    {
    	cin>>f;
    	if(f>y) h++;
    	if(f<y) l++;
    	y=f;
    }
    cout<<h<<" "<<l;*/
//-------------------------------------------------------------------
     /*float y=0,z[3],sum=0;
     int x=0;
     while(x++<4)
     {
    	 cin>>y;
    	 sum=sum+y;
     }
     int min=0;
     x=0;
     while(x++<3)
     {
    	 cin>>z[x-1];
    	 if(z[min]>z[x-1]) min=x-1;
     }
     x=0;
     float f=0;
     while(x++<3)
     {
    	 if(x-1==min) continue;
    	 f+=z[x-1];
     }
     sum+=f/2;
     if(sum>=90) {cout<<"A"; return 0;}
     if(sum>=80&&y<90) {cout<<"B"; return 0;}
     if(sum>=70&&y<80) {cout<<"C"; return 0;}
     if(sum>=60&&y<70) {cout<<"D"; return 0;}
     if(sum<60) {cout<<"F"; return 0;}*/
//-------------------------------------------------------------------------
    /*int x;
while( cin>>x){

     int l[x],r[x];
     int z=0,c=0;
     while(z++<x) cin>>l[z-1];
     z=0;
     while(z++<x) cin>>r[z-1];
     for(z=0;z<x;z++)
     {
    	 int m=0;
    	 for(int f=0;f<x;f++)
    	 {
    		 if(l[z]==r[f])
    		 {
    			 r[f]=0;
    			 m++;
    			 break;
    		 }
    	 }
    	 if(m==0) c++;
     }
     cout<<c;}*/
//---------------------------------------------------------------------------------------
     /*int n,b;
     cin>>n>>b;
     int res=n/b;
     int x[3]={abs(res-1)*b,res*b,(res+1)*b};
     int y[3]={abs(n-(abs(res-1)*b)),abs(n-(res*b)),((res+1)*b)-n};
     int z=0,min=0;
     while(z++<2)
     {
    	 if(y[z]<y[min]) min=z;
    	 if(y[z]==y[min])
    	 {
    		 if(x[z]>x[min]) min=z;
    	 }
     }
     cout<<x[min];*/
//---------------------------------------------------------------------------------------------
     /*int n,v,x,m;
     cin>>n>>v;
     int yy[n],d=0;
     while(d++<n) yy[d-1]=1;
     for(int i=0;i<n;i++)
     {
    	 cin>>x;
    	 for(int j=0;j<x;j++)
    	 {
    		 cin>>m;
    		 if(v>m) yy[i]=0;
    	 }
     }

     int z=0,c=0,r=-1;
     while(z++<n)
     {
    	 if(yy[z-1]==0) c++;
    	 if(c==1&&r==-1) r=z-1;
     }
     cout<<c<<endl;
     if(c>0) cout<<r+1;
     z=0;
     while(z++<n)
     {
    	 if(z-1==r) continue;
    	 if(yy[z-1]==0) cout<<" "<<z;
     }*/
//------------------------------------------------------------------------------------------------------------
    /* int t,k,n,z=0;
     cin>>n>>k>>t;
     while(z++<n)
     {
    	 if(t>=k)
    	 {
    		 if(z==n) {cout<<k;
    		 t=t-k;}
    		 else{cout<<k<<" ";
    		 t=t-k;
    		 }
    	 }
    	 else{
    		 if(t>0)
    		 {
    			 if(z==n) {cout<<t;
    			     		 t=t-t;}
    			     		 else{cout<<t<<" ";
    			     		 t=t-t;
    			     		 }
    		 }
    		 else{
    			 if(z==n) {cout<<"0";
    			     		}
    			     		 else{cout<<"0"<<" ";

    			     		 }
    		 }
    	 }
     }*/
//--------------------------------------------------------------
   /*  int x,y,z,g,f=0;
     char c;
     cin>>x;
     while(f++<x)
     {
    	 cin>>y>>c>>z;
    	 if(y%z==0) { if(f==x) cout<<y/z;
		 else cout<<y/z<<endl;}
    	 else{
    	 if(z==1)
    	 {
    		 if(f==x) cout<<y;
    		 else cout<<y<<endl;
    	 }
    	 else{
    		 if(y==1)
    		 {
        		 if(f==x) cout<<y<<c<<z;
        		 else cout<<y<<c<<z<<endl;
    		 }
    		 else{
    			 if(y<z)  g=gcd(z,y);
    			 else g=gcd(y,z);
        		 if(f==x) cout<<y/g<<c<<z/g;
        		 else cout<<y/g<<c<<z/g<<endl;
    		 }
    	 }
     }}*/
//-----------------------------------
     /* long long n,p=0,z=0,f=0,k=0;
     cin>>n;
     char *c=new char[n];
     cin>>c;
     while(z++<n)
    	 if(c[z-1]!='*') p++;
     z=0,f=1,k=20-p;
     while(z++<n-p) f=f*k--;
     cout<<f;*/
//----------------
     /*unsigned long long m,n,x;
     cin>>n>>m;
     x=m%n;
     if(x==0) cout<<"Yes";
     else cout<<"No";*/
//------------------------
    /* int x,y;
     cin>>x>>y;
     cout<<x+y;*/
//------------
    /* unsigned long long x,y;
     cin>>x;
     y=x*x;
     cout<<y;*/
//------------
/* int x,z=0,y;
  cin>>x;
  while(z++<x)
  {
      cin>>y;
      if(check(y)==1)
      {
          if(z==x) cout<<"Intelligent";
          else cout<<"Intelligent"<<endl;
      }
      else{
          if(z==x) cout<<"Stupid";
           else cout<<"Stupid"<<endl;
      }
  }*/
  //--------------------------------------
 /* long long z,f=0;
sd: while( cin>>z)
{
  for(long long  y=2;y<35;y++)
  {
   f=0;
   for(long long  x=2;x<=y&&f<z;x++)
   {
       f=pow(x,y)+pow(y,x);
       if(f==z){
           cout<<"YES"<<endl<<x<<" "<<y<<endl;
          goto sd;
       }
   }
  }
  cout<<"NO"<<endl;}*/
  //----------------------------------------
  /* int x;
   cin>>x;
   int z[x];
   int d=0,f=0,m=0,n=0,first=0,last=0,i=0,sum=0;
   while(d++<x) cin>>z[d-1];
   cin>>f;
   d=0;
   while(d++<f)
   {
	   sum=0;
	   cin>>m>>n;
	   if(m>n) swap(&m,&n);
	   first=m-1,last=n-1;
	   int max=first,min=first;
	   for(i=first;i<=last;i++)
	   {
		   sum=sum+z[i];
		   if(z[i]>z[max]) max=i;
		   if(z[i]<z[min]) min=i;
	   }
	   if(d==f) cout<<z[max]<<" "<<z[min]<<" "<<sum;
	   else cout<<z[max]<<" "<<z[min]<<" "<<sum<<endl;
   }*/
//--------------------------------------------
      /* int x,y;
       cin>>x>>y;
       if(x>y) cout<<lcm(y,x);
       else cout<<lcm(x,y);*/
//-----------------------------------
     /* int x,i=0,sum=0;
      cin>>x;
      while(x>0)
      {
    	  sum+=((x%10)*pow(2,i++));
    	  x/=10;
      }
      cout<<sum;*/
//--------------------------------
   /* int x;
    cin>>x;
    if(luck(x)==1) cout<<"YES";
    else cout<<"NO";*/
//----------------------------
    /* int x=0;
     cin>>x;
     cout<<binary(x)<<" "<<hex(x);*/
//-----------------------------------
     /*int x;
     cin>>x;
     char y[x];
     cin>>y;
     int z=0,f=x-1,c=0;
     while(z++<x/2)
     {
    	 if(y[z-1]==y[f]);
    	 else{
    		 c++;
    		 if(y[z-1]<y[f]) y[f]=y[z-1];
    		 else y[z-1]=y[f];
    	 }
    	 f--;
     }
     cout<<c<<endl<<y;*/
//-------------------------------------
     /*int n,m,x,y;
     cin>>n>>m;
     char z[n+1][m+1],f;
     for(x=0;x<n;x++)
    	 for(y=0;y<m;y++)
    	 {
    		 cin>>f;
    		 if(f=='.') z[x][y]='0';
    		 else z[x][y]=f;
    	 }
     for(x=0;x<n;x++)
        	 for(y=0;y<m;y++)
        	 {if(z[x][y]=='*')
        	 {
        		 if(z[x+1][y]!='*'&&x+1>-1&&y>-1) z[x+1][y]++;
        		 if(z[x+1][y+1]!='*'&&x+1>-1&&y+1>-1) z[x+1][y+1]++;
        		 if(z[x+1][y-1]!='*'&&x+1>-1&&y-1>-1) z[x+1][y-1]++;
        		 if(z[x-1][y]!='*'&&x-1>-1&&y>-1) z[x-1][y]++;
        		 if(z[x-1][y-1]!='*'&&x-1>-1&&y-1>-1) z[x-1][y-1]++;
        		 if(z[x-1][y+1]!='*'&&x-1>-1&&y+1>-1) z[x-1][y+1]++;
        		 if(z[x][y-1]!='*'&&x>-1&&y-1>-1) z[x][y-1]++;
        		 if(z[x][y+1]!='*'&&x>-1&&y+1>-1) z[x][y+1]++;
        	 }
        	 }
     for(x=0;x<n;x++)
     { for(y=0;y<m;y++)
         	 {
         		 cout<<z[x][y];
         	 }
     if(x!=n-1) cout<<endl;
     }*/
//-------------------------------------------
     /*int a,b,n;
     cin>>a>>b>>n;
     while(true)
     {
    	 if(a>n) n-=gcd(a,n);
    	 else n-=gcd(n,a);
    	 if(n==0){
    		 cout<<"0";
    		 break;
    	 }
    	 if(n<0){
    		 cout<<"1";
    		    		 break;
    	 }
    	 if(b>n) n-=gcd(b,n);
    	    	 else n-=gcd(n,b);
    	 if(n==0){
    	     		 cout<<"1";
    	     		 break;
    	     	 }
    	     	 if(n<0){
    	     		 cout<<"0";
    	     		    		 break;
    	     	 }
     }*/
//---------------------------------------------------------
     /*unsigned long long x;
     cin>>x;
     x=pow(x,2)+x+41;
     cout<<x;*/
//--------------------------------------------------------
	/*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		int z=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
		}
		cout<<"Enter 1 for FCFS or 2 for SJF-non primitive\n";
		int ff=0;
		cin>>ff;
		if(ff==1){
		float j=0,t=0,w=0;
		z=0;
		float suma=0,sumw=0;
		while(z++<x)
		{
			j+=bur[z-1];
			t=j-arr[z-1];
			w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
			cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }
	    if(ff==2){
	    int c=0,s=0,min=0;
	    float *fin=new float [x];
	    z=0;
	    while(z++<x)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&arr[s-1]>=0&&bur[s-1]<bur[min])   	min=s-1;
	    	arr[min]*=-1;
	    	c+=bur[min];
	    	fin[min]=c;
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-(arr[z-1]*-1);
			float w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }*/
	    //--------------------------------------------------------------------
       /*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		float *bur2=new float [x];
		float *prr=new float [x];
		float *end=new float [x];
		int z=0,prrr=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
			bur2[z-1]=bur[z-1];
						prrr+=bur[z-1];
			cout<<"and its priority\n";
			cin>>prr[z-1];
		}
arr[x]=1000000;
	int c=0,s=0,min=0,miny=0;
	    float *fin=new float [x];
	    z=0;
	    int max=0;
	    while(s++<x)
	    {
	    	end[s-1]=0;
	    }
	    s=0;
	    while(c<prrr)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&end[s-1]==0&&prr[s-1]<prr[min]&&bur[s-1]>0)   	min=s-1;
	    	s=0;
	    //	if(c>=arr[max]) miny=arr[x];
	    //	else miny=min+1;
	    //	while(s++<x)
	    //	if(arr[miny]>=arr[s-1]&&arr[s-1]>=0&&s-1!=min) miny=s-1;

	    	bur[min]--;
	    		c++;

	    	if(bur[min]==0) {
	    	end[min]=1;
	    	fin[min]=c;
	    	prr[min]=100000;
			}
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-arr[z-1];
			float w=t-bur2[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
				//-----------------------------------------------------------------------------------
		/*int x;
		cout<<"enter no of process";
		cin>>x;
		int all[x][3],max[x][3],ava[1][3];
		int i,j;
		for(i=0;i<x;i++)
		{
			cout<<"enter the allocation of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>all[i][j];
		}
		for(i=0;i<x;i++)
		{
			cout<<"enter the max. of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>max[i][j];
		}
		cout<<"enter the available sperated each digit with a space\n";
		cin>>ava[0][0]>>ava[0][1]>>ava[0][2];
		for(i=0;i<x;i++){
		for(j=0;j<3;j++)
		max[i][j]-=all[i][j];}
		int z=0,c=0,min=0;
		while(z++<x)
		{
			for(i=0;i<x;i++)
			{
				c=0;
				for(j=0;j<3;j++)
				{
					if(max[i][j]<=ava[0][j]&&max[i][0]!=-1)
					c++;
					if(c==3)
					{
						min=i;
						goto dd;
					}
				}
			}
		dd:	if(c<3)
			{
				cout<<"The system is not in safe-state\n";
				return 0;
			}
			for(i=0;i<3;i++)
			ava[0][i]+=all[min][i];
			max[min][0]=-1;
			cout<<"P"<<min+1<<" &new work="<<ava[0][0]<<" "<<ava[0][1]<<" "<<ava[0][2];
			if(z!=x) cout<<" --->";
		}
		cout<<"\nThe system is in safe-state";*/
//-----------------------------------------------------------
       /*string s;
       int x;
       cin>>s;
       cin>>x;
       int z=0;
       string k="Final";
       while(z++<x)
       {
    	   if(z==1){
    		   cout<<s<<endl;
    		  s+='-';
    		   continue;
    	   }
    	   s+=k;
    	   if(z==x){
    		   s+="Wallahy";
    	      	   }
    	  if(z==x) cout<<s;
    	  else cout<<s<<endl;*/
//-------------------------------------------
       /* string x;
        string v="vaporeon",j="jolteon",f="flareon",e="espeon",u="umbreon",l="leafeon",g="glaceon",s="sylveon";
       cin>>x;
       int z=0,count[8]={0,0,0,0,0,0,0,0};
       while(z++<8)
       {
    	   if(x[0]!='.')
    	   {
    		                if(x[0]==v[0]) count[0]++;
    		                if(x[0]==j[0]) count[1]++;
    		                if(x[0]==f[0]) count[2]++;
    		                if(x[0]==e[0]) count[3]++;
    		                if(x[0]==u[0]) count[4]++;
    		                if(x[0]==l[0]) count[5]++;
    		                if(x[0]==g[0]) count[6]++;
    		                if(x[0]==s[0]) count[7]++;
    		                break;
    	   }
    	   if(x[z-1]!='.')
    	   {
    		   if(x[z-1]==v[z-1]) count[0]++;
    		   if(x[z-1]==j[z-1]) count[1]++;
    		   if(x[z-1]==f[z-1]) count[2]++;
    		   if(x[z-1]==e[z-1]) count[3]++;
    		   if(x[z-1]==u[z-1]) count[4]++;
    		   if(x[z-1]==l[z-1]) count[5]++;
    		   if(x[z-1]==g[z-1]) count[6]++;
    		   if(x[z-1]==s[z-1]) count[7]++;

    	   }
       }
       z=0;
       int max=0;
       while(z++<8)
    	   if(count[z-1]>count[max]) max=z-1;
       switch(max){
       case(0): {cout<<"vaporeon"; break;}
       case(1): {cout<<"jolteon"; break;}
       case(2): {cout<<"flareon"; break;}
       case(3): {cout<<"espeon"; break;}
       case(4): {cout<<"umbreon"; break;}
       case(5): {cout<<"leafeon"; break;}
       case(6): {cout<<"glaceon"; break;}
       case(7): {cout<<"sylveon"; break;}
       }*/
//----------------------------------------------------
     /* int x,z=0;
      cin>>x;
      string y[x];
      while(z++<x) cin>>y[z-1];
      int f,m;
      cin>>f;
      string name[f],d;
      int scr[f];
      z=0;
      while(z++<f) scr[z-1]=0;
      z=0;
      while(z++<f)
      {
    	  cin>>name[z-1];
    	  cin>>m;
    	  int dd=0;
    	  while(dd++<m)
    	  {
    		  cin>>d;
    		  int r=0;
    		  while(r++<x)
    			  if(d==y[r-1])
    				  scr[z-1]++;
    	  }
      }
      int max=0;
      z=1;
      while(z++<f)
      {
    	  if(scr[z-1]>scr[max]) max=z-1;
    	  if(scr[z-1]==scr[max])
    		  if(name[z-1]<name[max])
    			  max=z-1;
      }
      cout<<name[max];*/
//-----------------------------------------------
    /* int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }*/
//--------------------------------------------------
     /*string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";*/
//--------------------------------------------------------
     /*int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }*/
//------------------------------------------------------------
    /*string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;*/
//---------------------------------------------------------
     /*string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;*/
//-----------------------------------------------------
    /* string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";*/
//------------------------------------------
     /*int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];*/
//-------------------------------------------------
      /*string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];*/
//-----------------------------------------------------
      /*int a,b,c,x=0,y=0,d,z=0;
      double f=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
    	  if(a%10!=0) x+=((a%10)*pow(10,f++));
    	  a/=10;
      }
      f=0;
      while(b>0)
            {
          	  if(b%10!=0) y+=((b%10)*pow(10,f++));
          	  b/=10;
            }
      f=0;
           while(c>0)
                 {
               	  if(c%10!=0) z+=((c%10)*pow(10,f++));
               	  c/=10;
                 }
      d=x+y;
      if(z==d) cout<<"YES";
      else cout<<"NO";*/
//----------------------------------------------------------
     /* int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;*/
//----------------------------------------------------------------
     /*string s,y;
     int i=0;
     char c=' ';
     cin>>s;
     int d=0;
     while(i<s.size())
     {
    	 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    	 { i+=3; d++;}
    	 else {
    		 if(y.size()!=0&&d!=0){
    		 y+=c;
    		 y+=s[i];}
    		 else y+=s[i];
    		 i++;
    		 d=0;
    	 }
     }
     cout<<y;*/
//--------------------------------------------------------------------
     /*int n;
     cin>>n;
     string s;
     cin>>s;
     char cc;
     int i=0,f=s.size()-1;
     int b=0,e=s.size()-1;
     for(int j=0;j<n;j++)
                         {
                             int min=j;
                             for(int i=j+1;i<n;i++)
                                 if(s[i]<s[min]) min=i;
                             cc=s[min];
                             s[min]=s[j];
                             s[j]=cc;
                         }
     for(int j=n;j<s.size();j++)
                              {
                                  int min=j;
                                  for(int i=j+1;i<s.size();i++)
                                      if(s[i]<s[min]) min=i;
                                  cc=s[min];
                                  s[min]=s[j];
                                  s[j]=cc;
                              }
     i=0;
      if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f--])
    		 {
    			goto x;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
      else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f--])
    	     		 {
    	     			goto x;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
   //  if(s[b]==s[e]){
   // 		 goto x;
   //  }
     x: i=0,b=0,e=n,f=n;
     if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f++])
    		 {
    			 cout<<"NO";
    			     	 return 0;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
     else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f++])
    	     		 {
    	     			 cout<<"NO";
    	     	     	 return 0;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
    // if(s[b]==s[e]){
    	//	 cout<<"NO";
    	//	 return 0;}

//---------------------------------------------------------------------
     /*string s,s2;
     cin>>s;
     int i=0,f=s.size()-1,c=0,count=0;
     char d;
     while(true)
     {
    	 c=0,f=s.size()-1,i=0;
    	 while(i<s.size()/2)
    		 if(s[i++]!=s[f--])
    		 {
    			 c++;
    			 break;
    		 }
    	 if(c==0) break;
    	 s2=s;
    	 i=0,f=s.size()-1;
    	 while(i<s.size()/2)
    	 {
    		 d=s[i];
    		 s[i]=s[f];
    		 s[f]=d;
    	 }
    	 i=0;
    	 while(i<s.size()){
    		 d=(s[i]-48)+(s2[i++]-48);
    		 s[i]=d;

    	 }

    	 count++;
     }
     cout<<count<<" "<<s;*/
//--------------------------------------------------------------------------
// 4A
    /* int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";*/
//-------------------------------------------------------------------------
    //231A
    /*int x=0,c=0,i=0,d=0,y=0,z=0;
    cin>>x;
    while(z++<x)
    {
    	i=0,c=0;
    	while(i++<3)
    	{
    		cin>>y;
    		if(y==1) c++;
    	}
    	if(c>1) d++;
    }
    cout<<d;*/
//---------------------------------------------------------------------------
   /*char y[3][3];
   int i,j,x=0,o=0,no=0;
   for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
		   cin>>y[i][j];
		   if(y[i][j]=='X') x++;
		   if(y[i][j]=='O') o++;
		   if(y[i][j]=='.') no++;
	   }
   if((x==o||x-1==o))
   {
	   for(i=0;i<3;i++)
	   {

		   if(y[i][0]==y[i][1]&&y[i][0]==y[i][2])
			   {if(y[i][0]=='X')
			   {
				   if(x-1==o){
				   cout<<"the first player won";
				   return 0;}
				   goto ff;
			   }
			   if(y[i][0]=='O')
			  			   {
				               if(x==o){
			  				   cout<<"the second player won";
			  				   return 0;}
				               goto ff;
			  			   }}
		   if(y[0][i]==y[1][i]&&y[0][i]==y[2][i]){
			   if(y[0][i]=='X')
			   			   {
				   if(x-1==o){
				  				   cout<<"the first player won";
				  				   return 0;}
				  				   goto ff;
			   			   }
			   			   if(y[0][i]=='O')
			   			  			   {
			   				 if(x==o){
			   							  				   cout<<"the second player won";
			   							  				   return 0;}
			   								               goto ff;
			   			  			   }}
			   }
       if((y[0][0]==y[1][1]&&y[0][0]==y[2][2])||(y[0][2]==y[1][1]&&y[0][2]==y[2][0]))
       {if(y[1][1]=='X')
       			   { if(x-1==o){
	  				   cout<<"the first player won";
	  				   return 0;}
	  				   goto ff;
       			   }
       			   if(y[1][1]=='O')
       			  			   {
       				 if(x==o){
       							  				   cout<<"the second player won";
       							  				   return 0;}
       								               goto ff;
       			  			   }}
	   if(no==0)
	   {
		   cout<<"draw";
		   return 0;
	   }
	   if(x==o)
	   {
		   cout<<"first";
		   return 0;
	   }
	   if(x-1==o)
	   	   {
	   		   cout<<"second";
	   		   return 0;
	   	   }
   }
   ff:cout<<"illegal";*/
//--------------------------------------------------------------------------
   //69A
   /*int x,z=0,i=0,a=0,b=0,c=0,suma=0,sumb=0,sumc=0;
   cin>>x;
   while(z++<x)
	   {
	    cin>>a>>b>>c;
	    suma+=a;
	    sumb+=b;
	    sumc+=c;
	   }
   if(suma==0&&sumb==0&&sumc==0) cout<<"YES";
   else cout<<"NO";*/
//-----------------------------------------------------------------------
   /*long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;*/
//------------------------------------------------------------------------
  /* int x;
   cin>>x;
   int y[x][x];
   for(int i=0;i<x;i++)
   {
	   int f=i,d=1;
	   for(int k=0;k<=i;k++)
	   {
		   y[f][x-d]=i+1;
		   if(i+1!=x) y[x-d][f]=i+1;
		   d++,f--;
	   }
   }
   for(int i=0;i<x;i++)
   { for(int k=0;k<x;k++)
   {  cout<<y[i][k];
      if(k!=x-1) cout<<" ";
   }
   if(i!=x-1) cout<<endl;}*/
//------------------------------------------------------------
   /*string x,y="heavy",z="metal";
   cin>>x;
   long long h=-5,m,c=0;
   for(int i=0;;i++)
   {
	   h=x.find(y,h+5);
	   if(h>-1)
	   {
		   m=x.length();
		   for(int j=0;;j++)
		   {
			   m=x.rfind(z,m-1);
			   if(m>-1&&m>h+4) c++;
			   else break;
		   }
	   }
	   else break;
   }
   cout<<c;*/
   //------------------------------------------------------------------
    /*string s;
	cin>>s;
	int z=0,c=0;
	while(z++<s.size())
	{
		if(s[z-1]=='h'&&c==0)
		{
			c++;
			continue;
		}
		if(s[z-1]=='e'&&c==1)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==2)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==3)
		{
			c++;
			continue;
		}
		if(s[z-1]=='o'&&c==4)
		{
			c++;
			break;
		}
	}
	if(c==5) cout<<"YES";
	else cout<<"NO";*/
//---------------------------------------------------------------
    /*string s,d,r;
    int z=0;
    cin>>s>>d;
    while(z++<s.size())
    {
    	if(s[z-1]==d[z-1]) r+='0';
    	else r+='1';
    }
    cout<<r;*/
//------------------------------------------------------------
   /*int x,z=0;
   cin>>x;
   int y[x];
   while(cin>>y[z++]);
   int l=0,k=x;
   for(int i=0;i<x;i++)
   {
	   if(y[i]){
		   int m=0;
		   for(int j=i+1;j<x;j++)
		   {
			   if(y[i]==y[j])
			   {
				   m++;
				   y[j]=0;
			   }
		   }
		   if(m>0) k-=m;
		   if(m>l) l=m;
	   }
   }
   cout<<l+1<<" "<<k;*/
//---------------------------------------------------------------
    /*int x,z=0,even=0,odd=0,eve=0,od=0;
    cin>>x;
    int y[x];
    while(z<x) cin>>y[z++];
    z=0;
    while(z++<x)
    {
    	if(y[z-1]%2==0) {even++; eve=z-1;}
    	else {odd++; od=z-1;}
    }
    if(even==1) cout<<eve+1;
    else cout<<od+1;*/
//---------------------------------------------------------
    /*string s;
    int z=0,c=0;
    cin>>s;
    while(z<s.size())
    {
    	if(s[z]==s[z+1]) c++;
    	else c=0;
    	if(c>=6){
    		cout<<"YES";
    		return 0;
    	}
    	z++;
    }
    cout<<"NO";*/
    //----------------------------------------------------------
   /* int z=1;
    string s;
   cin>>s;
   if(s[0]>=97&&s[0]<=122)
   {
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   else{
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   cout<<s;*/
//---------------------------------------------------------------
   /*int n,k,z=0,c=0;
   cin>>n>>k;
   int y[n];
   while(cin>>y[z++]);
   z=0;
   while(z++<n)
   {
	   if(y[z-1]>=y[k-1])
		   {if(y[z-1]>0)
			   c++;}
	   else break;
   }
   cout<<c;*/
//-------------------------------------------------------------
   /*int x,k,y,f,z=0,i=0,c=0;
   cin>>x>>k;
   int s[x];
   while(z++<x)
   {
	   cin>>y;
	   int d=0,m=0;
	   while(d++<y)
	   {
		   cin>>f;
		   if(k>f&&m==0)
		   {
			   c++;
			   m++;
			   s[i++]=z;
		   }
	   }
   }
   z=1;
   if(c==0) cout<<c;
   else{
	   cout<<c<<endl<<s[0];
	   while(z++<i) cout<<" "<<s[z-1];
   }*/
//------------------------------------------------------------
   /*int a,b,c,d,m,v;
   cin>>a>>b>>c>>d;
   m=(3*a)/10;
   if(a-((a*c)/250)>m) m=a-((a*c)/250);
   v=(3*b)/10;
   if(b-((b*d)/250)>v) v=b-((b*d)/250);
   if(m>v) cout<<"Misha";
   if(v>m) cout<<"Vasya";
   if(v==m) cout<<"Tie";*/
//------------------------------------------------------------
   /*int z=0,c=0,y[26];
   string s;
   cin>>s;
   while(z++<s.size()) y[s[z-1]-97]=1;
   z=0;
   while(z++<26) if(y[z-1]==1) c++;
   if(c%2) cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";*/
//--------------------------------------------------------------
   /*long x;
   int z=0,c=0,y[4]={0,0,0,0},i=0;
   while(z++<4)
   {
	   cin>>x;
	   if(y[0]!=x&&y[1]!=x&&y[2]!=x&&y[3]!=x) {y[i++]=x; c++;}
   }
   cout<<4-c;*/
//------------------------------------------------------------
   /*long long x;
   cin>>x;
   if(x%2) cout<<-1*((x+1)/2);
   else cout<<x/2;*/
//-------------------------------------------------------
   /*string s;
   cin>>s;
   int z=0;
   while(z++<s.size()) if(s[z-1]=='H'||s[z-1]=='Q'||s[z-1]=='9') {cout<<"YES"; return 0;}
   cout<<"NO";*/
//----------------------------------------------------------
   /*int x,a,b,in=0,max=0,z=0;
   cin>>x;
   while(z++<x)
   {
	   cin>>a>>b;
	   in=(in-a)+b;
	   if(in>max) max=in;
   }
   cout<<max;*/
//-------------------------------------------------------------
   /*int x=0,y,n=0;
   cin>>y;
   while(++n)
   {
	   x+=(n*(n+1))/2;
	   if(x>y)
	   {
		   cout<<n-1;
		   return 0;
	   }
   }*/
//------------------------------------------------------------
  /*int m,n,c=0;
  cin>>n>>m;
  for(;n*m>0;n--,m--,c++);
  if(c%2) cout<<"Akshat";
  else cout<<"Malvika";*/
//---------------------------------------------------
  /*int x,z=0,y,c=0,d[5]={0,0,0,0,0};
  cin>>x;
  while(z++<x)
  {
	  cin>>y;
	  d[y]++;
  }
  c=c+d[4]+d[3]+(d[2]/2);
  d[1]-=d[3];
  if(d[2]%2) {c++; d[1]-=2;}
  if(d[1]>0) c+=(d[1]/4);
  if(d[1]%4&&d[1]>0) c++;
  cout<<c;*/
//-------------------------------------------------------
  /*int n,i=0;
  cin>>n;
  int x[n];
  while(i++<n) cin>>x[i-1];
  for(i=1;i<=n;i++)
	  for(int j=0;j<n;j++)
		  if(x[j]==i)
		  {
			  if(i==1) cout<<j+1;
			  else cout<<" "<<j+1;
		  }*/
//---------------------------------------------------------
  /*int n,z=1,y=1,m=2;
  cin>>n;
  int x[n]={1,1};
  n--;
  for(int i=2;i<=n;i+=2)
  {
	  x[i]=z+y;
	  x[i+1]=y;
	  z=y;
	  y=x[m++];
  }
  cout<<x[n];*/
//-----------------------------------------------------------------
  /*int x;
  cin>>x;
  int y[x];
  int z=0;
  while(z++<x) cin>>y[z-1];
  for(int i=0;i<x;i++)
  {
	  int max=i;
	  for(int k=i+1;k<x;k++)
		  if(y[k]>y[max])
			  max=k;
	  swap(y[i],y[max]);
  }
  int sum=0,sumarr=0,c=0;
  for(int i=0;i<x;i++)
  {
	  sumarr=0;
	  sum+=y[i];
	  c++;
	  for(int k=i+1;k<x;k++)
		  sumarr+=y[k];
	  if(sum>sumarr) break;
  }
  cout<<c;*/
  //----------------------------------------------------------------
   string s;
   cin>>s;
   int x=(s.size()+1)/2;
   int y[x],z=0,f=0,min=0;
   while(z<s.size())
	   {y[f++]=s[z];
	   z+=2;
	   }
   for(int i=0;i<x;i++)
   {
	   min=i;
	   for(int k=i+1;k<x;k++)
		   if(y[k]<y[min])
			   min=k;
	   swap(y[min],y[i]);
   }
   z=0,f=0;
   while(z<s.size())
	   {
	   s[z]=y[f++];
	   z+=2;
	   }
   cout<<s;
        return 0;
}
 
