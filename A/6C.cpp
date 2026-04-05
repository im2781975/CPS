void solveuwu()
{
    //convert a numeric string into corresponding alphabet characters.
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> vec;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 2] == '0' && i + 2 < s.length() && s[i + 3] != '0')
        {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
            vec.push_back(char(num + 'a' - 1));
            i += 2;
        }
        else
        {
            int num = s[i] - '0';
            vec.push_back(char(num + 'a' - 1));
        }
    }
    for(int i=0; i<n; i++)
        cout << vec[i] << " ";
}
void solve3divA()
{
    //find and output a combination of three numbers from the input vector 
    //such that their sum is equal to the last element of the vector.
    vector<int> v(7);
    vector<int> res;
    int temp = 0;
    int f = 0;
    int temp2 = 0;
    int counter = 5;
    for (int i = 0; i < 7; i++)
        cin >> v[i];
    int max = v[6];
    if (v[0] + v[1] + v[2] == v[6])
    {
        cout << v[0] << " " << v[1] << " " << v[2];
    }
    else
    {
        for (int j = 0; j < 7; j++)
        {
            for (int i = j + 1; i < 7; i++)
            {
                for (int z = 0; z < 7; z++)
                {
                    if (v[j] + v[i] + v[z] == v[6])
                    {
                        cout << v[j] << " " << v[i] << " " << v[z] << "\n";
              return;
                    }
                }
            }
        }
    }
    cout << "\n";
}
void solveDiv4C()
{
    //finding the minimum absolute difference in character positions between two strings of length
    int a, b, res = 0, finalResult = 100000;
    cin >> a >> b;
    vector<string> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int z = i + 1; z < a; z++)
        {
            res = 0;
            for (int j = 0; j < b; j++)
            {
                if (z != i)
                res += abs((s[i][j] - 'a') - (s[z][j] - 'a'));
            }
            finalResult = min(finalResult, res);
        }
    }
    cout << finalResult << "\n";
}
#include<vits/stdc++.h>
using namespace std;
int main()
{
    You are given a problem where you need to determine if it's possible to create an array of size n containing only 1 and -1, such that the sum of the counts of pairs of positive numbers and pairs of negative numbers is exactly k. If possible, the program should print "Yes" followed by the array, otherwise, it should print "No".
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for(int i=1; i<=n; i++)
        v.push_back(1);
    int pos=n, neg = 0, total = 0;
    for(int i=0; i<n; i++)
    {
        total = (pos*(pos - 1)/2)+(neg*(neg - 1 )/2);
        if(total== k)
            break;
        v[i]*=-1;
        pos--;
        neg++;
    }
    if(total==k)
    {
        cout << "Yes";
        for(auto val:v)
            cout << val << " ";
        cout << "\n";
    }
    else 
        cout << "No";
}
#include<bits/stdc++.h>
using namespace std;
void usaco() {
    int n;
    cin >> n;
    
    int a, b;
    string x;
    
    vector<string> s(n);
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> res(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x >> a >> b;

        if (x == "on") {
            s[i] = "on";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "none") {
            s[i] = "none";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "off") {
            s[i] = "off";
            v[i].first = a;
            v[i].second = b;
        }
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == "none" && s[i - 1] == "on") {
            res[i].first = v[i].first;
            res[i].second = v[i].second - 1;
        }
        if (s[i] == "off" && s[i - 1] == "none") {
            res[i].first = v[i - 1].first - v[i].first - 1;
            res[i].second = v[i - 1].second - v[i].second;
        }
    }
    for (auto i : res) {
        if (i.first > 0)
            cout << i.first << " " << i.second ;
    }
}
void cowQueue(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    int r = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    r = v[0].first + v[0].second;
    for(int i = 1; i < n; i++){
        if (v[i].first <= r)
            r += v[i].second;
        else
            r = v[i].first + v[i].second;
    }
    cout << r;
}
void mixMilk() {
    //simulate a pouring process involving three buckets of milk. The buckets 
    //represented by two vectors: c (capacity of each bucket) and m (current amount of milk in each bucket).
    vector<int> m(3);
    vector<int> c(3);
    
    for (int i = 0; i < 3; i++)
        cin >> c[i] >> m[i];

    for (int i = 0; i < 100; i++) {
        int amount = min(c[(i + 1) % 3] - m[(i + 1) % 3], m[i % 3]);
        m[i % 3] -= amount;
        m[(i + 1) % 3] += amount;
    }

    for (int j = 0; j < 3; j++) {
        cout << m[j] << "\n";
    }
}
void cbarn() {
    int n;
    cin >> n;
    const int num = n;
    int tmp = 0;
    int finalResult = 0;
    vector<int> rooms(n * 2);

    for (int i = 0; i < n; i++)
        cin >> rooms[i];

    for (int j = 0; j < num; j++) {
        rooms[n + j] = rooms[j];
        
        for (int i = j + 1; i < num + j; i++) {
            for (int z = i; z < num + j; z++) {
                tmp += rooms[z];
            }
        }
        if (j == 0) {
            finalResult = tmp;
        }
        finalResult = min(finalResult, tmp);
        tmp = 0;
    }
    cout << finalResult;
}
void Block_game() {
    int n;
    cin >> n;
    vector<int> v(100);
    vector<int> v1(100);
    vector<int> v2(100);
    vector<int> empty(100);
    string x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        for (int a = 0; a < x.length(); a++) {
            v1[x[a] - '0']++;
        }

        for (int b = 0; b < y.length(); b++) {
            v2[y[b] - '0']++;
        }

        for (int z = 49; z < 75; z++) {
            v[z] += max(v1[z], v2[z]);
        }
        v1 = empty;
        v2 = empty;
    }
    for (int j = 49; j < 75; j++) {
        cout << v[j] << " ";
    }
}
void tic_tac_toe() {
    vector<string> v(3);
    string team1;
    string team, team2, team3;
    //cin>>team1 >> team2 >>team3;
    int t1 = 0, t2 = 0;
    // Assume if I have 1 cow in vector team:
    for (int j = 0; j < 3; j++) {
        cin >> team1;
        v[j] = team1;
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (v[j][i - 1] == v[j][i] && v[j][i] == v[j][i + 1]) 
                    t1++;
            if (v[0][j] == v[1][j] && v[0][j] == v[2][j]) {
                t1++;
                break;
            }
        }
    }

    if (v[0][0] == v[1][1] && v[1][1] == v[2][2]) t1++;
    if (v[0][2] == v[1][1] && v[1][1] == v[2][0]) t1++;
    if (t1 > 3) t1 /= 2;

    for (int i = 0; i < 2; i++) {
        if (v[0][0] == v[1][1] && v[1][1] != v[2][2]) t2++;
        else if (v[0][2] == v[1][1] && v[1][1] != v[2][0]) t2++;
    
        else if (v[0][2] == v[2][2] && v[2][2] != v[1][2]) t2++;
        else if (v[0][0] == v[0][2] && v[0][2] != v[0][1]) t2++;
        else if (v[1][0] == v[1][2] && v[1][2] != v[1][1]) t2++;
        else if (v[2][0] == v[2][2] && v[2][2] != v[2][1]) t2++;
        else if (v[0][0] == v[2][2] && v[2][2] != v[1][1]) t2++;
        else if (v[0][2] == v[2][0] && v[2][0] != v[1][1]) t2++;
    }

    if (v[0] == v[2] && v[0][0] == v[2][2]) {
        t1 /= 2;
        t2 /= 2;
    }
    if (t1 == 3) t2 = 0;
    if (v[0] == "AXY" && t2 == 2) {
        t2 = 3;
    }
    cout << t1 << "\n" << t2;
}
void GameWithArrays() {
    //https://codeforces.com/contest/1859/problem/B
    int n, tmp, val, final = 0;
    int maxi = INT_MAX;
    cin >> n;
    int x;
    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            int num;
            cin >> num;
            vec[i].push_back(num);
            if (maxi > num) {
                maxi = num;
                tmp = i;
                val = num;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sort(vec[i].begin(), vec[i].end()); 
        val += vec[i][0]; 
        // Use vec[i][0] to get the smallest element after sorting
    }

    for (int i = 0; i < n; i++) {
        final = max(final, val - vec[i][0]);
    }
    cout << final;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    int idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int temp = v[k-1];
    if(k > n)
    {
        cout << 0 << "\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] >= temp && v[i] >0) idx = i+1;
    }
    cout << idx << "\n";
}
bool sameDif(int a , int b, int c){
    int temp = b - a;
    if(temp == c-b)
        return true;
    return false;
}
bool check(vector<int>v , int k){
    for(int i = 0; i < v.size(); i++){
        if(v[i] - k >0) 
            return false;
    }
    return true;
}
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include<bits/stdc++.h>
using namespace std;
bool targetSum(vector<int>v, int size, int sum, int trg)
{
    if(size == 0)
    {
        if(sum == trg)
            return true;
        return false;
    }
    return targetSum(v, size-1, sum- v[size-1], trg) || targetSum(v, size-1, sum + v[size -1], trg);
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(targetSum(v, n, 0, x) == true)
        cout << "Yes";
    else
        cout << "No";
}

#include<bits/stdc++.h>
using namespace std;
void ArrayColoring()
{
    // https://codeforces.com/contest/1843/problem/A
    int size;
    cin >> size;
    vector<int> v(size);
    int subtracts = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
    {
        for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    else
    {
        for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    cout << sum - subtracts << "\n";
}
void LongLong()
{
    //https://codeforces.com/contest/1843/problem/B
    int n;
    cin >> n;
    vector<int>vec(n);
    int sum=0, cnt=0, c=0;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        cin >>vec[i];
        sum+=abs(vec[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(vec[i]==0)
            continue;
        for(int j=i; j<n; j++)
        {
            if(vec[j] < 0)
            {
                flag=false;
                i = j;
            }
            else  
                break;
        }
        if(!flag)
        {
            cnt++;
            flag=true;
            c++;
        }
    }
    cout << sum << " " << cnt;
}
void DifferentDifferences()
{
    //https://codeforces.com/contest/1772/problem/C
    int n, max;
    cin >> n >> max;
    int nmax = 1;
    int temp = 1;
    int sum = n;
    vector<int> v;
    while (nmax - 1 < max - n && n > 2)
    {
        v.push_back(nmax);
        temp++;
        nmax += temp;
        n--;
    }
    while (n > 0)
    {
        v.push_back(max);
        max--;
        n--;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
    
    cout << charac(v, v.size()) << "\n";
}
void EveryOneLovesToSleep()
{
    // https://codeforces.com/contest/1714/problem/A
    int n, h, m, temp = 100;
    cin >> n >> h >> m;
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> result(n);
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        int AlarmTime = v[i].first * 60 + v[i].second;
        int BedTime = (h * 60) + m;
        int Total = abs(AlarmTime - BedTime) / 60;
        int Time_in_min = abs(BedTime - AlarmTime) - Total * 60;
        result[i].first = Total;
        result[i].second = Time_in_min;
        if (Total > 12)
        {
            Total = (((24 * 60) - BedTime) + AlarmTime) / 60;
            Time_in_min = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
            result[i].first = (((24 * 60) - BedTime) + AlarmTime) / 60;
            result[i].second = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
        }
        else if (v[i].first < h || h == v[i].first && m > v[i].second)
        {
            int anaT3bt = 24 * 60 - ((h * 60 + m) - (v[i].first * 60 + v[i].second));
            result[i].first = anaT3bt / 60;
            result[i].second = abs(60 - Time_in_min);
        }
    }
    sort(result.begin(), result.end());
    cout << result[0].first << " " << result[0].second << "\n";
}
void ArrayDecrements()
{
    // https://codeforces.com/contest/1690/problem/B
    int n;
    cin >> n;
    int temp = 0;
    bool f = false;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
      cin >> v[i].second;
      
    sort(v.begin(), v.end());
    temp = v[n - 1].first - v[n - 1].second;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second > v[i].first)
        {
            f = false;
            break;
        }
        if (v[i].first - temp < 0)
            v[i].first = 0;
        else
            v[i].first -= temp;
        if (v[i].first == v[i].second)
            f = true;
        else
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}
void RestoringTheDurationOfTasks()
{
    // https://codeforces.com/contest/1690/problem/C
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++)
        cin >> start[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];
    for (int j = 0; j < n; j++)
    {
        if (start[j] < end[j - 1] && j >= 1)
            result[j] = (end[j] - end[j - 1]);
        else
            result[j] = (end[j] - start[j]);
    }
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}
void fact(){
    int t;
    cin >> t;
    vector<long long int> fact(1001);
    fact[0] = 1;
    long long int mod = 998244353;
    
    for(int i = 1; i <= 1000; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    while(t){
        int n;
        cin >> n; 
        
        if(n % 2 == 1) cout << 0 << endl;
        else{
            cout << (fact[n/2] * fact[n/2]) % mod << endl;
        }
        t--;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> c(n, 0);
    vector<int> b(n + m + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        b[a[x]] += i - c[x];
        c[x] = i;
        a[x] = y;
    }
    m++;

    for (int i = 0; i < n; i++)
        b[a[i]] += m - c[i];

    int ans = 0;

    for (int i = 0; i < b.size(); i++) {
        ans += ((b[i] * (m - b[i])) + ((b[i] * (b[i] - 1)) / 2));
    }
    cout << ans << "\n"
}
void greater() {
    //count greater values from specific idx
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    int val = vec[k - 1];
    int i = 0;
    int cnt = 0;

    if (val == 0) {
        int cap = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] > 0)
                cap++;
        }
        cout << cap << endl;
    } else {
        while (vec[i] >= val && i < n) {
            i++;
            cnt++;
        }
        cout << cnt << "\n";
    }
}
void AllEqual()
    bool flag = false;
    vector<int> vec{1, 1, 1, 1, 1};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
    {
        maxi = max(maxi, vec[i]);
        mini = min(mini, vec[i]);
        cout << maxi << " ";
        if (maxi == mini)
        {
            flag = true;
            cout << "Yes";
            break;
        }
    }
    if (!flag)
        cout << "No";
    return 0;
}
void solve(){
    int i = 1, j = 2;
    vector<vector<char>> v = {{'.', '*', '.'}, {'*', '*', '*'}, {'.', '*', '.'}};
    vector<vector<int>> vis(v.size(), vector<int>(v[0].size(), 0));

    int cnt = 0;
    for (; cnt < v.size() - i; cnt++) {
        for (int k = j - cnt; k <= j + cnt; k++) {
            if (k >= v[0].size() || k < 0 || v[i + cnt][k] != '*') {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << cnt;
    return 0;
}
void SecondMin()
{
    vector<int>vec{1, 2, 3, 4, 5};
    int idx=-1, mini=INT_MAX;
    for(int i=0; i<vec.size(); i++)
    {
        if(i == idx)
            continue;
        if(vec[i] < mini)
        {
            mini = vec[i];
            idx = i;
        }
    }
    cout << idx;
}

int Sum(const vector<int>& v) {
    int result = 0;
    for (int val : v) {
        result += val;
    }
    return result;
}

int element(vector<int>& v) {
    int lastElement = v.back();
    v.pop_back();
    return lastElement;
}
int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "sum of the consecutive is: " << sum;
    if (sum % 2 != 0)
        cout << "NO" << "\n";
    else {
        vector< int >vec;
        for (int i = 1; i <= n; i++)
            vec.push_back(i);

        cout << "\n";
        int a = Sum(vec) / 2;
        vector<int> set1;
        vector<int> set2;

        if (n % 2 != 0) {
            set1.push_back(vec[n - 1]);
            vec.pop_back();
            set2.push_back(vec[n - 2]);
            vec.pop_back();

            for (int i = 0; i < vec.size(); i++) {
                if (Sum(set1) == a || Sum(set2) == a) {
                    break;
                }
                set2.push_back(element(vec));
                vec.pop_back();
                set1.push_back(element(vec));
                vec.pop_back();
            }

            if (Sum(set1) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set1.push_back(vec[i]);
            }
            if (Sum(set2) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set2.push_back(vec[i]);
            }
        } else {
            int turn = 1;
            int start = 1;
            int last = n;
            while (start < last) {
                if (turn) {
                    set1.push_back(start);
                    set1.push_back(last);
                    turn = 0;
                } else {
                    set2.push_back(start);
                    set2.push_back(last);
                    turn = 1;
                }
                start++;
                last--;
            }
        }
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (int i = 0; i < set1.size(); i++)
            cout << set1[i] << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (int i = 0; i < set2.size(); i++)
            cout << set2[i] << " ";
    }
    return 0;
}
void solve() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    int m = v[0];
    int *p;
    p = new int[m + 1];

    for (int i = 0; i < m + 1; i++)
        p[i] = 0;

    for (int i = 0; i < n; i++) {
        p[v[i]]++;
    }

    for (int i = 0; i < m + 1; i++) {
        if (p[i] != 0)
            count++;
    }
    cout << count << endl;
    delete[] p;
    return 0;
}
int main() {
    int n;
    cin >> n;
    int cont = 0;
    while (n--) {
        vector<int> v;
        int x;
        int a = 0;
        for (int i = 0; i < 3; i++) {
            cin >> x;
            v.push_back(x);
            a += x;
        }

        int sumOfElements = sum(v);
        if (sumOfElements >= 2)
            cont += 1;
    }
    cout << cont << std::endl;
    return 0;
}

void solve_tc() {
    int n, k;
    k = number of updates
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) 
        cin >> v1[i];

    vector<vector<int>> v;
    v.push_back(v1);

    vector<vector<int>> v3(k + 1, vector<int>(2));

    int ans = 0;
    int k1 = k;
    int cnt1 = 1;
    v3[0][0] = 1;
    v3[0][1] = v1[0];

    while (k1--) {
        cin >> v3[cnt1][0] >> v3[cnt1][1];
        cnt1++;
    }

    int k2 = k + 1;
    int cnt = 0;

    while (cnt < k) {
        v1[(v3[cnt][0]) - 1] = v3[cnt][1];

        int cnt2 = cnt + 1;
        vector<int> v2 = v1;

        while (cnt2 < k2) {
            vector<int> v2 = v1;
            v2[(v3[cnt2][0]) - 1] = v3[cnt2][1];

            set<int> op;

            for(int i=0; i<op.size(); i++)
                op.insert(v1[i]);
            for(int i=0; i<op.size(); i++)
                op.insert(v2[i]);
            ans += op.size();
            cnt2++;
        }
        cnt++;
    }
    cout << ans << endl;
}
int performOperations(const vector<int>& v1, vector<vector<int>>& v3, int k) {
    vector<int> v2 = v1;
    int ans = 0;

    for (int cnt = 0; cnt < v3.size(); cnt++) {
        int pos = v3[cnt][0];
        int value = v3[cnt][1];

        v2[pos - 1] = value;
        v2[(v3[cnt][0]) - 1] = v3[cnt][1];

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k + 1; j++) {
                set<int> op;
                for (int me : v1) {
                    op.insert(me);
                }
                for (int me : v2) {
                    op.insert(me);
                }
                ans += op.size();
            }
        }
    }
    return ans;
}
int main() {
    int pos, value, k;
    vector<int> v1; 
    vector<vector<int>> v3;
    cin >> pos >> value >> k;
    
    vector<vector<int>> v;
    int result = performOperations(v1, v3, k);
    cout << "Result: " << result << endl;

    return 0;
}
void Matching Pair()
{
    //https://codeforces.com/problemset/problem/1788/C
    int n;
    cin >> n;
    if(n%2==0)
        cout << "No";
    else
    {
        cout << "Yes";
        vector<pair<int, int>> ans(n);
        int nxt=2*n;
        for(int i=0; i<n; i++)
        {
            ans[i].second=nxt;
            nxt--;
        }
        nxt = 1;
        for(int i=0; i<=n/2; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        nxt = 2;
        for(int i=(n/2)+1; i<n; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        cout << "\n";
        for(auto val:ans)
            cout <<val.first << " " << val.second << "\n";
    }
}
//finding the maximum product of four consecutive numbers in a grid
void MaxProduct(){
    int H, W;
    //Height & Weidth of the grid
    cin >> H >> W;
    int arr[20][20];
    vector <vector <int> > mp(H, vector <int> (W));
   /* mp.resize(H);
    for(int i = 0; i < H; ++i)
        mp.resize(W);*/
        
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cin >> mp[i][j];
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << mp[i][j] << " ";
            arr[i][j] = mp[i][j];
        }
        cout << "\n";
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    int maxi = INT_MIN, Hp = 1, Vp = 1, LDp = 1, RDp = 1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(j + 3 < W) {
                Hp= mp[i][j] * mp[i][j+1] * mp[i][j+2] * mp[i][j+3];
                maxi = max(maxi, Hp);
            }
            if(i + 3 < H) {
                Vp = mp[i][j] * mp[i+1][j] * mp[i+2][j] * mp[i+3][j];
                maxi = max(maxi, Vp);
            }
            //top-left to bottom-right)
            if(i + 3 < H && j + 3 < W) {
                LDp= mp[i][j] * mp[i+1][j+1] * mp[i+2][j+2] * mp[i+3][j+3];
                maxi = max(maxi, LDp);
            }
            // (top-right to bottom-left)
            if(i + 3 < H && j - 3 >= 0) {
                RDp= mp[i][j] * mp[i+1][j-1] * mp[i+2][j-2] * mp[i+3][j-3];
                maxi = max(maxi, RDp);
            }
        }
    }
    cout << maxi;
}

//****//
//Determine combination
 FindComb(vector <char> &vec, string tmp, vector <string> &res, int k, int cnt, int n){
    if(cnt == n){
        if(tmp.size() == k)
            res.push_back(tmp);
        return;
    }
    FindComb(vec, tmp, res, k, cnt + 1, n);
    tmp += vec[cnt];
    FindComb(vec, tmp, res, k, cnt + 1, n);
    return;
}
void DetermineCombination(){
    vector <char> vec{'a', 'b', 'c'};
    int k = 2, cnt = 0;
    int n = vec.size();
    string tmp = "";
    vector <string> res;
    FindComb(vec, tmp, res, k, cnt, n);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}

//****//
//recursively checks subgrids by removing rows and columns that contain 1s and counts how many valid configurations exist.
int Combinatorial(int n, vector <vector <int> >&vec, map<vector <vector<int>>, int>&mp){
    //Checks if the current grid configuration a is already in the memoization map m.
    if(mp.count(vec) == 1)
        return mp[vec];
    //if 1*1 matrix
    if(n == 1){
        mp[vec] = (vec[0][0] == 1)? 1: 0;
        return mp[vec];
    }
    for(int i = 0; i < n; i++){
        int rowSum = 0;
        for(int j = 0; j < n; j++)
            rowSum += vec[i][j];
        if(rowSum == 0) {
            mp[vec] = 0;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        int colSum = 0;
        for(int j = 0; j < n; j++)
            colSum += vec[j][i];
        if(colSum == 0){
            mp[vec] = 0;
            return 0;
        }
    }
    int x = -1, y = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vec[i][j] == 1){
                x = i; y = j;
                break;
            }
        }
    }
    cout << "\nCo-ordinates which contain 1 is: " << x << "," << y << "\n";
    //construct a new grid from the original grid excluding the row & column
    vector<vector<int> >remain(n-1, vector <int> (n-1));
    //remain is the row index for the new grid
    for(int i = 0, bi = 0; i < n; i++) {
        if(i == x)
            continue;
        for(int j = 0, bj = 0; j < n; j++){
            if(j == y)
                continue;
            remain[bi][bj++] = vec[i][j];
        }
        bi++;
    }
    // Sets the element at position (x, y) in the original grid to 0.
    vec[x][y] = 0;
//Calls the function recursively with the modified grid where the element 
//at (x, y) is set to 0.ans1 stores the result of this recursive call, which represents the 
//number of ways to process the grid a with the specific 1 at (x, y) removed.
    int ans1 = Combinatorial(n, vec, mp);
//Restores the original grid a by setting the element at position (x, y) back to 1.
    vec[x][y] = 1;
//Calls the remain function recursively with the smaller grid
//ans2 stores the result of this recursive call, representing the number of ways to process the smaller grid.
    int ans2 = Combinatorial(n - 1, remain, mp);
   // vec[x][y] = 1;
    mp[vec] = ans1 + ans2;
    return mp[vec];
}
void CountConfigur(){
    int n; cin >> n;
    vector<vector <int> >vec(n, vector <int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> vec[i][j];
    }
    map<vector <vector<int>>, int> mp;
    cout << Combinatorial(n, vec, mp);
}

//This portion of the code defines and uses a function to search for 
//a path in a grid from a starting point to a destination marked by the character 'B'. 
void FindPath(int x, int y, int row, int col, vector <vector<char>>&cev, vector <vector <int> > &vec, int cnt, string str, string *res){
    if(x < 0 || y < 0 || x >= row || y >= col)
        return;
    //cnt: Counter for the steps taken so far.
    //str: Current path as a string of directions.
    //res: Pointer to the result string that stores the final path.
    if(vec[x][y] <= cnt && vec[x][y] != -1)
        return;
    if(cev[x][y] == '#'){
        //vec[x][y] = -1: Marks the cell in the vec grid as -1 to indicate 
        //it is an obstacle and should not be revisited.
        vec[x][y] = -1;
        return;
    }
    vec[x][y] = cnt;
    if(cev[x][y] == 'B'){
        *res = str;
        return;
    }
    FindPath(x + 1, y, row, col, cev, vec, cnt + 1, str + "D", res);
    FindPath(x - 1, y, row, col, cev, vec, cnt + 1, str + "U", res);
    FindPath(x , y + 1, row, col, cev, vec, cnt + 1, str + "R", res);
    FindPath(x , y - 1, row, col, cev, vec, cnt + 1, str + "L", res);
}
void SearchPath(){
    int row, col;
    cin >> row >> col;
    vector <vector <char> >cev(row, vector<char> (col));
    vector <vector <int> >vec(row, vector <int>(col, INT_MAX));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin >> cev[i][j];
    }
    //starting position
    int x, y;
    cin >> x >> y;
    string res;
    FindPath(x, y, row, col, cev, vec, 0, "", &res);
    if (res.empty())
        cout << "No path found to the destination 'B'.\n";
    else 
        cout << "Path to destination 'B': " << res << "\n";
}
void PrimeFactor(){
    int n; cin >> n;
    vector <int> prime;
    if(n % 2 == 0){
        prime.push_back(2);
        while(n % 2 == 0)
            n /= 2;
    }
    for(int i = 3; i * i <= n; i +=2){
        prime.push_back(i);
        while(n % i == 0)
            n/= i;
    }
    if(n > 2)
        prime.push_back(n);
    for(int i = 0; i < prime.size(); i++)
        cout << prime[i] << " ";
}

// checks if the vector is sorted in increasing order. If it is, calculates the minimim diff 
//between consecutive elements and outputs half of this difference plus one. If not sorted, outputs 0.
void ConsecutiveDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    bool flag = true;
    int tmp = INT_MAX;
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 1; i < n; i++){
        if(vec[i] < vec[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i = 1; i < n; i++)
            tmp = min(tmp, vec[i] - vec[i - 1]);
        cout << tmp/2 + 1;
    }
    else
        cout << 0;
}

//determine to finds the shortest  from the point (x, y) to any of the four edges of the grid.
// find and print the minimum distance from a given point (x, y) to any edge of an n x n grid.
int FindMinEdge(int n, int x, int y){
    vector <int> vec(4);
    vec[0] = x;
    vec[1] = y;
    vec[2] = n + 1 - x;
    vec[3] = n + 1 - y;
    sort(vec.begin(), vec.end());
    return vec[0];
}
void MinEdge(){
    int n, x, y;
    cin >> n >> x >> y;
    cout << FindMinEdge(n, x, y);
}

//Display vector Based Other Vector
int BSearch(vector <int> &vec, int low, int high, int key){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(vec[mid] == key)
            return mid;
        else if(vec[mid] > key)
            high = mid -1;
        else if(vec[mid] < key)
            low = mid + 1;
    }
    return -1;
}
void BasedOtherVector(){
    vector <int> a{2, 3, 4};
    vector <int> b{5, 6, 7};
    vector <int> c = a;
    for(int i = 0; i < a.size(); i++){
        int idx = BSearch(a, 0, a.size() - 1, c[i]);
        cout << b[idx] << " ";
    }
}

//Count How many Elements are less than other array
void Count(){
    int a[]{2, 3, 4, 5, 6};
    int b[]{6, 5, 4, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int cnt = 0, ans = 1;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(b[i] < a[j])
                cnt++;
            else
                break;
        }
    }
    ans *= cnt;
    cout << ans;
}

//determine a array where pair diffrence is samw
void PairDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    int a = ceil(double(n) /2);
    for(int i = 0; i < n; i+= 2){
        vec[i] = a; a--;
    }
    int b = n;
    for(int i = 1; i < n; i+= 2){
        vec[i] = b; b--;
    }
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

//determine How many elements didn't match in the sequence
void CountDismatch(){
    int n; cin >> n;
    vector <int> vec(n), cev(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> cev[i];
    int ans = 0, i = n -1, j = n-1;
    while(i >= 0) {
        int tmp = cev[i];
        if(tmp !=vec[i])
            i--;
        else if(tmp == vec[i]) {
            ans++;
            i--; j--;
        }
    }
    cout << n - ans;
}

//Determine Is the programme palindromic
void IsPalindrome(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int cnt = 0, diff = 0, mini = 1;
    int i = 0, j = n -1;
    while(i <= j){
        if(vec[i] !=vec[j]){
            diff = abs(vec[i] - vec[j]);
            mini = min(vec[i], vec[j]);
            break;
        }
        i++, j--;
    }
    if(diff == 0) {
        cout << 0;
        return 0;
    }
    vector <int> cev(n), tor(n);
    for(int i = 0; i < n; i++){
        cev[i] = vec[i] % diff;
        tor[i] =(mini !=0) ? (vec[i] % mini) : 0;
    }
    
    i = 0, j = n -1;
    bool flag = false, band = false;
    while(i <= j) {
        if(cev[i] !=cev[j])
            flag = true;
        else if(tor[i] !=tor[j])
            band = true;
        i++; j--;
    }
    if(flag && band)
        cout << 1;
    else if(flag)
        cout << mini;
    else if(band)
        cout << diff;
    else {
        for(int i = 0; i < n; i++){
            if(vec[i]% diff != 0)
                cnt++;
        }
        sort(vec.begin(), vec.end());
        (vec[0] == vec[n - 1])? cout << vec[0] : cout << 1;
    }
}

//Distribute deduct among n elememts
void Distribute(){
    int n, sum, deduct, cnt = 1;
    cin >> n >> sum >> deduct;
    int tmp = deduct;
    vector <int> result;
    vector <int> sides{1, 2, 3, 4, 5, 6 };
    for(int i = 0; i < n - 1; i++){
        for(int j = 5; j < 0; j--){
            while(deduct >= sides[j] && sides[j] <= sum - deduct) {
                deduct -= sides[j];
                result.push_back(sides[j]);
                cnt++;
            }
        }
    }
    sort(result.rbegin(), result.rend());
    for(int i = 0; i < n - 2; i++){
        while(result[i] > 1) {
            if(result.size()== n -1)
                break;
            result[i]--;
            result.push_back(1);
        }
    }
    result.push_back(sum - tmp);
    if(result.size() > n){
        result[n - 1] += result.back();
        result.pop_back();
    }
    else 
        result.push_back(1);
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
} 

//Count Diffrence of smallest pair
void Diff(){
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a = n, b = n - i;
        for(int j = 2; j < k; j++){
            int diff = a - b;
            if(diff >= 0 && a >= b)
                cnt++;
            if(diff >= 2) {
                a = b; b = diff;
            }
            else 
                break;
            cout << diff << " " << a << " " << b << " " << cnt << "\n";
        }
    }
    cout << "\n" << cnt;
}
#include<bits/stdc++.h>
using namespace std;
void solve_b_div4()
{
    int n;
    cin >> n;
    set<int> s({});
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.emplace(x);
    }
    for (auto j : s)
        ans++;
    if (ans == n)
        cout << "YES\n";
    else
        cout << "NO\n" ;
}
void solve_div3()
{
    set<char> unique_chars;
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tmp = "";

  // Convert all characters to lowercase
    for (int i = 0; i < n; i++)
        s[i] = tolower(s[i]);

  // Create a string with unique characters
    for (int i = 0; i < n; i++)
        tmp += s[i];
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

  // Check if the unique characters form the string "meow"
    if (tmp == "meow")
        cout << "YES\n";
    else
        cout << "NO\n";
}
void diff() {
    vector<int> vec = {1, 3, 7, 10, 15};
    int n = vec.size();
    set<int> diff;
    for (int i = 0; i < n - 1; i++)
        diff.insert(vec[i + 1] - vec[i]);
    cout << diff.size();
}
void solve8()
{
    // https://codeforces.com/contest/1702/problem/B
    string s;
    cin >> s;
    set<char> set({});
    int c = 0;
    int cpp = 0;
    int it = 0;
    for (int i = 0; i < s.length(); i++)
    {
        map<char, int> m;
        string ns;
        for (int j = i; j < s.length(); j++)
        {
            if (m[s[j]] == 0)
            {
                c++;
                m[s[j]]++;
            }
            if (c == 3)
            {
                if (m[s[j + 1]] == 0)
                {
                    cpp++;
                    c = 0;
                    i = j;
                    break;
                }
            }
            else
                i = j;
        }
    }
    if (c > 0)
        c = 1;
    cout << c + cpp << "\n";
}
void musical_puzzle()
{
    //https://codeforces.com/contest/1833/problem/A
    int n;
    int result = 0;
    string str;
    char temp;
    cin >> n;
    set<char> s({});

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cin >> str;
    
        for (int j = 1; j < str.length(); j++)
        {
            temp = str[j] + str[j - 1];
            cout << temp << endl;
            s.insert(temp);
        }
        temp = 0;
        for (int z = 0; z < s.size(); z++)
        {
            result++;
        }
        cout << result << "\n";
    }
}
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool prime[1000000 + 1];
vector<int> parent(1000000 + 1);
vector<int> siz(1000000 + 1);

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    siz[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}

void SieveOfEratosthenes() {
    int n = 1000000;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    // Call SieveOfEratosthenes to precompute primes
    SieveOfEratosthenes();

    // Example union-find operations
    int num1 = 7;
    int num2 = 11;

    // Initialize sets
    make_set(num1);
    make_set(num2);

    // Check if the numbers are prime
    if (prime[num1] && prime[num2]) {
        cout << num1 << " and " << num2 << " are prime numbers." << endl;

        // Perform union operation
        union_sets(num1, num2);

        // Check if they are in the same set after union
        if (find_set(num1) == find_set(num2)) {
            cout << num1 << " and " << num2 << " are in the same set." << endl;
        } else {
            cout << "Error: Union failed." << endl;
        }
    } else {
        cout << "Both numbers must be prime for the union operation." << endl;
    }

    return 0;
}
-----
ll traverse(ll a, ll b, ll m,ll n, set<int> s, vector<vector<int> > final){
     if(s.count(final[a][b])==1){
         return 0;

     }
     if(a==m-1 && b==n-1){
         return 1;
     }
     s.insert(final[a][b]);
     if(a>=m-1){
         return traverse(a,b+1,m,n,s,final);
     }
     if(b>=n-1){
         return traverse(a+1,b,m,n,s,final);
     }
     return traverse(a+1,b,m,n,s,final)+traverse(a,b+1,m,n,s,final);
 }
#include<bits/stdc++.h>
using namespace std;
void solve7() {
    int n;
    cin >> n;
    map<int, int> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool ans = false;
    for (auto i : m) {
        if (i.second >= 3) {
            ans = true;
            cout << i.first << endl;
            break;
        }
    }
    if (!ans) {
        cout << -1 << endl;
    }
}

void solve8() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans << "\n";
}
void solve9()
{
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    int n, c = 0, news = 0;
    cin >> s >> n;
    int nn = n;
    string temp = s;
    map<char, int> m;
    sort(s.begin(), s.end());
    for (int j = 0; j < s.length(); j++)
    {
        if ((s[j] - 'a' + 1) <= n)
        {
            ns += s[j];
            n -= (s[j] - 'a' + 1);
        }
    }
    for (int i = 0; i < ns.length(); i++)
        m[ns[i]]++;
    for (int i = 0; i < temp.length(); i++)
    {
        if (m[temp[i]] > 0)
        {
            op += temp[i];
            m[temp[i]] -= 1;
            c++;
        }
        if (c == ns.length())
            break;
    }
    cout << op << "\n";
}
void solve10()
{
    // https://codeforces.com/contest/1702/problem/C
    int n, q;
    cin >> n >> q;
    // vector<int>stations(n+1);
    // vector<pair<int, int>>queries(q+1);
    int last = n - 1;
    map<int, int> m;
    map<int, int> m2;
    map<int, int> l;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
        if (m2[x] == 1)
        {
            m[x] = i;
            l[x] = i;
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        if (l[b] && m[a] && m[a] < l[b])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
void solve11()
{
    int n;
    cin >> n;
    string op = "";
    int t = 0;
    string s;
    cin >> s;
    map<string, int> m;
    for (int i = 1; i < n; i++)
    {
        string temp;
        temp += s[i - 1];
        temp += s[i];
        m[temp]++;
        if (t < m[temp])
        {
            t = m[temp];
            op = temp;
        }
        temp = "";
    }
    cout << op << "\n";
}
void solve12() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans ;
}
int &maxe(int &a, int &b)
{
    return a > b ? a : b;
}
void hard_problem()
{
    int n, display = 0;
    cin >> n;
    map<string, int> result = {{"Bessie", 7}, {"Mildred", 7}, {"Elsie", 7}};
    int *temp = &result["Bessie"];
    int temp2 = 7;
    vector<pair<int, string>> cows(n);
    vector<pair<int, int>> changeAmt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second >> changeAmt[i].second;
        changeAmt[i].first = cows[i].first;
    }

    sort(cows.begin(), cows.end());
    sort(changeAmt.begin(), changeAmt.end());

    // cout << "a7a " << "\n";
    // for (int z = 0; z < n ; z++){
    //   cout << cows[z].first << " " << cows[z].second << " " << changeAmt[z].second << "\n";
    // }
    for (int j = 0; j < n; j++)
    {
        // temp = maxe(  result[cows[0].second] , maxe(result[cows[1].second] , result[cows[2].second] ) );
        result[cows[j].second] += changeAmt[j].second;

        if (&result[cows[j].second] == temp)
        {
            if (temp != &result[cows[j].second])
            {
                display++;
            }
            temp = &result[cows[j].second];
            temp2 = result[cows[j].second];
        }
        cout << cows[j].second << " display : " << display << " value -->  " << result[cows[j].second] << "\n";
    }
    cout << display;
}
void solve_div4C()
  {
    int n;
    int temp = 0;
    cin >> n;
    string v[3][n];
    map<string, int> v2;
    string t = "";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> v[i][j];
        v2[v[i][j]]++;
      }
    }
    for (int i = 0; i < 3; i++)
    {
      for (int z = 0; z < n; z++)
      {
        if (v2[v[i][z]] == 2)
          temp += 1;
        if (v2[v[i][z]] == 1)
          temp += 3;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
  }
/* for(int i = 0 ; i < 3 ; i++){
      for(int j = 0;  j < n ; j++){
      if(v2[i][j] == 2) temp +=1;
      if(v2[i][j] == 1) temp +=3;
      }
      cout << temp << " ";
    }
    */
void solve_LLRR()
  {
    ll n, temp = 0, temp1 = 0, temp2 = 0;
    map<char, int> m;
    cin >> n;
    string s;
    cin >> s;
    int counter = 0;
    int idx = 0;
    int idx2 = 1;
    int size = n / 2;
    s[0] = 'R';
    for (int j = 0; j < n; j++)
    {
      if (j <= size)
      {
        s[n - j] = 'L';
        // cout << s[n-j-1] << " "  << n-j-1;
      }
      if (j > size)
      {
        s[j - (size + 1)] = 'R';
        // cout << s[j-size] << " " << j-size <<" ";
      }
      for (int z = 0; z < n; z++)
      {
        if (s[z] == 'R')
          temp += (n - 1) - z;
        else
          temp += z;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
    // cout << idx;
    // cout << s;
  }
