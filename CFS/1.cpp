
using namespace std;
//1659A
//distribute a given number of ('R') & ('B') characters across a sequence of specified length as@
//evenly as possible, with the goal of minimizing large clusters of 'R's between each 'B'.
void DistributeChar(){
    int n, r, b; cin >> n >> r >> b;
    int segment = r / (b + 1);
    int extraRed = r % (b + 1);
    string res = " ";
    for(int i = 0; i < b + 1; i++){
        res += string(segment + (extraRed > 0 ? 1 : 0), 'R');
        if(extraRed > 0)
            extraRed--;
        if(i < b)
            res += 'B';
    }
    cout << res;
}
using namespace std;
//352B
void JeffAndPeriod(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<int, int> idx;
    for(int i = 0; i < n; i++){
        if(idx.find(arr[i]) != idx.end()){
            int dist = i - idx[arr[i]];
            cout << "Distance between repeated element " << arr[i] << " id " << dist;
        }
        idx[arr[i]] = i;
    }
}
using namespace std;
//977C
void LessOrEqual(){
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if(k == 0){
        int res = arr[0] - 1;
        cout << (res > 0) ? res : -1;
    }
    else if(k == n)
        cout << arr[n - 1];
    else{
        if(arr[k - 1] == arr[k])
            cout << -1;
        else
            cout << arr[k - 1];
    }
}
using namespace std;
//1325B
void CopyCopy(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int cnt = n;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1])
            cnt--;
    }
    cout << cnt;
}
using namespace std;
void AlyonaAndNumbers(){
    int n, m; cin >> n >> m;
    int arr[5] = {0}, tmp[5] = {0};
    for(int i = 1; i <= n; i++)
        arr[i % 5]++;
    for(int i = 1; i <= m; i++)
        tmp[i % 5]++;
    cout << arr[0] * tmp[0] + arr[1] * tmp[4] + arr[2] * tmp[3] + arr[3] * tmp[2] + arr[4] * tmp[1];
}
using namespace std;
void PenguinAndSegments(){
    int n, k, sum = 0; cin >> n >> k;
    while(n--){
        int l, r; cin >> l >> r;
        sum += r - l + 1;
    }
    if(sum % k == 0)
        cout << "0";
    else
        cout << k - (sum % k);
}
using namespace std;
void LuckyTicket(){
    int n, sum1 = 0, sum2 = 0;
    string str; cin >> n >> str;
    for(int i = 0; i < n / 2; i++){
        if(str[i] == '7' || str[i] == '4')
            sum1 += str[i] - '0';
        else{
            cout << "No";
            return 0;
        }
    }
    for(int i = n - 1; i >= n / 2; i--){
        if(str[i] == '7' || str[i] == '4')
            sum2 += str[i] - '0';
        else{
            cout << "No";
            return 0;
        }
    }
    (sum1 == sum2) ? cout << "Yes" : cout << "No";
}
using namespace std;
void LunchRush(){
    int n, k, mx = INT_MIN;
    cin >> n >> k;
    while(n--){
        int x, y; cin >> x >> y;
        if(y > k) 
            mx = max(mx, x - (y - k));
        else
            mx = max(mx, x);
    }
    cout << mx;
}
using namespace std;
void AmusingJoke(){
    string a, b, c, str = " ";
    cin >> a >> b >> c;
    str = a + b;
    if(str.size() > c.size()){
        cout << "No";
        return 0;
    }
    sort(c.begin(), c.end());
    sort(str.begin(), str.end());
    //(str == c) ? cout << "Yes" : cout << "No";
    int arr[26] = {0}, tmp[26] = {0};
    for(int i = 0; i < str.size(); i++)
        arr[str[i] - 'A']++;
    for(int i = 0; i < c.size(); i++)
        tmp[c[i] - 'A']++;
    for(int i = 0; i < 26; i++){
        if(arr[i] != tmp[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
using namespace std;
void SystemEquation(){
    int n, m, cnt = 0; cin >> n >> m;
    for(int i = 0; i <= mac(m, n); i++){
        for(int j = 0; j <= max(m, n); j++){
            if((i * i + j == n) && (j * j + i == m))
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void CandyBags(){
    int n; cin >> n;
    for(int i = 1, j = n * n; i <= j; i++, j--)
        cout << i << " " << j << "\n";
}
using namespace std;
void LLPS(){
    string str; cin >> str;
    int freq[26] = {0};
    for(int i = 0; i < str.size(); i++)
        freq[str[i] - 'a']++;
    while(freq[str[str.size() - 1] - 'a']--)
        cout << str[str.size() - 1];
}
using namespace std;
void ChewbaсcaAndNumber(){
    string str; cin >> str;
    if(str[0] != '9' && str[0] >= 5)
        str[0] = '9' - str[0] + '0';
    cout << str[0];
    for(int i = 1; i < str.size(); i++){
        if(str[i] >= 5)
            str[i] = '9' - str[i] + '0';
        cout << str[i];
    }
}
void ChewbaсcaAndNumber(){
    string str; cin >> str;
    if(str[0] == '9')
        cout << str[0];
    else
        cout << (str[0] < '5' ? str[0] : '9' - (str[0] - '0'));
    for(int i = 1; i < str.size(); i++)
        cout << (str[i] < '5' ? str[i] : '9' - (str[i] - '0'));
}
using namespace std;
void BoredLife(){
    int a, b, fact = 1; cin >> a >> b;
    for(int i = 1; i <= min(a, b); i++)
        fact *= i;
    cout << fact;
}
using namespace std;
void NextRound(){
    int n, k, cnt = 0; cin >> n >> k;
    k--;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++){
        if(vec[i] && vec[i] >= vec[k])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void LongestUncommonSubsequence(){
    string a, b; cin >> a >> b;
    if(a == b)
        cout << "-1";
    else
        cout << max(a.size(), b.size());
}
using namespace std;
//1450B
void BallsOfSteel(){
    int n, k; cin >> n >> k;
    int x[n], y[n];
    for(int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    bool found = false;
    for(int i = 0; i < n; i++){
        bool withDist = true;
        for(int j = 0; j < n; j++){
            if(i != j){
                long long dist = abs(x[i] - x[j]) + abs(y[i] - y[j]);
                if(d > k){
                    withDist = false;
                    break;
                }
            }
        }
        if(withDist){
            found = true;
            break;
        }
    }
    if(found)
        cout << 1;
    else
        cout << -1;
}
using namespace std;
//1453A
void CancelTheTrain(){
    int m, n, cnt = 0; cin >> m >> n;
    int bottom[n], left[m];
    for(int i = 0; i < n; i++)
        cin >> bottom[i];
    for(int i = 0; i < m; i++)
        cin >> left[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(bottom[i] == left[j])
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void Games(){
    int n, cnt = 0;
    cin >> n;
    int arr[n], tmp[n];
    for(int i = 0; i < n; i++){
        int x, int y; cin >> x >> y;
        arr[i] = x; 
        tmp[i] = y;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == tmp[j] && i != j)
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void Game(){
    int n, cnt = 0; cin >> n;
    vector <int> vec(n), tmp(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i] >> tmp[i];
    sort(vec.begin(), vec.end());
    sort(tmp.begin(), tmp.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vec[i] == tmp[j])
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void Megnets(){
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i - 1])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void BitsPlus(){
    int n, cnt = 0;
    cin >> n;
    string a = "++X", b = "X++", c = "--X", d = "X--";
    while(n--){
        string str; cin >> str;
        if(str == a || str == b)
            cnt++;
        else if(str == c || str == d)
            cnt--;
    }
    cout << cnt;
}
using namespace std;
void BeautifulMatrix(){
    int x, y;
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                x = i; y = j;
        }
    }
    cout >> abs(x - 2) + abs(y - 2);
}
using namespace std;
void StoneOnTable(){
    int n, cnt = 0; cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void BearAndBigBrother(){
    int a, b, cnt = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
}
using namespace std;
void candiesAndASisters(){
    int t; cin >> t;
    int res[t];
    for(int i = 0; i < t; i++){
        int candies; cin >> candies;
        res[i] = (candies - 1)/2;
    }
    for(int i = 0; i < t; i++)
        cout << res[i] << " ";
}
using namespace std;
void loveUsername(){
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        int tmp = abs(arr[i + 1] - arr[i]);
        if(tmp > 1)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void PoliceRecruits(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int available = 0, crimes = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            available += arr[i];
        else{
            if(available > 0)
                available--;
            else
                crimes++;
        }
    }
    cout << crimes;
	
}
using namespace std;
void PoliceRecruite(){
    int n; cin >> n;
    int police = 0, crime = 0, cnt = 0;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] < 0){
            crime++;
            if(police == 0)
                cnt++;
            else if(police && crime){
                police--;
                crime--;
            }
        }
        else
            police += vec[i];
    }
    cout << cnt;
}
using namespace std;
int removeDup(int arr[], int n){
    if(n == 0 || n == 1)
        return n;
    int j = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}
void WannaGuy(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int arr[a], tmp[b];
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    for(int i = 0; i < b; i++)
        cin >> tmp[i];
    removeDup(&arr[a], a);
    removeDup(&arr[b], b);
    int cnt = n;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == j)
                cnt--;
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < n; j++){
            if(tmp[i] == j)
                cnt--;
        }
    }
    (cnt == 0) ? cout << "Wann be guy" : cout << "Oh! keyboard";
}

using namespace std;
void Drinks(){
    int n; cin >> n;
    float sum = 0;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << sum / n;
}
using namespace std;
void sumOfRound(){
    int n; cin >> n;
    int ans[n], cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ans[i] = 0;
        if(x % 10 == 0){
            cnt++;
            ans[i] = x;
        }
        else{
            while(x != 0){
                cnt++;
                x /= 10;
            }
        }
    }
    cout << "Count of Operation: " << cnt << "\n";
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
using namespace std;
void VasyaTheHipster(){
    int a, b, c; cin >> a >> b;
    if(a <= b)
        c = a;
    else
        c = b;
    cout << c << " " << (a + b - 2 * c) / 2;
}
using namespace std;
void Tram(){
    int n; cin >> n;
    int ans[n];
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        ans[i] = a + b;
    }
    int maxi = ans[0];
    for(int i = 1; i < n; i++){
        if(ans[i] > maxi)
            maxi = ans[i];
    }
    cout << maxi - 1;
}
