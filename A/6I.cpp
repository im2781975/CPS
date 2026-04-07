/*██████

#include<bits/stdc++.h>
using namespace std;
// todo defines
#define ll                  long long
#define int                 long long
#define double              long double
#define ld                  long double
#define f(i,n)              for(ll i=0;i<(n);i++)
#define f1(i,n)             for(ll i=1;i<=(n);i++)
#define el  	            '\n'
#define sq(a)               (a)*(a)
#define pb                  emplace_back
#define sz(x)               (int)((x).size())
#define all(x)              (x).begin(), (x).end()
#define asort(a,n)          sort(a,a+n)
#define dsort(a,n)          sort(a,a+n,greater<>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<>());
#define cina(arr)           f(i,n) cin >> arr[i];
#define YES                 cout << "YES\n"
#define Yes                 cout << "Yes"<<el
#define yes                 cout << "yes"<<el
#define NO                  cout << "NO\n"
#define No                  cout << "No"<<el
#define no                  cout << "no"<<el
#define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define TC                  int t; cin >> t; while(t--)


// todo typedefs
typedef pair<int,int> pii;
typedef map<int,int>mii;
typedef vector<int>vi;
typedef vector<pii>vii;
typedef set<int> si;
typedef set<char> sc;


bool as_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return (a.second < b.second); }//sort the vector pair in assending order according to second element
bool ds_first(const pair<ll,ll> &a, const pair<ll,ll> &b){ return (a.first > b.first);}//sort the vector pair in decending order according to first element
bool ds_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return a.second>b.second;}//sort the vector pair in decending order according to second element

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
ll factorial(ll n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)fact *= i;
    return fact;
}
bool primeFactors(int n, int l, int r, bool notFound)
{
    for (int i = l; i <= r; i++)
    {
        if (i == 1)
            i++;
        if (n % i == 0)
        {
            cout << i << " ";
            notFound = false;
        }
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    return notFound;
}
bool IsInBinarySequence(ll number) {
    ll numberToCheck = 1;
    do {
        if (number == numberToCheck) return true;
        numberToCheck *= 2;
    } while (numberToCheck <= number);
    return false;
}
ll nextPowerOf2(ll n)
{
    if (n && !(n & (n - 1)))
        return n;
    ll cnt = 0;
    while (n != 0)
    {
        n >>= 1;
        cnt++;
    }
    ll x = 1;
    x = x << cnt;
    return x;
}
ll highestPowerof2(ll n)
{
    ll res = 0;
    for (ll i = n; i >= 1; i--)
    {
        // If i is a power of 2
        if ((i & (i - 1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}

vector<ll> first50fib1_1_2()
{
    vector<ll>v = { 1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155, 165580141 ,267914296 ,433494437 ,701408733 ,1134903170 ,1836311903 ,2971215073 ,4807526976 ,7778742049,12586269025,20365011074 };
    return v;
}
void first50fib0_0_1()
{
    ll arr[51]={0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368,75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
}
ll fib(ll n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
ll binets_formula(ll n) {
    double sqrt5 = sqrt(5);

    int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

    return F_n;
}

/*const int N = 1e7;
bool prime[N+3];
void Sieve() {
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= N; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}
*/
/*
void Sieve(int n) {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            for (int j = 2 * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
}
 */

void  luckyGenerator() {
    vector<ll> lucky;
    lucky.pb(0);
    int idx = 0;
    while (lucky.back() < 1e10) {
        lucky.push_back(((lucky[idx] * 10) + 4));
        lucky.push_back((lucky[idx] * 10) + 7);
        idx++;
    }
}
int binarySearch(int a[], int first, int last, int search_num) {
    int middle;
    if (last >= first) {
        middle = (first + last) / 2;
        //Checking if the element is present at middle loc
        if (a[middle] == search_num)
            return middle + 1;

            //Checking if the search element is present in greater half
        else if (a[middle] < search_num)
            return binarySearch(a, middle + 1, last, search_num);

            //Checking if the search element is present in lower half
        else
            return binarySearch(a, first, middle - 1, search_num);
    }
    return -1;
}
void factorize(long long n) {
    int count = 0;
    while (!(n % 2)) {
        n /= 2;
        count++;
    }
    if (count)
        cout << 2 << " " << count << endl;
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            cout << i << " " << count << endl;
    }
    if (n > 2)
        cout << n << " " << 1 << endl;
}
void primeFactors(ll num) {
    ll fac = 2;
    while (num > 1) {
        if (num % fac == 0) {
            cout << fac << " ";
            num /= fac;
            ll pow = 1;
            while (num % fac == 0) {
                num /= fac;
                pow++;
            }
            cout << pow << el;
        }
        else {
            fac++;
        }
    }
}
bool onePrimeFactor(ll num) {
    ll fac = 2;
    int cnt = 0;
    while (num > 1) {
        if (num % fac == 0) {
            cnt++;
            while (num % fac == 0)
                num /= fac;
        } else
            fac++;
        if (cnt >= 2)
            return false;
    }
    return true;
}
bool isPerfect(ll d)
{
    double temp = d;
    d = sqrt(d);
    temp = sqrt(temp);
    if (temp == d)
        return true;
    return false;
}
void sort(string s[], int n)//sort string according to length
{
    for (int i = 1; i < n; i++)
    {
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}
bool IsPowerOfTwo(ll x)
{
    return (x & (x - 1)) == 0;
}
int binarySearchCount(ll arr[], int n, ll key)
{
    int left = 0, right = n;

    int mid;
    while (left < right) {
        mid = (right + left) >> 1;

        if (arr[mid] == key) {
            while (mid + 1 < n && arr[mid + 1] == key)
                mid++;
            break;
        }

        else if (arr[mid] > key)
            right = mid;

        else
            left = mid + 1;
    }

    while (mid > -1 && arr[mid] > key)
        mid--;

    return mid + 1;
}
int countOnesInBin(ll n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
string convertToBinary(ll x) {
    string s;
    while (x > 0) {
        if (x % 2)
            s += '1';
        else
            s += '0';
        x /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}
ll convertToDecimal(string s) {
    reverse(s.begin(), s.end());
    ll ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')
            ans += (1 << i);
    }
    return ans;
}
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
bool palindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}
int sumOfDigits(ll n) {
    int sum = 0;
    string s = to_string(n);
    f(i, s.length())sum += s[i] - '0';
    return sum;
}
bool isUnique(ll x) {
    int size = log10(x) + 1;
    set<int> s;
    while (x > 0) {
        s.insert(x % 10);
        x /= 10;
    }
    if (s.size() == size)
        return true;
    else
        return false;
}
void subString(string s, int n) {
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << el;
}

bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second > b.second);
}

ll Round(double n) {
    ll y = n;
    if (y == n)
        return y;
    else
        return y + 1;
}
bool isLetter(char x) {
    if (x >= 'A' && x <= 'Z')
        return true;
    else if (x >= 'a' && x <= 'z')
        return true;
    else
        return false;
}
int findLastIndex(string s, char x)
{
    int index = -1;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == x)
            index = i;
    return index;
}
bool isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
        return true;
    else
        return false;
}
bool isOdd(char c) {
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
        return true;
    else
        return false;
}
ll sum(ll n) {
    ll sum = (n * (n + 1)) / 2;
    return sum;
}
ll sumInRange(ll l , ll r) {
    ll ans = sum(r) - sum(l - 1);
    return ans;
}
bool sortedAsc(ll arr[],ll n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}
bool sortedDesc(ll arr[],ll n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            return false;
    }
    return true;
}
ll decimalDigitRoot(ll n) {
    return ((n - 1) % 9) + 1;
}
bool equal(char x , char y) {
    if (x == '.')
        return true;
    return x == y;
}
string add(string s , int n) {
    string temp = "";
    while (n--)
        temp += s;
    return temp;
}
bool regularBracketSequence(string s) {
    stack<char> s1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            s1.push('(');
        else {
            if (s1.empty())
                return false;
            else
                s1.pop();
        }
    }
    return s1.empty();
}
bool sumDigits(int n) {
    int rem = 0;
    while (n) {
        rem += n % 10;
        n /= 10;
    }
    return rem == 10;
}
bool sortedA(int arr[],int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
            return false;
    return true;
}
bool sortedD(int arr[],int n) {
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[i - 1])
            return false;
    return true;
}

//int ans[N];
/*
vector<int>adjList[N];
int dfs(int node,int parent) {
    visited[node] = true;
    for (auto adjNode : adjList[node]) {
        if (!visited[adjNode]) {
            group.pb(adjNode);
            dfs(adjNode, node);
        }
        else if (visited[adjNode] && adjNode != parent)
            return 1;
    }
    return 0;
}
 */
/*
void bfs(int node) {
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty()) {
        group.pb(q.front());
        for (auto adjNode : adjList[q.front()])
            if (!visited[adjNode])
                q.push(adjNode), visited[adjNode] = 1;
        q.pop();
    }
}

void dijkstra(int source, vector<vector<pair<int,int>>>&graph) {
    int n = graph.size();
    vector<int> dist(n, inf), pre(n, -1);
    // cost , node
    priority_queue<pair<int, int>> nextToVisit;

    dist[source] = 0;
    pre[source] = source;
    nextToVisit.push({0, source});

    while (!nextToVisit.empty()) {
        int u = nextToVisit.top().second;
        nextToVisit.pop();
        if (visited[u])continue;
        visited[u] = 1;
        for (auto e : graph[u]) {
            int v = e.first;
            int c = e.second;
            if (dist[u] + c < dist[v]) {
                dist[v] = dist[u] + c;
                pre[v] = u;
                nextToVisit.push({-dist[v], v});
            }
        }
    }
}
*/
string onlyAlphaString(string s) {
    string temp = "";
    for (int i = 0; i < s.size(); i++)
        if (isalpha(s[i]))temp += tolower(s[i]);
    return temp;
}
int computeXOR(ll a) {
    if (a % 4 == 0) return a;
    else if (a % 4 == 1) return 1;
    else if (a % 4 == 2) return a + 1;
    else return 0;
}
void sort3(int& a, int& b, int& c) {
    if (a > b)swap(a, b);
    if (b > c)swap(b, c);
    if (a > b)swap(a, b);
}
int lis(vector<int>&a) {
    int n = a.size();
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
    int ans = dp[0];
    for (int i = 1; i < n; i++)ans = max(ans, dp[i]);
    return ans;
}
bool oneCharacterString(string s) {
    vasort(s);
    return s[0] == s[s.size() - 1];
}

ll nPr(ll n , ll r) {
    ll fact = 1;
    while (r--) {
        fact *= n;
        n--;
    }
    return fact;
}


//todo consts
const ll mod = 1e9 + 7;
//const int inf = 1e9 + 10;
const double pi=acos(-1);
bool containEven(string s) {
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')return true;
    return false;
}void printNcR(int n, int r) {
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            long long m = __gcd(p, k);

            p /= m;
            k /= m;

            n--;
            r--;
        }
    } else
        p = 1;

    cout << p << endl;
}
string convertToTernary(int n) {
    string ans = "";
    while (n > 0) {
        ans += (char) ((n % 3) + '0');
        n /= 3;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
string sumOfTernaries(string s1,string s2) {
    string ans = "";
    for (int i = 0; i < s1.size(); i++) {
        int x = (s1[i] - '0') + (s2[i] - '0');
        x %= 3;
        ans += (char) (x + '0');
    }
    return ans;
}
string unique_string(string s) {
    string t = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t.back())continue;
        t += s[i];
    }
    return t;
}
int countOdd(int L, int R) {

    int N = (R - L) / 2;

    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;

    return N;
}
/*
void dfs(int node) {
    group.pb(node);
    visited[node] = true;
    for (auto adjNode: adjList[node])
        if (!visited[adjNode])
            dfs(adjNode);
}
 */

bool isPowerof10(int n) {
    while (n >= 10 && n % 10 == 0)n /= 10;
    return n == 1;
}
int sumDigitsString(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++)sum += s[i] - '0';
    return sum;
}
long long nCr(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int log_a_base_b(int a, int b) {
    return log2(a) / log2(b);
}
/*
int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = {0, -1, 1, -1, 0, 1, -1, 1};
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*void dfs(int node,int depth) {
    mx = max(mx, depth);
    vis[node] = 1;
    for (auto adjNode: adjList[node])
        dfs(adjNode, depth + 1);
}
 */

/*
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
*/
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("Ofast")
string converToPigLatin(string s) {
    if (s.size() == 1) {
        s += "ay";
        return s;
    }
    string ans = "";
    for (int i = 1; i < s.size(); i++) {
        if (i == 1)ans += (char) toupper(s[i]);
        else ans += (char) tolower(s[i]);
    }
    ans += tolower(s[0]);
    ans += "ay";
    return ans;
}
int cntDivisors(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i * i == n)cnt = (cnt % mod + 1 % mod) % mod;
            else cnt = (cnt % mod + 2 % mod) % mod;
        }
    }
    return cnt % mod;
}
string cfRate(int n) {
    if (n < 1200)return "Newbie";
    else if (n <= 1399)return "Pupil";
    else if (n <= 1599)return "Specialist";
    else if (n <= 1899)return "Expert";
    else if (n <= 2099)return "Candidate master";
    else if (n <= 2299)return "Master";
    else if (n <= 2399)return "International master";
    else if (n <= 2599)return "Grandmaster";
    else if (n <= 2999)return "International grandmaster";
    return "Legendary grandmaster";
}
int maxDigit(int n) {
    int mx = 0;
    while (n > 0) {
        mx = max(mx, n % 10);
        n /= 10;
    }
    return mx;
}
int minDigit(int n) {
    int mn = 1e18;
    while (n > 0) {
        mn = min(mn, n % 10);
        n /= 10;
    }
    return mn;
}
string convert_from_decimal_to_X(int n, int x) {
    string ans = "";
    while (n > 0) {
        int rem = n % x;
        if (rem >= 10) {
            rem -= 10;
            ans += ('A' + rem);
        } else ans += (rem + '0');
        n /= x;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int convert_from_X_to_Decimal(string s,int x) {
    reverse(s.begin(), s.end());
    int st = 1, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            if (isalpha(s[i])) {
                int dig = (s[i] - 'A') + 10;
                ans += dig * st;
            } else ans += (s[i] - '0') * st;
        }
        st *= x;
    }
    return ans;
}
int mod9 = 998244353;
int fast_power(int a, int n) {
    if (n == 0)
        return 1;
    // putting a check to avoid unnecessary recursive calls
    if (a == 0)
        return 0;
    int tmp = fast_power(a, n / 2);
    if (n % 2 == 0) // b is even
        return (tmp % mod9 * tmp % mod9) % mod9;
    else
        return (a % mod9 * tmp % mod9 * tmp % mod9) % mod9;
}
bool checkSemiPrime(int num) {
    int cnt = 0;
    for (int i = 2; i * i <= num && cnt < 2; i++) {
        while (num % i == 0) {
            num /= i;
            cnt++;
            if (cnt > 2)break;
        }
    }
    if (num > 1)cnt++;
    return cnt == 2;
}
string binaryAdd(string a, string b) {
    string result = "";
    int temp = 0;
    int size_a = a.size() - 1;
    int size_b = b.size() - 1;

    while (size_a >= 0 || size_b >= 0 || temp == 1) {
        temp += ((size_a >= 0) ? a[size_a] - '0' : 0);
        temp += ((size_b >= 0) ? b[size_b] - '0' : 0);
        result = char(temp % 2 + '0') + result;
        temp /= 2;
        size_a--;
        size_b--;
    }
    return result;
}
int cmp(string a,string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)cnt += (a[i] != b[i]);
    return cnt;
}
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i == i)sum += i;
            else sum += (n / i) + i;
        }
    }
    return sum;
}
int cntDistinctLetters(string s) {
    int cnt = 0;
    map<char, bool> vis;
    for (auto c: s)if (!vis[c] && c != ' ')cnt++, vis[c] = 1;
    return cnt;
}


int32_t main() {
    covid19
    TC {
        string s;
        cin >> s;
        if (s[0] == 'R' && isdigit(s[1]) && s.find('C')!=s.npos) {
            int row = 0;
            int i = 1;
            while (s[i] != 'C') {
                row *= 10;
                row += (s[i++] - '0');
            }
            int col = 0;
            i++;
            while (i < s.size()) {
                col *= 10;
                col += (s[i++] - '0');
            }
            string ans = "";
            while (col > 0) {
                ll x = col % 26;
                if (!x) {
                    x = 26;
                    col -= 26;
                }
                ans += (char) ('A' + x - 1);
                col /= 26;
            }
            reverse(ans.begin(),ans.end());
            cout << ans << row << el;
        }
        else {
            string ans = "";
            int i = 0;
            while (isalpha(s[i])) {
                ans += (char) s[i];
                i++;
            }
            int row = 0;
            for (; i < s.size(); i++) {
                if (isdigit(s[i])) {
                    row *= 10;
                    row += (int) (s[i] - '0');
                }
            }
            cout << "R" << row;
            reverse(ans.begin(), ans.end());
            int val = 1;
            int col = 0;
            for (i = 0; i < ans.size(); i++) {
                int x = (int) (ans[i] - 'A' + 1);
                col += (x * val);
                val *= 26;
            }
            cout << "C" << col << el;
        }
    }
}
/*  NOTESSS
decimal digit root ::
 d(n)=1+((n−1)mod9)
 */
/********************/
//BINARY_BOY!!
//THINK TWICE CODE ONCE { TRUE }
// #####   ###  ##   #   ###   #####   #   #  #####	 ####    #   #
// #    #   #   # #  #  #   #  #    #   # #   #	#	#	 #    # #	
// #####    #   #  # #  #####  #####     #    #####	#	 #	   #	
// #    #   #   #   ##  #   #  #   #     #    #	#	#	 #     #
// #####   ###  #    #  #   #  #    #    #    #####	 ####	   #
//################################################################################################################################################################
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~=~=~~~~~~~~~=~~~~~=~=~~~===~~~===~~=~====~==~~~~====~~=~~=~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~==~~=~~==~~~~==~~~~~~~=====~~~~==~~=~~~===~=~~~~~~~==~===~==~~~==~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~~=~=~=~=~==~~~=~~~~~~~~~~~~~~~~~~=~~=~=~~=~~~~~~=~~~===~====~~~=~======~=~=~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=88ZDD8OOO$+~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~=~==~==~=~~~~=~===~~=~=~=====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IO88D8DDDD888O$~==~~~~~=~~~~~~~~~~~~~~~~~~~~~~~=~~~~====~~~~~===~~~~~~~~=~=====~===~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZDN8O8DDD8DNNDND8O=~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~=~~~~~~~=~~~=====~~~=~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?$8NDDNNDNOI+==+7DDD8?$~~~~~~~~~~~~~~~~~~~~=~~~=~=~~~~~~~~~~~~~~=~~~=~~~~=~~~~=~~===~~~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8DD8DNDDDO+=~~~=+IDDNZO=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~=~~~~~~~======~~~~====~
//~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=+8DDDNNND?+7II:~~=+ZDNDD8I~~~~~~~~~~~~~~~~~~~~=~~~~~~==~~~~~~~~~~~~~~~~~~~~~~=~~=~~~~===~====
//~~~~~~~~~~~~~~~~~~~==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IODD8NNDNI=+I7II?~==$DDND8$=~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~~~~~~~~~~~~~~~=========~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+ZDDDD88O?=~~7I+~Z$$ZNDO8DO=~~~~~~~~~~~~~~~~~~~~~~~=~~~=~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~=====~==
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+O8DDDD8+I?=~:~~~~I78NDDDND$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=ODDDDDD8?+=~::==~?++DDDD8O7?=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~==~======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+I78DDDDDD7+~~~~~~+?=IDDDNDO=:::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~===
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7IDDNDDNDN$I===$7IZI?DDDDDDD+::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~=====~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=I88ODDDDD?+?+==7$Z7DDDD8DD8=:::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~=======~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?~=ZDDDDDO+==IZ?=+8DDDDDD88ZZ?::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+7I?78O8+~~==IDNNDDDND88ZOZ:,:::~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==~+?OODO$$Z~++D88DDDNDDZ7+~+::::~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=I8D8D88$ZODDODDDD8DDOZ~:::::::~~~~~~~~~~~~~~~~~~~=~=~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~D88DDD88OODO8O888D888DDDD88O::::::~~~~~~~~~~~~~~~==~=~~=~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~=~=~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZOZDO$8$O8DO8D8OO888D88DDDD888O::::~~~~~~~~~~~~~~===~=~==~~~=~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZOO$D8DODOOOOO8OZ$ZZODDD8D888887::::~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?DZ$D$ZZ8D$DOZ$$$D$$OZ$ZZ8ODDD888O::::~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OZZ$OOO8OZ8Z88D8OODO$OOO$$8ZZ8O88O::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O88ZO8$$888D$8ZOO77$777Z$Z$OOD8888~:::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88OZO8Z$88OZDO8O88ZZ8OOO7O$$D88DZ8I:::~~~~~~~~~~~~~~=~~~~~=~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8DZ78$OZ7$O888ZDD8888D$OO$O$O888OD$::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8D$78$OODDZZ8888D8D88D$787O88$8O88O::::~~~~~~~~~~~~~~~~~~~~~=~~=~~~~~~~~~~=~~=~~~~~~~~~~~~~=~~~~=~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88$$ZOZD8DDOODDZZ88ZZD$8D888DDZOO8Z::::~~~~~~~~~~~~~~==~~~=~~~~~~~~=~~~~~~~~~~~~~~~~=~~~~~~=~~~~~~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8$77$7$DOODO888OZZO778O$ZZOODD$O88Z::::~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~==~~~==~~~~~=~=~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z$7$7$$NOD8OZOO7Z$Z77$Z7$$O$OZD$OD8::::~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~====~=~~~~~~~~~~~=~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88Z8888DD8OZ7ZO$8888OZ877O$ZO$$OODZ::::~~~~~~~~~~~~~~~~~~~~=~~=~~~~~==~~~~~~~==~~~~~~~~~~~=~~~~~~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z$$8$$7D8OO77DD8DZOO77877$7O88Z88D8::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~==~~~~~~~==~~~~=~~~~===~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$ZZDZ88OZZOO88DD8D8OO$8777$$$OZ$ZD8~:::~~~~~~~~~~~=~~~~~~~==~~~~~~~~===~~=~~~~~===~~==~===~=~=~=~==~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z8$ZO88DZ8D8DZ$OOO888D8ZD888$8$Z8DO=::~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~=~~=====~~~~===~~=~=~~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88Z$O7Z$7Z88ZOZZZ$D8OOO$D8ZOOO$$DD8+::~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~=~~~~~=~~~=~==~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O8$777OD78Z$$ZZ$OOOZOZ$Z$DZ8ZO88O8ZI::~~~~~~~~~~~~~=~~~~~~~~~~~~~~~==~~~~~~===~~=~===~=~=~~=~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=OO8$ZZO8ZI7$8O8ZZO8O88778ZZOZDDOO$I::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==~=~~==~~=============
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZDOZ8ZZI7788DZ88DO$OOOZO778OO888$7:~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~~~~~===~~==~====~=====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+$ZD8ZI$D$Z7D$OZD:~DO8$8ZIZ7$$88$7:~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~=~~~~~~~=~~===~~~~~~~~~~=========
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZO8$I7O87O778=~=88Z$O8Z88Z7ZZZZ7:~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~=~~~~~~===~~=~=~~~~~===~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=II8DDDOD7?7~::~IO$D$O$$87Z8O$OZ:~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~=~~=
hrs 
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
const int MAXN = 1e6 + 1;
string st [ MAXN ];
string s;
/*
string Text = "456";
int Number;
if ( ! (istringstream(Text) >> Number) ) Number = 0; - > string to number
*/
bool cmp(string a , string b)
{
	if(a.size() != b.size())
		return a.size() < b.size();
	return a < b;	
}
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	int n;
	cin >> n;
	st [ 1 ] = "A";
	for(int i = 2 ;  i < MAXN ; i++)
	{
		bool flag = false;
		s = st [ i - 1 ];
		string s1;
		int a = -1 , b = 0;
		for(int j = s.size() - 1 ; j >= 0 ; j--)
		{
			if(s [ j ] != 'Z'){
				a = j;
				break;
			}
			else{
				b++;
			}
		}
		string s2;
		for(int j = 0 ; j < b ; j++)
			s2 += 'A';
		if(a == -1)
			s = s2 + 'A';
		else{
			s.erase(s.begin() + a + 1, s.end());
			s += s2;
			s[ a ]++;
		}
			st [ i ] = s;
	}

	for(int i = 0 ; i < n ; i++)
	{
		cin >> s;
		if(s [ 0 ] == 'R' && (s [ 1 ] <= '9' && s[ 1 ] >= '0'))
		{
			int a = -1;
			string s1;
			for(int j = 1 ; j < s.size() ; j++)
			{
				if(s [ j ] == 'C')
				{
					a = j;
					break;
				}
				else{
					s1 += s [ j ];
				}
			}
			if(a == -1)
			{
				string s2;
				s1 = s2;
				for(int j = 0 ; j < s.size() ; j++)
				{
					if(s[ j ] <= 'Z' && s[ j ] >= 'A')
						s1 += s [ j ];
					else{
						s2 += s [ j ];
					}	
				}
				cout << 'R' << s2 << 'C';
				cout << lower_bound(st , st + MAXN , s1 , cmp) - st << endl;			
			}
			else{
				int num = 0;
				for(int j = s.size() - 1  , x = 1; j > a ; j-- , x *= 10)
					num += (s [ j ] - '0')* x;
				cout << st [ num ] << s1 << endl;	
			}
			a = -1;
		}
		else{
			
			string s1 , s2;
			for(int j = 0 ; j < s.size() ; j++)
			{
				if(s[ j ] <= 'Z' && s[ j ] >= 'A')
					s1 += s [ j ];
				else{
					s2 += s [ j ];
				}	
			}
			cout << 'R' << s2 << 'C';
			cout << lower_bound(st , st + MAXN , s1 , cmp) - st << endl;	
		}
		s = 'S';
		
	}
}
/*********/
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <error.h>
#include <float.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <locale>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <exception>
#include <functional>
#include <limits>
#include <map>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <istream>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <utility>
#include <vector>
#include <cwchar>
#include <cwctype>
#include <complex.h>
#include <fenv.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <tgmath.h>
#include <conio.h>
#include <numeric>
#include <list>
#include <windows.h>
#include <cfloat>
#include <climits>
#include <tuple>
using namespace std;
//written by JinTianHao
//THINK TWICE CODE ONCE { TRUE }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~=~=~~~~~~~~~=~~~~~=~=~~~===~~~===~~=~====~==~~~~====~~=~~=~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~==~~=~~==~~~~==~~~~~~~=====~~~~==~~=~~~===~=~~~~~~~==~===~==~~~==~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~~=~=~=~=~==~~~=~~~~~~~~~~~~~~~~~~=~~=~=~~=~~~~~~=~~~===~====~~~=~======~=~=~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=88ZDD8OOO$+~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~=~==~==~=~~~~=~===~~=~=~=====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IO88D8DDDD888O$~==~~~~~=~~~~~~~~~~~~~~~~~~~~~~~=~~~~====~~~~~===~~~~~~~~=~=====~===~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZDN8O8DDD8DNNDND8O=~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~=~~~~~~~=~~~=====~~~=~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?$8NDDNNDNOI+==+7DDD8?$~~~~~~~~~~~~~~~~~~~~=~~~=~=~~~~~~~~~~~~~~=~~~=~~~~=~~~~=~~===~~~~====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8DD8DNDDDO+=~~~=+IDDNZO=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~=~~~~~~~======~~~~====~
//~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=+8DDDNNND?+7II:~~=+ZDNDD8I~~~~~~~~~~~~~~~~~~~~=~~~~~~==~~~~~~~~~~~~~~~~~~~~~~=~~=~~~~===~====
//~~~~~~~~~~~~~~~~~~~==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IODD8NNDNI=+I7II?~==$DDND8$=~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~~~~~~~~~~~~~~~=========~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+ZDDDD88O?=~~7I+~Z$$ZNDO8DO=~~~~~~~~~~~~~~~~~~~~~~~=~~~=~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~=====~==
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+O8DDDD8+I?=~:~~~~I78NDDDND$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=ODDDDDD8?+=~::==~?++DDDD8O7?=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~==~======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+I78DDDDDD7+~~~~~~+?=IDDDNDO=:::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~===
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~7IDDNDDNDN$I===$7IZI?DDDDDDD+::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~=====~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=I88ODDDDD?+?+==7$Z7DDDD8DD8=:::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~=======~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?~=ZDDDDDO+==IZ?=+8DDDDDD88ZZ?::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+7I?78O8+~~==IDNNDDDND88ZOZ:,:::~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==~+?OODO$$Z~++D88DDDNDDZ7+~+::::~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=I8D8D88$ZODDODDDD8DDOZ~:::::::~~~~~~~~~~~~~~~~~~~=~=~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~==~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~D88DDD88OODO8O888D888DDDD88O::::::~~~~~~~~~~~~~~~==~=~~=~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~=~=~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZOZDO$8$O8DO8D8OO888D88DDDD888O::::~~~~~~~~~~~~~~===~=~==~~~=~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZOO$D8DODOOOOO8OZ$ZZODDD8D888887::::~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?DZ$D$ZZ8D$DOZ$$$D$$OZ$ZZ8ODDD888O::::~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OZZ$OOO8OZ8Z88D8OODO$OOO$$8ZZ8O88O::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O88ZO8$$888D$8ZOO77$777Z$Z$OOD8888~:::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88OZO8Z$88OZDO8O88ZZ8OOO7O$$D88DZ8I:::~~~~~~~~~~~~~~=~~~~~=~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8DZ78$OZ7$O888ZDD8888D$OO$O$O888OD$::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8D$78$OODDZZ8888D8D88D$787O88$8O88O::::~~~~~~~~~~~~~~~~~~~~~=~~=~~~~~~~~~~=~~=~~~~~~~~~~~~~=~~~~=~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88$$ZOZD8DDOODDZZ88ZZD$8D888DDZOO8Z::::~~~~~~~~~~~~~~==~~~=~~~~~~~~=~~~~~~~~~~~~~~~~=~~~~~~=~~~~~~=~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~8$77$7$DOODO888OZZO778O$ZZOODD$O88Z::::~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~==~~~==~~~~~=~=~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z$7$7$$NOD8OZOO7Z$Z77$Z7$$O$OZD$OD8::::~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~====~=~~~~~~~~~~~=~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88Z8888DD8OZ7ZO$8888OZ877O$ZO$$OODZ::::~~~~~~~~~~~~~~~~~~~~=~~=~~~~~==~~~~~~~==~~~~~~~~~~~=~~~~~~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z$$8$$7D8OO77DD8DZOO77877$7O88Z88D8::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~==~~~~~~~==~~~~=~~~~===~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$ZZDZ88OZZOO88DD8D8OO$8777$$$OZ$ZD8~:::~~~~~~~~~~~=~~~~~~~==~~~~~~~~===~~=~~~~~===~~==~===~=~=~=~==~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Z8$ZO88DZ8D8DZ$OOO888D8ZD888$8$Z8DO=::~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~=~~=====~~~~===~~=~=~~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88Z$O7Z$7Z88ZOZZZ$D8OOO$D8ZOOO$$DD8+::~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~=~~~~~=~~~=~==~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O8$777OD78Z$$ZZ$OOOZOZ$Z$DZ8ZO88O8ZI::~~~~~~~~~~~~~=~~~~~~~~~~~~~~~==~~~~~~===~~=~===~=~=~~=~=======
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=OO8$ZZO8ZI7$8O8ZZO8O88778ZZOZDDOO$I::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==~=~~==~~=============
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?ZDOZ8ZZI7788DZ88DO$OOOZO778OO888$7:~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~=~~~~~~~~~===~~==~====~=====
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+$ZD8ZI$D$Z7D$OZD:~DO8$8ZIZ7$$88$7:~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~=~~~~~~~=~~===~~~~~~~~~~=========
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZO8$I7O87O778=~=88Z$O8Z88Z7ZZZZ7:~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~~~=~~~~~~===~~=~=~~~~~===~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=II8DDDOD7?7~::~IO$D$O$$87Z8O$OZ:~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~=~~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==O$88OZO8~~:+77O$OZDOO$777$ZZ8:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O$$OO$$DD8DDDD?8$7Z$OOZO8OODOZ:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$OOO$ZDDD8DDDD$7D7OO8ON$8Z87O8:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=O8$DDDDDDDDDDD8ZZ7$$DDD8$$Z87O~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~=~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZZDDD88DDDDD8DDZ$DDDDDDDD$$O8$Z~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~888DDDDDDDDDDD8DD88DDDDDOI8$$O?=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~=~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~788DDDD888DDD8D88888DDDDDZ7$ZO~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IO88DD8D8DDDDDD8888ODDDDDZIIOZ:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+D88DD8D8888888888OODDDDDDDOZ8~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IOZ8DDD8888888888OOODDDDD8D8$DI~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ZDOZD8DD88D8888888OODDDDDD88O$Z~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OD8OD888888D8D8888OZDDDDDDD887:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$ZOOO88D888888888OOZDDDDDD888O~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=778Z88888888D8878OZDDDDDD888O~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$ZOIO8888888888ZO88DDDDDD88887~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~IO7O88888888888?O8DDDDDD8888Z~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~M~~~~~~$~~~~~~~~~$O88888888888OO8D8D8888888O=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~M~~~~~~~~~~~~~~~~=~~=~+MM8~~~8MMM+~~~MN~~~~$MM~~~~~~~~~:$8888888888OZZDDD88888888O$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~MM~~~~~~:~~~~~~~~ZMMM~MM~~~M~MN~~~M?~7M~~~~ZM+M~~~~~~~~~~=O888888888OZ$8DD8888DD88OZ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~MMM~~~~MM~~~~7MMMI~~~~M8~~~M=ZM~~~=~~~MZ~~~~M=+N~~~~~~~~~~:Z888888888OZ7888888888888O=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~OM~M=~~~MM~~~~MM~~~~~~~M$~~~~~7M~~~~~~~M~~~~M+~IO~~~~~~~~~~~$88888O888OOII88888888888O?~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~M~~87~~~M8~~~=M+~~~~~~=+M~~~~~:N=~~:~~MI?++MM++8Z~~~~~~~~~~~I8888888888O?~888O8888DD8O7~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~M~~~78~:~M7~~~8M~~~=DMN=~=M~~~~~~M?:~~7M~~~MM~:~O7+~~~~~~~~~~I8888888888Z+~888O888O??I?O~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~=NMMMMMMO~=M+~~~MMMMMM7~~~~~+O~~~~D~M=~~MM~~+M~~:~$$~~~~~~~~~~~?888888888O$==O888888Z~~===~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~OM:~~~+M~~IM~~~~M=~~~~~~~~M~~8D~~7O~~M??M=~+M?~~~=$D~~~~~~~~~~~788DD8DDD887=~ZDD88888$~==+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~MI~~~~~M~~8M~~~~M~~~~~~N~~M~~~M+~$8~~DMDMM~MM~~~~$=M:~~~~~~~~~~$O88888888D==88DDDD88887$OI~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~O$~~~~~~M~~MM~:~~MM~~IMMI~~~MMMM~~~~MMM=~O~~==~~~~:MM~~~~~~~~~~~ZO88888888O8DDDDDDD8888DO==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~7M~~~~~~~M~~+MMMM~~~=+~~~~~~~~~~~~:~~~~~~~~~~~~~~~~~~MI~~~~~~~~~?OO88888D8ODDDDDDDDD888OZ+=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~M?~~~~~~~M+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$O8888888OZDDDDDDDD88OO++=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~M$~~~~~~MM=~MI~~~~~~~~~~~~~~~OO~~~~~~~~MM:~~~~~~~~~~~~~Z88888888O$DDDDDD888O?++~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~MD~~~~$M?~MDM?~~~OM~~~~~~MO~MO?M~~~~~:~MM~~~~~~~~~~~~~~OOOOOOO88OZDDDDD88OZ?+=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~~M~:~~MMI~~ZMM~~~~~~M7M:~+M~~~~~~MMM~~~~~~~~~~~~~+OOOO88O88ZDDDDD8OO?++~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~Z$~~~~=M7~~M7O+~~~~~MM=~$MI~~~~~7MZM~~~:~~~~~~~~~+OOOO8888O$DDD88O$==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~M=~~~~~7~~~M:+D~~~~:MD~MM~~~~~:~M?+M~~~~~~~~~~~~~=OO88O888O7DD88O=+=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~~M~~~~~~~~=MMMMM8MMM~MMI~~~~~~~~MMMMMMMM~~~~~~~~~~~ZO88888OO7888?+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~+M~~~~~~~~~M7Z8M8+~~~MMM~~~~~~~OMI:~M=~~~~~~~~~~~~~O8888O888$88++~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~~~~~~~~~~~~~~~+M~~~~~~~~=M~~~OM~~~~M~~MM+~~:~M8~~~N8~~~~~~~~~~~~ZOO888888O$++~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//~~~~~~:....~~~~~....~M......7~MM...~M+~~~M.. 7MM~~IM:...$M~~~....~~:?..Z88888888?+~~~~~....:~.............~~~~~~~~~~~......:~~~~~~....~~~~~~~~:....~~~~~~~~~~~~~
//~~~~~~:.. .~~~~....~~MN....M=?M$...:NN~..M,.. ..MMM=~...~M~~:....~7$Z..$8888888O++~~~~~....~~... ....... .~~~~~~~~~~~.. ....~~~~~~....~~~~~~~~:....~~~~~~~~~~~~~
//~~~~~~:....~~~....,~~~MM=MMD:MM~...:~~.. N.:~:...MM~~....=~~,....?8ZO..+O8888OOO++~~~~~. ..~~:~~~:.. .~~::~~~~~~~~~~: ..... ~~~~~~.. .~~~~~~~~:.. .~~~~~~~~~~~~~
//~~~~~~:.. .~~:....~~~~.~8+...~~~...:~~....,~~~:....~~: ..~~~.....+OZ$..:O8O8888O++~~~~~....~~~~~~:. ..~~~~~~~~~~~~~~, . .  .~~~~~~....~~~~~~~~:.. .~~~~~~~~~~~~~
//~~~~~~:....~~  ..~~~~~..... .:~~...:~~.. .:~~~~. ..~~~ ..:~~......88+...88DD8888++~~~~~....~~~~~~~....~~~~~~~~~~~~~~....: ..~~~~~~.. .~~~~~~~~:....~~~~~~~~~~~~~
//~~~~~~:....~....~~~~~~........~~...:~~.. .:~~~~. ..~~~ ..,~~......78,...88DDDD88Z+~~~~~....~~~~~~~....~~~~~~~~~~~~~~...:~ ..~~~~~~.. .~~~~~~~~~....~~~~~~~~~~~~~
//======:....~. ..~~~~~~....~...~~...~~~....:~~~~....~~~. ..~~......O$...:O8DDD8DD8+=~~~~. ..~==~=~~....=========~~~~:...~~....~=~~~....~~~~~~=~~....~~~~~~~~~~~~~
//======:... .. .=======.. .=, ..=...===.  .~====....~~~....~~......OO...IZDDDDDDDDD...~~. ..~=====~....+=........,==....==.  .=====....========~....=~~~~~~~~~~~~
//~=====:...... .~======....==. .~.. ~==.  .~====. ..===....==......==...O7O8DDDDND8,..++....=++++=~....+=.    ...,==....==.. .==++=....========~....============~
//======:...... ..======. ..==. .....~==. ..~====....==~....~~...,  ,:  .D$8D8DDDDND7..=+....+?????+....?=........:??.. +??,.. :III?....=+======~....============~
//======:....... .~=====. ..==... ...~==. ..~====....===, ..:~. ::. .,...O8DD8$$O8DD8++==....=+++++=.. .++?+?++++++++.. ++?=.. .+??+....++++++++=....?+++????????+
//======:....=~....==~==. ..===......~==. ..~====.. .===~....,. ~~......:ZD8DDDOZDDDDZD==....===+++=.. .++++++++++++~...~~~~....++++.. .++++++++=....+++++++++++++
//~=====:....==, ...====. ..===,.....~==. ..~====.. .====..... .==......+DD8OODDDDDDDN88+....==+++==.. .++++++++++++..... .. ...~+++....++++++++=....+++++++++++++
//======:....===....~===....==~~.... ~==. ..:===~....====..... .==.... .O8DO8OODDDNDDD8D7~...====+==....+=++++++++++....  ......,++=....++++++++=. ..+++++++++++++
//======:....====.. .===.. .====.....~==:....,~,.....====.......==......8D8NNDDNDDDD88DN8Z7II77+++==....+==+===++=+=...:+++++....+++....,,,,,,=+=....,,,,,,+++++++
//======:.. .====,. .===....====~....~===..... .....=====,.....,==......8DDDDD8DDNNND$D8D88DDD8O=+==....+===++++++=, . =+++++....++= ...  ....=+=....   .. +++++++
//======:....=====....==....=====....~====~... ...~======~.....~==......DDDDDNNNND8NNND8$$O8DDNN7++=....+==+===+=++....===+++....:++......... ++=..........+++++++
//======~:::~====~:~:~==::::=====~:~:~====::~~:~:::======~:::~:~==~~~~~~DDDNDDNDI?DNN8DDNDDDDNNN7+==~~~~++===++++=+~~~~++++++~~~~=++~~~~~~~~~~+++~~~~~~~~~~+++++++
//======~::::====~:::===::::====~:~::====:~:~~~~~:::~====~:::::~==~~~~~=I8DNNDD$777DNNNNNNNNNNND?++=~~~~==+++=+===+=~~~=+++++~~~~+++~~~~~~~~~~+++~~~~=~~~~~+++++++
//======~~~~~===~~~~~===~~~~====~~~~~===~~~~~===~~~~~====~~~:~~~==~~~~~=++++???+?+?+IDDNND887$??++==~~~~====++++++++=~~=+++++~~~~+++~===+++++++++~===+++++++++++++
//======~~~~~===~~~~====~~~~====~~~~~===~~~~=====~~~~====~~~~~~~==~~====++++++++++??+??++====++++====~~~++====+++=++=============+++====+++++++++====+++++++++++++
//=======~~~~==~~~~=====~~~~====~~~~~===~========~~~~====~~~===========++++++++++=+++++++++++++++++=========+=====++=========+=+++++===++++++++++==+=+++++++++++++
//======================~=~====~=~~=======~=======~~=======~=====+======+++++++++++++++=++++++++++=========+=++++++++==+++++==++++++=+++++++++++++++++++++++++++++
//################################################################################################################################################################
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~::~~~~:::~::::::::::::::~::::~~::::::::::::::::::::::::::$O88DDDDDDD88DDDDDD88888Z$$ZO888DDDDDDDDDDDDDDDDDD8888888888888Z7OOOOOOO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~::~~~~~:::~~:::::::::::::::::::::::::::::::::::::::::::::IO88DDDDDDDDDD88888888D88DDDDDDDDDDDDDDDDDDDDDDD88888888DDDDND8$OOOOOOOO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:~~~~~~~~~~~~::::::::::::::::::::~~~::::::::::::::::::::::O888DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88888DDDDDDDDDDOOOOOOOOOO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:~~~~~~~~~~~~~~:::::~::::::::::::~~~:~~~~~:::::~~~~~~::~::ZO88DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88DDDDDDDDDDDD8OOOOOOOOOO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:~~~~~~~~~~~~~~~~~~~~~~~~~~::::~IO88DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8OOOOOOOOOOO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~88DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDOOOOOOOOOOOZ$
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+7?~DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8O888DDD8888O$I
//:::::::::::::::::~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~??778O$OZ8D8Z8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD+78DDDDDDDDDDDDDDDDDDDDDDDD
//~~~~~~~~~~~~~~~~~~~~~~~~::::::,,,,,,,,,,,::::::::~~~~~~~~~~~~~~~~~~~~~~~~~~~=OZ?$OOODDDDD88O8DDDDDDDDDDDDDDDDDDDDD8O88DDDDDDDDDDDDDD7DDDDDDDDDDDDDDDDDDDDDDD8888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~::::+88OO88OOZ$$$Z$O8D8DDDDDDDDDDDDDDDDDDDDD888DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~DOO888DDDDDD8$$$OO88D8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=78ZZ$ZO8D8O88Z+=O8DDD8O8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?=~=OOO8OZO8DD888OOZ7ZZ778DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:=OO7O8O888OZZDDDDDDDDDDDO8DDO$Z88DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=?OZD8DDDDDD8O8$8DDDDDDDD8DD88OOO8Z$$$ODDDDDD8DDDDDDDDDDDDDDDDDDDDDDDD8DDDDDDDDDDDDDDDDDDDD888DDDDDD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+?Z88888DDD8ZZODDDD88DDDDDDDDDDDDDD88DD88I7$8DDDDD8DDDDDDDDDDDDDDDDDDO$DDDDDDDDDDDDDDDDDDD88888DDDDDD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~I?Z88888OZZZ$ZZZZ8O888ZZ88O88DD888DDOON88ZD8DDDDDDDDD8DDDDDDDDDD88OOZDZZODDDDDDDDDDDDD88DD888888888DDDD
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=78O8DOZD8OO888OZOOOOOOOOZIZ7$$IOOZDOO8DDOD7ODD8DDDDDDDDDDDDDD8DD88OZ$NDZ$DDDDDDDDDDDDD?~8888888888888888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==I+O8888Z88D8OO88888OOOOO$?===~~~=+I?77Z8DDOO88DZ8D8DDDDDDDDDDDDDDD8Z$ZD8ODDDDDDDDDDDDZO8O8888888888888888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+?$I888OO8DDDDDDD8D88Z$$?==~~~~~~~~====+?ODDD$ODDZD8ID87DDDD8DDDDDDD8Z7DDDDDDDDDDDDDD8888O88888OOO888888888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=+?+7ZO8ZDDDDDDDDDDDD8$+==~~~~::~~~~~~===+++OD8O8888D8DD888DDDD8O8DDDD8ODDDDDDDDDDDDDDD888OOOOOOOOOOOO8888888
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~===+ZI8?Z8888DDDDDD$DD8Z?=~~~~~:::::::~~~===+?OOO8OO88DDDDDDDO8D8ODDDDDDDDDDDDDDDDDDDDDD888OOOOOZZZZZZOO8888888
//~~~~~~~~=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~===$??OO8888ODDDDD8NDO$?+=~~~~::::::::~~~~===+?ZOO$88DD888DD88DDDDDDDDDD8DDDDDDDDDDDDD8888OOOZZZ$77I77$OO888888
//~~~~~~~~~~~~~~~~~~~~::::::::::::::::::~~~~~~~~~~~~=IOO8OOODZ88DDDDDDD8I?+=~~~~:::::::::~~~~====+Z8ZID8OZO$$ODD88DDODDD8DD8DDDDDDDDDDDDDD888ZZZ7777+=~=+I$OO88OO8
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=$8Z8DDDDDZ88DDDDDDDI??=~~=~~:::::::::::~~~===+ZZO$DD8O8888DDDDDDDDDDDDDDDDDDDDDDDDDDDDD8O$$7:.??~...:+IZO88OZO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=?+7DDDDDO8DD88DDDD$I?+O$$ZO8$~::::::::::~~~==+ZZOO8D888Z88DDDDDDDDDDDDDD8DDDDDDDDDDDDDD8Z$I?~.+?,....=?ZOO8ZZZ
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~?78D888DDDDD88DDDD??7==~=~==Z88I::::::::~~~==+IZZO8DD8DDDDDDDDDDDD8DDDDOODDDDDDDDDDDDDD88OOZ7+II~...,=?ZO88OZO
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~O$88D8DDDDD88DDDDI++++?IZ8Z$7I7$Z+~~~~~~~===++IZOO88DDDDDDDDDDDDDDDDZ8DDDDDDDDDDDDDDDDDDD88OOZZ7?=~~+7$O888OOO
//~~~~~~~~~~~~~~~~~~~~~=I$$$$$$$7$III777+~~~~~~~~~+=+IZ8DDDD8D88DDDDO?+++?DDDDDDD7Z7I?~~~~===OO88888888$8DDDDD8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD888OO$7II7ZOO888888
//~~~~~~~~~~~~~~~~~7ZZZZ$$ZZZZZZZZ$$I?+==++77+:~==~+$=O88DD8DOO8DDDD$?===~+Z?~88D78ZI+~~~=+IZZ$Z$?++$DOZDDDDD88O8DDDD8DD8ZDDDDDDDDDDDDDDDDDDDODD8888OZZZZO8888DD88
//~~~~~~~~~~~~~~$ZOOOOOOOOOOOOOOOOOOOOOZZZ$II?77Z=+IOOO88888Z$DD8DDD$?+~~~~?ZZ~O+~~I+=::~+ZOO=DDDNOZO8DO?DDDDD88DDDDDDDDD8DDDDDDDDDDDDDDDDDDDDDD88D88OOOO888DDDD88
//~~~~~~~~~~:7ZOOOO888888OO8888O8OOOOOOOOOOOOZZ$7OOO888?D8DOODDDD8DD$++~~~~~~=+?I?+==~::~7O$+,D8D?DDOOO8DDDDDD888DD8DDD8O8DDDDDDDDDDDDDDDDDDDDD888D88OO88888DDDDDD
//~~~~~~~~~$ZO88888888888888888888888888888OOOOOZZ$O88Z88DDDD888$DDDZ?+=~:::::~~~~~~~~~:=$7I+I?$=+I88Z7O888D8888$8DDD8DDDDDDDDDDDDDDDDDDDDDDDDDDDD888888888DDDDDDD
//~~~~~~~ZOOO8888888888D8888888888888888888888OOOOOZZD888DDD8D8DODDDO?+=~:::::::::~~~~:~=$7+==+?I$II?I7O8ZIDZ$87$OODDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88D8DDDDDDDDD
//~~~~~IOOO888888888DDDDDDDD8888888888888888888OODDDD8DD8DDDDDDDDDDN8I?=~~::::::::~~~~~~+$I======+++?IO88ODDDZ8888DDDDDDDDDD8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//~~~~ZOOO888888DDDDDDDDDDDDDD8DDDD88888888888888DDDDDDD8$$DDDDDDDDD87?+=~:::::::~==~~~~+$$+=======+?$OO8D88DDD88DDDDDDDDD88DD8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//~~+ZOO888DDDDDDDDDDDDDDDDDD88888DDDDDD8888888888DDDDDDDOZZ7DDDDDDD8$I?+=~~::::~===~:~=+$O?==~~~==+IOOOO8O8DDDDD8DDDDDDDDDDDOZDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//:7OOO88DDDDDDDDDDDDDDDDDDDD88OZ88DDDDDDDDDDDDDD88DDDDDDDDZ8IDDDDDDD$77?+=~~:~:~===~::=+IOI=~~~~=+?7ZZOO8D8D88O8DDDDDDD8D8D8DO8DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD
//IOOO8DDDDDDDDDDDDDDDDDDDDDD888O88DDDDDDDDDDDDDDDDDDDDDDDDDZ878DDDDNZ$7I?+=~~~~~~$$?+=?7ZZI~=====+?$ZO7Z$D8DD8DZOZ8DDDD8DZOZ8DDDDDDDDDDDDD88ODDDDDDDDDDDDDDDDDDDD
//OO88DDDDDDDDDDDDDDDDD8O88887888888DDDDDDDDDDDDDDDDDDDDDDDDDZO7ODDDDOZ$7I?+==~~~====7$Z8Z?=======?7Z8DZD8DDDDDDDDDDDDDDDDDD8ODDDDDDDDDDDDD88OO8DDDDDDDDDDDDDDDDDD
//O8DDDDDDDDDDDDDDD888888888888888DDDDDDDDDDDDDDDDDDDDDDDDDDDDOZ7ODDDDOZ$II?++======+===??+=====++IZO8DDDD88D8DDDDDD8888DD8DDDDDDDDDDDDDDDDD8OO888DDDDDDDDDDDDDDDD
//8DDDDDDDDDDDDDD8888888888888888888888DDDDDDDDDDDDDDDDDDDDDDDDDZ78DDD8OZ$IIII??I$77?=++???++++++I$ZOD888888DOOI8OD88DDDDDDDDDDDDDDDDDDDDDDD8OO8O888DDDDDDDDDDDDDD
//DDDDDDDDDDDDD88O88888888888888888888888888DDDDDDDDDDDDDDDDDDDDDZIDDDD8OZ$77O888D?I$$7$$7I??++?I7$O8Z7888DDD8ODDDDDD8DDDD8DDDDDDDDDD8DDDDDD8OZOOOO8DDDDDDDDDDDDDD
//DDDDDDDDDDDDD8O88888888888888888888888OO8888DDDDDDDDDDDDDDDDDDDDO$DDDD88OZ7$$7???+77OO8ZO$????7ZO88O8888DDDDDDDDDDDDDDDDDDDDDDDDDD8Z8DDD88888OOOOO8DDDDDDDDDDDDD
//DDDDDDDDDDD8OO8888OOOOOOOOOO$O8888888888O8888DDDDDDDDDDDDDDDDDDDO$DDDDD88OZ$$O$I+==~+?I$$IIII$ZO8D88D888DDDDDDDDDDDDDDDDDDDDDDDD8OOZZ8DDDD8888OOO88DDDDDDDDDDDDD
//DDDDDDDDDD8OZ8888OOOOZZZZZZOOOO888888OO8888888DDDDDDDDDDDDDDDDDDDOODDDDDD8O$7777OO$77$ZZII7$ZZODDD8ODDOODD8OD888DDDDDDD8OOD8OOO$I?+~~~78DD88888OO888DDDDDDDDDDDD
//DDDDDDDDD8O$ZOO8OOOZZ$7II7$$ZOO88888OZZ88888888DDDDDDDDDDDDDDD$DDDO88DDDDD8Z7I?++==~==+?I7ZZODDDDDDD8DD8D8DD8D8DDDD88DD8DDD8Z$7I+=~:::,,Z8DDDD888888DDDDDDDDDDDD
//DDDDDDDDD8Z$$ZOOOOZ$$I+==+?I$ZOO8888O$ZO8888888DDDDDDDDDDDDDDDDDDD8ZDDDDDDD8Z7I??+====+I$ZO8888DDDDD88DDD888DD8DDDDD8DD88Z888ZZ7?+=~::,,,+OD8DDDD8DDDDDDDDDDDDDD
//DDDDDDDDDD8OOOOOOIZ$I=:,..:=I$ZOO888O$$$ZOOOO88DDDDDDDDDDDDDDDDDDDD888DDDDDDDO$7I?+++?7O888OOOODDD8888OO888ODDDODD888DDO8Z$ZZO7II+=~:::,,,,?88D888DDDDDDDDDDDDDD
//DDDDDDDDDDDDD8888OZ7?~.....,+7$ZO88OO$7$$OOOZ888DDDDDDDDDDDDDDDDDDDDZ8DDDDDD888888OOOOOOOZZ$$$ODD8D88OD88D8DDDDDZO88O888OZOZ8777?=~~:::,,,,,,I8DDDDDDDDDDDDDDDDD
//DDDDDDDDDDDDDDD88OZ$I~......~?7ZOOOOO$77$$ZZZO88DDDDDDDDDDDDDDDDDDDDO88DDDD88888OOZZZZZZ$77II7O8D88ZD8DDDD88DDD8888DDD88DO$Z$7I?+=~~:::,,,,,,,,+88DDDDDDDDDDDDDD
//DDDDDDDDDDDDDDD88OZZ7I=:...,~?7$OOOOO$7$Z$ZZZO888DDDDDDDDDDDDDDDDDDDD88DDDD88888OZ$$7777I????IZ$88D$88D8DDDD8D88DD88888888ZZ$$?+==~~::,,,,,,,,,,,?8DDDDDDDDDDDDD
//DDDDDDDDDDDDDDDD888OZ$7?~,:~=?77OOO8O$$ZOOOOOO88DDDDDDDDDDDDDDDDDDDDDO8DDD888888OOZ$7I??++++?I7$O88OOO8DDDDDDDDDDD8OO8ZZO7I7$~~~=~~~::,,,,,,,,,,,,:~Z8DDDDDDDDDD
//DDDDDDDDDDDDDDDDD888OOZ$I?+?I7$ZOO888ZZO8OOOO888DDDDDDDDDDDDDDDDDDDDDZ88888888OOOOZ$7I?++++??II77Z8888DDD88D8OO88OZOID7$I,=:~~==++==~~::,,,,,,,,,,,,,,=7ZO8DDDDD
//DDDDDDDDDDDDDDDDDD8888OOZ$7$$ZOOO8888888888888DDDDDDDDDDDDDDDDDDODD8DZ8888D88OOOOOOZZ77?+++?IIIIII7$88O88O$OZZO$Z?,:,,,,,:::::~~~=+I+=~::,,,,,,,,,,,,,,:::=?$$$$
//DDDDDDDDDDDDDDDDDDD8888OOZZZZOO88888888DDD8888DDDDDDDDDDDDDDDDD8Z8DODO8888888OOOOOOOZ$7??????IIII7Z$OI?$:777DZ8,,,,.,,,,,,,,::~~~:=?$7+~::,,,,,,,,,,,,,,,,::~~~~
//DDDDDDDDDDDDDDDDDDDD888888OOOO8888DDDDDDDD8888DDDDDDDDDDDDDDDD88ZZO78Z8888888OOOOO8OZZ7I???IIIII$77??I~~++IZ=,,,,...,,,,,,,,,::::~~=7$$+~::,,,,,,,,,,,,,,,,,,:::
//DDDDDDDDDDDDDDDDDDDDD8888888888888DDDDDD88DDD8DDDDDDDDDDDDDDDD88ZZZ7ZZ88888888OOOOOOOZ7IIIIIII?$???=:~~~=+:,,,,,,...,,,,,.,,,:::::==+$$7+~::,,,,,,,,,,,,,,,,,,,,
//DDDDDDDDDDDD8DDDDDDDD88888888888DDDDDDDDDDDDDDDDDDDDDDDDDDDDD888ZZ$77$8888888OOOO888OZ$77IIII???+,,,::~=:,,,,,,,,..,,,,.,,,,,::::,:=+$$$I=~:,,,,,,,,,,,,,,,,,,,,
//DDDDDDDDDDDDDDDDDDDDDD8888888888DDDDDDDDDDDDDDDDDDDDDDDDDDDDD888OZ$7II888OO8OOOO8888OZ$77IIII~,,,,,,,,,,,,,,,,,,,.,,,,...,,,::::,,,~=+$$$?~::,,,,,,,,,,,,,,,,,,,
//DDDDDDDDDDDDDDDDDDDDDDD8888DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88OZ$7?I8OO888OOOO8888OZ$$$7?~::,,,::::,,,,,,,,,,.,,,,,,..,,,::,,,,,,~=+$$$I=::,,,,,,,,,,,,,,,,,,,
//DDDDDDDDDDDDDDDDDDDDDDDD88888DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD888OZ$7??8888888888888OOZZI~::,,:::,:::,,....,,,:,,,,.,,..,,::,,,,,,::~==$7$7+~:,,,,,,,,,,,,,,,,,,~
//DDDDDDDDDDDDDDDDDDDDDDDDDDD88888888888888DDDDDDDDDDDDDDDDDDDDDD88Z77II888888888888Z+=~~~:::~:::,,,,,,,,,,,,,,,,,:,.,,,,,:,,,,,,,,:~==~$$77+~::,,,,,,,,,,,,,,,:+7
//DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD888Z$I?7I?III????III?+~~~=~~~::,::,,,,,,,,,,,,,,,::,,,,,,,,,,,,,,,,:~~=~7777+~::,,,,,,,,,,,,,,~+I7
//+DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88ZZI?IIIII????????I?++~=~~::,,,,,,,,,,,,,,,,,,,:~,.,,,,,,,,,,,,,:::~=+7777?~::,,,,,,,,,,,,,~?II7
//:?DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88OZ7III7$777777$$$$I===~~::,,,,,,,,,,,,,,,,,,,:::,,,,,,,,,,,,,,,:::~=77777?=::,,,,,,,,,,,,~?7777
//::+DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88OZ7$$$777777$$ZZZI?+==:::,,,,,,,,,,,,,...,,:::::,....,,,,,,,,,,:::~=$7777?=:::,,,,,,,,,,:?$$$$7
//::::8N+DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD88Z7Z$77777$$ZZZZ7??==~:,,,,,,,,,,,,,,,,,,,~~:,:.,..,,,,,,,,,,,,:::~=$7777?=~:,,,,,,,,,,:+$ZZZZZ
//::::,DNDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8O$?$7777$$$ZZZZ$7?+~:,,,,,,,,,,,,,,,,,,,,,~:::.,...,,,,,,,,,,,,::~~~$7777?=~::,,,,,,,,,~I$$ZZZZ
//::::::ODDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDO$?777$$$$ZZZZZ?~::,,,,,,,,,,,,,,,,,,,,,,,::,:,...,,,,,,,,,,,,,::~~~77777?=~::,,,,,,,,:?III77$$
//:::::::~DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD87$777$$$$$$7?=~::,,,,,,,,,,,,,,,,,,,,,,,,,,,,....,,,,,::~??77?::~~=$$$$7I=~::,,,,,,,:=II77II77
//:~======+===+++IO8D8ZDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDOI77777777$$I=~~::,,,,,,,,,,,,,,,,,,,,,::,,,,:....~=~~~========?~~~~$$$$7I=~:::,,,,,,~III7777$Z
//++==+++++++=++++++?777$$DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8$7I777$$$$$$?=~~::,,,,,,,,.,,,,,,,,,,,,,,,,,,+,.~========~=~====+?+=7$$$$7+~:::,,,,,:=II7777$ZZ
//?????++??+++++++?++??I7Z7DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD87Z$$$$$$$$$$?=~~::,,,,,,,,.,,,,,,,,,,,,,,,,,,::===================+O7$$$$7+~~::,,,,,~II77777$$$
//???????????+?++??????I77$IDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8Z7$Z$ZZ$$ZZZ7+=~::,,,,,,,,,,,,,,,,,,,,,,,,,:========================+?$$Z$7+=~::,,,,:=7$$$$7777I
//II???????????????III?I7777$7ZDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8O7ZZZZZZZZZZ$I+~:::,,,,,,,,,,,,,,,,,,,,,,,,,==++++++?==+==============+++$Z$?=~:::,,,:?$ZOZZZZ$7I
//IIIIIII???IIII7I?III777777$$IDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8$ZZZZZZZZZZZ$I=~::,,,,,,,,,,,,,,,,,,,,,,,:~=+?++++???++++?+???++++++====+?I$?=~~::,,:=7$ZZZZZ$I?+
//7IIIII7I7IIIIIIIII7I7777$$7$$$NDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD8ZZZZZZZZZZZOZ7+~~::,,,,,,,,,,,,,,,,,,,,,,,=+??????????????+??I?II???????++++?I+=~:::::+77$$$ZZ$?=~
//777777II7III77777I77777$$$$$$Z$NDDDDDDDDDDDDDDDDDDDDDDDDDDDD8OZZZZZZZZZOOZ7+=~:::,,,,,,,,,,,,,,,,,,,,,:~+?IIIIIIIII?II??I?III77I77IIIIII?????=~~:::~I777$7777I?+
//777$777$777$777777777$$$$$$$$$ZZ8DDDDDDDDDDDDDDDDDDDD88DDDDDDOZZZZZZZZZZZ7?=~~::,,,,,,,,,,,,,,,,,,,,,,I?IIIIIII77IIIII?II7IIII777$77IIIIIII???+~~:~+7777$$$77I??
//$$777777$$77777777I77777$$$$$$ZZZ$D8DDDDDDDDDDDDD888=888DDDD7IZZZZZZOOOZ$I+=~~::,,,,,,,,,,,,,,,,,,,,,?II77I???II7IIII7I?I7IIII7I777I7777IIIIIII?~~=?7777$7$$7???
//$$77$77777$777777$7I77$7$$Z$Z$$ZZZ$I??8DDDDDDDDD888888D87I$ZI==7OOZOOOZZ$I++~~::,,,,,,,,,,,,,,,,,,,,,?I7IIIIII?I777II777III77777II77777777I77IIII==I777$$$$$?=~~
//$$$77$77I77$$$$$$$7$$$$Z$$ZZ$$$ZZZZII7$$ZZ$7Z888OOO8Z++++=+??+?ZOOOOOOOZZ7?+=~::,,,,,,,,,,,,,,,,,,,,IIIIII7II7I77I77777777II77$7$$$77$$$$$$$$$$77I7$77$$$7$$I=~~
//$$$Z$$$$7$$$$$$Z$$$$$ZZZZZZZZZZZZZZOII7$ZOO7$$ZZO???++==~:++==++IZOOOOOZZ$?+=~::,,,,,,,,,,,,,,,,,,,,???II7I77777I77$$777777777$$$$$$777$$$$$$$7777$ZZZZZ$$77I???
//$$$$$$$$$$$ZZZZZZ$$$$ZZZZOOZZZZZZZZZZ77$ZZO8$$ZOI?==++++++?+===+?$OOOOOOZ$I+=~~:,,,,,,,,,,,,,,,,,,,IIII~II777777$777$77777777$$$77$$$$$7777$$$$$$$$ZOOOOOZ$7I???
//ZZZZ$$$Z$$ZZZZZZZ$$$ZZZZOOOOOOOZZZZZZOI$ZZOOI$ZZI+==+?I78ODO??+?IOIOOOOOZZ7?=~~::,,,,,,,,,,,,,,,,,+7$I=Z+?II77777$77777777777$$$77$$$7$777777$$$$$$$ZZOOOO$?+++?
//OZZZZZZOOZZZZZZZ$$ZZZZZZOOOOOOOOOOOZO8?ZZOO887ZI?+=~===7?~~=~~=I8DOOOOOOZZ$I+=~::,,,,,,,,,,,,,,,:+8OIIZ?Z=+II77777$77I7777$7$$$7$$$$7$$7$7II77777$$777$$$$7?+===
//ZZZOOOOOZZZOOOOZZOZZZZZOOO8OOOOOOOOOOO$OZOO88O$?==~~~~~::::::~~?IIZOOOOOZZZ$?=~::,,,,,,,,,,,.,~?:$$7ZO=O?I?=?I7I77777$77777$777$$777777777777777777777$$777I??++
//ZZZZOZZZZZZ$7$$77IIIII7$ZZOOOOOOOOOOOOOI$O8888Z7+=~~~~~O?~:::~=IIII7ZZZZZZZ$?=~~:,,,,,,,,,,,:?:.~$$$Z$$?$7=Z=+?IIIII77$77777II7IIII7IIII77777777777I77$$77II????
//+7$ZOOOOOZ$??$Z7$?I?I7I$Z$O8ZZO88OOOOOO$I8888887?=~~=II7+I????I$I?I$$$ZZZ$$7I+=~:,,,,,,,,,,=?:,~ZZ$$$$$$$+$+7++?IIIII777II77?I77IIIIIIIIII777777777777$777$7I???
//?I7IZOO8O8O88888888888DDDDO88OOZOO88888OIZ888DO7+=~~~~~::::~~=78Z$$ZZIZ$$$$7I+=::,,,,,,,,:+=,,.:?$I$$77$$$=$+7$==+IIIII77777IIIIIIIIII7I7I7777777$7777$777$7?++?
//O888Z$$I777Z88DDDDDDDDDDDDO$Z88$OZOO888O8O8DDO8I+=~~~~~~::::~=$$$8DOOZZZ$Z$$I=~::,,,,,,,~+,,,,.O?$I77$I7$$7=$I?I?~~=+?IIIIIIIIIIII77777777III777$$$$7$$$7777?+++
//ODDDDDDDD8OO8888OZZOO88$$88DDD7O8ZZOOO888OO888D$?==~~~~~~~~~+$OZ$O$7ZZZZZZ$$I=~:,,,,,,:=:,,,,,,7I$7I7$$I$Z$7=IZ?=?Z?=IIIIIIII?I?III77777II77II777$ZOOZZZ$77I???+
//88888888OOO8D8O$$$Z8D8$ZOO8888DD$OZZZ88888OOOODZ?+==~~~:~~=+I7ZO8OII7ZZZOO$?+~::,,,,:::,,,,,,,II77$777$$$$$7I7~+ZII7O7??II???II?III7II7III7I+===+?ZOO88OOZ7I????
//8888OOOOOODD8$77$O88O7IZO8DD8888D878ZO8888OOO8DZI+=~~~~~:~~????$$$7I?IZZOZ7+=~::,,,:,,,,,,,,..OI77$$$7$$77$7?I7I~?$77$O+=????IIIIIIIII77I?=~~=7D8OZZZO88OZ7?????
//8888OOOODD8$II$ODD8Z??$Z8DD88888O8DZO8OO8888O8DZI?+=~~~~~=+7II$OOZ$7??I$Z$+=~::,,,,,,,,,,,,,,~I7$$$$7Z$$$7$$?I77I$=?Z7?I7~=+????777I7II7I7ZZ$$ODD8$7$$ZZZZ7?????
//D8OOZODD8$I7$8DD8ZIII$8DD88D8888OOO8N?DOO888OODDZI??I$ZZOOOO88888OZ$I+++?+~~::,,,,,,,,,,,,,,+8I7$$$$I7$$$77$I777I+IZ~7?I+7===+?I$ZOO8DDDDDDDDDDDD8$77$$$$$$II???
//8OO8D8OZ$$O8DD8Z??IZODDD888888OOOOOO8D8$8O8888OD8OOZ88OOOOOZO888OZ$7?=====~:::,,,,,,,,,,,,+?+$77$$$$$$$$$$$7IIIII???$?~Z+=I?~=+IO8Z$Z?=~~~~:=8DDD8Z777$$$$$7IIII
//,,:~~+?I$O88OZZ$ZZ8DDD888888888O88O8OODDI88O88O8DD888OOOO8OOZZ8OZ$$?++~~:~~~::,,,,,,,,,:=I??Z$$7$$$$$ZZ7$$ZZI???I???+I$=7?=+?~=?++=~::::::::7DDDD8Z77$$$ZZ$777II
//,,,,,,,,,,,,,,,,,,,,,,::~=?I$O8888888888DO8OOOOODD8OO88OO888OO$I$$7?+~~~::::::,,,,,,,,~I???+Z$$$$$$$$ZOZ$$7$7????++????7=??~~?=$?~::::::::,:D8DDDDO$7$$ZZZZZ$7II
//,,,......,.,,,,,,,,,,,..,,,,,,,,,,,,,,,,::~~=?7ZO8DDD88888888O$??+??+=::::,,:,,,,,,,,7I??+??$$ZZ$Z$ZZ$ZZZZ$Z$I?I??????+?7=+7+====::::~:~:,,I888DDD8Z$$$ZZZZZZ7I?
//...............,,,,,....,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,::~~~===~~~~:::::,::,,,,77I????+OZZZZZZZZOOZZZOOOZ7+??III???+?I?=?~:~~~::~~~,,,:88888DDDOZZZZZZZZZ$II
//...............,,..,....,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,.,.,...,,,,,,,,,,,,:,:7III??+?I$ZZZOOOOOOOOOZZZOOOI++???????+II7+=::~~=::~,,,,+88888DDD8OOOOOOOZ$$77
//################################################################################################################################################################
//ZZZZ$7II???+????+++???I77?+=====+===========++====+++=~==~~~~~~~::::::::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:::::::~~~~~~~~~~~==~~~~~=+7$?=+++???I7$$$$ZOZZZOO
//7$$$7I?++++++??++++++===+??=========~~~====+++==+=++=======~~::::~:::::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,::::~:::~~~~========~~~~=~=+?++?????I$8888888DDDDD
//I7$$7II?++++????+++++======~~============+++====++=======~~~~~:::::::::,,,,,,,,,,,,,,,,,,,,,,,,,:,,:::::::::::::~~~~~~~==================++==+??7$$OD8888DDDDNDD
//II$$7I?++++??II?++++==++====~======++++++++?+++=++======~~~~~~~~:::::::::,,,,,,,,,,,,,,,,,,,,,,,,,,,,:::::::::::::~~~~==============++===+=====+7O888D88DDDDDDDN
//?I7$7II?++++?II?+++=+=++===~~~=====+=+?+++??++==++++=+========~:::::::::::,,,,,,,,,,,,,,,,,,,,,,,,,,::,:::::::::::::~~~~===========++++++?+===++7O88D88DDDDDNDDD
//?I7$7II++?IIII????++=======~~~~=~~===++=+?????+++++++========~~::::::::,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,::::::~~~~~~==+=========+++7$$$$Z$$Z8OO8DOODNDDDNNNN
//++?I7II+++?7$$Z$$I?+=======~~~~~~~===++=+????????+===========~::::::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:::~~~~~~==+===~==++++=+ZZZZZO88D8OO8DO8NNDDDDNNN
//IIIIIII?+++I7$7I????+======~~~~=~=====+++??+==++?+===+++==++=~~~::::,,,,,,,,,:,,,,,::::,,,,,,,,,,,,,,,,,,,,,,::::~=~~~~=~=+===~==+++=+IOZOO8DNND8OO8DDDNNNNDNNNN
//7IIIIII?????7$$III7I+======~~~~~~=====+??II?+++??+++++++=++++==~:::::::,:,,,:+7ZZ$?+=:::,,,,,,,,,,,,,,,,,,,,,,:::~==~~~===++===~=++++?7OO88DDDDD8888DNNNNNNNNNNN
//IIIIIII?+?7$ZOZ$Z$7I++++II+==========+?+?III???II?++?++++=+++==~~:::::::~~~7OOOO8ZZZZ77I=~::::,,,,,,,,,,,,,::::~~=++++++??II?+++?IIII?IZ8DDDNNNNDDDNNNNNNNNDDDDD
//I$$$7III??I77$$7$$$7I?++77I+==+??I?+++?++?IIII7I??++++++===++===~~~~:::?I7ODDDD8D888D88Z7Z$I~:::,,,,,,,,,:=+=+?777777$$$$$ZZ$ZZOZOOOZ$Z8DNDDNNNDDDDNNNNNNNNNDDDD
//IZZO$II??I$$ZO88OOZ$I+++7O7=~~?7I77I+???++?++?I???+++++++=++++++=~~::7Z8DNDDDNNDDDDDOD8D$7ZI7I+~~~~~~~===+77I7777777$$$$$ZZZ$$ZZZZO88OODDDDDDDDDDDNNNNNNNNNNDDDD
//?$$O$7I?++I$$O8OZ$77?+++7O7==+$7777????I??I???I???+++++?++??????++==78DDDNDNDNNN8DDN$NDZ77777II??+++???IIII??III7$$777777ZZZ$ZZZZZZDN8ZZDNNNDDDDDDNNNNNNNNNNDDDD
//?$ZOZ$77?+I$ZZZZZ$$$7??+7O7==+$$$7I?+??+++?I???I??++==+??+?????I??I8DDDDNNND8Z$$8DDD877NN?$II7?I7$7OIIIO7I??I7$$$ZZZ$$$OOO88OO88D8DNN8ZODNNNNNNN88NNNNNNNNNNDDDD
//?7$ZZ77$Z$$88888OO8OZ7++?O7==+ZZZ7I?+++?+?I77?++====+=?I?+????III$ONDDDNDDD$I???7ODDD877DD8O7III$OOO7II7$ZO$$DDOOZOZZZOOZZONNNNNNNNNNDO8NNNNNNND88NNNNNNNNNNDDDD
//?7$ZZ7III7ZDDDNDDDDO7?+=?OZ+=?8OO$7$$7Z$7$Z$77+=====+?I7+=IIII77ZDDD8DNDDZ??++++?Z$$ODDZIONNN87I?78$$7I$ZZZZO8O$$O8OZ$ZZ8DNNNNNNNNDNND8DDNNND88888NNNNNNNNNNDNND
//?I$OZ$777I7$O8DDD8OZ$I?+IOZ?+IND8OOOZZZZZOOZ$7+=====+I77==I7$$$7O8NDDNNDZ+++==++++IZ$$DDIINZOOZ7I7777?++7$7$O8Z7$8DO$Z$DNNNND8888OZODDNNNDOZZO888DDDNNNNNNNNNNMN
//?I$ZZ$$Z8OZZOO88D888OZ7??OZ??ZDD88OOOOOOOO8Z$7?++++++++?+=?7ZZ7$8DNNNNN8?=======++++?7$N7D7DZID$+III7Z?~=7Z$$ZZ$ODOOODNNDZ$7II7$ZZZZZZZ$77I7ZOOOOOOO8D88DNNNNMNN
//??77ZZZODD88DDDDDDDDDO7++$Z??DDDD8O88OOOOO8O$7??????++=++=+?Z7I?DNNNNNN$==I$O7++==+?ZDNNDDOOIZ?$7=ZZI?++=????+?IZDDD8DND$III77$77$$$$$7777ZZZZOZOOOO8NNNNNNMNNND
//I???$8D8DDD8OO88O8OOZ$I??$Z7$NNND8OO8OOOOO88$7I+?????++I?=~===+7NNNNNNN+??=+????=+?ZZNNNDD8DN?ONZOOO$ZZ$$??I+???$O8888D8Z$ZODDD8888888OO8DNNNDDDNNDDNNMMNNNNMMNN
//77$ZDDDNNND8ZO888OOZZZZ$$$Z$ONNNN8OO88OOOO8O77I????III7$I=~~==?7NNNNNNN+=+I7NNO+==IDDNNNNNNNNNZOOZOO7$$8$ZII?I7I?++?7$$Z8888D88D8DDNNNNNNNNNNNNNNNNNNNNNNNNNNNNN
//77Z8DDNNNNNNNNDNNND888O$$ZZZZZ8ND8OO8OOOOO8O7I+=++++=I8Z$?==+7ONNNNNZND==+IIIII+==?D8D8N8NNNNNO88DON87????$??+++=+?+???I777$$$ZZ$$$$$$$$ZO888888DDDDNNNDDNNNNNNN
//7$8DDDNNNNNNNNNDDD8DDOZ$$$$7I??I?????++=+?777?+==~~~~=+++===7+DNNNNNDD8+===++++===?$O8DOI8DNODND7O8OND87IZ$?+???????+++++++??IIIII777$$ZO8888DDDDDDNNNNNNNNNNNNN
//Z8888DNNNNNNNNNNDDDD88OZ7I?????+++++++==++++?++====~===~~==+$IZNNNNNN$O+===========?I8ZZDNDZDDOMD7Z8ONNDOIZ77II++?????II77$ZOOOZZ$$$$$ZZZZZO8DDD8DDDDDDDDDDDDDNN
//ZZZ$$ZODNNNNNND88DDD88OO$II?????????+++++===============~~=~~$8NNNNNNDOI==~~===+==+?I8$DNNNNNN8OZNOONNDOO7$Z77+++?I77$$$77I7777$$$$$$$$$$$ZZOO8888888DDDDDDDNNNN
//ZZZ$ZO88DDDDNNO$$Z888OOZZ7IIIII????????++++++++++====~~~~~~~+INZNNNNNN7I===~~=++++I?ZZNNDNNNDD8DIDN77$ZOZ8$$7I7========++?IIII7$$O888888D88888OOO8888DDNNNNNNNNN
//DDDD8DNNDDDDN8Z77$O88OZZ$7IIIII???????+++++====~~~~::::::~=I?+7$NNNNNNNOI=======+?I7$NNND8NNNNONNOND$ZDZD$I777I=========+?7ZZOOO88DDDDDDDDDDDDDD888888888DDDDNNN
//Z$$$$$77$$$$$$77II77III???++++++======~~~~~~~~~~~~~~~~~~~===I?IDNNNNNNNNM====+$7II77+NN$DONNNDNNNNNNN8ZN88$ZOZII?I77777$$7$OO88888888888DDDDDD88888OOOOZZOOOOOO8
//777777777IIIIIII??????++++++============~====~=~~~~~~~===+$+I7DDNNNNNNNNNZ+==++++?I77ZNOODONNOZ8ZND$DNODDD7$II7OI777$$$$$$ZZZOOO88DDDD8OZ$$$$$77$$$$ZZOZOOOZ$$$$
//77777777IIIII??????????++++++++++===========~~~~~~~~~~~~=+7OZDNDNNNNNNNNNNN++++++++?I78NNDNNNN87MNN8OZODN8N77?I7I=+++++++?+???III7$$Z8DO$$777$ZOO88DDDDDDDDDDDDD
//7I77IIIIIIIIII??????????+++++++============~~~~~~~~~~~~~$===IDDNNNNNNNNNNNN8I?++=++??78NNNNNNNNMDZZZN8ZO88Z8?7?I?+===========++++?III7ZO8DDDD88888DDDNNNNNNNNNNN
//777IIIIIIIIII?????????????+++++++============~~~~~~~~~==+~+?DDDNNNNNNNNNNNNN$II?III78NDDNNNNNN8N8NDDDZDDZ$NO777=+=======+++??IIII77$$$ZZOO88DDDDDD888DNNNNNNNNNN
//77777777IIIIIIII?I??????????+++++++++=============~~~~==7Z+O8$NNNNNNNNNNNNNNN$I???IDDZZ8NNNNZDNND8DNNDDNO8NO7I7?+++=+=====+++++?????III777$$$ZO8DDDOZZZO888OOOOO
//77777777IIIIIIIIIIII?????????++?+++++++++==============+I?I=DNNNNNNNNNNNNNNNNND7???O8DMNNNNNNNNNDDOODDDD88DDNOZI7++=+=+=====++++++++++????????I7777$$$$$7$ZZZZZZ
//$77777777777IIIIIIII???????????++++++++=+==============+7DNNNNNNNNNNNNNNNNNNNNZONMMNNZZDNNNMDMNDNDD$8NND8DDOOO=?77=+==++++++++++++++????????????IIIII7$$$$$$$ZZZ
//77777777777IIIIIIIIII?????????+++++++++++==============ONNNNNNNNNNNNNNNNNNNNNM8$77777$ONNNNNN8ND8NOD88NDDNO?7Z$?OI?+=+++++++++++++?+???????????IIIIII77777$ZZZZZ
//$$77777777IIIIIIIIIIIII?I???????+++++++++===========~ZMNNNDDNNNNNNNNNNNNNNNNNNNNOZ$$7$8NNNMNNNNMNMNND$NNNNN87??7+$?==++++++++++++++?????????IIIIII777777$$$$ZZ88
//$$$$$777777IIIIIIIIIIIIII???????++++++++++=========IMNNNNDDDNNNNNNNNNNNMNNNNNNNNNDOZ$$DDNNMNMNNNNNNND8NDDNDDDZ=++=++++++++++++++?????????IIIII77$$ZZOO8888DD8D8D
//7777$$$777777IIIIIIIIIIII?????????+++++++++===+====ONNNNNN8DNNNNNNNNNNNNNNNNNNNMNNOOZ88DNNNNMNNNNNNN8DNNDN8D88N=+=+++++++++++++????????????IIIII77777$7$$ZZZZZOO
//7777$77777777IIIIIIIIIIIII?I????????++++++++++=====NNNNNNN88NNNNNNNNNNNNNNNNNNNDD8OOZ888NNMMNMNNDDNM8NNND8DZOD88+++++++++++++????????????IIIIIIIII7777777$$$$$$$
//777$$77777777777IIIIIIIIIIII?????????+++++++++=====NNNNNNNDZNNNNMNNNNNNNNMNNNNNDD88D8O8DNNMMNMMNN8$NDMDNN$D$D88D?=++++++++++????????????IIIIIIIIII7777777$$$$$$$
//$$$$$$77777777777IIIIIIIIIIII?????????+++++++++++=+NNNNNNNNOZNNNDMNNMMNNMNNNMMDMNNMMMMMMNMMMMNMMMNMNNNNNDNND88NNM+++++++++++???????????IIIIIIII77777777777$$$$$$
//$$$$$$$$777777777777IIIIIIIII?I?????????++++++++++$NNNNNNNN8ODNNNNNMMMNNMNMNNNM8NNMMMMMMMMMMMMDNMMMMNDMDDNN8NDNOM????+?++++????????????IIIIIII777777777$7$$$$$$$
//OOZZ$$$$777777777777IIIIIIIIIIII?????????++++++++=88NNNNNNNN8NDDNMMMMMNNNNNNNMMM7MNMMMMMMMMMMMNMMMMMMMMNNNNDNNNM+????IIII?IIIIIIIIIIIIIIIIIII7777777$$$$$$$$ZZ$Z
//ZZ$$$$$$$$777777777I77IIIIIIIII??????????+++++++++8D8NNNNNNMZNDO8NNMNNNNNNMNDNMMN8NMNNMMMMMMMMMMMMMMMMMNNNN8NMMN8++??????IIII7II7II7777777$$$7$$$$$$$$$$$$ZZZZZZ
//$$$$$$$$$777777777777777IIIIIIII??????????+++++++8ODONMNDNNM$O88O8NMMMMNNNDDNMMNNNODMMMMMMMMMNMN8MNNMMNMNMNNNMMMN+??????????IIIIII777777777$$$$$$$ZZZZZZZZOOOOOO
//$$$$$$$$77777777777777777IIIIIIIII????????????+++88DODNNNDDNZ8N8OZD8DND88N8MOODNNMN?MMMMMNDD8MNMNNNNMM$NNN8NMMMMM+????I?IIIIII7777777I77777$$$$$$$ZZZZZZZZZZOOOO
//$$$$$$$$$$$$$$$$7777777777777777IIIIIIIII???????I88DODNNNDNMDNNNNMNOMNNNZDMMZZDNNNNNNMMMOO878MMNMMMMNDNDMN8MNNMMM??????????II77777777777$$$$$$ZZOZZZZZZZZZOOOOOO
//$$$$$$$$$$$$$$$$$$$$$77777777777I7I7IIIIIIIIIIIIZ88DNDNNNNMNNNNZDNN8O8NN8ODNNDONNMNNMMMMNIDZDNNNNZ8N8O$NMMMMMMMMD?IIIII77777777I7IIII777777$$$$ZZOOOOOOOOOOOOOOO
//ZZZZZ$$ZZZZZZ$ZZZ$$$$$7$77777777I77IIIIIIII7777I888NNDNNNMMM8NNODDNMDNNNNNNNNDDDDNDZMMMMODZ??NDN?+?=+IIMMMMMMMMM$?77$7777II77777777777$777777777$$$ZZZZZOZZZZZOO
//ZZZZZZZZZZZZ$$$Z$$$$$$$$$Z$$$$$7777777I777777777N8O8NDDDNMMN8DN8DNNO8MNNNDNNDDNNNNZZMMM+7D7?IDZ8DODDDZ$MMMMMMMMM??$$$$$ZZ$$$777777777$$$$$$$$$$ZZZZZZZZZZOO88888
//ZZZZZZZZZZZZZZZZZZ$$$$$$$$ZZZ$$$$$$$$$$777777777N88NDDO8DNMM888NN88NNNN8DDNNNMDNND8NMMO?$7I??8NO887$77DMMMMMMMM87?ZZZZZZ$ZZZZOOOZZOOOOOZZOOOOOZZZOO88888OOOOOOOO
//OZZOOOOZOZZZZZZZZZZZZZZZZZZZZZZ$$$$$$$$7$$77777$DDN8DDODDDMMNNNNDONNNNDDDDODNDNNNDDMMM+7$$7?7DNNMNI???MMMMMMMMM?IZ$$$$$77$$$$$$777777777777$$$ZZZZZZZZZZZOOOO8O8
//################################################################################################################################################################
int n;
string a;
bool check(string s)
{
	for(int j=1;a[j];j++)
		if(!isdigit(a[j]) && !isdigit(a[j-1]))
			return false;
	for(int j=1;a[j];j++)
		if(!isdigit(a[j]))
			return true;
	return false;
}
void type1(string s)
{
	int r=0,c=0;
	for(int i=0;i<s.size();i++)
	{
		if(!isdigit(a[i]))
			c=c*26+(a[i]-'A'+1);
		else
			r=r*10+(a[i]-'0');
	}
	cout<<"R"<<r<<"C"<<c<<endl;
}
void type2(string s)
{
	int i=1;
	while(isdigit(s[i]))	i++;i--;
	string No1=s.substr(1,i);
	i+=2;
	string No2=s.substr(i,s.size()-i),C;
	int No11=atoi(No2.c_str());
	int mmm=No11;
	//cout<<No11<<endl;
	int j;
	for(j=0;No11!=0;j++){
		//cout<<No11<<endl;
		if(No11%26!=0)	C[j]=char('@'+No11%26),No11/=26;
		else	C[j]='Z',No11/=26,No11--;
		//cout<<C[j];
	}
	for(int k=j-1;k>=0;k--)	cout<<C[k];
	cout<<No1<<endl;

}
int main()
{
	cin>>n;
	for(int cnt=0;cnt<n;cnt++)
	{
		cin>>a;
		if(!check(a))
		{
			type1(a);
		}
		else
		{
			type2(a);
		}
	}
	return 0;
}
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstring>
 
using namespace std;
 
int zhs(int n) {
    return n * (n - 1) / 2;
}
 
bool isP(long long n) {
    for (long long i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;
    return true;
}
 
bool yuanyin6(char c) {
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
        break;
    
    default: return false;
        break;
    }
}
 
bool check(const int a[55][55], int n, int x, int y) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (a[x][i] + a[j][y] == a[x][y])
                return true;
    return false;
}
 
int work(int n, int p, int m) {
    // printf("coming work, n = %d, p = %d, m = %d\n", n, p, m);
    long long v = 0;
    long long bs = 1;
    int half = 0;
    long long back = n;
    while (n > 0) {
        bs *= 10;
        v = v * 10 + n % 10;
        n /= 10;
    }
    // printf("bs is %lld, v is %lld, add is %lld\n", bs, v, n * bs);
    v += back * bs;
    // printf("bs is %lld, v is %lld\n", bs, v);
    return (v + m) % p;
}
 
struct a230{
    int s;
    int b;

    bool operator<(a230 a) {
        return s < a.s;
    }
};

long long gcd(long long a, long long b) {
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

long long data[300005] = {0};
long long data2[1000005] = {0};

void initFib() {
    data[1] = 1;
    for(int i = 2; data[i - 1] < 1000000000; i++)
        data[i] = data[i - 1] + data[i - 2];
} 

void init2048() {
    data[0] = 1;
    for (int i = 1; i < 13; i++)
        data[i] = data[i - 1] * 2;
}

bool isI(int i) {
    int a[10] = {0};
    while(i > 0) {
        a[i % 10]++;
        i /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (a[i] > 1)
            return false;
    return true;
}

void init(int num, int len) {
    data[0] = 1;
    for (int i = 1; i < len; ++i) 
        data[i] = num * data[i - 1];
    // for (int i = 0; i < len; ++i)
    //     cout << data[i] << " ";
    // cout << endl;
}

void a1251() {
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); ++i)
        if (i == s.length() - 1 || s[i] != s[i + 1])
            a[s[i] - 'a'] = 1;
        else 
            ++i;
    for (int i = 0; i < 26; ++i)
        if (a[i] == 1)
            cout << (char) ('a' + i);
    cout << endl;
}

void b465() {
    int n;
    cin >> n;
    int p, c;
    cin >> p;
    int sum = 0, seg = 0;
    if (p == 1) {
        sum++;
        seg++;
    }
    for (int i = 1; i < n; ++i) {
        cin >> c;
        if (c == 1) {
            sum++;
            if (p != 1)
                seg++;
        }
        p = c;
    }
    if (sum == 0)
        cout << 0;
    else 
        cout << sum + seg - 1;
}

void a879() {
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int s, d;
        cin >> s >> d;
        if (sum < s)
            sum = s;
        else {
            sum = s + ((sum - s) / d + 1) * d;
        }
        // cout << sum << endl;
    }
    cout << sum;
}

void d1256out(int b, int e, int len, int k, int n, string s) {
    for (int i = 0; i < b; ++i)
        cout << "0";
    if (k > 0 && k < len) {
        for (int i = 0; i < len - k; ++i)
            cout << "1";
        if (k > 0)
            cout << "0";
        for (int i = 0; i < k; ++i) 
            cout << "1";
        for (int i = e + 1; i < n; ++i)
            cout << s[i];
    } else {
        for (int i = 0; i < len; ++i)
            cout << "1";
        for (int i = e; i < n; ++i)
            cout << s[i];
    }
    cout << endl;
}

void d1256() {
    long long k, n;
    cin >> n >> k;
    string s;
    cin >> s;
    int b, e = n, len = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            b = i;
            break;
        }
    }
    for (int i = b; i < n; ++i) {
        if (s[i] == '0') {
            e = i;
            break;
        }
        len++;
    }
    if (b + len >= n) {
        //output 
        d1256out(b, n, len, 0, n, s);
        return;
    }
    while(e < n) {
        while (s[e] == '0' && len <= k) {
            k -= len;
            b++;
            e++;
        }
        while (e < n && s[e] == '1') {
            e++;
            len++;
        }
        if (k < len)
            break;
    }
    if (k > len || e >= n)
        k = 0;
    d1256out(b, e, len, k, n, s);
}

struct sb1256 {
    int p, v;
    bool operator<(sb1256 s) {
        return v < s.v;
    }
};

void b1256() {
    int n; 
    cin >> n;
    int a[200];
    int p;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1)
            p = i;
    }
    int b = 0;
    int m = 1;
    while(true) {
        if (b != p) {
            for (int i = p; i > b; --i)
                a[i] = a[i - 1];
            a[b] = m;
        } else 
            p++;
        
        b = p;
        m = a[p];
        if (b >= n - 1)
            break;
        for (int i = b + 1; i < n; ++i)
            if (a[i] < m) {
                m = a[i];
                p = i;
            }
    }
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;
}

void c1256() {
    int n, m, d;
    cin >> n >> m >> d;
    int a[1005] = {0};
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
        sum += a[i];
    }
    int empty = n - sum;
    if (empty > (m + 1) * (d - 1))
        cout << "NO";
    else {
        int each = empty / (m + 1);
        int lef = empty % (m + 1);
        cout << "YES" << endl;
        for (int j = 0; j < m; ++j) {
            for (int i = 0; i < each; ++i)
                cout << 0 << " ";
            if(lef > 0) {
                cout << 0 << " ";
                lef--;
            }
            for (int i = 0; i < a[j]; ++i)
                cout << j + 1 << " ";
        }
        for (int i = 0; i < each; ++i)
            cout << 0 << " ";
    }
}

struct sb520 {
    int v, n;
};

void b520() {
    long long n, m;
    cin >> n >> m;
    queue<sb520> q;
    sb520 s;
    s.n = 0;
    s.v = n;
    q.push(s);
    long long mm = m * 3;
    if (n >= m) {
        cout << n - m;
        return;
    }
    data[n] = 1;
    while(!q.empty()) {
        sb520 temp = q.front();
        q.pop();
        if (temp.n >= mm) {
            cout << mm;
            return ;
        }
        if (temp.v * 2 == m || temp.v - 1 == m) {
            cout << temp.n + 1;
            return;
        }
        if (temp.v > m)
            mm = min(mm, temp.n + temp.v - m);
        else {
            s.n = temp.n + 1;
            s.v = temp.v * 2;
            if(data[s.v] == 0) {
                data[s.v] = 1;
                q.push(s);
            }
            if (temp.v - 1 > 0) {
                s.v = temp.v - 1;
                if(data[s.v] == 0) {
                    data[s.v] = 1;
                    q.push(s);
                }
            }
        }
    }
    cout << mm;
    return;
}

int a217() {
    int n;
    cin >> n;
    vector<int> hv[1005], lv[1005];
    int h[1005] = {0}, l[1005] = {0};
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        hv[x].push_back(y);
        lv[y].push_back(x);
    }
    int sum = 0;
    for (int i = 1; i <= 1000; ++i) {
        if (h[i] != 0 || hv[i].size() == 0)
            continue;
        sum++;
        h[i] = sum;
        queue<int> hq, lq;
        for (int j = 0; j < hv[i].size(); ++j) {
            if (l[hv[i][j]] == 0) {
                l[hv[i][j]] = sum;
                lq.push(hv[i][j]);
            }
        }
        while(!lq.empty()) {
            while(!lq.empty()) {
                int y = lq.front();
                lq.pop();
                for (int j = 0; j < lv[y].size(); ++j) {
                    if (h[lv[y][j]] == 0) {
                        h[lv[y][j]] = sum;
                        hq.push(lv[y][j]);
                    }
                }
            }
            while(!hq.empty()) {
                int y = hq.front();
                hq.pop();
                for (int j = 0; j < hv[y].size(); ++j) {
                    if (l[hv[y][j]] == 0) {
                        l[hv[y][j]] = sum;
                        lq.push(hv[y][j]);
                    }
                }
            }
        }
    }
    cout << sum - 1;
}

void a1257() {
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    if (a > b)
        swap(a, b);
    int mov = min(x, a - 1);
    a -= mov;
    x -= mov;
    mov = min(x, n - b);
    b += mov;
    cout << b - a << endl;
}

void a1256() {
    long long a, b, n, s, t1, t2, t3;
    cin >> a >> b >> n >> s;
    t1 = s / n;
    if (t1 > a)
        t1 = a;
    s -= t1 * n;
    if (b >= s)
        cout << "yes";
    else 
        cout << "no";
    cout << endl;
}

void b1257() {
    int x, y;
    cin >> x >> y;
    if (x == 1 && y > 1 || x <= 3 && y > 3)
        cout << "no";
    else 
        cout << "yes";
    cout << endl;
}

void a1245() {
    long long x, y;
    cin >> x >> y;
    if (gcd(x, y) == 1)
        cout << "Finite";
    else 
        cout << "Infinite";
    cout << endl;
}

void a1155() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] < s[i - 1]) {
            cout << "yes" << endl;
            cout << i << " " << i + 1;
            return;
        }
    }
    cout << "no";
}

void a990() {
    long long n, m, a, b;
    cin >> n >> m >> a >> b;
    n %= m;
    cout << min(n * b, (m - n) * a);
    return;
}

void a84() {
    int n;
    cin >> n;
    cout << n + n / 2;
    return;
}

void a1100() {
    int n, k;
    cin >> n >> k;
    int arr[100] = {0};
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr[i % k] += temp;
        sum += temp;
    }
    // cout << sum << endl;
    for (int i = 0; i < k; ++i) {
        // cout << arr[i] << " ";
        arr[i] -= sum;
        if (arr[i] < 0)
            arr[i] = -arr[i];
    }
    sort(arr, arr + k);
    cout << arr[k - 1];
}

void a1151() {
    int n;
    string s;
    cin >> n >> s;
    int m = 55;
    for (int i = 0; i < n - 3; ++i) {
        int temp = 0, t2;
        t2 = abs(s[i] - 'A');
        temp += min(t2, 26 - t2);
        t2 = abs(s[i + 1] - 'C');
        temp += min(t2, 26 - t2);
        t2 = abs(s[i + 2] - 'T');
        temp += min(t2, 26 - t2);
        t2 = abs(s[i + 3] - 'G');
        temp += min(t2, 26 - t2);
        if (temp < m)
            m = temp;
    }
    cout << m;
    return;
}

void b1117() {
    long long n, m, k, sum, s1 = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i)
        cin >> data[i];
    sort(data, data + n);
    sum = 0;
    if (data[n - 1] == data[n - 2])
        cout << m * data[n - 1];
    else {
        s1 = k * data[n - 1] + data[n - 2];
        sum = (m / (k + 1)) * s1 + (m % (k + 1)) * data[n - 1];
        cout << sum;
    }
    return ;
}

void a1253() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> data[i];
    for (int i = 0; i < n; ++i)
        cin >> data2[i];
    bool b = true, f = false;
    int gap = 0;
    for (int i = 0; i < n; ++i) {
        if (data2[i] < data[i]) {
            b = false;
            break;
        } else if (data2[i] > data[i]) {
            if (f || gap != 0 && gap != data2[i] - data[i]) {
                b = false;
                break;
            }
            gap = data2[i] - data[i];
        } else if (gap > 0)
            f = true;
    }
    if (b)
        cout << "YES";
    else 
        cout << "NO";
    cout << endl;
}

void b1225() {
    int n, k, d;
    cin >> n >> k >> d;
    for (int i = 1; i <= n; ++i)
        cin >> data[i];
    if (d == 1 || n == 1) {
        cout << 1 << endl;
        return ;
    }
    memset(data2, 0, 8 * (k + 1));
    // if (d == n)
    int sum = 0, temp = 0;
    for (int i = 1; i <= d; ++i) {
        data2[data[i]]++;
        if (data2[data[i]] == 1)
            temp++;
    }
    // for (int j = 1; j <= k; ++j)
    //     if (data2[j] > 0)
    //         temp++;
    // for (int j = 1; j <= k; ++j)
    //     cout << data2[j] << " ";
    // cout << endl;
    sum = temp;
    for (int i = 2; i <= n - d + 1; ++i) {
        data2[data[i - 1]]--;
        if (data2[data[i - 1]] == 0)
            temp--;
        data2[data[i + d - 1]]++;
        // for (int j = 1; j <= k; ++j)
        //     cout << data2[j] << " ";
        // cout << endl;
        if (data2[data[i + d - 1]] == 1)
            temp++;
        // temp = 0;
        // for (int j = 1; j <= k; ++j)
        //     if (data2[j] > 0)
        //         temp++;
        if (temp < sum)
            sum = temp;
    }
    cout << sum << endl;
}

void a1255() {
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    int d = b - a;
    int sum = d / 5;
    d %= 5;
    if (d > 2)
        sum += 2;
    else if (d > 0)
        sum += 1;
    cout << sum << endl;
}

void a1243() {
    int n;
    cin >> n;
    int temp[1005] = {0};
    for (int i = 0; i < n; ++i) {
        int it;
        cin >> it;
        temp[it]++;
    }
    int sum = 0;
    for (int i = 1000; i > 0; --i) {
        sum += temp[i];
        if (sum >= i) {
            cout << i << endl;;
            return;
        }
    }
}

void a1215() {
    int a1, a2, k1, k2, m;
    cin >> a1 >> a2 >> k1 >> k2 >> m;
    cout << max(m - (k1 - 1) * a1 - (k2 -1) * a2, 0) << " ";
    if (k1 > k2) {
        int sum = min (a2, m / k2);
        m -= sum * k2;
        if (m > 0)
            sum += m / k1;
        cout << sum;
    } else {
        int sum = min(a1, m / k1);
        m -= sum * k1;
        if (m > 0)
            sum += m / k2;
        cout << sum;
    }
}

void c546() {
    int n;
    queue<int> q1, q2;
    int k1, k2;
    cin >> n;
    cin >> k1;
    for (int i = 0; i < k1; ++i) {
        int temp;
        cin >> temp;
        q1.push(temp);
    }
    cin >> k2;
    for (int i = 0; i < k2; ++i) {
        int temp;
        cin >> temp;
        q2.push(temp);
    }
    // cout << "finish input" << endl;
    int sum = 0;
    while (!q1.empty() && !q2.empty()) {
        k1 = q1.front();
        k2 = q2.front();
        q1.pop();
        q2.pop();
        if (k1 > k2) {
            q1.push(k2);
            q1.push(k1);
        } else {
            q2.push(k1);
            q2.push(k2);
        }
        sum++;
        if (sum > 100000)
            break;
    }
    if (sum > 100000)
        cout << -1;
    else {
        cout << sum << " " << (q1.empty() ? 2 : 1);
    }
}

void a708() {
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length() && s[i] == 'a') i++;
    if (i == s.length())
        s[i - 1] = 'z';
    while (i < s.length() && s[i] != 'a') {
        s[i]--;
        i++;
    }
    cout << s;
}

void a982() {
    string s;
    int n;
    cin >> n >> s;
    bool b = true;
    s = "0" + s + "0";
    for (int i = 1; i <= n; ++i) {
        if (s[i] == '0' && s[i -1] == '0' && s[i + 1] == '0') {
            b = false;
            break;
        }
        if (s[i] == '1' && (s[i -1] == '1' || s[i + 1] == '1')) {
            b = false;
            break;
        }
    }
    if (b) 
        cout << "Yes";
    else 
        cout << "No";
}

void a602() {
    unsigned long long a1 = 0, a2 = 0, base = 1;
    int n, bx, a[15];
    cin >> n >> bx;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = n; i > 0; --i) {
        a1 += base * a[i];
        base *= bx;
    }
    cin >> n >> bx;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    base = 1;
    for (int i = n; i > 0; --i) {
        a2 += base * a[i];
        base *= bx;
    }
    if (a1 < a2) 
        cout << "<";
    else if (a1 == a2)
        cout << "=";
    else 
        cout << ">";
}

void a633() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (c / b < 100) {
        bool bo = false;

        for (int i = 0; i <= c / b; ++i) {
            if((c - (i * b)) % a == 0) {
                bo = true;
                break;
            }
        }
        if (bo)
            cout << "Yes";
        else 
            cout << "No";
    } else {
        long long mm = gcd(a, b);
        if (c % mm == 0)
            cout << "Yes";
        else 
            cout << "No";
    }
}

void b1153() {
    int n, m, h;
    cin >> n >> m >> h;
    int ma[105] = {0};
    int na[105] = {0};
    int ha[105][105] = {0};
    for (int i = 1; i <= m; ++i)
        cin >> ma[i];
    for (int i = 1; i <= n; ++i)
        cin >> na[i];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> ha[i][j];
            if (ha[i][j] == 1) 
                ha[i][j] = min(ma[j], na[i]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << ha[i][j] << " ";
        }
        cout << endl;
    }
}

void b705() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        sum += (temp - 1) % 2;
        if (sum % 2 == 0)
            cout << 2;
        else 
            cout << 1;
        cout << endl;
    }
    return;
}

void a574() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int sum = a;
    int num = 1;
    int eq = 0;
    int ma = a;
    int mbuf[1005] = {0};
    for (int i = 2; i <= n; ++i) {
        int temp;
        cin >> temp;
        mbuf[temp]++;
    }
    for (int i = 1000; i>= a; --i) {
        if (mbuf[i] == 0)
            continue;
        int temp = mbuf[i];
        // printf("i=%d, a=%d, buf[i]=%d\n", i, a, mbuf[i]);
        if (a + mbuf[i] <= i) {
            mbuf[i - 1] += mbuf[i];
            a += mbuf[i];
            mbuf[i] = 0;
        } else {
            a = i + 1;
        }
    }
    cout << a - ma;
    return ;
}

void a902() {
    int n, m;
    cin >> n >> m;
    int b = 0, e = 0, t1, t2;
    for (int i = 0; i < n; ++i) {
        cin >> t1 >> t2;
        if (t1 <= e && t2 > e)
            e = t2;
    }
    if (e >= m)
        cout << "YES";
    else 
        cout << "NO";
}

void b911() {
    int n, a, b;
    cin >> n >> a >> b;
    int mi = 0;
    for (int i = 1; i < n; ++i) {
        int temp = min(a / i, b / (n - i));
        mi = max(mi, temp);
    }
    cout << mi;
}

long long buffer[500005] = {0};
long long buf2[500005] = {0};

void b432() {
    int n;
    cin >> n;
    // cout << n << endl;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp >> buf2[i];
        buffer[temp]++;
    }
    for (int i = 0; i < n; ++i) {
        cout << n - 1 + buffer[buf2[i]] << " " << n - 1 - buffer[buf2[i]] << endl;
    }
}

void b592() {
    long long n;
    cin >> n;
    n -= 2;
    cout << n * n;
}

void b362() {
    int n, m;
    cin >> n >> m;
    int buf[3000] = {0};
    for (int i = 0; i < m; ++i)
        cin >> buf[i];
    sort(buf, buf + m);
    if (buf[0] == 1 || buf[m - 1] == n)
        cout << "NO";
    else {
        bool b = false;
        for (int i = 0; i < m - 2; ++i) 
            if (buf[i] + 1 == buf[i + 1] && buf[i] + 2 == buf[i + 2]) {
                b = true;
                break;
            }
        if (b)
            cout << "NO";
        else 
            cout << "YES";
    }
}

void b734() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int mi;
    mi = min(k2, k5);
    mi = min(mi, k6);
    long long sum = 0;
    sum += mi * 256L;
    k2 -= mi;
    mi = min(k2, k3);
    sum += mi * 32;
    cout << sum;
}

void c977() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    sort(buffer, buffer + n);
    int sum = 0;
    if (k == n)
         cout << buffer[n - 1];
    else if (buffer[k - 1] == buffer[k])
        cout << -1;
    else if (k == 0) {
        if (buffer[0] > 1)
            cout << 1;
        else 
            cout << -1;
    } else
        cout << buffer[k - 1];
}

void a1263() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] >= a[2])
        cout << (a[0] + a[1] + a[2]) / 2;
    else 
        cout << a[1] + a[0];
    cout << endl;
}

void a799() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int num = (n + k - 1) / k;
    num--;
    if (num * t > d)
        cout << "YES";
    else 
        cout << "NO";
}

void b998() {
    int n, b;
    cin >> n >> b;
    int a[1000] = {0};
    int on = 0, en = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0)
            en++;
        else 
            on++;
        if (en == on && i < n - 1)
            v.push_back(abs(a[i + 1] - a[i]));
    }
    if (en != on || v.size() == 0)
        cout << 0;
    else {
        sort(v.begin(), v.end());
        int sum = 0;
        int i = 0;

        while(sum + v[i] <= b && i < v.size()) {
            sum += v[i];
            i++;
        }
        cout << i;
    }
}

void c903() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    sort(buffer, buffer + n);
    int ma = 0;
    int i = 0;
    while(i < n) {
        int num = 1;
        while(i < n - 1 && buffer[i] == buffer[i + 1]) {
            i++;
            num++;
        }
        if (num > ma)
            ma = num;
        i++;
    }
    cout << ma;
}

void b365() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> buffer[i];
    for (int i = 2; i < n; ++i)
        if (buffer[i] == buffer[i - 1] + buffer[i - 2])
            buf2[i] = 1;
    int ma = 0;
    int i = 2;
    while(i < n) {
        int num = 0;
        while (i < n && buf2[i] == 1) {
            i++;
            num++;
        }
        if (num > ma)
            ma = num;
        i++;
    }
    if (n == 1)
        cout << 1;
    else 
        cout << ma + 2;
}

void b1011() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << 0;
        return;
    }
    if (n == m || m / n == 1) {
        cout << 1;
        return;
    }
    int a[105] = {0};
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    sort(a, a + 101);
    int ma = m / n;
    ma = min(ma, a[100]);
    if (ma == 1)
        cout << 1;
    else {
        for(int i = ma; i > 1; --i) {
            int sum = 0;
            for (int j = 100; a[j] >= i; --j)
                sum += a[j] / i;
            if (sum >= n) {
                cout << i;
                return;
            }
        }
        cout << 1;
    }
}

int b554() {
    int n;
    cin >> n;
    string s[105];
    for (int i = 0; i < n; ++i)
        cin >> s[i];
    sort(s, s + n);
    int ma = 0;
    int i = 0;
    while (i < n) {
        int num = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            i++;
            num++;
        }
        if (num > ma)
            ma = num;
        i++;
    }
    cout << ma;
}

void a433() {
    int n;
    int a[2] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (temp == 100)
            a[0]++;
        else 
            a[1]++;
    }
    if (a[0] % 2 == 1 || (a[0] == 0 && a[1] % 2 == 1))
        cout << "NO";
    else 
        cout << "YES";
}

int bs(int v, int begin, int end) {
    if (begin >= end)
        return end;
    int half = (begin + end) / 2;
    if (v > buffer[half])
        return bs(v, half + 1, end);
    else if (v == buffer[half])
        return half;
    else 
        return bs(v, begin, half);
}
void b474() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> buffer[i];
        buffer[i] += buffer[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        cout << bs(temp, 1, n) << endl;
    }
}

void a459() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2) {
        int gap = y2 - y1;
        cout << x1 + gap << " " << y1 << " " << x2 + gap << " " << y2;
    } else if (y1 == y2) {
        int gap = x2 - x1;
        cout << x1 << " " << y1 + gap << " " << x2 << " " << y2 + gap;
    } else if (abs(x1 - x2) == abs(y1 - y2)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    } else 
        cout << -1;
}

void b552() {
    long long n;
    cin >> n;
    long long sum = 0;
    long long base = 9;
    long long bb = 1;
    while (n >= base) {
        sum += base * bb;
        n -= base;
        base *= 10;
        bb++;
    }
    sum += n * bb;
    cout << sum;
}

struct n1267 {
    int a, b, t;
    bool operator<(n1267 node) {
        return a < node.a;
    }
};
n1267 nds[200000];

bool st(n1267 a, n1267 b) {
    if (a.t == b.t)
        return a.b > b.b;
    return a.t > b.t;
}
void a1267() {
    int n;
    cin >> n; 
    long long mb = 0;
    for (int i = 0; i < n; ++i) {
        cin >> nds[i].a >> nds[i].b >> nds[i].t;
        if(nds[i].b > mb) 
            mb = nds[i].b;
    }
    sort(nds, nds + n);
    int p = 1;
    long long beg = nds[0].a, e, sum = 0;
    while (p < n) {

    }
}

void e1265() {
    int n;
    cin >> n;
    long long mod = 998244353;
    for (int i = 1; i <= n; ++i)
        cin >> buffer[i];
    long long mul = 100;
    long long fm = buffer[n];
    long long fm2 = 1;
    for (int i = n - 1; i > 0; i--) {
        fm2 *= buffer[n - i];
        fm2 %= mod;
        mul = (mul + fm2) * 100;
        mul %= mod;
        fm *= buffer[i];
        fm %= mod;
    }
    if (mul % fm == 0) {
        cout << mul / fm;
        return;
    }
    // mul = mod - mul;
    while(true) {
        if (mul % fm == 0) {
            cout << mul / fm;
            return;
        }
        mul += mod;
    }
}

struct N1227 {
    int l, r;

    bool operator<(N1227 a) {
        return l < a.l;
    }
};

N1227 n1227[100000];

void a1227() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) 
        cin >> n1227[i].l >> n1227[i].r;
    sort(n1227, n1227 + n);
    int mb = n1227[0].l;
    int me = n1227[0].r;
    for (int i = 1; i < n; ++i) {
        if (n1227[i].l >= me)
            break;
        if (n1227[i].r < me)
            me = n1227[i].r;
    }
    if (me >= n1227[n - 1].l)
        cout << 0;
    else 
        cout << n1227[n - 1].l - me;
    cout << endl;
}

void b1227() {
    int n;
    cin >> n;
    // cout << "n = " << n << endl;
    int m;
    cin >> m;
    buffer[0] = m;
    memset(buf2, 0, 8 * (n + 10));
    buf2[m] = 1;
    int p = 1;
    for (int i = 1; i < n; ++i) {
        int temp ;
        cin >> temp;
        // printf("temp = %d, i = %d\n", temp, i);
        if (temp <= i || temp > n) {
            ++i;
            while(i < n) {
                cin >> temp;
                i++;
            }
            cout << -1 << endl;
            return;
        }
        if (temp > m) {
            m = temp;
            buffer[i] = m;
            buf2[m] = 1;
        } else {
            for (; ; p++) {
                if (buf2[p] == 0) {
                    buf2[p] = 1;
                    buffer[i] = p;
                    p++;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
        cout << buffer[i] << " ";
    cout << endl;
}

long long cal(vector<long long> &vn, vector<long long> &vk, long long k) {
    // for (int i = 0; i < vn.size(); ++i)
    //     cout << vn[i] << " ";
    // cout << endl;
    // for (int i = 0; i < vk.size(); ++i)
    //     cout << vk[i] << " ";
    // cout << endl;
    vector<long long> v1, v2;
    int i = 0, j = 0;
    if (vn[i] % 2 == 1) 
        i++;
    v1.push_back(vn[i] / 2);
    v2.push_back(1 + vk[i]);
    int len = vn.size();
    if (v1[j] % 2 == 0) {
        long long pre;
        int len = vn.size();
        if (vn[len - 1] % 2 == 1)
            pre = vk[len - 1];
        else 
            pre = vk[len - 2];
        v2[j] += pre;
    }
    while(true) {
        if (v2[j] >= k)
            return v1[j];
        if (v1[j] <= v1[0] / 2 || j >= 100 || (j > 2 && v2[j - 2] == v2[j] && v2[j - 1] == v2[j - 3]))
            break;
        i += 2;
        if (i >= len)
            i -= 2;
        v1.push_back(v1[j] - 1);
        v2.push_back(1 + vk[i]);
        if (v1[j] % 2 == 1)
            v2[j + 1] += v2[j];
        j++;
    }
    return cal(v1, v2, k);
}
void e1271() {
    long long n, k;
    cin >> n >> k;
    if (k == 1)
        cout << n;
    else if (k == n)
        cout << 1;
    else if (k == 2) {
        if (n % 2 == 0)
            cout << n - 2;
        else 
            cout << n - 1;
    } else if (k == n - 1)
        cout << 2;
    else {
        vector<long long> vn, vk;
        vn.push_back(n);
        vk.push_back(1);
        if (n % 2 == 0) {
            vn.push_back(n - 1);
            vn.push_back(n - 2);
            // vn.push_back(n - 3);
            // vk.push_back(1);
            vk.push_back(1);
            vk.push_back(2);
        } else {
            vn.push_back(n - 1);
            // vn.push_back(n - 2);
            // vk.push_back(1);
            vk.push_back(2);
        }
        cout << cal(vn, vk, k);
    }
}

string s2s(string s) {
    int len = s.length();
    int i = 0;
    string ret;
    while(i < len && s[i] >= 'A' && s[i] <= 'Z') i++;
    string sr = s.substr(0, i);
    // cout << sr << endl;
    int begin = i;
    while(i < len && s[i] >= '0' && s[i] <= '9') i++;
    string n1 = s.substr(begin, i - begin);
    // cout << n1 << endl;
    if (i == len) {
        ret = "R" + n1 + "C";
        int num = sr[0] - 'A' + 1;
        // cout << num << endl;;
        for (int j = 1; j < sr.length(); ++j) {
            num *= 26;
            num += sr[j] - 'A' + 1;
            // cout << num << endl;
        }
        string temp = to_string(num);
        ret += temp;
    } else {
        i++;
        int num = s[i] - '0';
        for (++i; i < len; i++) {
            num *= 10;
            num += s[i] - '0';
        }
        // cout << num << endl;
        num--;
        char c = 'A' + num % 26;
        num /= 26;
        ret = c;
        while (num > 0) {
            num--;
            c = 'A' + num % 26;
            ret = c + ret;
            num /= 26;
        }
        ret += n1;
    }
    return ret; 
}

void b1() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        cout << s2s(s) << endl;
    }
}
int main() {
//    init(3, 39);
//    int xx = 38;
    // int q;
    // cin >> q;
    // for (int i = 0; i < q; ++i) {
    //     b1227();
    // }
    b1();
    return 0;
}
/*****/
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define pii pair<int,int>
using namespace std;
//stringToInt
int stringToInt(const string &s){
	stringstream om(s);
	int num=-1;
	om>>num;
	return num;
}
// check timeout
void checkTimeout(){
	double tm=(float)clock()/CLOCKS_PER_SEC;
	if(tm>=2){
		cerr<<"Time limit exeeded"<<endl;
		exit(0);
	}
}
//factors 
void findAllFactors(int n,std::vector<int>& factors){
	double sqroot=sqrt(n);
	factors.push_back(1);
	for(int i=2;i<=sqroot;i++){
		if(n%i == 0){
			factors.push_back(i);
			if(n/i != i){
				factors.push_back(n/i);
			}
		}
	}
	factors.push_back(n);
	sort(factors.begin(),factors.end());
}
//lcm and gcd
pair<int,int> extended_gcd(int a,int b){
	if(b==0) return{1,1};
	pair<int,int> pr=extended_gcd(b,a%b);
	return {pr.second,pr.first-(a/b)*pr.second};
}
int hcf(int a,int b){
	if(a==0 || b==0) return max(a,b);
	pair<int,int> pr=extended_gcd(a,b);
	return (a*pr.first + b*pr.second);
}
int lcm(int a,int b){
	return (a*b)/(__gcd(a,b));
}
int gcd(int a,int b){
	return __gcd(a,b);
}
//printing modules
void print(int num){
	cout<<num<<endl;
}
void print(int *arr,int start,int end){
	for(int i=start;i<=end;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void print(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void print(vector<pair<int,int>>& v){
	for(auto &pr:v){
		cout<<"{"<<pr.first<<","<<pr.second<<"}"<<endl;
	}
	cout<<endl;
}
void print(std::vector<int>& v){
	for(auto &num:v) cout<<num<<" ";cout<<endl;
}
void print(std::vector<string>& v){
	for(auto &num:v) cout<<num<<" ";cout<<endl;
}
void print(std::vector<std::vector<int>>& v,int n){
	for(int i=n-1;i>=0;i--){
		print(v[i]);
	}
}
void print(bool b){
	if(b) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
void print(pair<int,int>& pr){
	cout<<"{"<<pr.first<<","<<pr.second<<"} ";
}

// modulo arithmetic 
int power(long long x, unsigned int y, int p) 
{ 
    int res = 1; 
    x = x % p; // Update x if it is more than or 
    if (x == 0) return 0; // In case x is divisible by p;
    while (y > 0) { 
        if (y & 1) res = (res*x) % p; 
        y = y>>1; // y = y/2 
        x = (x*x) % p; 
    } 
    return res; 
} 

int modSub(int a,int b,int mod){
	return ((a%mod - b%mod + mod)%mod);
}
int modMul(int a,int b,int mod){
	return ((a%mod)*(b%mod))%mod;
}
int modAdd(int a,int b,int mod){
	return ((a%mod)+(b%mod))%mod;
}
int modInv(int a,int mod){
	int x,y;
	pair<int,int> pr=extended_gcd(a,mod);
	x=pr.first;
	y=pr.second;
	int g=(a*x + mod*y);
	if(g!=1){
		cerr<<"modular inverse does not exist , gcd != 1"<<endl;
		exit(0);
	}
	// adding m to avoid negative value of x 
	int res=(x%mod + mod)%mod;
	return res;
}
int modDiv(int a,int b,int mod){
	
	a=a%mod;
	int inv=modInv(b,mod);
	int res=(inv*a)%mod;
	return res;
}
int chineseRem(int arr[],int rem[],int n){
	int prod=1,res=0;
	for(int i=0;i<n;i++) prod*=arr[i];
	for(int i=0;i<n;i++){
		int restProd=prod/arr[i];
		res+=(rem[i]*modInv(restProd,arr[i])*(restProd));
	}
	return (res%prod);
}
// fenwick tree
class fenwickTree{
	vector<int> BIT;
	int n;
	public : 
	fenwickTree(int n){
		this->n=n;
		BIT=*new vector<int>(n,0);
	}
	fenwickTree(int *arr,int n){
		
		this->n=n;
		BIT=*new vector<int>(n,0);
		BIT[0]=arr[0];
		for(int i=1;i<n;i++){
			this->update(i,arr[i]);
		}
	}
	fenwickTree(vector<int>&v){
		this->n=n;
		BIT=*new vector<int>(n,0);
		BIT[0]=v[0];
		for(int i=1;i<n;i++){
			this->update(i,v[i]);
		}
	}
	void update(int index, int delta)
	{
		  if(index==0) {BIT[index]+=delta;return;}
	      for(; index < n; index += index&-index)

	        BIT[index] += delta;
	}
	int get(int index)
	{
	     int sum = BIT[0];
	     for(; index > 0; index -= index&-index)
	        sum += BIT[index];
	     return sum;
	}
};
	
//segment tree
class segmentTree{
	vector<int> segTree;
	int *arr;int n;
	bool isVectorContainer=false;
	public: 
	segmentTree(int *arr,int n){
		this->arr=arr;
		this->n=n;
		int size=pow(2,ceil(log2(2*n-1)));
		segTree.resize(size);
		createSegTree(0,0,n-1);
	}
	segmentTree(vector<int> &v){
		isVectorContainer=true;
		n=v.size();
		this->arr=(int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++){
			arr[i]=v[i];
		}
		int size=pow(2,ceil(log2(2*n-1)));
		segTree.resize(size);
		createSegTree(0,0,n-1);
	}
	int createSegTree(int si,int l,int r){
		if(l==r){	
			segTree[si]=arr[l];
			return arr[l];
		}
		int mid=(l+r)/2;
		segTree[si]=createSegTree(2*si + 1,l,mid)+createSegTree(2*si + 2,mid+1,r);
		return segTree[si];
	}
	int getRangeSum(int sl,int sr,int l,int r,int si){
		// cout<<sl<<" "<<sr<<endl;
		if(sl>=l && sr<=r){
			return segTree[si];
		}
		if(sl>r || sr<l){
			return 0;
		}
		int mid=(sl+sr)/2;
		return getRangeSum(sl,mid,l,r,2*si+1)+getRangeSum(mid+1,sr,l,r,2*si+2);
	}
	int getRangeSum(int l,int r){
		return this->getRangeSum(0,n-1,l,r,0);
	}

	void updateSegTree(int si,int sl,int sr,int pos,int diff){
		if(sl>pos || sr<pos) return;
		segTree[si]+=diff;
		if(sl != sr){
			int mid((sl+sr)/2);
			updateSegTree(2*si+1,sl,mid,pos,diff);
			updateSegTree(2*si+2,mid+1,sr,pos,diff);
		}
	}
	void update(int pos,int delta){
		return updateSegTree(0,0,n-1,pos,delta);
	}
	~segmentTree(){
		if(isVectorContainer){
			free(arr);
		}
	}
	void print(){
		for(int i=0;i<segTree.size();i++){
			cout<<segTree[i]<<" ";
		}
		cout<<endl;
	}
};
// sqroot decomposition

class sqrtDecomp{
	int *arr;
	int n;
	int len;
	vector<int> decomp;
	public :
	sqrtDecomp(int *arr,int n){
		this->n=n;
		this->arr=arr;
		len=sqrt(n)+1;
		decomp=*new vector<int>(len,0);
		for(int i=0;i<n;i++){
			decomp[i/len]+=arr[i];
		}
	}
	sqrtDecomp(vector<int>& v){
		this->n=n;
		arr=(int *)malloc(n*sizeof(int));
		for(int i=0;i<n;i++) arr[i]=v[i];
		len=sqrt(n)+1;
		decomp=*new vector<int>(len,0);
		for(int i=0;i<n;i++){
			decomp[i/len]+=arr[i];
		}
	}
	int getRangeSum(int l,int r){
		int sum=0;
		for(int i=l;i<=r;){
			if(i%len==0 && i+len-1<=r){
				sum+=decomp[i/len];
				i+=len;
			}else{ 
				sum+=arr[i];
				i++;
			}
		}
		return sum;
	}
};
// disjointSet
class disjointSet{
    vector<int> ump;
    public:
    vector<int>& getUmp(){
    	return ump;
    }
    disjointSet(int n){
        ump.assign(n+1,-1);
    }
    int findSet(int u){
        // cout<<"in findSet "<<u<<endl;
        int r=u;
        while(ump[r]>=0){
            r=ump[r];
        }
        while(u!=r){
            int par=ump[u];
            ump[u]=r;
            u=par;
        }
        return r;
    }
    bool setUnion(int u,int v){
        // cout<<"in setUnion "<<u<<" "<<v<<endl;
        int uroot=findSet(u);
        int vroot=findSet(v);
        if(uroot == vroot) return false;
        int uchild=ump[uroot];
        int vchild=ump[vroot];
        int totalChild=uchild+vchild;
        
        if(uchild>vchild){
	        ump[uroot]=vroot;
	        ump[vroot]=totalChild;
        }else{
	        ump[vroot]=uroot;
	        ump[uroot]=totalChild;
        }
        return true;
    }
    bool prefered_union(int v,int u){
    	int uroot=findSet(u);
    	int vroot=findSet(v);
    	if(uroot==vroot) return false;
    	int uchild=ump[uroot];
        int vchild=ump[vroot];
        int totalChild=uchild+vchild;
        ump[uroot]=vroot;
        ump[vroot]=totalChild;
        return true;
    }

    // void giveConnectedComps(vector<vector<int>>& comps){
    // 	for(auto &pr:ump){
    // 		if(pr.first==0) continue;
    // 		if(pr.second > 0){
    // 			comps[pr.second].push_back(pr.first);
    // 		}else{
    // 			comps[pr.first].push_back(pr.first);
    // 		}
    // 	}
    // 	return;
    // }
    // void print(){
    //     for(auto &pr:ump){
    //         cout<<"{"<<pr.first<<"<="<<pr.second<<"}"<<endl;
    //     }
    // }
};
//lis
int lis(int *v,int n){
	vector<int> seq;
	for(int i=0;i<n;i++){
		int num=v[i];
		auto found=upper_bound(seq.begin(), seq.end(),num);
		if(found==seq.end()) seq.push_back(num);
		else *found=num;
	}
	return seq.size();
}
int lis(vector<int>&v){
	int n=v.size();
	vector<int> seq;
	for(auto num:v){
		auto found=upper_bound(seq.begin(), seq.end(),num);
		if(found==seq.end()) seq.push_back(num);
		else *found=num;
	}
	return seq.size();
}
//lis return type list
void lis(int *v,int n,vector<int>&seq){
	for(int i=0;i<n;i++){
		int num=v[i];
		auto found=upper_bound(seq.begin(), seq.end(),num);
		if(found==seq.end()) seq.push_back(num);
		else *found=num;
	}
	return ;
}
void lis(vector<int>&v,vector<int>& seq){
	int n=v.size();
	for(auto num:v){
		auto found=upper_bound(seq.begin(), seq.end(),num);
		if(found==seq.end()) seq.push_back(num);
		else *found=num;
	}
	return;
}

// scanning modules
void scan(int *arr,int n){
	for(int i=0;i<n;i++) cin>>arr[i];
}
void scan(vector<int>& v,int n){
	for(int i=0;i<n;i++) cin>>v[i];
}
void scan(int *arr,int n,vector<int>& hash){
	for(int i=0;i<n;i++) {cin>>arr[i];hash[arr[i]]=i;}
}
void scan(vector<int>& v,int n,vector<int>& hash){
	for(int i=0;i<n;i++) {cin>>v[i];hash[v[i]]=i;}
}
void scan(int *arr,int n,unordered_map<int,int>& hash){
	for(int i=0;i<n;i++) {cin>>arr[i];hash[arr[i]]=i;}
}
void scan(vector<int>& v,int n,unordered_map<int,int>& hash){
	for(int i=0;i<n;i++) {cin>>v[i];hash[v[i]]=i;}
}
// primeDivisors return type number
int primeFactorsBig(int n){
	unordered_set<int> uns;
	int p=2;
	while(true){
		if(n>=p*p){
			if(n%p==0){
				uns.insert(p);
				n/=p;
			}else p++;
		}else{
			uns.insert(n);
			break;
		}
	}
	return uns.size();
}
// primeDivisors with return type vector

void primeFactorsBig(int n,map<int,int>& mp){
	int p=2;
	while(true){
		if(n>=p*p){
			if(n%p==0){
				mp[p]++;
				n/=p;
			}else p++;
		}else{
			mp[n]++;
			break;
		}
	}
	return;
}
void primeFactorsBig(int n,vector<int>& v){
	unordered_set<int> uns;
	int p=2;
	while(true){
		if(n>=p*p){
			if(n%p==0){
				uns.insert(p);
				n/=p;
			}else p++;
		}else{
			uns.insert(n);
			break;
		}
	}
	v.resize(uns.size());
	int len=0;
	for(auto num:uns) v[len++]=num;
	sort(v.begin(), v.end());
	return;
}
// isPrime
bool isPrimeBig(int n){
	if(n==1) return false;
	int p=2;
	while(true){
		if(n>=p*p){
			if(n%p==0){
				return false;
				n/=p;
			}else p++;
		}else{
			return true;
			break;
		}
	}
	return false;
}
// sieve of erathosthens for prime
const int N=1e6+10;
vector<int> highestPrime(1e6+10,0);
vector<int> lowestPrime(1e6,0);
vector<int> primes;
// vector<vector<int>> factorsOf(N);
bitset <N> nonPrimeSet;
void seive(){
	nonPrimeSet[0]=nonPrimeSet[1]=1;
	
	for(int num=2;num*num<=N;num++){
		if(0==nonPrimeSet[num]){
			for(int j=num*num;j<=N;j+=num){
				nonPrimeSet[j]=1;
			}
		}
	}
	
}
void seiveWithAllPrimes(){
	nonPrimeSet[0]=nonPrimeSet[1]=1;
	
	for(int num=2;num*num<=N;num++){
		if(0==nonPrimeSet[num]){
			for(int j=num*num;j<=N;j+=num){
				nonPrimeSet[j]=1;
			}
		}
	}
	for(int num=2;num<=N;num++){
		if(0==nonPrimeSet[num]) primes.push_back(num);
	}
}
void seiveWithHPLP(){
	nonPrimeSet[0]=nonPrimeSet[1]=1;
	for(int num=2;num*num<=N;num++){
		if(0==nonPrimeSet[num]){
			for(int j=num*num;j<=N;j+=num){
				nonPrimeSet[j]=1;
				if(lowestPrime[j]==0) lowestPrime[j]=num;
				highestPrime[j]=num;
			}
			highestPrime[num]=lowestPrime[num]=num;
		}
	}
	
}
// void seiveWithAllFactors(){
// 	nonPrimeSet[0]=nonPrimeSet[1]=1;
	
// 	for(int num=2;num<=N;num++){
// 		factorsOf[num].push_back(1);
// 		if(0==nonPrimeSet[num]){
// 			for(int j=num*num;j<=N;j+=num){
// 				factorsOf[j].push_back(num);
// 				nonPrimeSet[j]=1;
// 				if(lowestPrime[j]==0) lowestPrime[j]=num;
// 				highestPrime[j]=num;
// 			}primes.push_back(num);
// 			highestPrime[num]=lowestPrime[num]=num;
// 		}else{
// 			for(int j=num+num;j<=N;j+=num){
// 				factorsOf[j].push_back(num);
// 			}
// 		}
// 		factorsOf[num].push_back(num);
// 	}
// }

void segmentedSeive(int l,int r,vector<int>& segPrimes){
	int limit=ceil(sqrt(r));
	int sz=r-l+1;
	vector<bool> bs(sz,0);
	for(auto primeNum:primes){
		if(primeNum<=limit){
			int firstMultiple=(l/primeNum)*primeNum;
			if(firstMultiple<l) firstMultiple+=l;
			for(int num=max(firstMultiple,primeNum*primeNum);num<=r;num+=primeNum){
				bs[num-l]=1;
			}
		}
	}
	for(int i=0;i<sz;i++){
		if(bs[i]==0) segPrimes.push_back(i+l);
	}
}
int rangePrimes(int l,int r){
	if(r<=1e6){
		int ctr=0;
		for(int i=l;i<=r;i++){
			if(nonPrimeSet[i]==0) ctr++;
		}
		return ctr;
	}else{
		vector<int> segPrimes;
		segmentedSeive(l,r,segPrimes);
		return segPrimes.size();
	}
}
void rangePrimes(int l,int r,vector<int>& segPrimes){
	if(r<=1e6){
		for(int i=l;i<=r;i++){
			if(nonPrimeSet[i]==0) segPrimes.push_back(i);
		}
		return; 
	}
	return segmentedSeive(l,r,segPrimes);
}
bool isPrime(int n){
	if(n>1e6) return isPrimeBig(n);
	return 0==nonPrimeSet[n];
}
void primeFactors(int n,vector<int>&v){
	if(n<2) return;
	if(n>1e6) return primeFactorsBig(n,v);
	while(n>1){
		int prime_factor=highestPrime[n];
		while(n%prime_factor==0){
			n/=prime_factor;
			
		}
		v.push_back(prime_factor);
	}
}
void primeFactors(int n,map<int,int>& mp){
	if(n<2) return;
	if(n>1e6) return primeFactorsBig(n,mp);
	while(n>1){
		int prime_factor=highestPrime[n];
		while(n%prime_factor==0){
			n/=prime_factor;
			mp[prime_factor]++;
		}
	}
}

int primeFactors(int n){
	if(n<2) return 0;
	if(n>1e6) return primeFactorsBig(n);
	int noOfPrimeFactors=0;
	while(n>1){
		int prime_factor=highestPrime[n];
		while(n%prime_factor==0){
			n/=prime_factor;
			noOfPrimeFactors++;
		}
	}
	return noOfPrimeFactors;
}
// roundOf
int roundOf(int n){
	return (int)pow(2,floor(log2(n)));
}
// string and pattern mathcing
// string -- // z algorithm
void createZ(string s,int z[]){
	int n=s.size();
	int l,r,k;
	l=r=0;
	z[0]=0;
	for(int i=1;i<n;i++){
		if(i>r){
			l=r=i;
			while(r<n && s[r]==s[r-l]){
				r++;
			}
			z[i]=r-l;
			r--;
		}else{
			k=i-l;
			if(z[k]<r-i+1){
				z[i]=z[k];
			}else{
				l=i;
				while(r<n && s[r-l]==s[r]){
					r++;
				}
				z[i]=r-l;
				r--;
			}
		}
	}
}
void zSearch(string text,string pattern,vector<int>& match){
	string concat=pattern+"$"+text;
	int sz=concat.length();
	int psize=pattern.size();
	int z[sz];
	createZ(concat,z);
	for(int i=0;i<sz;i++){
		if(z[i]==psize){
			match.push_back(i-psize-1);
		}
	}
	return;
}

bool stringCompare(string &s,int ss,string &r,int rs,int len){
	if(ss+len>s.size() || rs+len>r.size()) return false;
	for(int i=0;i<len;i++,ss++,rs++){
		if(s[ss]!=r[rs]) return false;
	}
	return true;
}
void rabin(string s,string pattern,vector<int>&match){
	int sz=s.size();
	int pz=pattern.size();
	if(pz>sz) return;
	int primeNum=3;
	int hashVal=0;
	int patternHash=0;
	for(int i=0;i<pz;i++){
		patternHash+=((int)(pattern[i]-97 + 1))*pow(primeNum,i);
	}
	
	// cout<<"patternHash :"<<patternHash<<endl;
	for(int i=0;i<pz;i++){
		hashVal+=((int)(s[i]-97 + 1))*pow(primeNum,i);
	}
	if(hashVal==patternHash) match.push_back(0);
	for(int i=pz;i<sz;i++){
		
		int k=i-pz;
		hashVal-=(int)(s[k]-97+1);
		hashVal/=3;
		hashVal+=((int)(s[i]-97+1))*pow(primeNum,pz-1);
		if(hashVal==patternHash && (stringCompare(s,k+1,pattern,0,pz))) match.push_back(k+1);
	}
}
void prefix_function(string s,vector<int>& pf){
	int n=s.size();
	pf.resize(n);
	pf[0]=0;
	for(int i=1;i<n;i++){
		int j=pf[i-1];
		while(j>0 && s[i]!=s[j]){
			j=pf[j-1];
		}
		if(s[i]==s[j]){
			j++;
		}
		pf[i]=j;
	}
	// Time complexity : O(n)
}
void kmp(string s,string pattern,vector<int>&match){
	int pz=pattern.size();
	int pos(-1),i(0),j(0);
	vector<int> pf;
	prefix_function(pattern,pf);
	for(auto num:pf) cout<<num<<" ";cout<<endl;
	while(i<s.size()){
		if(s[i]==pattern[j]){
			j++;
			i++;
		}else{
			if(j!=0){
				j=pf[j-1];
			}else i++;
		}
		if(j==pattern.size()){
			match.push_back(i-pz);
		}
	}
}
void reject(){
	cout<<-1<<endl;
	return;
}
void freqscan(int b[],int n,unordered_map<int,int>& hash){
	for(int i=0;i<n;i++){
		cin>>b[i];
		hash[b[i]]++;
	}
}
class sparseTable{
	int *arr;
	int n;
	vector<vector<int>> table;
	int col=0;
	public: 
	void buildTable(){
		for(int i=0;i<n;i++) table[i][0]=arr[i];
		for(int j=1;j<col;j++){
			for(int i=0;i+(1<<j)-1<n;i++){
				table[i][j]=min(table[i][j-1],table[i+(1<<(j-1))][j-1]);
			}
		}
	}
	sparseTable(int *arr,int n){
		this->arr=arr;
		this->n=n;
		col=1+log2(n);
		table=*new vector<vector<int>>(n,*new vector<int>(col));
		this->buildTable();
	}
	int getRangeMin(int l,int r){
		int diff=r-l+1;
		int j=log2(diff);
		return min(table[l][j],table[r-(1<<j)+1][j]);
	}
	void print(){
		for(int i=0;i<n;i++){
			for(int j=0;j<col;j++){
				cout<<table[i][j]<<" ";
			}cout<<endl;
		}
	}
};
class Query{
public: 
	int index,l,r,sum;
};
class mosAlgo{
public: 
	
	int *arr;
	int n;
	int len;
	// vector<Query> que;
	mosAlgo(int *arr,int n){
		this->arr=arr;
		this->n=n;
		this->len=sqrt(n);
	}
	void process(vector<Query>& que,vector<int>& v){
		int q=que.size();
		sort(que.begin(), que.end(),[&](Query&a,Query&b){
			if((a.l)/len == (b.l)/len){
				return a.r>b.r;
			}
			return a.l/len<b.l/len;
		});
		int currL=0,currR=-1,currSum=0;
		for(int i=0;i<q;i++){
			Query &query=que[i];
			while(currL<query.l){
				currSum-=arr[currL];
				currL++;
			}
			while(currL>query.l){
				currL--;
				currSum+=arr[currL];
			}
			while(currR<query.r){
				currR++;
				currSum+=arr[currR];
			}
			while(currR>query.r){
				currSum-=arr[currR];
				currR--;
			}
			query.sum=currSum;
			v[query.index]=currSum;
		}
	}
};
// longest palindromic substring , manachers' algo
class Manacher{
	string s;
	int n;
	vector<int> palCount;
	int mxIndex=-1,mx=0;
	string longestPalindrome;
public: 
	void buildString(string str){
		for(auto c:str){
			s+="$";
			s+=c;
		}
		s+="$";
	}
	Manacher(string s){
		this->n=s.size();
		this->n=2*n+1;
		this->buildString(s);
		palCount=*new vector<int>(n,0);
		this->process();
	}
	void process(){
		int iter=0;
		int start(0),end(0);
		for(int i=0;i<n;){
			while(start>0 && end<n-1 && s[start-1]==s[end+1]){
				start--;
				end++;
			}
			palCount[i]=end-start+1;
			if(end==n-1) break;
			int newCenter=end + ((i%2 == 0)?(1):(0));
			for(int j=i+1;j<=end;j++){
				if(s[i]=='$') continue;
				palCount[j]=min(palCount[i-(j-i)],2*(end-j)+1);
				if(j+palCount[i-(j-i)]/2 == end){
					newCenter=j;
					break;
				}
			}
			i=newCenter;
			end=i+palCount[i]/2;
			start=i-palCount[i]/2;
		}
		for(int i=0;i<n;i++){
			if(palCount[i] >mx){
				mx=palCount[i];
				mxIndex=i;
			}
		}
		longestPalindrome=s.substr(mxIndex-mx/2,mx);
		string dummy=longestPalindrome;
		longestPalindrome="";
		for(auto c:dummy){
			if(c!='$') longestPalindrome+=c;
		}
	}
	void print(){
		for(int i=0;i<n;i++){
			cout<<i<<" : "<<palCount[i]<<endl;
		}
	}
	int getLen(){
		return mx/2;
	}
	string getPal(){
		return longestPalindrome;
	}

};
bool isPalindrome(string s){
	string rev=s;
	reverse(s.begin(), s.end());
	return s==rev;
}

class EulerTotient{
	public : 
	int n;
	vector<int> totient;
	EulerTotient(int N){
		this->n=N+1;
		totient.resize(n);
		for(int i=0;i<n;i++){
			totient[i]=i;
		}
		for(int i=2;i<n;i++){
			if(totient[i]==i){
				for(int j=2*i;j<n;j+=i){
					totient[j]*=(i-1);
					totient[j]/=i;
				}
				totient[i]=i-1;
			}
		}
	}
	void print(){
		for(auto num:totient) cout<<num<<" ";cout<<endl;
	}
	inline int get(int index){
		return totient.at(index);
	}
};
class MatrixExp{
	public : 
	int n,row,col;
	vector<vector<int>>& mat;
	vector<vector<int>> resultMat;
	// function to multiply matrices 
	vector<vector<int>> matrixMultiply(vector<vector<int>>& mat1,vector<vector<int>>& mat2){
		if(mat1[0].size() != mat2.size()){
			cout<<"invalid matrix matrixMultiply"<<endl;
			exit(0);
		}
		int myrow=(int)mat1.size(),mycol=(int)mat2[0].size(),comm=(int)mat1[0].size();
		vector<vector<int>> mulMat((int)mat1.size(),vector<int>((int)mat2[0].size()));
		for(int i=0;i<myrow;i++){
			for(int j=0;j<mycol;j++){
				mulMat[i][j]=0;
				for(int k=0;k<comm;k++){
					mulMat[i][j]+=mat1[i][k]*mat2[k][j];
				}
			}
		}
		// cout<<"mat1 : "<<endl;printMatrix(mat1);
		// cout<<"mat2 : "<<endl;printMatrix(mat2);
		// cout<<"res : "<<endl;printMatrix(mulMat);
		return mulMat;
	}
	// function to make identitiy matrix 
	void makeIdentityMatrix(vector<vector<int>> &identityMat){
		identityMat.resize(row);
		for(int i=0;i<row;i++){
			identityMat[i]=*new vector<int>(row,0);
			identityMat[i][i]=1;
		}
		return;
	}
	// function to exponentiate matrix 
	vector<vector<int>> exponentiate(int power){
		if(power==1){
			return mat;
		}
		vector<vector<int>> mymat;
		if(power==0){
			this->makeIdentityMatrix(mymat);

			return mymat;
		}
		mymat=this->exponentiate(power/2);
		vector<vector<int>> ansmat=matrixMultiply(mymat,mymat);
		if(power & 1){
			ansmat=matrixMultiply(ansmat,mat);
		}
		// cout<<" power : "<<power<<endl;
		// printMatrix(ansmat);
		return ansmat;
	}
	// constructor
	MatrixExp(int N,vector<vector<int>> &vmat):n(N),mat(vmat){
		row=mat.size();
		col=mat[0].size();
		resultMat=this->exponentiate(n);
	}
	// overloaded constructor
	MatrixExp(int N):n(N),mat(*new vector<vector<int>>{{1,1},{1,0}}){
		row=mat.size();
		col=mat[0].size();
		resultMat=this->exponentiate(n);
	}
	// getter for resultmatrix
	vector<vector<int>>& getResultMatrix(){
		return this->resultMat;
	}
	// method to print result mat
	void printMatrix(vector<vector<int>>& vmatrix){
		for(auto &rowv:vmatrix){
			for(auto elem:rowv) cout<<elem<<" ";cout<<endl;
		}
	}
	void print(){
		for(auto &rowv:resultMat){
			for(auto elem:rowv) cout<<elem<<" ";cout<<endl;
		}
	}
};
class Fibonacci{
	public :
	int n;
	vector<vector<int>> mymat{{1,1},{1,0}};
	MatrixExp &me;
	Fibonacci(int n):n(n),me(*new MatrixExp(n,mymat)){}
	int get(){
		if(n==0) return 0;
		vector<vector<int>>& fibMatrix=me.getResultMatrix();
		return fibMatrix[0][0];
	}
};

class NCR{
	public : 
	int mod=-1;
	int n,r,res=1;
	void computeNcr(){
		if(r>n){
			res=0;
			return;
		}
		for(int i=0;i<r;i++){
			res*=(n-i);
			res/=(i+1);
		}
	}
	void computeNcrMod(){
		if(r>n){
			res=0;
			return;
		}
		for(int i=0;i<r;i++){
			res=modMul(res,n-i,mod);
			res=modDiv(res,i+1,mod);
		}
	}
	NCR(int n,int r):n(n),r(r){
		if(r>n-r) r=n-r;
		this->computeNcr();
	}
	NCR(int n,int r,int mod):n(n),r(r),mod(mod){
		if(r>n-r) r=n-r;
		this->computeNcrMod();
	}
	int get(){
		return res;
	}
};

class NCRefficient{
	public : 
	int n,mod,r;
	vector<int> fact,invFact,invNum;
	void calculateFactorial(){
		fact[0]=fact[1]=1;
		for(int i=2;i<=n;i++){
			fact[i]=(fact[i-1]*i)%mod;
		}
		return;
	}
	void calculateInverseNum(){
		invNum[0]=invNum[1]=1;
		for(int i=2;i<=n;i++){
			invNum[i]=invNum[mod % i]*(mod - mod/i)%mod;
		}
	}
	void calculateInverseFactorial(){
		invFact[0]=invFact[1]=1;
		for(int i=2;i<=n;i++){
			invFact[i]=(invNum[i]*invFact[i-1])%mod;
		}		
	}
	NCRefficient(int n,int mod):n(n),mod(mod){
		fact.resize(n+1);
		invFact.resize(n+1);
		invNum.resize(n+1);
		this->calculateFactorial();
		this->calculateInverseNum();
		this->calculateInverseFactorial();
	}
	int get(int N,int r){
		if(N>n) return 0;
		if(r<0 || r>N) return 0;
		int ans=(fact[N]*invFact[r])%mod *(invFact[N-r])%mod;
		return ans;
	}
};
class centroidDecomp{
public:
	int no_of_vertices;
	vector<vector<int>> tree;
	vector<vector<int>> centroidTree;
	vector<int> subtreeSizeOf;
	vector<bool> visited;
	vector<bool> isCentroid;
	int stop=0;
	centroidDecomp(int N){
		this->no_of_vertices=N+1;
		tree.resize(no_of_vertices);
		subtreeSizeOf.resize(no_of_vertices);
		centroidTree.resize(no_of_vertices);
		visited.resize(no_of_vertices);
		isCentroid=*new vector<bool>(no_of_vertices,false);
	}
	
	void DFS(int src,int& N){
		// cout<<"dfs at : "<<src<<endl;
		if(++stop>=100) exit(0);
		visited[src]=true;
		N += 1;
		subtreeSizeOf[src]=1;
		for(auto childNode:tree[src]){
			if(!visited[childNode] && !isCentroid[childNode]){
				DFS(childNode,N);
				subtreeSizeOf[src]+=subtreeSizeOf[childNode];
			}
		}
	}
	int getCentroidUtil(int src,int N){
		bool is_this_node_centroid=true;
		visited[src]=true;
		int heaviest_child=0;
		for(auto childNode:tree[src]){
			if(!visited[childNode] && !isCentroid[childNode]){
				if(subtreeSizeOf[childNode]>N/2){
					is_this_node_centroid=false;
				}
				if(heaviest_child==0 || subtreeSizeOf[childNode] > subtreeSizeOf[heaviest_child]){
					heaviest_child=childNode;
				}
			}
		}
		if(is_this_node_centroid && (N-subtreeSizeOf[src] <= N/2)){
			return src;
		}
		return getCentroidUtil(heaviest_child,N);
	}
	int getCentroid(int src){
		this->clearVisitedAndSubtreeSizeOf();
		int N=0;
		DFS(src,N);
		this->clearVisited();
		int centroid=getCentroidUtil(src,N);
		isCentroid[centroid]=true;
		return centroid;
	}
	int decompose(int root){
		int currCentroidNode=getCentroid(root);
		for(auto childNodeOfCentroid:tree[currCentroidNode]){
			if(!isCentroid[childNodeOfCentroid]){
				int subCentroidNode=this->decompose(childNodeOfCentroid);
				centroidTree[currCentroidNode].push_back(subCentroidNode);
				centroidTree[subCentroidNode].push_back(currCentroidNode);
			}
		}
		return currCentroidNode;
	}
	void addEdge (int u,int v){
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	void clearVisitedAndSubtreeSizeOf(){
		for(int i=0;i<no_of_vertices;i++){
			visited[i]=false;
			subtreeSizeOf[i]=0;
		}
	}
	void clearVisited(){
		for(int i=0;i<no_of_vertices;i++){
			visited[i]=false;
		}
	}
	void print(){
		for(int i=1;i<no_of_vertices;i++){
			cout<<i<<"< : >";
			for(auto node:centroidTree[i]) cout<<node<<" ";cout<<endl;
		}
	}
};
class Trie{
public:

	class TrieNode{
	public:
		bool end=false;
		vector<TrieNode*> nextNodeOf{*new vector<TrieNode*>(26,NULL)};
	};
	TrieNode* trieRoot=NULL;
	Trie(){
		trieRoot=new TrieNode();
	}
	void insert(const string& word){
		TrieNode* currNode=trieRoot;
		for(auto ch:word){
			if(NULL == (currNode->nextNodeOf[ch-'a'])){
				currNode->nextNodeOf[ch-'a'] = new TrieNode();
			}
			currNode=currNode->nextNodeOf[ch-'a'];
		}
		currNode->end=true;
	}
	bool search(const string& key){
		TrieNode* currNode=trieRoot;
		for(auto ch:key){
			if(NULL == (currNode->nextNodeOf[ch-'a'])){
				return false;
			}
			currNode=currNode->nextNodeOf[ch-'a'];
		}
		return currNode->end;
	}
	bool searchPrefix(const string& key){
		TrieNode* currNode=trieRoot;
		for(auto ch:key){
			if(NULL == (currNode->nextNodeOf[ch-'a'])){
				return false;
			}
			currNode=currNode->nextNodeOf[ch-'a'];
		}
		return true;
	}
};

class Graph{
	public : 
	vector<vector<int>> graph;
	vector<vector<int>> solutionColorVectors;
	vector<int> colorOf;
	int n;
	int no_of_colors=0;
	Graph(int n){
		graph.resize(n+1);
		colorOf.assign(n+1,0);
		this->n=n;
	}
	void set_no_of_colors(int m){
		this->no_of_colors=m;
	}
	void addEdge(int u,int v){
		graph[u].push_back(v);
	}
	void printGraph(){
		for(int i=1;i<=n;i++){
			cout<<i<<" : ";
			for(auto neb:graph[i]){
				cout<<neb<<" ";
			}cout<<endl;
		}
	}
	void mcolor(int start){
		if(start>n){
			solutionColorVectors.push_back(colorOf);
			return;
		}
		vector<bool> isValidColor(no_of_colors+1,true);
		for(auto node:graph[start]){
			isValidColor[colorOf[node]]=false;
		}
		for(int i=1;i<=no_of_colors;i++){
			if(isValidColor[i]){
				colorOf[start]=i;
				this->mcolor(start+1);
			}
		}
		colorOf[start]=0;
		return;
	}
	void printSolutionColorVectors(){
		for(auto & colorVector:solutionColorVectors){
			for(int i=1;i<=n;i++){
				cout<<colorVector[i]<<" ";
			}
			cout<<endl;
		}
	}

};
inline int convert(int i,int j,int n){
	return (i*n + j);
}
int fact[16];
unordered_map<int,int> memo;
int setBits(int n){
	bitset<40> bs(n);
	return bs.count();
}
NCRefficient* ncr;
void init(){
	int mod=1e9 + 7;
	ncr=new NCRefficient(N,mod);
}
void segBuild(vector<int>&seg,vector<int>&des,int n){
	int domain,start,bit;
	domain=n;start=domain-1;bit=1;
    while(domain>0){
	    
    	for(int index=start;index<start+domain;index++){
    		if(bit==1){
    			seg[index]=(seg[(2*index) + 1] | seg[(2*index) + 2]);
    		}else{
    			seg[index]=(seg[(2*index) + 1] xor seg[(2*index) + 2]);
    		}
    		des[index]=bit;
    	}

        bit=(bit^1);
    	domain=domain/2;start=domain-1;
    }
}
void segUpdate(vector<int>&seg,vector<int>&des,int pos,int val){
	int domain=pow(2,(1+floor(log2(pos))));pos-=1;
    int mypos=pos+ seg.size()/2;
    seg[mypos]=val;
    while( mypos>0){
    	mypos=(mypos-1)/2;
        if(des[mypos]==1) 
            seg[mypos]=(seg[(2*mypos) + 1] | seg[(2*mypos) + 2]);
        else
            seg[mypos]=(seg[(2*mypos) + 1] xor seg[(2*mypos) + 2]);

    }
        
}

bool isnum(char c){
	return c-'A' < 0;
}
void numToColumn(string num){
	int nm;
	stringstream str(num);
	str>>nm;
	stack<char> stk;
	while(nm>0){
		stk.push((nm-1)%26+'A');
		nm--;
		nm/=26;
	}
	while(stk.size()>0){
		cout<<stk.top();stk.pop();
	}
}
void front(string s){
	string row;
	int n=s.size();
	int stop=-1;
	for(int i=1;i<n;i++){
		if(s[i]=='C'){
			stop=i;
			break;
		}
		row+=s[i];
	}
	string col;
	for(int j=stop+1;j<n;j++){
		col+=s[j];
	}
	numToColumn(col);
	cout<<row;
	cout<<endl;
}
void columnToNum(string num){
	int n=num.size();
	int mul=1;
	int nm=0;
	for(int i=n-1;i>=0;i--){
		nm+=(num[i]-'A'+1)*mul;
		mul*=26;
	}
	cout<<nm;
}
void reverse(string s){
	string col;

	int n=s.size();
	int stop=-1;
	for(int i=0;i<n;i++){
		if(isnum(s[i])){
			stop=i;
			break;
		}
		col+=s[i];
	}
	cout<<'R';
	for(int i=stop;i<n;i++) cout<<s[i];
	cout<<'C';
	columnToNum(col);
	cout<<endl;
}
void solve(int t){
	string s;cin>>s;
	if(s[0]=='R' and isnum(s[1]) and s.find('C') != -1) front(s);
	else reverse(s);
}
signed main(){     
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
	// seive();
	// seiveWithHPLP();
	// seiveWithAllFactors();
	// seiveWithAllPrimes();
	// init();

	int t=1;
	cin>>t;

	for(int i=0;i<t;i++){
		solve(i+1);
	}
	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
	return 0;
}
/***************/
     #include <bits/stdc++.h>
                #include<iostream>
                using namespace std;
                long long mod=1e9+7;
        // int main(){
        //   int t;
        //   cin>>t;
        //   while(t--){
            
        //     string s1;
        //     cin>>s1;
            
        //   string s2="123";
            
        //     string ans;
            
        //     ans=Minimum_Window(s1,s2);
            
        //     if(ans=="-1"){
        //       cout<<"0"<<endl;
        //       return 0;
        //     }
            
        //     int len=ans.length();
                       
                
        //   string printString(int n)
        // {
        //     char str[1000010]; // To store result (Excel column name)
        //     int i = 0; // To store current index in str which is result
         
        //     while (n > 0) {
        //         // Find remainder
        //         int rem = n % 26;
         
        //         // If remainder is 0, then a 'Z' must be there in output
        //         if (rem == 0) {
        //             str[i++]= 'Z';
        //             n = (n / 26) - 1;
        //         }
        //         else // If remainder is non-zero
        //         {
        //             str[i++] = (rem - 1) + 'A';
        //             n = n / 26;
        //         }
        //     }
        //     str[i] = '\0';
            
           
         
        //     // Reverse the string and print result
        //     reverse(str, str + strlen(str));
            
           
            
         
        //     return str;
        // }
         
                
                
        //   string anothertoexcel (string s){
            
        //     int ind_r=s.find('R');
        //       int ind_c=s.find('C');
        //       int n=s.length();
              
        //       string row_s=s.substr(ind_r+1,ind_c-1);
        //       string col_s=s.substr(ind_c+1);
              
        //       int row=stoi(row_s);
        //       int col=stoi(col_s);
              
        //       string co=printString(col);
              
        //       string ans="";
        //       ans+=co+row_s;
              
        //       return ans;
            
        //   }     
          
        //   int titleToNumber(string s)
        // {
        //     // This process is similar to
        //     // binary-to-decimal conversion
        //     int result = 0;
        //     for (const auto& c : s)
        //     {
        //         result *= 26;
        //         result += c  - 'A' + 1;
        //     }
         
        //     return result;
        // }
          
        //   string exceltoanother(string s){
            
        //     string col="";
        //     string row="";
            
        //     for(int i=0;i<s.length();i++){
              
        //       if(s[i]>='A' && s[i]<='Z'){
        //         col+=s[i];
        //       }
        //       else{
        //         row+=s[i];
        //       }
        //     }
            
        //     int column=titleToNumber(col);
            
        //     string ans="";
        //     ans+="R";
        //     ans+=row;
        //     ans+="C";
        //     ans+=to_string(column);
            
        //     return ans;
        //   }
                
        //   int main(){
            
        //     // int n;
        //     // cin>>n;
            
        //     // while(n--){
        //       string s;
        //       cin>>s;
              
        //       int ind_r=s.find('R');
        //       int ind_c=s.find('C');
              
        //       bool c=true;
              
        //       // for(int i=ind_r+1;i<ind_c;i++){
                
        //       //   if(s[i]!='0' || s[i]!='1' || s[i]!='2' || s[i]!='3' || s[i]!='4' || s[i]!='5' || s[i]!='6' || s[i]!='7' ||s[i]!='8' ||s[i]!='9' ){
        //       //     c=false;
        //       //   }
        //       // }
              
        //       // if(c==true){
        //         cout<<anothertoexcel(s)<<endl;
        //       // }
              
        //     //   else{
        //     //     cout<<exceltoanother(s)<<endl;
        //     //   }
        //     // }
        //     return 0;
        //   }  
         
         
        // void solve(){
          
        //   int n,m,k;
        //   cin>>n>>m>>k;
          
        //   long long dp[k+10][n+10];
        //   memset(dp,0,sizeof(dp));
          
        //   long long arr[n+1];
        //   for(int i=1;i<=n;i++)
        //   cin>>arr[i];
          
        //   long long b[n+10]={0};
        //   for(int i=1;i<=n;i++)
        //   b[i]=b[i-1]+arr[i];
          
        //   for(int i=1;i<=k;i++){
        //     for(int j=i*m;j<=n;j++){
              
        //       dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+b[j]-b[j-m]);
        //     }
        //   }
          
        //   cout<<dp[k][n]<<endl;
          
          
          
        // }
         
        // int main(){
          
        //   solve();
        //   return 0;
        // }
         
        // long long suff1[100005]={0};
        // long long suff2[100005]={0};
         
        // long long arr[100005];
         
        // int main(){
        //   long long n;
        //   cin>>n;
          
        //   for(long long i=1;i<=n;i++){
        //     cin>>arr[i];
        //   }
          
        //   for(long long i=n;i>=1;i--){
        //     suff1[i]=suff1[i+1]+arr[i];
        //   }
          
        //   sort(arr+1,arr+n+1);
          
        //   for(long long i=n;i>=1;i--){
        //     suff2[i]=suff2[i+1]+arr[i];
        //   }
          
        //   long long m;
        //   cin>>m;
          
        //   while(m--){
        //     long long type;
        //     long long l,r;
            
        //     cin>>type>>l>>r;
            
            
        //     long long ans;
            
        //     if(type==1){
        //       ans=suff1[l]-suff1[r+1];
        //     }
        //     else{
        //       ans=suff2[l]-suff2[r+1];
        //     }
            
        //     cout<<ans<<endl;
            
            
        //   }
          
        //   return 0;
          
          
        // }
         
        // string Minimum_Window(string s, string t)
        // {
         
        //     int m[256] = { 0 };
         
        //     // Answer
        //     int ans = INT_MAX; // length of ans
        //     int start = 0; // starting index of ans
        //     int count = 0;
           
        //     // creating map
        //     for (int i = 0; i < t.length(); i++) {
        //         if (m[t[i]] == 0)
        //             count++;
        //         m[t[i]]++;
        //     }
         
        //     // References of Window
        //     int i = 0;
        //     int j = 0;
         
        //     // Traversing the window
        //     while (j < s.length()) {
        //         // Calculations
        //         m[s[j]]--;
        //         if (m[s[j]] == 0)
        //             count--;
         
        //         // Condition matching
        //         if (count == 0) {
        //             while (count == 0) {
        //                 // Sorting ans
        //                 if (ans > j - i + 1) {
        //                     ans = min(ans, j - i + 1);
        //                     start = i;
        //                 }
        //                 // Sliding I
        //                 // Calculation for removing I
         
        //                 m[s[i]]++;
        //                 if (m[s[i]] > 0)
        //                     count++;
         
        //                 i++;
        //             }
        //         }
        //         j++;
        //     }
         
        //     if (ans != INT_MAX)
        //         return s.substr(start, ans);
        //     else
        //         return "-1";
        // }
          
        //     cout<<ans<<endl;
        //   }
          
        //   return 0;
          
        // }
        
        long long maxSubArraySum(long long a[], long long size)
    {
        long long  max_so_far = -1e18, max_ending_here = 0;
     
        for (long long i = 0; i < size; i++)
        {
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
     
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
     
     
     
    int LCS(string s, string x) {
          int n = s.size();
          int m = x.size();
          if(!n || !m) return 0;
          s = " " + s;
          x = " " + x;
          int ret = 0;
          vector < vector <int> > dp(n + 1, vector <int>(m + 1));
          for(int i = 1; i <= n; i++){
             for(int j = 1; j <= m ; j++){
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                if(s[i] == x[j]) {
                  dp[i][j] = max(dp[i][j], 1 + dp[i - 1][j - 1]);
                }
             }
          }
          return dp[n][m];
       }
    bool is_subsequence(long long sequence, long long n)
    {
        while(sequence > 0 && n > 0)
        {
            if(n%10 == sequence%10)
            {
                sequence /= 10;
     
                if(sequence == 0)
                    return true;
            }
     
            n /= 10;
        }
     
        return false;
    }
     
    long long min_swaps(long long arr[],long long n){
      
      long long size=2*n;
      
      bool visited[n];
      memset(visited,false,sizeof(visited));
      
     
    long long ans=0;
     
    for(long long i=0;i<n;i++){
      
      if(visited[arr[i]]==false){
        visited[arr[i]]=true;
      }
      
     long long count=0;
      
      for(long long j=i+1;j<size;j++){
        
        if(visited[arr[j]]==false){
          count++;
        }
        
        else if(arr[i]==arr[j]){
        ans+=count;
        }
      }
    }
     
    return ans;
    }
    
    bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
     
  // int main(){
    
  //   long long n;
  //   cin>>n;
    
  //   string str;
  //   cin>>str;
    
  //   long long operations=n;
    
  //   long long divided=n/2;
    
  //   while(divided>=2){
      
  //     if(str.substr(0,divided)==str.substr(divided,divided)){
        
  //       operations-=(divided-1);
  //       break;
  //     }
  //     divided--;
  //   }
    
  //   cout<<operations<<endl;
    
  //   return 0;
    
    
  // }

  
  
  
  // long long n,k;
  // long long power[100005],coin[100005],ans[100005];
  // map<long long,long long>m;
  // priority_queue<long long> pq;
  
  // int main(){
    
  //   cin>>n>>k;
    
  //   for(long long i=1;i<=n;i++){
      
  //     cin>>power[i];
  //     m[power[i]]=i;
  //   }
    
  //   for(long long i=1;i<=n;i++)
  //   cin>>coin[i];
    
  //   sort(power+1,power+1+n);
    
  //   for(long long i=1;i<=n;i++){
      
  //     ans[m[power[i]]]=coin[m[power[i]]];
      
  //     vector<long long> temp;
  //     for(long long j=1;j<=k;j++){
        
  //       if(pq.empty()) break;
        
  //       long long co=pq.top();
  //       pq.pop();
  //       ans[m[power[i]]]+=co;
  //       temp.push_back(co);
  //     }
      
  //     for(long long i=0;i<temp.size();i++){
  //       pq.push(temp[i]);
  //     }
      
  //     pq.push(coin[m[power[i]]]);
  //   }
    
  //   for(long long i=1;i<=n;i++){
  //     cout<<ans[i]<<" ";
  //   }
  //   cout<<endl;
  //   return 0;
    
  // }
  
  bool comp(pair<int,long long>p1, pair<int,long long>p2){
    
    if(p1.first==p2.first){
      return p1.second>p2.second;
    }
    
    return p1.first<p2.first;
  }
  
// int main(){
  
//   int n;
//   cin>>n;
  
//   vector<pair<int,long long>> v(n);
  
//   for(int i=0;i<n;i++){
    
//     int x;
//     cin>>x;
    
//     int x_val=x;
    
//     int y_val=0;
//     while(x!=0){
//       x=x/3;
//       y_val++;
//     }
    
//     v.push_back({y_val,x_val});
//   }
  
//   sort(v.begin(),v.end(),comp);
  
//   for(int i=0;i<n;i++){
//     cout<<v[i].second<<" ";
//   }
  
//   return 0;
// }

// void solve(vector<long long> x,int n){
  
//   sort(x.begin(),x.end());
  
//   vector<long long> res;
  
//   for(int i=0;i<n;i++){
//     for(int j=0;j<32;j++){
      
//       long long lx=x[i]-(1<<j);
//       long long rx=x[i]+(1<<j);
       
//       bool isl=binary_search(x.begin(),x.end(),lx);
       
//         bool isr=binary_search(x.begin(),x.end(),rx);
        
//         if(isl && isr && int(res.size())<3){
//           res={lx,x[i],rx};
//         }
//         if(isl && int(res.size())<2){
//           res={lx,x[i]};
//         }
//         if(isr && int(res.size())<2){
//           res={rx,x[i]};
//         }
        
       
      
//     }
//   }
  
//   if(res.size()==0){
//     res.push_back(x[0]);
//   }
  
// cout<<res.size()<<endl;
 
// for(long long i=0;i<res.size();i++){
//   cout<<res[i]<<" ";
// }
 
// return ;
 
// }

// int main(){
  
//   int n,m;
//   cin>>n>>m;
//   int k=n/m;
  
//   vector<vector<int>>val(m);
//   vector<int>arr(n);
  
//   for(int i=0;i<n;i++){
//   cin>>arr[i];
//   val[arr[i]%m].push_back(i);
//   }
  
//   long long ans=0;
//   vector<pair<int,int>> fre;
  
// for (int i = 0; i < 2 * m; ++i){
   
//   int cur = i % m;
      
//       while(val[cur].size()>k){
        
//         int element=val[cur].back();
//         fre.push_back({element,i});
//         val[cur].pop_back();
//       }
      
//       while(val[cur].size()<k && !fre.empty()){
        
//         int ele=fre.back().first;
//         int modd=fre.back().second;
//         fre.pop_back();
// 			val[cur].push_back(ele);
// 			arr[ele] += i - modd;
// 			ans += i - modd;
//       } 
//     }
 
  
//   cout<<ans<<endl;
  
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
  
//   cout<<endl;
//   return 0;
  
  
// }

// int main(){
  
//   int n,q,x;
//   cin>>n>>q;
  
//   int arr[n];
//   for(int i=0;i<n;i++)
//   cin>>arr[i];
  
//   map<int,int> m;
//   for(int i=0;i<n;i++){
//     m[arr[i]]++;
//   }
  
//   while(q--){
    
//     cin>>x;
    
//     int ans=0;
//     int mx=1<<30;
    
    
//     for(mx;mx>=1;mx=mx>>1){
      
//       if(m[mx]==0) continue;
      
//       else{
        
//         int times=min(m[mx],x/mx);
        
//         x-=times*mx;
//         ans+=times;
//       }
//     }
    
//     if(x==0){
//       cout<<ans<<endl;
//     }
//     else{
//       cout<<-1<<endl;
//     }
//   }
  
//   return 0;
// }
// int isSubstring(string s1, string s2)
// {
//     int M = s1.length();
//     int N = s2.length();
 
//     /* A loop to slide pat[] one by one */
//     for (int i = 0; i <= N - M; i++) {
//         int j;
 
//         /* For current index i, check for
// pattern match */
//         for (j = 0; j < M; j++)
//             if (s2[i + j] != s1[j])
//                 break;
 
//         if (j == M)
//             return i;
//     }
 
//     return -1;
// }

// int main(){
  
//   string s;
//   cin>>s;
  
//   string s1="AB";
//   string s2="BA";
  
//   int ind1=isSubstring(s1,s);
//   int ind2=isSubstring(s2,s);
   
//   if(ind1==-1 || ind2==-1){
//     cout<<"NO"<<endl;
//     return 0;
     
//   }
   
//   else{
//     if(abs(ind1-ind2)<2){
//       cout<<"NO"<<endl;
//       return 0;
//     }
     
//     else{
//       cout<<"YES"<<endl;
//       return 0;
//     }
//   }
   
//   return 0;
  
// }




// long long int_power(int x, int n)
// {
//     long long power = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         power *= x;
//     }
//     return power;
// }

// int sum_of_digits(int x)
// {
//     const int base = 10;
//     int digit_sum = 0;

//     while(x > 0)
//     {
//         digit_sum += x%base;
//         x = x/base;
//     }
//     return digit_sum;
// }

// int main(){
  
//   long long a,b,c;
//   cin>>a>>b>>c;
  
//   vector<long long> ans;
  
//   for(long long i=1;i<=81;i++){
    
//     long long x=b*int_power(i,a)+c;
    
//     if(x>0 && x<1e9 && i==sum_of_digits(x)){
//       ans.push_back(x);
//     }
//   }
  
//   cout<<ans.size()<<endl;
//   for(long long i=0;i<ans.size();i++){
//   cout<<ans[i]<<" ";
//   }
// }

 const string t="abacaba";

bool contains(string s){
  
  int count=0,n=s.length();
  for(int i=0;i<=n-7;i++){
    if(s.substr(i,7)==t){
      count++;
    }
  }
  
  return (count==1);
}

void process(string s){
  
  int n=s.length();
  
  for(int i=0;i<n;i++){
    
    if(s[i]=='?'){
      cout<<"d";
    }
    else{
      cout<<s[i];
    }
  }
  cout<<endl;
}

// void solve(){
  
//   int n;
//   cin>>n;
//   string s;
//   cin>>s;
  
//   if(contains(s)){
//     cout<<"YES"<<endl;
//     process(s);
//     return ;
//   }
  
//   for(int i=0;i<=n-7;i++){
    
//     string str=s;
//     bool flag=true;
    
//     for(int j=0;j<7;j++){
      
//       if(s[i+j]!='?' && s[i+j]!=t[j]){
//         flag=false;
//         break;
//       }
//       str[i+j]=t[j];
//     }
    
//     if(flag && contains(str)){
//       cout<<"YES"<<endl;
//       process(str);
//       return ;



//     }
//   }
  
//   cout<<"NO"<<endl;
  
//   return ;
  
// }
  
// int main(){
  
//   int t;
//   cin>>t;
//   while(t--){
  
//   long long n,m,x;
//   cin>>n>>m;
  
//   queue<long long> q;
//   for(int i=0;i<n;i++){
//     cin>>x;
//     q.push(x);
//   }
   
//   long long ans=0;
//   long long count=0;
//   set<long long> ss;
   
//   for(long long i=0;i<m;i++){
     
//     cin>>x;
//     if(ss.find(x)!=ss.end()){
//       ans++;
//       ss.erase(x);
//     }
//     else{
//       count=ss.size();
//       while(!q.empty()){
         
//         long long k=q.front();
//         q.pop();
//         if(k!=x){
//           ss.insert(k);
//           count++;
//         }
//         else{
//           break;
//         }
         
//       }
//       ans+=2*count+1;
//     }
     
//   }
//   cout<<ans<<endl;
   
//   }
//   return 0;
  
// }

// int main(){
  
//   int t;
//   cin>>t;
//   while(t--){
  
//   int n;
//   cin>>n;
  
//   vector<int>a(n);
//   vector<vector<int>> ind(n);
  
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//     a[i]--;
//     ind[a[i]].push_back(i);
//   }
//   vector<int> ans(n+2,n+4);
  
// for(int i=0;i<n;i++){
//   int start=-1;
//   int mx=0;
  
//   for(int j:ind[i]){
    
//     mx=max(mx,j-start);
//     start=j;
//   }
//   mx=max(mx,n-start);
//   ans[mx]=min(ans[mx],i);
// }

// int mn=n+n;

// for(int i=1;i<=n;i++){
  
//   mn=min(mn,ans[i]);
//     if(mn>n){
//       cout<<"-1"<<" ";
//     }
//     else{
//       cout<<mn+1<<" ";
//     }
//   }
//   cout<<endl;
//   }
   
//   return 0;
   

// }

// int main(){
  
//   vector<int> a(3);
//   cin>>a[0]>>a[1]>>a[2];
  
//   vector<int>idx({0,1,2,0,2,1,0});
  
//   int full=min({a[0]/3,a[1]/2,a[2]/3});
  
//   a[0]-=full*3;
//   a[1]-=full*2;
//   a[2]-=full*2;
  
//   int ans=0;
  
//   for(int start=0;start<7;start++){
    
//     int day=start;
//     vector<int>p=a;
//     int curr=0;
//     while(p[idx[day]]>0){
//       p[idx[day]]--;
//       day=(day+1)%7;
//       curr++;
//     }
//     ans=max(ans,full*7+curr);
//   }
  
//   cout<<ans<<endl;
//   return 0;
  
// }


void solve(){
  
  int n;
  cin>>n;
  string s;
  cin>>s;
  
  int c=0;
  for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
      c++;
    }
  }
  
  cout<<ceil(c/2.0)<<endl;
}

int MaxSubarrayLength(int arr[], int n, int k)
{
   
    int left = -1;
 
   
    int right;
 
  
    int sum = 0;
 
    for (int i = 0; i < n; i++) {
 
       
        if ((arr[i] % k) != 0) {
 
            if (left == -1) {
                left = i;
            }
 
            right = i;
        }
 
      
        sum += arr[i];
    }
 
    if ((sum % k) != 0) {
        return n;
    }
 
 
    else if (left == -1) {
        return -1;
    }
 
    else {
      
        int prefix_length = left + 1;
 
       
        int suffix_length = n - right;
 
        return n - min(prefix_length,
                       suffix_length);
    }
}

// int main(){
  
//   int t;
//   cin>>t;
//   while(t--){
    
//     int n,k;
//     cin>>n>>k;
    
//     if(n<k){
//       cout<<"NO"<<endl;
//       continue;
//     }
//     else{
//       int divi=n/k;
//       int rem=n%k;
      
//       if(rem==0){
//         cout<<"YES"<<endl;
//         for(int i=0;i<k;i++)
//         cout<<divi<<" ";
//         cout<<endl;
//         continue;
//       }
//       else{
        
//         if((divi+rem)%2==0 && divi%2==0){
//           cout<<"YES"<<endl;
//           for(int i=0;i<k-1;i++)
//           cout<<divi<<" ";
          
//           cout<<divi+rem<<endl;
//           continue;
//         }
        
//       else if((divi+rem)%2!=0 && divi%2!=0){
//           cout<<"YES"<<endl;
//           for(int i=0;i<k-1;i++)
//           cout<<divi<<" ";
          
//           cout<<divi+rem<<endl;
//           continue;
//         }
        
//         else{
          
//           if((k-1)%2!=0){
//             cout<<"NO"<<endl;
//             continue;
//           }
          
//           else if(divi==1){
//             cout<<"NO"<<endl;
//             continue;
//           }
          
//           else{
//             cout<<"YES"<<endl;
            
//             for(int i=1;i<=k/2;i++){
//               cout<<divi+1<<" "<<divi-1<<" ";
//             }
//             cout<<divi+rem<<endl;
//             continue;
//           }
//         }
//       }
//     }
//   }
  
// }

bool issorted(int arr[],int n){
  
  if(n==0 || n==1){
    return true;
  }
  return ((arr[n-1]>=arr[n-2]) && issorted(arr,n-1));
}

// void solved(){
  
//   string s;
//   cin>>s;
  
//   if(s.length()==1 || s.length()==2){
//     cout<<0<<endl;
//     return ;
//   }
  
// int one=0,zeros=0;
// for(int i=0;i<s.length();i++){
//   if(s[i]=='0'){
//     zeros++;
//   }
//   else{
//     one++;
// }
// }
// int start_1=-1,end_1=-1;
//   int start_0=-1,end_0=-1;
 
// for(int i=0;i<s.length();i++){
//   if(s[i]=='0'){
//     start_0=i;
//     break;
//   }
// }
// for(int i=0;i<s.length();i++){
//   if(s[i]=='1'){
//     start_1=i;
//     break;
//   }
// }
// for(int i=s.length()-1;i>=0;i--){
//   if(s[i]=='0'){
//     end_0=i;
//     break;
//   }
// }
// for(int i=s.length()-1;i>=0;i--){
//   if(s[i]=='1'){
//     end_1=i;
//     break;
//   }
// }
 
// int n=s.length();
 
// int count1=min(n-start_1-one,end_1+1-one);
//   int count0=min(n-start_0-zeros,end_0+1-zeros);
  
//   int ans=min(count1,count0);
  
//   cout<<ans<<endl;
// }

// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     solved();
//   }
  
//   return 0;
  
// }

string num_to_str(int n)
{
    char str[50]; // To store result (Excel column name)
    int i = 0; // To store current index in str which is result
 
    while (n > 0) {
        // Find remainder
        int rem = n % 26;
 
        // If remainder is 0, then a 'Z' must be there in output
        if (rem == 0) {
            str[i++] = 'Z';
            n = (n / 26) - 1;
        }
        else // If remainder is non-zero
        {
            str[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    str[i] = '\0';
 
    // Reverse the string and print result
    reverse(str, str + strlen(str));
    
 
    return str;
}

int titleToNumber(string s)
{
    // This process is similar to
    // binary-to-decimal conversion
    int result = 0;
    for (const auto& c : s)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
 
    return result;
}

int str_to_num(string s){
  
  int ans=0;
  
  for(int i=0;i<s.length();i++){
    ans+=ans*26+s[i]-'A'+1;
  }
}

void solved(){
  
  string str;
  cin>>str;
  
  int ind1=-1,ind2=-1;
  
  for(int i=0;i<str.length();i++){
    if(str[i]=='R'){
      ind1=i;
      break;
    }
  }
   for(int i=0;i<str.length();i++){
    if(str[i]=='C'){
      ind2=i;
      break;
    }
  }
  
  bool flag=false;
  
  for(int i=ind1+1;i<ind2;i++){
    if(str[i]>='0' && str[i]<='9'){
      flag=true;
      break;
    }
  }
  
  if(flag){
    
    string s1="";
    string s2="";
    
    for(int i=ind1+1;i<ind2;i++){
      s1+=str[i];
    }
     for(int i=ind2+1;i<str.length();i++){
      s2+=str[i];
    }
    
    int row=stoi(s1);
    int col=stoi(s2);
    
    cout<< num_to_str(col)<<row<<endl;
    
    return;
    
  }
  else{
    
    string rows="";
    string colu="";
    for(int i=0;i<str.length();i++){
      if(str[i]>='A' && str[i]<='Z'){
        rows+=str[i];
      }
      else{
        colu+=str[i];
      }
    }
    
    int rowed=stoi(colu);
    int column=titleToNumber(rows);
    
    cout<<"R"<<rowed<<"C"<<column<<endl;
    
    return;
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solved();
  }
  return 0;
  
}
/*****/
#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

#define ll long long 

// typedef tree<pair<int,int> ,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> pbds;            //  A.order_of_key(x)   elements smaller then x..
// typedef tree<pair<int,int> ,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> pbds2;          //  A.order_of_key(x)   elements smaller then x..
// typedef tree<pair<int,int> ,null_type,greater<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> pbds2;      //  A.order_of_key(x)   elements smaller then x..
// typedef tree<long long,null_type,less_equal<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;                         // *(A.find_by_order(x)  x-index..
                                  // ............ in multi-ordered set if you want to erase any value use s.erase(s.upper_bound(value))   .. as upper_bound and lower_bound exchange their values...
 
unsigned const int M=1e9+7;


    //                      #################################################################################.......................................................................................

// bool cmp(int x,int y)
// {
//     return x>y;
// }
 
   //                      #################################################################################....................................................................................
 
//  int Ceil(int a, int b)
//  {
//      return (a+b-1)/b;
//  }
 
   //                      #################################################################################....................................................................................
 
// bool isPrime(long long x)
// {
//     if(x==1)
//     {
//         return false;
//     }
//     if(x<=3)
//     {
//         return true;
//     }
    
//     if(x%2==0 || x%3==0)
//     {
//         return false;
//     }
    
//     for(long long i=5;i*i<=x;i+=6)
//     {
//         if(x%i ==0 || x%(i+2)==0)
//         {
//             return false;
//         }
//     }
    
//     return true;
 
// }

  //                      #################################################################################....................................................................................
  
  
// bool cmp(pair<ll,ll> a, pair<ll,ll> b)
// {
//     return a.second<b.second;
// }


  //                      #################################################################################....................................................................................

// unordered_map<int,int> countPrime(int n)
// {
//     unordered_map<int,int>m;
    
//     for(int i=2;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
           
            
//             while(n%i==0)
//             {
//                 n=n/i;
//                 m[i]++;
//             }
//         }
//     }
    
//     if(n>1)
//     {
//         m[n]++;
//     }
    
//     return m;
    
// }




  //                      #################################################################################....................................................................................

// vector<int> LPS(string str)
// {
//      int n=str.length();
     
//     vector<int>lps(n,0);
    
//     int left=0;

//     for(int i=1;i<n;)
//     {
//         if(str[left]==str[i])
//         {
//             lps[i]=left+1;
//             left++;
//             i++;
//         }
//         else
//         {
//             if(left==0)
//             {
//                 i++;
//             }
//             else
//             {
//                 left=lps[left-1];
//             }
            
//         }
//     }
    
//     return lps;
// }


  //                      #################################################################################....................................................................................

// vector<int> Zfunc(string str)
// {
//     int n=str.length();
    
//     vector<int> z(n,0);
//     int l=0;
//     int r=0;
//     for(int i=1;i<n;i++)
//     {
        
//         if(i<=r)
//         {
//             z[i]=min(z[i-l],r-i+1);
//         }
        
//         while(i+z[i]<n && str[z[i]]==str[i+z[i]])
//         {
//             ++z[i];
//         }
        
//         if(z[i]+i-1 >r)
//         {
//             l=i;
//             r=z[i]+i-1;
//         }
        
//     }
    
//     return z;
// }

  //                      #################################################################################....................................................................................

//   vector<int>Parent(n+1);
//      vector<int>Rank(n+1,0);
     
//      for(int i=1;i<=n;i++)
//      {
//          Parent[i]=i;
//      }

//   u=findParent(Parent,u);
//          v=findParent(Parent,v);
        

//   if(Rank[u]>=Rank[v])
//          {
//              Parent[v]=u;
//              baap[u]+=baap[v];
//              baap[u]--;
//              if(Rank[u]==Rank[v])
//              {
//                  Rank[u]++;
//              }
//          }
//          else
//          {
//              Parent[u]=v;
//              baap[v]+=baap[u];
//              baap[v]--;
             
//          }
         
//        int findParent(vector<int>&Parent,int node)
    // {
    //     if(Parent[node]==node)
    //     {
    //         return node;
    //     }
        
    //     return Parent[node]=findParent(Parent,Parent[node]);
         
    // }      
    
    
      //                      #################################################################################....................................................................................
    
// long long Pow(int n, int p)
// {
//     long long ans=1;
//     // long long prod=1;
//     while(p>1)
//     {
//         if(p%2 !=0)
//         {
//             ans=ans*n;
//             p--;
//         }
//         n=(n*n);
//         p/=2;
//     }
    
//     ans=ans*n;
//     return ans;
    
// }

  //                      #################################################################################....................................................................................


// void makePrime(vector<int>&Prime , int n)
// {
    
//     for(int i=2;i<=n;i++)
//     {
//         for(int j=i+i;j<=n;j+=i)
//         {
//             if(Prime[j]==1)
//             {
//                 Prime[j]=i;
//             }
//         }
//     }
//     return ;
// }

int Type(string s)
{
    bool flg=true;
    
    for(int i=1;i<s.length();i++)
    {
        if((s[i-1]>='0'&&s[i-1]<='9') )
        {
            if((s[i]>='0'&& s[i]<='9'))
            continue;
            else
            {
                flg=false;
                break;
            }
        }
    }
    
    if(flg)
    return 2;
    return 1;
    
}


void Minus(string s)
{
    
    int l=s.length();
    int start=0;
    for(int i=1;i<l;)
    {
        if(s[i]!='A')
        {
            start=i;
            i++;
        }
        else if(s[i-1]!='A')
        {
            for(int j=i;j<l;j++)
            {
                if(s[j]!='A')
                {
                    break;
                }
                i++;
            }
            char ch=s[start];
            ch--;
            s[start]=ch;
            for(int j=start+1;j<i;j++)
            {
                s[j]='Z';
            }
        }
        else
        {
            i++;
        }
    }
    
    for(int i=0;i<l;i++)
    {
        cout<<s[i];
    }
    
    // int ind=-1;
    // for(int i=0;i<tedi.length();i++)
    // {
    //     if(tedi[i]!='A')
    //     {
    //         ind=i;
    //         break;
    //     }
    //     else
    //     {
    //         cout<<tedi[i];
    //     }
    // }
    
    // if(ind==-1)
    // {
    //     return ;
    // }
    
    //     char ch=tedi[ind];
    //     ch--;
    //     cout<<ch;
    // for(int i=ind+1;i<tedi.length();i++)
    // {
    //     if(tedi[i]!='A')
    //     {
               
    //     }
    //     cout<<"Z";
    // }
    
    return ;
}

int main()
{
    
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

      long long T;
      cin>>T;
    
        unordered_map<int,char>m;
        char ch='A';
        m[0]='A';
        for(int i=1;i<=26;i++,ch++)
        {
            m[i]=ch;
        }
        
        // vector<ll> v;
        unordered_map<ll,ll>mp;
        ll cp=0;
        ll temp=1;
        
        while(temp<1e6)
        {
            mp[temp]=cp;
            temp=temp*26;
            cp+=temp;
        }
        
       
      while(T--)
     {
     
        string s;
        cin>>s;
        
        if(Type(s)==1)
        {
         // convert to second type:
         
         string col,row;
         
         int l=s.length();
         int e;
         for(int i=l-1;;i--)
         {
             if(s[i]=='C')
             {
                 e=i;
                 break;
                 
             }
             
             col+=s[i];
         }
         
         for(int i=e-1;i>=0;i--)
         {
             if(s[i]=='R')
             {
                 break;
             }
             row+=s[i];
         }
         
         reverse(col.begin(),col.end());
         reverse(row.begin(),row.end());
         
         string ans="";
         
        int num=stoi(col);
        
        // int mul=1 ;
        // int count=0;
        // int v=0;
        // while(count+mul*26< num)
        // {
        //     v++;
        //     // count++;
        //     mul=mul*26;
        //     count+=mul;
        // }
        
        while(num>0){
                        num--;
                        ans.push_back('A'+(num%26));
                        
                        num/=26;
                    }
        
        
        // if(count==num)
        // {
            
        //      for(int j=0;j<v;j++)
        //      {
        //          cout<<"Z";
        //      }
        //      cout<<row<<endl;
             
        // }
        // else
        {
            
            // while(mul>0)
            // {
               
            // cout<<mul<<" "<<num<<" , ";    
            // int q=(num-mp[mul])/mul;
           
            // ans+=m[q];
           
            // num-=(q*mul);
            // mul=mul/26;
            
            // }
            
            // string Tedi = ans+row;
            
            /////////////////////////////////////
            
        //      string col2,row2;
         
        //  int l2=Tedi.length();
        //  int e2;
        //  for(int i=l2-1;;i--)
        //  {
        //      if(Tedi[i]<='9' && Tedi[i]>='0')
        //      {
        //          row2+=Tedi[i];
                
        //      }
        //      else
        //      {
        //          e2=i;
        //          break;
        //      }
           
        //  }
         
         reverse(ans.begin(),ans.end());
         
        // for(int i=0;i<=e2;i++)
        // {
        //     col2+=Tedi[i];
        // }
        //  reverse(col2.begin(),col2.end());
        
        //  int mul2=1;
        //  int count2=0;
         
        //  for(int j=0;j<col2.length();j++)
        //  {
        //      int num = col2[j]-'A'+1;
        //      count2+=(num*mul2);
        //      mul2=mul2*26;
        //  }
         
        // //  cout<<"R"<<row<<"C"<<count<<endl;
            
        //     string check = "R"+row2+"C"+to_string(count2);
            
            
            
            //////////////////
            
            // if(s==check)
            {
                
            cout<<ans<<row<<endl;
            }
            // else
            // {
            // cout<<ans<<row<<endl;
            //     Minus(ans);
            //     cout<<row<<endl;
            // }
            
            
        }
         
            
        }
        else
        {
            // cout<<"@" ;
         string col,row;
         
         int l=s.length();
         int e;
         for(int i=l-1;;i--)
         {
             if(s[i]<='9' && s[i]>='0')
             {
                 row+=s[i];
                
             }
             else
             {
                 e=i;
                 break;
             }
           
         }
         
         reverse(row.begin(),row.end());
         
        for(int i=0;i<=e;i++)
        {
            col+=s[i];
        }
         reverse(col.begin(),col.end());
        
         int mul=1;
         int count=0;
         
         for(int j=0;j<col.length();j++)
         {
             int num = col[j]-'A'+1;
             count+=(num*mul);
             mul=mul*26;
            //  cout<<count<<"   ";
         }
         
         cout<<"R"<<row<<"C"<<count<<endl;
         
        }
      
     }  
     
    return 0;

}
/***************/
// LIFE IS TOUGH AND SO DOES YOU!

// प्रियवाक्य प्रदानेन सर्वे तुष्यन्ति जन्तवः।
// तस्मात तदैव वक्तव्यम वचने का दरिद्रता।।
// अर्थ – प्रिय वाक्य बोलने से सभी जीव संतुष्ट हो जाते हैं, अतः प्रिय वचन ही बोलने चाहिए। ऐसे वचन बोलने में कंजूसी कैसी।


// काक चेष्टा, बको ध्यानं, स्वान निद्रा तथैव च।
// अल्पहारी, गृहत्यागी, विद्यार्थी पंच लक्षणं।।
// अर्थ– हर विद्यार्थी में हमेशा कौवे की तरह कुछ नया सीखाने की चेष्टा, एक बगुले की तरह एक्राग्रता और केन्द्रित ध्यान एक आहत में खुलने वाली कुते के समान नींद, गृहत्यागी और यहाँ पर अल्पाहारी का मतबल अपनी आवश्यकता के अनुसार खाने वाला जैसे पांच लक्षण होते है।


#include<bits/stdc++.h>
using namespace std;

#define karrupt ios_base::sync_with_stdio( false ) ;  cin.tie(NULL) ; cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" " ; _print( x ) ; cerr << endl ;
#else
#define debug(x)
#endif
typedef long long ll ;
#define INF 1e18
#define loop(i, a, b) for( int i = a; i <= b; i++ )
#define newline cout<< "\n"
typedef long double lld;
#define MOD1 998244353
#define set_bits __builtin_popcountll
#define MOD 1000000007

// उद्यमेन हि सिध्यन्ति कार्याणि न मनोरथैः।
// न हि सुप्तस्य सिंहस्य प्रविशन्ति मुखे मृगा:।।
// अर्थ – व्यक्ति के मेहनत करने से ही उसके काम पूरे होते हैं, सिर्फ इच्छा करने से उसके काम पूरे नहीं होते। जैसे सोये हुए शेर के मुंह में हिरण स्वयं नहीं आता, उसके लिए शेर को परिश्रम करना पड़ता है।

struct custom_hash {

    static uint64_t splitmix64(uint64_t x) {
        /* http://xorshift.di.unimi.it/splitmix64.c */

        x += 0x9e3779b97f4a7c15 ;  x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9; x = ( x ^ ( x >> 27 ) ) * 0x94d049bb133111eb ; return x ^ ( x >> 31 );

    }
    size_t operator() ( uint64_t  x ) const {
        static  const  uint64_t  FIXED_RANDOM  =  chrono::steady_clock::now().time_since_epoch().count() ; return splitmix64(x + FIXED_RANDOM) ;
    }
};

// अभिवादनशीलस्य नित्यं वृद्धोपसेविन:।
// चत्वारि तस्य वर्धन्ते आयुर्विद्या यशोबलं।।
// अर्थ – बड़ों का अभिवादन करने वाले मनुष्य की और नित्य वृद्धों की सेवा करने वाले मनुष्य की आयु, विद्या, यश और बल ये हमेशा बढ़ती रहती है।


void _print(ll t) {cerr << t;}

void _print(string t) {cerr << t;}

void _print(int t) {cerr << t;}

void _print(lld t) {cerr << t;}

void _print(char t) {cerr << t;}

void _print(unsigned long long t) {cerr << t;}

void _print(double t) {cerr << t;}


// विद्यां ददाति विनयं विनयाद् याति पात्रताम्।
// पात्रत्वात् धनमाप्नोति धनात् धर्मं ततः सुखम्।।</b>
// अर्थ – ज्ञान विनम्रता प्रदान करता है, विनम्रता से योग्यता आती है और योग्यता से धन प्राप्त होता है, जिससे व्यक्ति धर्म के कार्य करता है और सुखी रहता है।

// गुरुर्ब्रह्मा ग्रुरुर्विष्णुः गुरुर्देवो महेश्वरः।
// गुरुः साक्षात् परं ब्रह्म तस्मै श्री गुरवे नमः।।
// अर्थ – गुरू ही ब्रह्मा हैं, गुरू ही विष्णु हैं, गुरू ही शंकर है, गुरू ही साक्षात परमब्रह्म हैं। ऐसे गुरू का मैं नमन करता हूं 


template <class T, class V> void _print(pair <T, V> p);

template <class T> void _print(vector <T> v);

template <class T> void _print(set <T> v);

template <class T, class V> void _print(map <T, V> v);

template <class T> void _print(multiset <T> v);

// पुर तें निकसी रघुबीर-वधू, धरि धीर दए मग में डग द्वैं।
// झलकीं भरि भाल कनी जल की, पट सूखि गए मधुराधर वै।
// फिर बुझति हैं, चलनो अब केतिक, पर्नकुटी करिहौं कित ह्वै?
// तिय की लखि आतुरता पिय की अँखियाँ अति चारु चलीं जल च्वै।।

// सप्रसंग : यह पंक्तियाँ हमारी पद्य पुस्तक भाग – 1 में संकलित सवैया ‘वन के मार्ग’ से ली गई है। इसके रचनाकार तुलसीदास जी है। इन पंक्तियों में वन मार्ग में सीता जी की दशा का वर्णन किया गया है।

// व्याख्या : राम – सीता और लक्ष्मण 14 वर्ष का वनवास काटने के लिए अयोध्या नगरी से वन में गए थे। सीता बड़ा धैर्य धारण कर मार्ग में पैर रक्ग रही है। सीता जी के माथे में पसीने की बुँदे चमक रही है। प्यास के कारण सीता के होंठ सुख गए है। सीता राम जी से पूछती है की अब कितना चलना है ? हमारी कुटिया कितनी दूर है ? यह सब सुन कर राम की आँखों में आँसू आ गए।

// भाव यह है कि सीता जी कोमल एक राज कुमारी थी, और उन्हें इतना कष्ट कभी नहीं देखा लेकिन उन्हें आज थ करना पड़ रहा है। अपने पति राम जी के साथ निभाने के लिए 14 वर्ष के वनवास के लिए चल पड़ी। सीता इतना कष्ट नहीं सह पा रही थी, यह सब राम जी देखा नहीं जा रहा था और वो दुखी हो रहे थे।


template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}

template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}

ll powe(ll x, ll y, ll mod = MOD){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}



// सर्वे भवन्तु सुखिन: सर्वे सन्तु निरामया:।
// सर्वे भद्राणि पश्यन्तु मा कश्चिद् दु:ख भाग्भवेत्
// ।।संसार में सभी सुखी हो, निरोगी हो, शुभ दर्शन हो और कोई भी ग्रसित ना हो।


// अलसस्य कुतः विद्या अविद्यस्य कुतः धनम्।
// अधनस्य कुतः मित्रम् अमित्रस्य कुतः सुखम्।।
// आलसी व्यक्ति को विद्या कहां, मुर्ख और अनपढ़ और निर्धन व्यक्ति को मित्र कहां, अमित्र को सुख कहां।


// unordered_map< ll , ll , custom_hash> safe_map;
// gp_hash_table< ll , ll , custom_hash> safe_hash_table;

bool firsttype(string s){ // r23c55
    ll n = s.length();
    if(n < 4)return false;
    bool var = false;
    if(s[0] != 'R')return false;
    if(!(s[1] >= '0' && s[1] <= '9'))return false;
    for(int i=2; i<n-1; i++){
        if(s[i] == 'C')return true;
    }
    return var;

}

void solve(int testcase_no){
    string s;
    cin>> s;
    ll n = s.length();
    if(firsttype(s)){
        string row = "";
        ll i = 1;
        while( s[i] != 'C'){
            row+=s[i];
            i++;
        }
        i++;
        string col  = "";
        while( i < n){
            col+= s[i];
            i++;
        }
        ll rr = stoi(row);
        ll cc = stoi(col);
        vector<ll>ans;
        while ( cc != 0){
            // ans.push_back(cc%26 == 0 ? 1: cc%26);
            if(cc % 26 == 0){
                cc -= 26;
                ans.push_back(26);
            }
            else {
                ans.push_back(cc % 26);
            }
            cc/=26;
        }
        reverse(ans.begin(), ans.end());
        string column = "";
        for(int i=0; i< ans.size(); i++){
            column+= char(ans[i]+ 'A' - 1);
        }
        cout<< column << rr << "\n";
    }   
    // ith place-> z = i-1 th place A
    // AZ
    else{
        string col = "";
        ll i = 0;

        while(i < n &&  s[i] >= 'A' && s[i] <= 'Z'){
            col+=s[i];
            i++;
        }
        ll ans = 0;
        ll val = 1;
        ll j = col.length()-1;
        while( j>=0){
            ans+= (col[j]-'A' + 1) * val;
            val= 1ll* val * 26;
            // val*=26;
            j--;
        }
        cout<<  "R" << s.substr(i, n-i) << "C" << ans << "\n";
    } 
    // cout<< char('A' - 1) << "\n";
    
}


int main(){
    clock_t tStart = clock();

    karrupt; // for fast input output

    #ifndef ONLINE_JUDGE

        freopen( "input.txt" , "r", stdin);
        freopen( "output.txt" , "w", stdout);
        freopen( "Error.txt" , "w", stderr);

    #endif 

    int _karrupt_ = 1;

    cin >>_karrupt_ ;

    while(_karrupt_--){

        solve(_karrupt_);
    }

    cerr<< "TIME TAKEN: "; cerr<< ( ( double)( clock() - tStart )/CLOCKS_PER_SEC) ;

    return 0;
}


// स्वगृहे पूज्यते मूर्खः स्वग्रामे पूज्यते प्रभुः। स्वदेशे पूज्यते राजा विद्वान्सर्वत्र पूज्यते ॥
//  भावार्थ :
// एक मुर्ख की पूजा उसके घर में होती है, एक मुखिया की पूजा उसके गाँव में होती है, राजा की पूजा उसके राज्य में होती है और एक विद्वान की पूजा सभी जगह पर होती है।

// मूर्खा यत्र न पूज्यते धान्यं यत्र सुसंचितम्। दंपत्यो कलहं नास्ति तत्र श्रीः स्वयमागतः ॥
//  भावार्थ :
// जहाँ मूर्ख को सम्मान नहीं मिलता हो, जहाँ अनाज अच्छे तरीके से रखा जाता हो और जहाँ पति-पत्नी के बीच में लड़ाई नहीं होती हो, वहाँ लक्ष्मी खुद आ जाती है।
/******/
#include <iostream>
#include <stdio.h>
#include <functional>
#include <string>
#include <cstring>
#include <cstdio>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <iomanip>
#include <complex>
#include <unordered_set>
#include <assert.h>

//#include <ext/pb_ds/assoc_container.hpp>   //ordered_set
//#include <ext/pb_ds/tree_policy.hpp>

#define ll long long
#define ld long double

#define debug1(x) cout << (#x) << " " << (x) <<" "<< endl
#define debug2(x,y) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< endl
#define debug3(x,y,z) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< (#z) << " " << (z) << endl
#define debug4(x,y,z, a) cout << (#x) << " " << (x) <<" "<< (#y) << " " << (y) <<" "<< (#z) << " " << (z) << " "<< (#a) << " " << (a) << endl

#define trace1(x) cerr<<#x<<": "<<x<<" "<<endl
#define trace2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl

#define ull unsigned long long
#define endl "\n"
#define MohamedMotaz ios::sync_with_stdio(0); cin.tie(0); ios_base::sync_with_stdio(0);
#define readwrite freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define clr(x, y) memset(x, y, sizeof(x));
#define f(a, b, c) for(ll a = b; a < c; a++)
#define fr(a, b, c) for(int a = b; a >= c; a--)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define vll vector<ll>
#define vld vector<ld>
#define vii vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<ll,ll>
#define pld pair<ld, ld>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpld vector<pld>
#define vc vector<char>
#define vs vector<string>
#define vp vector<point>
#define vb vector<bool>
#define mll map<ll,ll>
#define mii map<int, int>
#define mllv map<ll, vll>
#define mcll map<char, ll>
#define mcii map<char, int>
#define msll map<string, ll>
#define mss map<string, string>
#define mcs map<char, string>
#define sll set<ll>
#define sz(x) (ll)x.size()
#define cinvec(v) f(i, 0, v.size()) cin >> v[i]
#define coutvec(v) for (auto e: v) cout << e << " "; cout << endl;
#define printvec(v) for (auto e: v) cout << e << " "; cout << endl;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define pi acos(-1)
#define point complex<ld>

using namespace std;
//using namespace __gnu_pbds;


const int mod = 1e9 + 7;
const ll sizee = 0;
int dirX[] = { 0, -1, 0, 1, -1, 1, -1, 1 };
int dirY[] = { -1, 0, 1, 0, 1, -1, -1, 1 };

ll fact[sizee]; ll inv[sizee];
ll arr[sizee];
ll primes[sizee];

ll modPower(ll b, ll p) {
    if (p == 0)
        return 1;

    ll halfpow = modPower(b, p / 2);
    ll toReturn = (halfpow * halfpow) % mod;
    if (p % 2)
        toReturn = (toReturn * b) % mod;

    return toReturn;
}

ll fastPower(ll b, ll p) {
    if (p == 0)
        return 1;
    ll ans = fastPower(b, p / 2);
    ans = (ans * ans);
    if (p % 2 != 0)
        ans = (ans * b);
    return ans;
}
double bigPower(double a, int n)
{
    double x = a, ret = 1;
    while(n)
    {
        int currentBit = n&1;
        if(currentBit)
            ret *= x;
        x*=x;
        n = n>>1;
    }
    return ret;
}
ll GcdRecursive(ll a, ll b) {
    if (b == 0) return a;
    return GcdRecursive(b, a % b);
}
ll modLCM(ll a, ll b) {
    ll val = GcdRecursive(a, b);
    ll tmp = ((a % mod) * (b % mod)) % mod;
    ll finalVal = ((tmp % mod) * (arr[val] % mod)) % mod;
    return finalVal;

}
long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
long long lcm(long long a, long long b) { return a * (b / gcd(a, b)); }
ll LCM(ll a, ll b) {
    return (a * b) / GcdRecursive(a, b);
}
void move1step(ll& a, ll& b, ll q) { // a and b by reference
    ll c = a - q * b;
    a = b;
    b = c;
}
ll GcdIterative(ll a, ll b) {
    while (b) move1step(a, b, a / b);
    return a;
}

void pre(ll n) {

    fact[0] = 1;
    inv[0] = 1;

    for (ll i = 1; i <= n; i++) {
        fact[i] = (i * fact[i - 1]) % mod;
        inv[i] = modPower(fact[i], mod - 2);
        arr[i] = modPower(i, mod - 2);
    }
}

ll npr(ll n, ll r) {
    return (ll)((fact[n] * inv[n - r]) % mod);
}

ll ncr(ll n, ll r) {
    if (r > n) return 0;
    return (ll)((((fact[n] * inv[n - r]) % mod) * inv[r]) % mod);
}

void sieve(ll val) {
    memset(primes, 1, sizeof primes);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= val; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= val; j += i) {
                primes[j] = 0;
            }
        }
    }

}


ll power(ll b,ll e)
{
    if(e==0) return 1;
    if(e&1) return b*power(b*b,e/2);
    return power(b*b,e/2);
}
bool isPrime (ll n) {
    if (n <= 1)
        return false;
    if (n == 2) return true;
    for (int i = 2; i*i <=n; i++)
        if (n % i == 0)
            return false;

    return true;
}
string findSmallestLexoWithoutDupilcates (string s) {
    int cnt[27];
    bool vis[27];
    for (int i=0; i<s.size(); i++) cnt[s[i]-'a']++;
    string ans="";
    for (int i=0; i<s.size(); i++){
        int x=s[i]-'a';
        cnt[x]--;
        if(vis[x]) continue;
        while (ans.size()>0 && s[i]<ans.back() && cnt[ans.back()-'a']>0){
            vis[ans.back()-'a']=false;
            ans.pop_back();
        }
        ans.push_back(s[i]);
        vis[x]=true;
    }
    return ans;
}
ld dot(point a, point b) {
    return (conj(a) * b).real();
}
ld cross(point a, point b){
    return (conj(a) * b).imag();
}
//length of vector is abs(complex)
//hypot(3, 4) returns 5
//arg(3, 3) * 180 / pi returns angle between vector and x-axis
//point a(2, 3), b(4, 2);  (b - a) return vector between two points
//a *= polar(1.0, - pi / 45) rotates by 45 degrees clockwise about origin
//to rotate about a point, minus it from my origin a = (a - b) * polar(1.0, pi) + b
ld angleBetVec(point a, point b){
    ld d = dot(a, b);
    d/= abs(a);
    d/= abs(b);
    //now i have cos of angle in rad
    return  acos(d) * 180 / pi;
}
//atan2 returns angle between vec and x axis atan2(a.imag(), a.real())

point RotateAbout(point a, point about, ld angle){
    return (a - about) * polar((ld)1.0, angle) + about;
}

// Note: if there is a cycle, the size of the return will be less than n.
vector<int> topological_sort(const vector<vector<int>> &adj) {
    int n = int(adj.size());
    vector<int> in_degree(n, 0);
    vector<int> order;

    for (int i = 0; i < n; i++)
        for (int neighbor : adj[i])
            in_degree[neighbor]++;

    for (int i = 0; i < n; i++)
        if (in_degree[i] == 0)
            order.push_back(i);

    int current = 0;

    while (current < int(order.size())) {
        int node = order[current++];

        for (int neighbor : adj[node])
            if (--in_degree[neighbor] == 0)
                order.push_back(neighbor);
    }

    return order;
}

set<ll> GetDivisors(ll val){
    set<ll> st;
    f(i, 1, sqrt(val) + 1) if (val % i == 0) st.insert(i), st.insert(val / i);
    return st;
}

void LoopDiagonally(int a, int b){
    //length and width
    for( int k = 0 ; k <= a + b - 2; k++ ) {
        string t = "";
        for( int j = 0 ; j <= k ; j++ ) {
            int i = k - j;
            if( i < a && j < b ) {
                //t += v[i][j];
            }
        }
        //v3.push_back(t);
    }
    //cout << "in" << endl;
    for( int k = 0 ; k <= a + b - 2; k++ ) {
        string t = "";
        for( int j = 0 ; j <= k ; j++ ) {
            int i = a - (k - j);
            if( i >= 0 && i < a && j < b ) {
                // t += v[i][j];
            }
        }
        //v3.push_back(t);
    }
}

int getBits(int val){
    int ctr = 0;
    while (val) {
        ctr += val & 1;
        val >>= 1;
    }
    return ctr;
}

void GetLongestSubSequenceNSquared(){
//    f(i, 0, n){
//        ll mx = 0;
//        f(j, 0, i){
//            if (v[i] <= v[j]) continue;
//            mx = max(mx, dp[j]);
//        }
//        dp[i] = mx + 1;
//        maximum = max(maximum, dp[i]);
//    }
}

void DSUfunctions(){
//    int n, cnt, par[N];
//    void init() {
//        for(int i = 1; i <= n + 1; i ++)
//            par[i] = i;
//    }
//    int findpar(int u)
//    {
//        return u == par[u] ? u : findpar(par[u]);
//    }
//    bool sameset(int u, int v)
//    {
//        return findpar(u) == findpar(v);
//    }
//    void join(int u, int v)
//    {
//        if(sameset(u, v))
//            return;
//        par[findpar(u)] = par[findpar(v)];
//    }
}

//ll ncrr[N][107];
//ll prencrwithoutMod() {
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j <= 100; j++) {
//            if (j > i) {
//                ncrr[i][j] = 0;
//                continue;
//            }
//            if (j == 0 || j == i) {
//                ncrr[i][j] = 1;
//                continue;
//            }
//            ncrr[i][j] = ncrr[i-1][j-1] + ncrr[i-1][j];
//        }
//    }
//}

ld pointToLine(ld x, ld y, ld x1, ld y1, ld x2, ld y2) {

    ld A = x - x1;
    ld B = y - y1;
    ld C = x2 - x1;
    ld D = y2 - y1;

    ld dot = A * C + B * D;
    ld len_sq = C * C + D * D;
    ld param = -1;
    if (len_sq != 0) //in case of 0 length line
        param = dot / len_sq;

    ld xx, yy;

    if (param < 0) {
        xx = x1;
        yy = y1;
    }
    else if (param > 1) {
        xx = x2;
        yy = y2;
    }
    else {
        xx = x1 + param * C;
        yy = y1 + param * D;
    }

    ld dx = x - xx;
    ld dy = y - yy;
    return sqrt(dx * dx + dy * dy);
}
priority_queue<pair<int, pair<int, int>>> yooooo_tmp;
//const ll mod = 998244353;
//const ll mod = 1e9 + 7;
const int N = 2e5 + 7;
const ll llinf = INT64_MAX;
const int intinf = INT32_MAX;
const int infClr = 0x3f3f3f3f;

ll t;
ll n, k, m, a, b, r, d, x, y, q, z, f, l, p, g, h, c, T;

bool checkRowColumn(string s){
    bool found1 = 0, diff = 0, found2 = 0;
    //check if row col
    f(i, 0, s.size()){
        if (s[i] >= '0' && s[i] <= '9'){
            found1 = 1;
            if (diff) found2 = 1;
        }else{
            if (found1) diff = 1;
        }
    }
    return found1 && found2;
}

void fun1(string s){
    string sol = "";
    ll val = 0, c = 0;
    fr(i, s.size() - 1, 0){
        if (s[i] == 'C') break;
        val += (s[i] - '0') * pow(10, c++);
    }
    while (val > 0){
        ll c = val % 26;
        if (!c) c = 26, val -= 26;
        val /= 26;
        sol += (char)('A' + c - 1);
    }
    reverse(all(sol));
    cout << sol;
    f(i, 1, s.size()){
        if (s[i] == 'C') break;
        cout << s[i];
    }
    cout << endl;
}

int main() {
    MohamedMotaz;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        bool rc = checkRowColumn(s);
        if (rc){
            fun1(s);
            continue;
        }
        string tmp = "";
        f(i, 0, s.size()){
            if (s[i] >= '0' && s[i] <= '9') break;
            tmp += s[i];
        }
        ll cur = 0, ctr = 0;
        fr(i, tmp.size() - 1, 0){
            cur += (tmp[i] - 'A' + 1) * pow(26, ctr++);
        }
        string ans = "";
        fr(i, s.size() - 1, 0){
            if (s[i] >= '0' && s[i] <= '9'){
                ans += s[i];
            }else break;
        }
        reverse(all(ans));
        cout << "R" << ans;
        cout<< "C" << cur;
        cout << endl;
    }

}
/*****/
#include<bits/stdc++.h>
# include <stdio.h>
# include <stdlib.h>
#include <iostream>
#include<set>
#include<sstream>
using namespace std;
//int t[4][2]={{0,-1},{-1,0},{1,0},{0,1}};//字典序最小 
//char a[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
long long gcd(long long n,long long m){
	return m==0?n:gcd(m,n%m);
}
long long lcm(long long a, long long b) {
  return a / gcd(a, b) * b;
}
#define oo 0x3f3f3f3f 
#define pi 3.14159265358979
//#define mod 1000000007
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*struct node{
	int x,y,ts;
}s,ns;*/
//int a[33],b[33];
struct node{
int x,y;
bool operator<(const node a) const{
	if(a.x<x){
		return 1;
	}
	else {
		return 0;
	}	
}
};
int run(int y){
	if(y%400==0){
		return 1;
	}
	if(y%100!=0&&y%4==0){
		return 1;
	}
	return 0;
}
long long  q(long long  x,long long  n,long long mod){//快速幂 
    long long  ans=1;
	while(n){
		if(n&1){
			ans=x*ans%mod;
		}
		n=n>>1;
		x=x*x%mod;
	}
	return ans%mod;
}
long long  qcpow(long long  a,long long  b){//快速乘 
     long long  ans=0;
	while(b){
		if(b&1){
		
			ans=(a+ans);
		}
		b=b>>1;
		a=(a+a);	
	}
	return ans;
}
long long  qpow(long long  x,long long  n){//快速幂 
    long long  ans=1;
	while(n){
		if(n&1){
			ans=qcpow(x,ans);
		}
		n=n>>1;
		x=x*x;
	}
	return ans;
}

long long lj(long long n){
	long long sum=0 ;
	for(int i=0;i<=n;i++){
		sum+=i;
	}
	return sum;
}
long long jc(long long n,long long cnt){
	long long sum=1;
	while(cnt--){
		sum*=n;
		n-=1;
	}
	if(sum==1){
		return 0;
	}
	return sum;
}
int fa[1000*1100];
int find(int u){
	int tu=u;
	while(fa[tu]!=tu){
		tu=fa[tu];
	}
	return tu;
}
string s2S(int s){
	stringstream ss;
	string str;
	if(s<10){
	ss<<'0';
	}
	ss<<s;
	ss>>str;
	return str;
}
void s2i(string &s,int &num){
	stringstream ss;
	ss<<s;
	ss>>num;
}
void wys(int x){//位运算此次出现32位的2进制 
	for(int i=0;i<32;i++){
		printf("%d",(x>>(31-i))&1);
	} 
}
int combin(int x, int y){
	int tx=find(x);
	int ty=find(y);
	if(tx==ty){
		return 0;
	}
	else {
		fa[tx]=ty;
		return 1;
	}
}
int flag[100010];
int prime[100010]; 
int t;
void pri(){
	flag[0]=1;
	flag[1]=1;
	for(int i=2;i<80000;i++){
		if(!flag[i]){
			prime[++t]=i;
		//	cout<<prime[t]<<endl;
		}
		for(int j=1;j<=t&&i*prime[j]<=80000;j++){
		flag[i*prime[j]]=1;
		if(i%prime[j]==0){
			break;
		}
		}
	}
}

//int dir[4]={1,-1,2,-2};
//int dir[6]={1,2,3,-1,-2,-3};
int dir[4][2]={0,1,1,0,0,-1,-1,0};
//int dir[8][2]={0,1,1,0,0,-1,-1,0,1,1,1,-1,-1,1,-1,-1};

//long long ans=0;

int dp1(){
		int n,k;
	int d[100][100];
	cin>>n>>k;
	int v[n+10],w[n+10];
	for(int i=1;i<=n;i++){
		cin>>w[i];
		cin>>v[i];
	} 
	for(int i=0;i<=n;i++){
		for(int j=0;j<n;j++){
			d[i][j]=0;
		}
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j<w[i]){
				d[i][j]=d[i-1][j];
			}	
			else {
				if(d[i-1][j]>d[i-1][j-w[i]]+v[i]){
					d[i][j]=d[i-1][j];
				}
				else {
					d[i][j]=d[i-1][j-w[i]]+v[i];
				}
			}
		}
		
	}
	return d[n][k];
}
int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int solve(const string &str){
	if(str.rfind('A')-str.find('A')==2&&str.rfind('2')-str.find('2')==3&&str.rfind('3')-str.find('3')==4&&str.rfind('4')-str.find('4')==5){
	return 1;
	}
	return 0;
}
int prim[168]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997};
struct M{//矩阵快速幂 
	long long data[2][2];
	M(){
		memset(data,0,sizeof(data));
	} 
};
M mul(M a,M b){
	M ans;
	ans.data[0][0]=(a.data[0][0]*b.data[0][0]+a.data[0][1]*b.data[1][0])%1000000007;
	ans.data[0][1]=(a.data[0][0]*b.data[0][1]+a.data[0][1]*b.data[1][1])%1000000007;
	ans.data[1][0]=(a.data[1][0]*b.data[0][0]+a.data[1][1]*b.data[1][0])%1000000007;
	ans.data[1][1]=(a.data[1][0]*b.data[0][1]+a.data[1][1]*b.data[1][1])%1000000007;
	return ans;
}
M qqpow(M m,long long n){
	M E;
	E.data[0][0]=1;
	E.data[1][1]=1;
	while(n!=0){
		if(n&1){
			E=mul(E,m);
		}
		m=mul(m,m);
		n=n>>1;
	}
	return E;
} 
string rev(string s){
	string ans;
	for(int i=s.size()-1;i>=0;i--){
		ans+=s[i];
	}
	return ans;
}
int lca(string s1,string s2){
	int len=s1.size();
	int dp[len+5][len+5];
	for(int i=0;i<len;i++){
		if(s1[0]==s2[i]){
			dp[0][i]=1;
		}
		else {
			if(i==0){
				dp[0][i]=0;
			}
			else {
				dp[0][i]=dp[0][i-1];
			}
		}
		
	}
	for(int i=0;i<len;i++){
		if(s1[i]==s2[0]){
			dp[i][0]=1;
		}
		else {
			if(i==0){
				dp[i][0]=0;
			}
			else {
				dp[i][0]=dp[i-1][0];
			}
		}
		
	}
	for(int i=1;i<len;i++){
		for(int j=1;j<len;j++){
			if(s1[i]==s2[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else {
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			} 
		}
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[len-1][len-1];
}
int dist[10000];
int S[10000];
int path[10000];
int edge[1000][1000];
void dij(int u){
	/*for(int i=1;i<=n;i++){
		S[i]=0;
		dist[i]=edge[u][i];
		
	}
	S[u]=1;
	for(int i=1;i<=n;i++){
		int minn=oo;
		int v=u;
		for(int j=1;j<=n;j++){
			if(!S[j]&&minn>dist[j]){
				minn=dist[j];
				v=j;
				
			}
		}
		//cout<<dist[v]<<" "<<v<<endl;
		S[v]=1;
		for(int j=1;j<=n;j++){
			if(!S[j]&&dist[v]+edge[v][j]<dist[j]){
				dist[j]=dist[v]+edge[v][j];
				//cout<<dist[j]<<"--"<<j<<endl;
			}
		}
	}*/
}
long long mapp[2000][2000];
long long dp[50][50][13][13];
int n,m,k;
int dfs_dp(int x,int y,int cnt,int maxn){
	if(dp[x][y][cnt][maxn+1]!=-1){
		return dp[x][y][cnt][maxn+1];
	}
	if(x==n&&y==m){
		if(cnt==k||(cnt==k-1&&maxn<mapp[x][y])){
			dp[x][y][cnt][maxn+1]=1;
			return dp[x][y][cnt][maxn+1];
		}
		else {
			dp[x][y][cnt][maxn+1]=0;
			return dp[x][y][cnt][maxn+1];
		}
	}
	long long ans=0;
	if(x+1<=n){
		if(maxn<mapp[x][y]){
			ans+=dfs_dp(x+1,y,cnt+1,mapp[x][y]);
		}	
		ans+=dfs_dp(x+1,y,cnt,maxn);
	}
	if(y+1<=m){
		if(maxn<mapp[x][y]){
			ans+=dfs_dp(x,y+1,cnt+1,mapp[x][y]);
		}	
		ans+=dfs_dp(x,y+1,cnt,maxn);
	}
	dp[x][y][cnt][maxn+1]=ans%1000000007;
	return dp[x][y][cnt][maxn+1];
}
const int mm=1e5+10;
vector<long long> p[mm];
long long w[mm];
long long ww[mm];
long long ans=0;
void dfs_s(int root,int cnt,int f){//遍历每颗树 root当前的根，f是root父节点 

	if(root==n-1&&cnt==k)
	{
		ans++;
		cout<<f<<endl;
		return ;
	}
	if(cnt>=k){
		return ;
	} 	
	for(int i=0;i<p[root].size();i++){
		int son=p[root][i];
		dfs_s(son,cnt+1,root);
	}
}

int h[100000],W[100000];
int book[1000000];
int a[40][40];
int dpp[100005];
int solve(int mid){
	
}

int main(int argc, char** argv){
	int t;
	cin>>t;
	string str;
	char a[30];
	a[0]='Z';
	map<char,int> s;

	for(int i=1;i<=26;i++){
		a[i]='A'+i-1;
		s[a[i]]=i;
	}
	while(t--){
		cin>>str;
		int flag=0;
		int n=str.size();
		int d=0;
		for(int i=0;i<n;i++){
			if(str[i]=='R'&&flag==0){
				while(i<n){
					if(str[i]=='C'){
						d=i;
						flag=1;
						break;	
					}
					i++;
				}	
			}
			
		}
		if(!(str[d-1]>='0'&&str[d-1]<='9')){
			flag=0;
		}
		if(!(str[d+1]>='0'&&str[d+1]<='9')){
			flag=0;
		}
		if(flag==1){
			int m=1;
			while(str[m]<='9'&&str[m]>='0'){
				m++;
			}
			m++;
			long long sum=0;
			while(str[m]<='9'&&str[m]>='0'){
				int s=str[m]-48;
				sum=sum*10+s;
				m++;	//cout<<s<<" "<<sum<<endl;
			}
			stack<char> s;
			while(sum){
				int m=sum%26;
				sum/=26;
				s.push(a[m]);
				if(m==0){
					sum--;
				}
			}
			
			while(!s.empty()){
				cout<<s.top();
				s.pop();
			}
			m=1;
			while(str[m]<='9'&&str[m]>='0'){
				cout<<str[m];
				m++;
			}
			cout<<endl;
		}
		else {
			int m=0; 
			while(str[m]>='A'&&str[m]<='Z'){
				m++;
			}
			int dex=m;
			m--;
			long long sum=s[str[m--]];
			int p=1; 
			while(m>=0){//cout<<sum<<" "<<str[m]<<endl;
				sum=sum+s[str[m]]*pow(26,p);
				p++;
				m--;
			}
			cout<<"R";
			while(dex<str.size()){
				cout<<str[dex++];
			}
			cout<<"C"<<sum<<endl;
			
		}
	} 
	//cout<<692%26<<"  "<<692/26<<endl;
	return 0;	
}
/******/

#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <tuple>
#include <cstring>
#include <cstdlib>
#include <bits/stdc++.h>
#include <iomanip>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <set>
#include <list>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<tuple<int,int>> vti;
stack<tuple<int, int, int>> num;/*  */
stack<tuple<int, int, int>> num2;
typedef vector<string> vs;
typedef vector<ll> vll;

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define CI cin >>
#define co cout <<
#define en << endl;



ll _sieve_size;
bitset <100002> bs;
vll primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set(); 
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((ll) i);
    }
}

bool isPrime(ll N) {
    if (N <= _sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}

int gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}


vll primeFactors(ll N) {
    vll factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_idx];
    }
    if (N != 1) {
        factors.push_back(N);
    }
    return factors;
}

vector<ll> dividers(ll N) {
    vll f = primeFactors(N);
    vector<ll> b;
    
    b.push_back(1);
    ll c = 1;
    //b.push_back(f[0]);
    //ll c = f[0];
    for (int i = 0 ; i < f.size(); ) {
        c = f[i];
        vll d;
        d.push_back(c);
        i++;
        while (c == f[i]) {
            d.push_back(c*d[d.size()-1]);
            i++;
        }
        int j = b.size();
        for (int i = 0; i < j; i++) {
            for (int k = 0; k < d.size(); k++) {
                b.push_back(b[i]*d[k]);
            }
        }
    }
    return b;
}

vll primeFactors2(ll N) {
    vll factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        if (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        while (N % PF == 0) {
            N /= PF;
        }
        PF = primes[++PF_idx];
    }
    if (N != 1) {
        factors.push_back(N);
    }
    return factors;
}

vi primeFactors3(ll N) {
    vi factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        if (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
            break;
        }
        while (N % PF == 0) {
            N /= PF;
        }
        PF = primes[++PF_idx];
    }
    if (N != 1) {
        factors.push_back(N);
    }
    return factors;
}

vi primeFactors4(ll N) {
    vi factors;

    ll PF_idx = 0;
    ll PF=primes[0];
    while (!(N%2)) {
        while (N % PF == 0) {
            N /= PF;
            //factors.push_back(PF);
        }
    }
    PF_idx = 1, PF = primes[PF_idx];
    while (N != 1 && (PF * PF <= N)) {
        while (N % PF == 0) {
            N /= PF;
            factors.push_back(PF);
        }
        PF = primes[++PF_idx];
    }
    
    if (N > 2) {
        factors.push_back(N);
    }
    return factors;
}


/*int binary_search(int k) {
    int d = 0;
    int b = 28;
    int c = 14;
    while(b != d) {
        if (a[c] )
    }

}*/

/*
typedef struct no *p_no;

struct no {
    char dado;
    vector<p_no> prox;
    p_no ant;
};

p_no criar_lista() {
    return NULL;
}

void destruir_lista(p_no lista) {
    if (lista != NULL) {
        //destruir_lista(lista->prox);
        free(lista);
    }
}

p_no adicionar_elemento(p_no lista, char x) {
    p_no novo;
    novo = new no;
    novo->dado = x;
    //novo->prox = lista;
    if (lista != NULL) {
        lista->ant = novo;
    }
    novo->ant = NULL;
    return novo;
}


void visit(int* d, vector<int> v[], int j, int* m) {
    (*d)++;
    for (int i = 0; i < v[j].size(); i++) {
        visit(d, v, v[j][i], m);
    }
    if (*d > *m) {
        *m = *d;
    }
    (*d)--;
}

ll calculate(string s, int i) {
    ll d = 0;
    if (i == s.length() - 1) {
        return s[i]=='9' ? 1 : 0;
    }
    //c[s.length()-i]='\0';
    string s2 = s.substr(i+1, s.length()-i-1);

    for (int i = 0; i < s2.length(); i++) {
        s2[i]='9';
    }
    d += (s[i]-'0') * calculate(s2,0);
    d += calculate(s, i + 1);
    
    return d;

}

ll lcm(ll a, ll b) {
    return (a / gcd(a,b)) * b;
}
*/
// typedef vector<char> vc;

// int sobra(int a[], int i, int n, int k) {
//     //int k = n - i + 1;
//     int m = i-1;
//     int t = n - i + 1;
//     for (; i < n; i++) {
//         if (a[i] - a[i-1] > k) {
//             int j = sobra(a, i+1, n, k);
//             if (j > (i-m)) {
//                 //t = t - (i-m);
//                 return j;
//             } else {
//                 return (i-m);
//                 //break;
//             }
//             //break;
//         }
//     }
//     return t;
// }
/*
std::sort(population.begin(), population.end(), [](people* a, people* b) {
    if (a->name != b->name) return a->name < b->name;
    return a->city < b->city;
});

std::sort(population.begin(), population.end(),
    [](auto& p1, auto& p2) {
        return std::tie(p1->name, p1->city) < std::tie(p2->name, p2->city); 
    });*/





// int a[200000];

//int c[100000];

int calculate(int a[], int i, int t, int n) {
    t += a[i];
    if (i == n-1) {
        if (!(t%360)) {
            return 1;
        } else {
            t -= 2 * a[i];
            if (!(t%360)) {
                return 1;
            }
            return 0;
        }
    }
    int r = calculate(a, i+1, t, n);
    if (r == 0) {
        t -= 2*a[i];
        r = calculate(a,i+1,t,n);
        if (r == 0) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return r;
    }

}



void walk(string s[], int i, int j, int n) {
    // if(y[i][j]) {
    //     return;
    // }
    //y[i][j]=1;
    // if (((i + 1) < n) && (s[i+1][j]=='1')) {
    //     walk(s,i+1,j,n);
    // } 
    if (((i-1) > -1) && (s[i-1][j]=='1')) {
        walk(s,i-1,j,n);
    } 
    // if (((j+1)<n) && (s[i][j+1]-'0')) {
    //     walk(s,i,j+1,n);
    // } 
    if (((j-1) >-1) && (s[i][j-1]-'0')) {
        walk(s,i,j-1,n);
    }
    
}
int sum(string s) {
    int t= 0;
    for (auto &e : s) {
        t += e - '0';
    }
    return !(t%4);
}


ll sum(vector<ll> p2, ll d, ll i, ll n, ll s) {
    if (i+s == n) {
        return p2[i-1];
    }
    //p2[i-1];

    ll ac = 0;

    for (int j = 1; (j < (d-1)) && ((i + s+j) <= n); j++) {
        ac = (ac + sum(p2, d, j, n, s+i)) % 1000000007;
    } 
    return (p2[i-1]*ac) % 1000000007;
}
// void insert(list<int>::iterator a[], int b) {
//     if (b < *(a[0])) {
//         a[2] = a[1];
//         a[1] = a[0];
//         a[0] = b;
//     } else if (b < a[1]) {
//         a[2] = a[1];
//         a[1] = b;
//     } else {
//         a[2] = b;
//     }
// }

ll sum(ll n, ll p) {
    if (n <= 9) {
        return (n * (n+1)) / 2;
    } else {
        ll d = n / p;
        ll s = (p * d) - 1;
        ll p2 = p;
        ll p3 = p;
        while (p2 > (n-s-1)) {
            p2 /= 10;
        }
        return (n - s) * d + sum(n - s-1, p2) + (d-1)*(d)/2 * (p3)  + sum(p3-1, p3/10) ; 
    }
}


#define CON 1000000007
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int c = 0;
        int i1 = -1, i2 = -1, i3 = - 1;
        for (int i = 0; i < s.size(); i++) {
            if ((c==0) && (s[i] == 'R')) {
                c++;
                i1 = i;
            } else if ((s[i] <= '9') && (i2 == -1)) {
                c++;
                i2 = i;
            } else if ((c>=2) && (s[i] == 'C') && (i3 == -1)) {
                c++;
                i3 = i;
            }
        }
        if (c==3) {
            int r = stoi(s.substr(i2, i3 - i2));
            int c = stoi(s.substr(i3+1, s.size() - (i3+1)));
            stringstream ss;
            int p = 26;
            while (c) {
                if (c % p) {
                    ss << (char) ((c % p) + 'A' - 1);
                    c -= (c % p);
                } else {
                    ss << (char) (('Z'));
                    c -= 26;
                }
                c /= 26;
            }
            string s2 = ss.str();
            reverse(s2.begin(), s2.end());
            co s2 << r en;
        } else {
            string s2 = s.substr(0, i2);
            int c = 0;
            int p = 1;
            for (int i = s2.size()-1; i > -1; i--) {
                c += (s2[i]-'A'+1)*p;
                p *= 26;
            }
            int r = stoi(s.substr(i2, s.size() - i2));
            co "R" << r << "C" << c en;
        }
        

    }
   
   

    
   
}
/*************/
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#%#@#%@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+--=:=*:=%@*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=+*#*+=#=-*=-@@@@@@@@@@@@@@@==+-::@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@****+*##*#*==+:#@@@@@@@@@@@@++=======:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#**+**+#*#*-=*-#@@@@@@@@@@+=**+%#*+==-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=*+*#+*###@%#*+=@@@@@@@@@@@@@@@@@@@+==@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=====***===#%#-#=#@@@@@@@@@@@@@@@@@@@+==@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=+%+=====++##%*-*=#@@@@@@@@@@@@@@@@@@====@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%=%%==++++++#%%++==#%@@@@@@@@@@@@@@@@@=+===@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+%*#=++++*@@@@#=-=+*%@@@@@@@@@@@@@@@@@====:@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+=++==++*+=@@@##-+-*##@@@@@@@@@@@@@@@@=+===:@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*+*###*+==+@%@@#*==#+@@@@@@@@@@@@@@@@@=+====+@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+++=+++===+@@%###*+=++@@@@@@@@@@++#*::++=====@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:-=+===+==++%@%#%##*===========================@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:.-=*===:+*===-==+=*%%%#+==========================+#@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-====#+===+*-======**%%%#*====+=====+=+=====+++*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@==++==-#+=====-+=*%+*=*#%#*+==*++++++******#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@======+%*==============*%#%#*++++*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=+++*+++*+=+=========++##%###+++@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+++++#+%*-*##===++==*===++**#*=@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=+++++##*==+=**+*%#%+*+-=-=+++++#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=+++*#%#=*:==+###%**%=++**:-*==+*%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=++++#%%@#=**:*=-==#=*+-%==-=+**%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=++++%@@*%#%%+-#++%*@#+-=+*%#%%=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=++*#+@@##:%#**#*-#--=++:+##*#=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-+++*#@@@%=#+###+%+*=-=#+:-+++::@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=++*##@@@@*===-#+**-+:+=-#*==+-=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=-+*+#+@@@@@+%++-*+-#+#=%=#++=+=+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@===++**@@@@@@+==#:##+==*=###*=*=-:@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@%-===**#+@@@@@@@%-===*#+#=+=##-+==+:+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@-+===*#@@@@@@@@@===+==+=-*==*#%+#-=+:--@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@%=====#@@@@@@@@@@*#+*-*=*+--+:=+-=--=*-*%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@=+===#@@@@@@@@@@:@+=:---=*%+#--+==+=++=#+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@=+==++@@@@@@@@@@@++++*++-+=*---=+-:+=+*%++#+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@===+*@@@@@@@@@@@%#+**#+=-=-==+%*=--=%=#+**=%*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@-==+%@@@@@@@@@@@@*--:*+%-+#=*+--=-+=*=*=*#++*#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@%==+@@@@@@@@@@@@@@#+#+#%%*-=-#=##==+==*#*##*##*-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@===%+@@@@@@@@@@@@@%#*%==%%+*==#=+=#=**=*#+===+=+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@==-#+@@@@@@@@@@@@@**+%+*+%*+=++%+=#+==*#**+==++==@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@=+==-#@@@@@@@@@@@@**+**++***+==*+====:++*=+==++++-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@====-=-@@@@@@@@@@@*-++==+++++=++++*+++++=++==++++-@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@-=%*@@+@@@@@@@@@@==++==++====++*#**+%+++=+++=+*++=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@%@%%@@@@@@@@@@@++*+===+-+=+++*##@***++==++=+*+*=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=-*++=+=++=+++**@@@**+++=+++=+*+*+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+==++=++====++++*@@%**+++=++=++*+=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@++*+=++=+=++****@@@@#**+++++==+*+=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@++*+==++==++***@@@@@****++++++**+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@==**=+++=++++**@@@@@@****++=++++=+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define wait cout << "WAIT" << endl
#define rep(i, j, n) for (ll i = j; i < n; i++)
const int mod = 1e9 + 7;

void print(vll a)
{
    for (auto &e : a)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        ll l = s.length();
        int fl = 1; // store the system. BC23 is 1st, R23C55 is 2nd
        rep(i, 0, l - 1)
        {
            if ((s[i] - '0' <= 9 && s[i] - '0' >= 0) && (s[i + 1] - 'A' >= 0 && s[i + 1] - 'A' <= 26))
            {
                fl = 2;
                break;
            }
        }
        // cout << fl << " ";
        if (fl == 1)
        {
            string ans = "", tem = "";
            ans += 'R';
            ll i = 0;
            while (s[i] - 'A' >= 0 && s[i] - 'A' <= 26)
            {
                tem += s[i];
                i++;
            }
            while (i < l)
            {
                ans += s[i];
                i++;
            }
            ans += 'C';
            reverse(tem.begin(), tem.end());
            ll p = 0;
            rep(i, 0, tem.length())
            {
                p += (tem[i] - 'A' + 1) * pow(26, i);
            }
            ans += to_string(p);
            cout << ans << endl;
        }
        else
        {
            ll c = 0;
            string tem = "", ro = "";
            rep(i, 0, l)
            {
                if (c >= 2)
                {
                    tem += s[i];
                }
                if (s[i] - 'A' >= 0 && s[i] - 'A' <= 26)
                {
                    c++;
                }
                if (c == 1 && !(s[i] - 'A' >= 0 && s[i] - 'A' <= 26))
                {
                    ro += s[i];
                }
            }
            ll col = stoll(tem); // 494
            string ans = "";
            while (col > 0)
            {
                if (col % 26 == 0)
                {
                    ans += 'Z';
                    col /= 26;
                    col--;
                }
                else
                {
                    ans += char('A' + (col % 26) - 1);
                    col /= 26;
                }
            }
            reverse(ans.begin(), ans.end());
            // cout << ans << " " << ro << endl;
            ans += ro;
            cout << ans << endl;
        }
    }
    return 0;
}
/***********/
// ▄︻┻═┳一⸔Aηkiт⸕

 // faltu constructive




#include<bits/stdc++.h>
/* 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
*/
using namespace std;
/*
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
*/
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define int long long
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
// #define endl "\n"
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define er cout<<endl; return
#define ec cout<<endl; continue
#define eb cout<<endl; break
void pyes(){cout<<"YES\n";}
void pno(){cout<<"NO\n";}
void pzero(){cout<<"0\n";}
void pone(){cout<<"1\n";}
void pnegone(){cout<<"-1\n";}
void here(long long n){cout<<"here "<<n<<"\n"; return;}
 
 
#define ld long double
#define pll pair<ll,ll>
// #define lcm(a,b) (a*1LL*(b/__gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define rep(i,j,k) for(ll i=j;i<=k;i++)
#define rrep(i,j,k) for(ll i=j;i>=k;i--)
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
typedef pair<int, int> pii;
// typedef pair<long long int, long long int> pall;
typedef vector<int> vi;
typedef vector<long long> vll;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#define debug2(x, y)cerr<<#x<<"="<<x<<", "<<#y<<"="<<y<<endl;
#define debug3(x, y, z)cerr<<#x<<"=" <<x<<", "<<#y<<"="<<y<<", \
"<<#z<<"="<<z<<endl;
#define debug4(a, b, c, d)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", \
"<<#c<<"="<<c<<", "<<#d<<"="<<d<<" "<<endl;
#define debug5(a, b, c, d, e)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", \
"<<#c<<"="<<c<<", "<<#d<<"="<<d<<", "<<#e<< "="<<e<<endl;
#define debug6(a, b, c, d, e, f)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", "<<#c<<"="<< c<<", \
"<<#d<<"="<<d<<", "<<#e<< "="<<e<<", "<<#f<<"="<<f<<endl;
#else
#define debug(x)
#define debug2(x, y)
#define debug3(x, y, z)
#define debug4(a, b, c, d)
#define debug5(a, b, c, d, e)
#define debug6(a, b, c, d, e, f)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(multimap <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(queue <T> v) {cerr << "[ "; int f = 0; while (!v.empty())cerr << (f++ ? ", " : ""), _print(v.front()), v.pop(); cerr << " ]";}
template <class T> void _print(stack <T> v) {cerr << "[ "; int f = 0; while (!v.empty())cerr << (f++ ? ", " : ""), _print(v.front()), v.pop(); cerr << " ]";}
template <class T> void _print(deque <T> v) {cerr << "[ "; int f = 0; while (!v.empty())cerr << (f++ ? ", " : ""), _print(v.front()), v.pop(); cerr << " ]";}
// https://codeforces.com/blog/entry/125435
 
 
template<typename T> void Unique(T &a) {a.erase(unique(a.begin(), a.end()), a.end());}
template<typename T> istream& operator>>(istream& in, vector<T>& a) {for(auto &x : a) in >> x; return in;};
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for(auto &x : a) out << x << ' '; return out;};
 
/* 
template <class T> using oset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
template <class T> using roset = tree<T, null_type,greater<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
template <class T> void _print(oset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(roset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
*/
 
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll expo(ll a, ll b, ll mod) {a %= mod; ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll inv(ll a, ll b) {return expo(a, b - 2, b);}
ll nCr(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mul(a, inv(b, m), m) + m) % m;}  //only for prime m
 
// big prime nos :- 694202137 1000004119 1000001269   1000001969  1000003769  1000004569  1000006967
// use 61 & 1000004119
 
 
 
//-------------------------------------------꧁START꧂------------------------------------------------



void BELLA_CIAO(){
// i confirm
string s; cin>>s;
ll n = s.size();
ll x=0;
rep(i,0,n-1){
    if(x==0 && s[i]=='R'){
        x++;
    }
    else if(x==1 && s[i]>='0' && s[i]<='9'){
        x++;
    }
    else if(x==2 && s[i]=='C'){
        x++;
    }
    debug2(i,x)
}

vll v(7,0); // min value for len i
vll pfs(7,0);
rep(i,1,6){
    v[i] = (ll)(pow(26,i-1)) + v[i-1];
    pfs[i] = (ll)(pow(26,i)) + pfs[i-1];
} debug(v) debug(pfs)



string as="";
debug(x)
if(x==3){ // R23C55 -> BC23
    ll a = 0;
    rrep(i,n-1,0){
        if(s[i]=='C')break;
        a += ((ll)(s[i]-'0')*(pow(10,n-1-i)));
    }  // a = 55
    debug(a)
    ll len = 0;
    rep(i,1,6){
        if(a>=v[i])len=i;
        else break;
    } debug(len)
    // rep(i,0,len-1)as.pb('.');
    rrep(j,len,1){ debug(j)
        ll minus = 0; char c = '.';
        rep(i,1,26){
            ll x = (ll)(pow(26,j-1))*i;  debug2(i,x)
            if(x+v[j-1]<=a){
                c = (char)((ll)('A')+i-1);
                minus=x;
            }
            else break;
        } debug2(c,minus)
        as.pb(c);
        a-=minus; debug(a)
    } debug(as)
    cout<<as;
    rep(i,1,n-1){
        if(s[i]=='C')break;
        cout<<s[i];
    }
    er;
}
else{ // BC23 -> R23C55
    ll a=0, len=0;
    rrep(i,n-1,0){
        if(s[i]>='A' && s[i]<='Z'){
            len++;
            a += (pow(26,len-1)*(ll)(s[i]-'A'+1));
        }
        else{
            as.pb(s[i]);
        }
    }
    reverse(all(as));
    cout<<'R'<<as<<'C'<<a; er;
}



return;
}
//--------------------------------------------꧁END꧂--------------------------------------------------
 
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
fastio();  // interactive    
int t;
t=1;
cin>>t; //                                 /
int _t=t;
int ____test_case____=_t-t+1;
 
while(t--){ ____test_case____=_t-t; debug(____test_case____)
// WA ON TESTCASE 2
//  if(____test_case____==55){
 
// ll n; cin>>n;
// vll v(n); cin>>v;
// ll l=0;
// rep(i,0,n-1){
//     if(v[i]==1){
//         l|=(1ll<<i);
//     }
//     // l = (l*10)+v[i];
// }
// // string s,ss; cin>>s>>ss;
// // cout<<s<<ss; return 0;
// cout<<l; return 0;

// }
 
   BELLA_CIAO();
}
 
cout<<fixed<<setprecision(10);
cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
 
return 0;
}
/**********/
///Bismillahir Rahmanir Rahim
///ALLAHU AKBAR
#include<bits/stdc++.h>
#define flash() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sc1i(a) scanf("%d",&a)
#define sc2i(a,b) scanf("%d %d",&a,&b)
#define   sc3i(a,b,c)       scanf("%d %d %d",&a, &b, &c)
#define    p1i(a)           printf("%d\n",(a))
#define    p2i(a,b)        printf("%d %d\n",(a), (b))
#define    p3i(a,b,c)      printf("%d %d %d\n",(a), (b), (c))


#define sc1l(a) scanf("%lld",&a)
#define sc2l(a,b) scanf("%lld %lld",&a,&b)
#define   sc3l(a,b,c)       scanf("%lld %lld %lld",&a, &b, &c)
#define    p1l(a)           printf("%lld\n",(a))
#define    p2l(a,b)        printf("%lld %lld\n",(a), (b))
#define    p3l(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))


#define c(x)       cout<<x<<endl
#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl
#define ci   cout<<"Impossible"<<endl
#define f1(i,a,b)  for(ll i=a;i<b;i++)
#define f2(i,a,b) 	for(ll i=a;i<=b;i++)
#define fr(i,a,b)   for(ll i=a;i>=b;i--)
#define LCM(a,b)                (a / __gcd(a,b) ) *b
#define GCD(a,b)                __gcd(a,b)
#define dist(x1,y1,x2,y2)       sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))
#define distl(x1,y1,x2,y2)      sqrtl((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))

#define geta(a,n)           for(int i=0;i<n;i++) cin>>a[i]
#define puta(a,n)           for(int i=0;i<n;i++) cout<<a[i]<<" "

#define geta1(a,n)           for(int i=1;i<=n;i++) cin>>a[i]
#define puta1(a,n)           for(int i=1;i<=n;i++) cout<<a[i]<<" "


#define getar(a,n)           for(int i=0;i<n;i++) scanf("%lld",&a[i])
#define getar1(a,n)           for(int i=1;i<=n;i++) scanf("%lld",&a[i])
#define putar(a,n)           for(int i=0;i<n;i++) printf("%lld ",a[i])
#define putar1(a,n)           for(int i=1;i<=n;i++) printf("%lld ",a[i])
#define all(a)                  a.begin(),a.end()
#define lla(A)                  A.rbegin(), A.rend()
#define unique(a)               sort(all(a)),a.erase(unique(all(a)),a.end())
#define pb                      push_back
#define mk                      make_pair
#define ff                      first
#define ss                      second
#define greatersrt(v)  sort(v.begin(),v.end(),greater<ll>())
#define min3(a,b,c)             min(a,min(b,c))
#define min4(a,b,c,d)           min(a,min(b,min(c,d)))
#define max3(a,b,c)             max(a,max(b,c))
#define max4(a,b,c,d)           max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)         max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)         min(min3(a,b,c),min(d,e))
#define mem(a,x)                memset(a,x,sizeof(a))
#define see_you                     return 0
#define sorta(a,n)                   sort(a,a+n)
#define SORT(v)                 sort(v.begin(),v.end())
#define REV(v)                  reverse(v.begin(),v.end())

#define nl                        printf("\n")
int caseno=0;

#define  printcase             printf("Case %d: ",++caseno)
#define Debug                   cout<<endl<<"AND I AM IRONMAN"<<endl;
#define binleastsigonebit(x)    __builtin_ffs(x)
#define binleadingzeroes(x)     __builtin_clz(x)
#define bintrailingzeroes(x)    __builtin_ctz(x)
#define bintotalones(x)         __builtin_popcount(x)

//Datatypes
#define ll                      long long
#define ULL                     unsigned long long
#define LD                      long double
#define UI                      unsigned int
#define US                      unsigned short
#define pii             pair<int,int>
#define pll             pair<ll,ll>


//Constants
const int mod = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
const int maxn = 211111;
const int maxn1 = 111111;

#define PI                      acos(-1.0)
#define EulerGamma              0.57721566490153286060651209


//ll powmod(ll base, ll power) { if (power == 0) return 1; else {ll cur = powmod(base, power / 2); cur = cur * cur; cur = cur % MOD;if (power % 2 == 1) cur = cur * base; cur = cur % MOD; return cur;}


///-----------------------------GRAPH MOVES----------------------------////
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
///ceil(x/y)==(x+y-1)/y

///-----------------------------VARIOUS FUNCTIONS----------------------------////

bool isprime(long long int n)
{
    bool flag = true;
    for(long long int i = 2; i*i <= n; ++i)
        //for(int i = 2; i <= sqrt(n); ++i)
        //for(int i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

bool ispoweroftwo (ll x)
{
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));
}

inline void normal(ll &a) { a %= mod; (a < 0) && (a += mod); }
inline ll modMul(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a * b) % mod; }
inline ll modAdd(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); return (a + b) % mod; }
inline ll modSub(ll a, ll b) { a %= mod, b %= mod; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1LL) r = modMul(r, b); b = modMul(b, b); p >>= 1LL; } return r; }
inline ll modInverse(ll a) { return modPow(a, mod - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }


ll amar_ceil(ll x,ll y)
{
    return (x+y-1)/y;
}

long long binpow(long long base,long long power)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base);
                base = (base*base);
                power/=2;
        }
        return result;
}

long long  binmod(long long base,long long power,long long M)
{
        long long result=1;
        while (power>0)
        {
                if (power%2==1)
                        result = (result*base)%M;
                base = (base*base)%M;
                power/=2;
        }
        return result;
}

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

///ITS NOT WHO I AM UNDERNEATH,BUT WHAT I DO THAT DEFINES ME.



//ll a[maxn];

string col_number_to_string(ll number)
{
    string st="";
    while(number>0)
    {
        ll rem=number%26;
        if(rem==0)
        {
            st+='Z';
            number=(number/26-1);
        }
        else
        {
            st+=(rem-1)+'A';
            number=number/26;
        }
    }
    reverse(st.begin(),st.end());

    return st;


}

ll string_to_number(string &s)
{
    reverse(s.begin(),s.end());
    ll col=0,po=1;
    for(ll i=0;i<s.size();i++)
    {
        col+=po*(s[i]-'A'+1);
        po*=26;
    }

    return col;

}

int main()
{
    flash()


    ll i,j,t,cas=0,k;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();

        bool f=0;

        if(s[0]=='R' and isdigit(s[1]))
        {
            for(i=1;i<n;i++)
            {
                if(s[i]=='C' and isdigit(s[i-1]))
                {
                    f=1;break;
                }
            }
        }

        ll r,c;

        if(f)    ///type 1
        {
            r=0,c=0;
            ll idx=1;
            for(i=1;s[i]!='C';i++)
            {
                r=r*10+(s[i]-'0');
                idx++;
            }
          //  cout<<"IDX "<<idx<<endl;
            idx++;
            for(i=idx;i<n;i++)
            {
                c=c*10+(s[i]-'0');
            }
          //  cout<<c<<endl;
            string ans=col_number_to_string(c);
            cout<<ans<<r<<endl;

        }
        else
        {
            string tst="";
            ll idx1=0;
            for(i=0;i<n;i++)
            {
                if(isdigit(s[i]))
                {
                    break;
                }
                idx1++;
                tst+=s[i];
            }

            r=0;
            for(i=idx1;i<n;i++)
            {
                r=r*10+s[i]-'0';
            }

          //  cout<<tst<<" "<<r<<endl;


           ll x=string_to_number(tst);
           cout<<"R"<<r<<"C"<<x<<endl;
        }




    }



    see_you;
}
/*****/
            /**************************************
            *                                     *
            *            sasta_samurai            *
            *                                     *
            **************************************/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
#define ll long long int
#define ld long double
#define cd complex<ld>
#define pi pair<int, int>
#define pl pair<ll,ll>
#define pd pair<ld,ld>
#define vi vector<int>
#define vs vector<string>
#define vd vector<ld>
#define vl vector<ll>
#define vpi vector<pi> 
#define vpl vector<pl> 
#define vvl vector<vl> 
#define vcd vector<cd>
#define st string
#define mll map<ll,ll>
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define in(a,n) for(ll i=0;i<n;++i) cin>>a[i];
#define pb push_back
#define mk make_pair
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define dis(v) for(auto i:v)cout<<i<<" ";cout<<endl;
#define display(arr,n) for(int i=0; i<n; i++)cout<<arr[i]<<" ";cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);srand(time(NULL));
#define l(a) a.length()
#define fr first
#define sc second
#define mod 1000000007
#define endl "\n" 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(queue <T> v) {cerr << "{"; while(v.size()){ _print(v.front()); cerr << " ";v.pop();} cerr << "}"; }
template <class T> void _print(stack <T> v) {stack<T> a; while(v.size()) a.push(v.top()), v.pop(); cerr << "{";  while(a.size()){ _print(a.top()); cerr << " ";a.pop();}  cerr << "}"; }
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fr); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
ll add(ll x,ll y)  {ll ans = x+y; return (ans>=mod ? ans - mod : ans);}
ll sub(ll x,ll y)  {ll ans = x-y; return (ans<0 ? ans + mod : ans);}
ll mul(ll x,ll y)  {ll ans = x*y; return (ans>=mod ? ans % mod : ans);}


//string decimaltobinary (ll n,ll length) {return bitset<length>(n).to_string();}
const int MOD = 1000000007;
void google(int t) {cout << "Case #" << t << ": ";}
ll binaryMultiply(ll a, ll b,ll M=mod){ll ans = 0;while (b) {if (b & 1){ans = (ans + a) % M;}a = (a + a) % M;b >>= 1;} return ans;}
ll binaryExponentiation(ll a, ll b,ll M=mod){a %= M;ll ans = 1;while (b){if (b & 1){if(M>mod) ans = binaryMultiply(ans, a);else ans = (ans * 1LL * a) % M;}if(M>mod) a = binaryMultiply(a, a);else a = (a * 1LL * a) % M;b >>= 1;}return ans;}
vector<ll> sieve(ll n) {ll *arr = new ll[n + 1](); vector<ll> vect; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void extendgcd(ll a, ll b, vi &v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass a vector of size 3
ll mminv(ll a, ll M) {vi arr(3); extendgcd(a, M, arr); return arr[0];} //for non prime M
ll mminvprime(ll a, ll M) {return binaryExponentiation(a, M - 2, M);}//for prime M
ll phi(ll n){ll result=n;for(ll i=2;i*i<=n;i++){if(n%i==0){while(n%i==0) n/=i;result-=result/i;}}if(n>1) result-=result/n; return result;}
const int MX = 100001;
const ll MOD1 = 1e9+7;
const ll MOD9 = 998244353;
const ll INF = 1e18;
const int TWO_MOD_INV = 500000004;
bool sq(ll n){
    ll i = sqrt(n);
    return (i*i == n);
}
bool check(ll i,ll j,ll n,ll m){
    if(i<0 || j<0 || i>=n || j>=m){
        return false;
    }
    return true;
}
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); 
    for (int p = 2; p * p <= n; p++)
    {
    if (prime[p] == true)
    {
    for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
    }
    for (int p = 2; p <= n; p++)
    if (prime[p])
    cout << p << " ";
}
ll total_sum(ll start,ll end){
    return (
        (((end - start + 1) % MOD) * ((start + end) % MOD) % MOD)
        * TWO_MOD_INV % MOD
    );
}
/* sparse table */
void build(vl &a){
ll sparse[200010][32];
ll lg[200010];
    // memset(sparse,-1,sizeof sparse);
    ll n = a.size();
    for (int i=2;i<=n;i++) lg[i]=lg[i>>1]+1;
    for(int i=0;i<n;i++){
        sparse[i][0] = a[i];
    }
    for(int j=1;j<30;j++){
        for(int i=0;i+(1<<j) <= n;i++){
            sparse[i][j] = max(sparse[i][j-1],sparse[i+(1<<(j-1))][j-1]);
        }
    }
}
/*ncr function*/
ll binexp(ll a,ll b, ll m){
    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%m;
        }
        a = (a*a)%m;
        b >>= 1;
    }
    return res;
}
vl fact(1e6+1,1);
void factorial(){
    for(int i=1;i<=1e6;i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
}
ll ncr(ll n,ll k){
    ll ans = fact[n];
    ll den = (fact[n-k]*fact[k])%mod;
    den = binexp(den,mod-2,mod);
    ans = (ans*den)%mod;
    return ans;
}
// important syntaxes here
/* sparse table*/
// ll d = lg[abs(x1-x2)];
// ll max_height = max(sparse[min(x1,x2)-1][d],sparse[max(x1,x2)-(1<<d)][d]);
/*ordered_set*/
//order_of_key (k) : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).
//cout<<setprecision(15)<<pow(1.1,x)
void solve()
{
    string s; cin>>s;
    ll n = l(s);
    ll num = 0;
    ll type = 2;
    loop(i,0,n){
        if(s[i]=='C' && num){
            type = 1;
            break;
        }
        if(s[i]-'0'<=9 && 0<=s[i]-'0') num++;
    }
    if(type==1){
        string row = "";
        ll ind;
        loop(i,1,n){
            if(s[i]=='C'){
                ind = i;
                break;
            }
            row += s[i];
        }
        ll col = 0;
        ll a = 1;
        loop(i,ind+1,n) col = col*10 + s[i]-'0';
        string ans = "";
        while(col){
            ll b = (col/a)%26;
            if(!b) b = 26;
            ans += 'A'+b-1;
            col -= a*b;
            a*=26;
        }
        reverse(all(ans));
        cout<<ans;
        cout<<row<<endl;
    }
    else{
        string col = "";
        string row = "";
        loop(i,0,n){
            if(s[i]-'0'<=9 && 0<=s[i]-'0') row += s[i];
            else col += s[i];
        }
        ll ans = 0;
        ll a = 1;
        while(col.size()){
            ans += (a*(col.back()-'A'+1));
            a *= 26;
            col.pop_back();
        }
        cout<<"R"<<row;
        cout<<"C"<<ans<<endl;
    }

}
int main()
{
    fast
    int	t=1;
    cin>>t;
    factorial();
    while(t--)
    {
        solve();
    }
    
    return 0;
}
/*****/
/*
  Keep Watching (ಠ_ಠ)

█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
█░░░░░░░░░░░░░░███░░░░░░░░░░░░░░█░░░░░░░░░░░░░░░░███░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░█░░░░░░█████████░░░░░░██░░░░░░░░█
█░░▄▀▄▀▄▀▄▀▄▀░░███░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀▄▀░░███░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀░░█░░▄▀░░█████████░░▄▀░░██░░▄▀▄▀░░█
█░░▄▀░░░░░░▄▀░░███░░▄▀░░░░░░░░░░█░░▄▀░░░░░░░░▄▀░░███░░▄▀░░░░░░▄▀░░█░░▄▀░░░░░░░░░░█░░░░▄▀░░░░█░░▄▀░░█████████░░▄▀░░██░░▄▀░░░░█
█░░▄▀░░██░░▄▀░░███░░▄▀░░█████████░░▄▀░░████░░▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀░░███████████░░▄▀░░███░░▄▀░░█████████░░▄▀░░██░░▄▀░░███
█░░▄▀░░░░░░▄▀░░░░█░░▄▀░░░░░░░░░░█░░▄▀░░░░░░░░▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀░░░░░░░░░░███░░▄▀░░███░░▄▀░░█████████░░▄▀░░░░░░▄▀░░███
█░░▄▀▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀▄▀░░███░░▄▀░░██░░▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░███░░▄▀░░███░░▄▀░░█████████░░▄▀▄▀▄▀▄▀▄▀░░███
█░░▄▀░░░░░░░░▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░░░░░▄▀░░░░███░░▄▀░░██░░▄▀░░█░░░░░░░░░░▄▀░░███░░▄▀░░███░░▄▀░░█████████░░▄▀░░░░░░▄▀░░███
█░░▄▀░░████░░▄▀░░█░░▄▀░░█████████░░▄▀░░██░░▄▀░░█████░░▄▀░░██░░▄▀░░█████████░░▄▀░░███░░▄▀░░███░░▄▀░░█████████░░▄▀░░██░░▄▀░░███
█░░▄▀░░░░░░░░▄▀░░█░░▄▀░░░░░░░░░░█░░▄▀░░██░░▄▀░░░░░░█░░▄▀░░░░░░▄▀░░█░░░░░░░░░░▄▀░░█░░░░▄▀░░░░█░░▄▀░░░░░░░░░░█░░▄▀░░██░░▄▀░░░░█
█░░▄▀▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░██░░▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀▄▀▄▀░░█░░▄▀▄▀▄▀▄▀▄▀░░█░░▄▀░░██░░▄▀▄▀░░█
█░░░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░██░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░░░░░█░░░░░░░░░░░░░░█░░░░░░██░░░░░░░░█
█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef map<string, int> msi;
typedef map<string, string> mss;
typedef map<int, int> mii;

#define endl "\n"
#define ENDL "\n"
#define endla(n) " \n"[i == n - 1]
#define ENDLA(n) " \n"[i == n - 1]
#define el cout << "\n";
//#define Ber0Silk int main (void)
#define cin(v) for(auto& i : v) cin >> i;
#define cout(v) for(auto& i : v) cout << i << " "; cout << ENDL;
#define pb push_back
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rv(x) return void(cout << x << endl)
#define sz(v) (ll)v.size()
#define ln(v) (ll)v.length()
#define all(v) v.begin(),v.end()
#define next continue;
#define NEXT continue;
#define F first
#define S second
#define on(n) [i == n - 1]
#define YES rv("YES");
#define NO rv("NO");
#define wc(x) (x ? "YES" : "NO")
#define _ rv(-1);
#define tc ll t; cin >> t; while(t--) solve();
#define otc solve();
#define Fuck_SCU break;

const int INF = 1e9;
//const long long N = 1e5 + 5;
const double PI = acos(-1);
const ll MOD = 998244353;

void lower(string& s){
    for(auto& i : s){
        i = (char)tolower(i);
    }
}

void upper(string& s){
    for(auto& i : s){
        i = (char)toupper(i);
    }
}

template <class T>
vector<pair<T, ll>> factors(T x) {
    vector<pair<T, ll>> v;
    int t = 0;
    while (x % 2 == 0) {
        x /= 2;
        t++;
    }
    if (t > 0) v.push_back({ 2, t });
    for (T i = 3; i * i <= x; i += 2) {
        t = 0;
        while (x % i == 0) {
            x /= i;
            t++;
        }
        if (t > 0) v.push_back({ i, t });
    }
    if (x > 1) v.push_back({ x, 1 });
    return v;
}

// Solution here

void solve(){
    string s; cin >> s;
    int f = s.find('C');
    int n = ln(s);
    if(s[0] == 'R' and isdigit(s[1]) and f != -1){
        int c = 0;
        for(int i = f + 1;i < n;i++){
            c = c * 10 + (s[i] - '0');
        }
        string fuck;
        while(c){
            if(c%26){
                fuck += char(c%26 + 'A' - 1);
                c /= 26;
            }else{
                fuck += 'Z';
                c = c / 26 - 1;
            }
        }
        reverse(all(fuck)); cout << fuck;
        for(int i = 1;i < f;i++) cout << s[i];
    }else{
        int i = 0;
        int r = 0,c = 0;
        while(!isdigit(s[i])){
            r = r * 26 + (s[i++] - 'A' + 1);
        }
        while(i < n){
            c = c * 10 + (s[i++] - '0');
        }
        cout << "R" << c << "C" << r;
    }

    el
}



int main(){
    FAST
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    //cout << setprecision(0) << fixed;
    //calc();
    tc
}

/*
 CODING. . .
*/
/*****/
#include<bits/stdc++.h>
using namespace std;
// #include "atcoder/math.hpp"
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>
// #include <functional> // for less
// using namespace __gnu_pbds;
// this is ordered_set in which we have all operations of sets. Additionally we have two more func:
// st.find_by_order(x); => this will return an iterator to the element at index x;
// st.order_of_key(x);=> this will return count of elements that are strictly less than x;
// replace DATA_TYPE with the data you want to store in the ordered_set
// replace less<DATA_TYPE> with any comparator you wish according to which the elements will be arranged.
// typedef tree< DATA_TYPE , null_type, less<DATA_TYPE>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//---------------------------ORDERED SET--------------------------------------
// template<typename T>
// using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// typedef tree<ll, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
// -----------------------------RANDOM NUMBER GENERATOR ---------------------
// #ifdef RNG
// unsigned seed=chrono::high_resolution_clock::now().time_since_epoch().count();
// mt19937 rng(seed);
// #endif
#define endl "\n"
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define fi first
#define se second
#define set_bits __builtin_popcountll
#define precise(ans)  cout<<fixed<<setprecision(15)<<ans
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define sz(x) ((ll)(x).size())
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   prllf("%d\n",x)
#define pl(x)   prllf("%lld\n",x)
#define ps(s)   prllf("%s\n",s)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define clr(x) memset(x, 0, sizeof(x))
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll>  pii;
typedef pair<ll, ll>    pl;
typedef vector<ll>     vi;
typedef vector<vi>      vvi;
typedef vector<vvi>    vvvi;
typedef vector<ll>      vl;
typedef vector<vl>      vvl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define MOD1 998244353
const double eps = 1e-9;
const ll INF = (ll) 1e9;
const ll inf64 = 2e18;
const ll INF64 = 9e18;
ll dx[4] = {0, 0, 1, -1}; ll dy[4] = {1, -1, 0, 0};
ll ddx[8] = { -1, 0, 0, 1, 1, -1, 1, -1};
ll ddy[8] = {0, 1, -1, 0, 1, -1, -1, 1};
const ll dddx[16] = {1, 0, 0, -1, 1, 1, -1, -1, 2, 2, 1, 1, -1, -1, -2, -2};
const ll dddy[16] = {0, -1, 1, 0, -1, 1, -1, 1, -1, 1, -2, 2, -2, 2, -1, 1};
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _prll(x); cerr << endl;
#else
#define debug(x)
#endif
void _prll(ll t) {cerr << t;} void _print(ll t) {cerr << t;} void _prll(string t) {cerr << t;} void _prll(char t) {cerr << t;}
void _prll(lld t) {cerr << t;} void _prll(double t) {cerr << t;} void _prll(ull t) {cerr << t;}
template <class T, class V> void _prll(pair <T, V> p); template <class T> void _prll(vector <T> v);
template <class T> void _prll(set <T> v);
template <class T, class V> void _prll(map <T, V> v); template <class T> void _prll(multiset <T> v);
template <class T, class V> void _prll(pair <T, V> p) {cerr << "{"; _prll(p.ff); cerr << ","; _prll(p.ss); cerr << "}";}
template <class T> void _prll(vector <T> v) {cerr << "[ "; for (T i : v) {_prll(i); cerr << " ";} cerr << "]";}
template <class T> void _prll(set <T> v) {cerr << "[ "; for (T i : v) {_prll(i); cerr << " ";} cerr << "]";}
template <class T> void _prll(multiset <T> v) {cerr << "[ "; for (T i : v) {_prll(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _prll(map <T, V> v) {cerr << "[ "; for (auto i : v) {_prll(i); cerr << " ";} cerr << "]";}
vector<ll> factors(ll n) {vector<ll> f; while (n % 2 == 0) {f.push_back(2) ;    n = n / 2  ;} for (ll x = 3; x * x <= n; x += 2) {while (n % x == 0) {f.push_back(x); n /= x;}} if (n > 1) f.push_back(n); return f;}
ull power(ull x , ull y,ll p) {ull res = 1; while (y > 0) { if (y & 1) res = res % p * x % p; y = y >> 1;  x = x % p * x % p;  } return res;}
bool palindrome(const string &s) {ll n = s.length(); for (ll i = 0; i < n; i++) {if (s[i] != s[n - i - 1]) return false;} return true;}
ll inv(ll a, ll p) {return power(a, p - 2,p);}
ll nCk(ll n, ll k, ll p, vl fact) {return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n - k], p)) % p;}
bool isPrime(ll n) {if (n <= 1) {return false;} for (ll i = 2; i < n; i++) {if (n % i == 0) {return false;}} return true;}
map<ll, ll> primeFactorize(ll x) {ll num = x; map<ll, ll> store; for (ll i = 2; i <= sqrt(x); i++) {ll cnt = 0; while ((num % i) == 0) {num /= i; cnt++;} if (cnt) store[i] = cnt;} if (num > 1) store[num]++; return store;}
vl initfact(ll n, ll p = pow(10, 9) + 7) {vector<ll> fac(n + 1); fac[0] = 1; for (ll i = 1; i <= n; i++) {fac[i] = (fac[i - 1] * i) % p;} return fac;}
ll countSetBits(ll n) {ll count = 0; while (n) {count += n & 1; n >>= 1;} return count;}
ll int_sqrt (long long x) {long long ans = 0; for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}} return ans;}
vector<ll>par;
vector<ll>rnk;
ll find(ll x){if(par[x]==x){return x;}else{return par[x]=find(par[x]);}}
void merge(ll x,ll y){ll px=find(x);ll py=find(y);if(rnk[px]>rnk[py]){par[py]=px;rnk[px]+=rnk[py];}else{par[px]=py;rnk[py]+=rnk[px];}}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

bool dek() {

}
pl dek2() {
}

ll rec(){
}

ll dfs(){ 
}

void chal() {
  string st;
  cin>>st;
  ll i=0;
  string s,s2;
  while(i<st.length() && isalpha(st[i])){
    s+=st[i];
    i++;
  }
  while(i<st.length() && isdigit(st[i])){
    s2+=st[i];
    i++;
  }
  if(i==st.length()){
    ll ans=0;
    fo(j,s.length()){
      ans*=26;
      ans+=s[j]-'A'+1;
    }
    cout<<"R"<<s2<<"C"<<ans<<endl;
  }else{
    ll ans=0;
    i=0;
    while(i<st.length() && st[i]!='C')i++;
    i++;
    for(;i<st.length();i++){
      ans+=(ll)(st[i]-'0');
      ans*=10;
    }
    ans=ans/10;
    // cout<<ans<<" ";
    s="";
    while(ans>0){
      if(ans%26==0){
        s+='Z';
        ans=(ans/26)-1;
      }else{
        s+=(char)(((ans%26)-1) +'A');
        ans=ans/26;
      }
    }
    reverse(s.begin(),s.end());
    cout<<s;
    Fo(j,1,st.length()){
      if(st[j]=='C')break;
      cout<<st[j];
    }
    cout<<endl;

  }
  

}
int32_t main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("Error.txt", "w", stderr);
#endif
  ll  t;
  // cout << "Chal Raha Ha";
  t = 1;
  // ll tt = clock();
  cin >> t;
  for (ll i = 1; i <= t; i++) {
    // cout << "Case #" << i << ": ";
    chal();
  }
  // cerr << "TIME = " << clock() - tt << endl;
  // tt = clock();

  return 0;
}
//##############################################################################
//1.ReadProblemClearly.CheakCouterExamples.CheakIntuation.IfTimeProveIt#
//2.23l,BrteF,Math,NT(gcd,prime,seive),prefs,tPoint,SlidWind,stl(set,mapetc)#
//3.BinaryS(orlowerUpperbound,ans),dfs,bfs,dsu,bipartite#
//4.Dp,optimized#
//##############################################################################

/******/
/*
PIKACHU
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢰⣤⣤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠻⣿⣿⣿⣿⣷⡖⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡎⠻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠘⢿⣿⣿⣿⡇⠀⠀⠉⠒⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠈⢻⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠉⠻⣿⣧⣀⠀⠀⠀⠀⠈⠑⠦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⠀⠀⠀⡅⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⠛⢆⡉⠢⢄⡀⠀⠀⠀⠈⠑⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡸⠀⠀⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⢄⡈⠒⠄⡀⠀⠀⠀⠹⠴⠒⠒⠒⠒⠒⠦⠤⢀⡀⠀⠀⠀⠀⡇⠀⠀⠀⢀⣾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠦⠌⣳⠖⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠲⣄⠀⡇⠀⠀⠀⡜⡌⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢧⡀⠀⡼⢰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠁⠀⣠⣤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢼⢠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠃⠀⢸⣿⣯⣨⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠓⢦⠀⠈⠛⠛⠛⠁⠀⠀⢀⣀⠀⠀⠀⠀⠀⣠⣤⣤⡀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡁⠀⠘⠀⠀⠀⠀⠀⡀⠀⢀⣀⡉⠁⠀⠀⠀⠀⣿⣤⣾⣿⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⣸⠀⠀⠀⠀⠀⣿⠭⣑⠻⢿⣦⢄⣀⠀⠀⠛⠛⠛⠁⠀⢠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡤⠞⠁⠀⠀⠀⠀⠀⡯⠉⠀⠈⠙⢾⣿⠏⠀⠀⠀⠀⠀⣀⣀⣸⠀⢀⣀⡀⠤⠤⢤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⣠⠋⠀⠀⠀⠀⢀⠞⠁⠀⡿⠊⠉⠀⠀⠀⠀⠸⢱⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠤⠄⠠⠿⠤⠄⣀⡀⠀⠀⠰⡀⢀⣠⠞⠁⠀⠀⠀⠀⠀⣏⠀⠀⣠⠃⠀⠀⠀⠀⠀⢀⣀⡼⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢀⠖⠁⠀⠀⠀⠀⠀⠀⠀⠀⠉⠲⢄⡀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠧⣤⠖⠁⠀⠀⠀⠀⠀⢀⡞⠛⠓⠒⠒⠒⠒⠤⠤⠄⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡖⠢⠄⣀⠀⠀⠀⣀⡠⠔⠊⠁⠀⠀⠀⠀⢀⡠⣶⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠒⠲⠤⣀⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣦⠤⠤⠄⣀⣀⠀⠀⠀⠀⠀⡀⢠⡾⠉⠒⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⠒⣡⠞⡇⠀⡠⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠢⣤
⠀⠀⠀⠀⠀⠀⠀⠈⠓⠤⣀⣀⣀⣀⣠⡤⠤⠚⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⠚⠁⣠⠞⠁⢸⠁⢰⠁⠀⠉⠒⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠁
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣞⣠⠔⠋⠀⠀⠀⡌⠀⡆⠀⠀⠀⠀⠀⠈⠑⠠⣀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⢀⡀⠀⠀⢰⠃⢰⠁⠀⢠⠖⠒⠤⢄⣀⠀⠈⠑⠢⡀⠀⠀⠀⣠⠞⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡛⠭⡉⠉⠀⡈⠀⡰⠃⠀⠀⠀⠀⠀⠉⠁⠒⠦⠬⣳⣠⠞⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⡇⠀⠈⡓⠄⠇⡴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⣀⣿⡷⣷⡏⠉⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣠⠉⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠉⠑⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢧⢠⠒⠂⠤⣄⣀⠀⠀⠀⠀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠠⠄⣀⡀⠀⠀⠀⠀⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣀⡷⢄⡀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠈⠑⢤⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢠⣶⣿⡯⢄⠴⢋⣀⣈⡭⠟⠉⠁⠀⠀⠀⠀⠈⠉⠓⠒⠂⠤⠤⢤⣠⡤⠤⠔⠛⠶⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠒⠂⠤⠤⣈⣙⠻⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀
*/
/*
   Author : Khondokar Nahian Bin Safa
*/

//Khondokar's Code

//Bismillah

#include <bits/stdc++.h>
using namespace std;

bool isRC(const string& s) 
{
    return (s[0] == 'R' && isdigit(s[1]) && s.find('C') != string::npos);
}

// Function to convert RxCy format to column-row format
string RCtoColumnRow(const string& s) 
{
    int i = 1;
    while (isdigit(s[i])) 
    {
        i++;
    }
    int row=stoi(s.substr(1, i - 1));
    int col=stoi(s.substr(i + 1));
    
    string column = "";
    while (col>0) 
    {
        int rem = (col - 1) % 26;
        column = char('A' + rem) + column;
        col = (col - 1) / 26;
    }
    return column + to_string(row);
}

string ColumnRowtoRC(const string& s) 
{
    int i = 0;
    while (isalpha(s[i])) 
    {
        i++;
    }
    string column=s.substr(0,i);
    int row=stoi(s.substr(i));
    
    int col=0;
    for (char c : column) 
    {
        col = col * 26 + (c - 'A' + 1);
    }
    return "R" + to_string(row) + "C" + to_string(col);
}

int main() 
{
    int n;
    cin>> n;
    cin.ignore();
    
    while (n--) 
    {
        string s;
        getline(cin,s);
        
        if (isRC(s)) {
            cout<< RCtoColumnRow(s) <<endl;
        } 
        else 
        {
            cout<< ColumnRowtoRC(s) <<endl;
        }
    }

    return 0;
}

//khatam,,,tata,,,bye bye

//MANATRI
/******

#include<bits/stdc++.h>
using namespace std;

// macros here
#define endl "\n"
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

// shorthand for data types and containers
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

// gcd of two numbers
long long gcd(long long a, long long b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll g = egcd(b, a % b, x, y);
    ll x1 = x, y1 = y;
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}
// find non zero x and y for the linear diophantine equation
pair<int, int> findx_y(ll a, ll b, ll c)
{
    ll x, y;
    ll g = egcd(a, b, x, y);
    {
        x = x * c / g;
        y = y * c / g;
        a /= g;
        b /= g;
        if (x >= 0 and y >= 0)
        {
            return {x, y};
        }
        else if (x < 0 and y < 0)
        {
            return {INT_MIN, INT_MIN};
        }
        else if (x < 0)
        {
            ll t1 = (0 - x) / b;
            x += t1 * b;
            y -= t1 * a;
            if (x < 0)
            {
                if (b < 0)
                {
                    x -= b;
                    y += a;
                }
                else
                {
                    x += b;
                    y -= a;
                }
            }
            if (x >= 0 and y >= 0)
            {
                return {x, y};
            }
            else
                return {INT_MIN, INT_MIN};
        }
        else
        {
            ll t1 = (0 - y) / a;
            x -= t1 * b;
            y += t1 * a;
            if (y < 0)
            {
                if (a > 0)
                {
                    x -= b;
                    y += a;
                }
                else
                {
                    x += b;
                    y -= a;
                }
            }
            if (x >= 0 and y >= 0)
            {
                return {x, y};
            }
            else
                return {INT_MIN, INT_MIN};
        }
    }

}
//gcd ends here

// primes sieve
bool primes[5000005];
void sieve()
{
    memset(primes, true, sizeof(primes));
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i * i <= 5000005; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= 5000005; j += i)
                primes[j] = false;
        }
    }
}
// sieve ends here

//nCr by Fermat's Little Theorem
long long power(long long x, ll y, ll p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
long long modInverse(long long n, ll p)
{
    return power(n, p - 2, p);
}
long long nCrModP(long long n,ll r, ll p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
#define mod 1000000007
#define viter vii::iterator
void solve(viter start, viter end, int &count);
// main starts here

ll modFact(ll n, ll p)
{
    if (n >= p)
        return 0;
    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % p;
    return result;
}
vll changeBase(ll x, ll base)
{
    vll res;
    do{
        res.push_back(x % base);
        x /= base;
    }while(x > 0);
    return res;
}

vll factorise(ll n){
    vll res;
    for(ll i = 2; i * i <= n; i++)
    {
        if (primes[i] == 1)
        {
            while (n % i == 0 and n > 1)
            {
                res.pb(i);
                n /= i;
            }
        }
    }
    if (n != 1)
        res.pb(n);
    return res;
}
vll tree;
ll rangeSum(int node, int q_low, int q_high, int low, int high)
{
    
    if (q_low > high or q_high < low)
        return 0;
    else if (q_low <= low and high <= q_high)
    {   
        
        return tree[node];
    }
    int partition = (low + high) / 2;
    return rangeSum(node * 2, q_low, q_high, low, partition) + 
            rangeSum(node * 2 + 1, q_low, q_high, partition + 1, high);;
}
void update(int node, ll value, int n)
{
    int target = node + n;
    while (target >= 1)
    {
        tree[target] += value;
        target = target / 2;
    }
}

ll kadane(vll arr)
{
    ll maxsum = INT_MIN;
    ll sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxsum = max(sum , maxsum);
        if (sum < 0)
            sum = 0;
    }
    return maxsum;
}

int find_parent(vii &nodes, int x)
{
    if (nodes[x].first == x)
        return x;
    return nodes[x].first = find_parent(nodes, nodes[x].first);
}

void unite(vii &nodes, int x, int y)
{
    int par_x = find_parent(nodes, x);
    int par_y = find_parent(nodes, y);
    if (nodes[par_x].second < nodes[par_y].second)
    {
        nodes[par_x].first = par_y;
    }
    else if (nodes[par_x].second > nodes[par_y].second)
    {
        nodes[par_y].first = par_x;
    }
    else
    {
        nodes[par_y].first = par_x;
        nodes[par_x].second++;
    }
}

ll helper1(string s)
{
    ll ans = 0, x = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - 'A' + 1) * x;
        x = x * 26;
    }
    return ans;
}

string helper2(ll n)
{
    string ans;
    ll x = 26;
    while (n > 0)
    {
        if (n % 26)
        {
            ans.push_back((n % 26) + 'A' - 1);
            n = n / 26;
        }  
        else
        {
            ans.push_back('Z');
            n = (n / 26) - 1;
        }
            
    }
    reverse(all(ans));
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    // sieve();
    cin >> t;
    // t = 1;
    for0(loop, t)
    {
        string x;
        cin >> x;
        string s1, s2, s3, s4;
        int i = 0;
        while (i < x.length() and x[i] >= 'A' and x[i] <= 'Z')
        {
            s1.push_back(x[i]);
            i++;
        }
        while (i < x.length() and x[i] >= '0' and x[i] <= '9')
        {
            s2.push_back(x[i]);
            i++;
        }
        while (i < x.length() and x[i] >= 'A' and x[i] <= 'Z')
        {
            s3.push_back(x[i]);
            i++;
        }
        while (i < x.length() and x[i] >= '0' and x[i] <= '9')
        {
            s4.push_back(x[i]);
            i++;
        }
        if (s3.empty() and s4.empty())
        {
            cout << "R" << s2 << "C" << helper1(s1) << endl;
        }
        else
        {
            cout << helper2(stoi(s4)) << s2 << endl;
        }
    }
}
/*****/
//Fuck the world....don't care anyone........................................................
//I challenge you i will beat you in CP one day
#include <bits/stdc++.h>
#include<bitset>
#include<iostream>
using namespace std;
#include<math.h>
#include<map>
#include<vector>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<stack>
#include<queue>
#define         ll long long
#define         ld double
#define         ff first
#define         ss second
#define         its set<int>::iterator
#define         itmp map<int,int>::iterator
#define         lp for(int i=0;i<n;i++)
#define         dlp for(int i=0;i<n;i++) for(int j=0;j<n;j++)
// trignometric function always give value in Radians only
#define         PI acos(-1) //3.1415926535897932384626433832795028
#define         dsin(degree) sin(degree*(PI/180.0))
#define         dcos(degree) cos(degree*(PI/180.0))
#define         dtan(degree) tan(degree*(PI/180.0))
#define         mod 1000000009
#define         N 1001
#define         ar array
#define         pb push_back
int             b1[]={0,0,1,-1};
int             b2[]={1,-1,0,0};
int             d1[]={-1,-1,-1,0,0,1,1,1};
int             d2[]={-1,0,1,-1,1,-1,0,1};
// vector<char>chr={'R','L','D','U'};
// bool is_true(string *s,int n,int m)
// {
//     if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==false&&s[x][y]!='#')
//     return true;
//     else
//     return false;
// }
//#define N 101
//#include <boost/functional/hash.hpp>
//bitset<1000> b;
//b.set();   all bit have 1
//seive of Erat
//totient theorm for co-prime
/*ll int N=1000;
	int p[1001]={0};
	p[2]=1;
		vector<int>v;
        for(ll int i=3;i<=N;i+=2)
        p[i]=1;
        v.push_back(2);
        for(ll int i=3;i<=N;i+=2)
        {
            if(p[i])
            {
			v.push_back(i);
                for(ll int j=i*i;j<=N;j+=2*i)
                p[j]=0;
            }
        }  */
/*
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} */
/*
stringstream ss;  
ss<<c;  
string s1;
ss>>s1;
*/
/*
int power(int x, unsigned int y) 
{ 
    int temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
}*/
//DFS
/*
void dfs_helper(vector<int>*g,map<int,bool>&vis,int src,vector<int>&v)
{
    vis[src]=true;
    v.push_back(src);
    vector<int>::iterator it;
    
    for(it=g[src].begin();it!=g[src].end();++it)
    {
        if(!vis[*it])
        {
            dfs_helper(g,vis,*it,v);
        }
    }
    return ;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//check for DFS grid
/*
const int siz = 501;
bool vis[siz][siz];
bool is_true(int x,int y,string *s,int n,int m)
{
    if(x>=0&&x<n&&y>=0&&y<m&&vis[x][y]==false&&s[x][y]=='*')
    return true;
    else
    return false;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Using krushkals algorithm
//Disjoints Set union
/*
//Important concept of minimum spanning tree
struct united
    {
        ll * par;
        ll *rank;
        void intial(ll n)
        {
            par = new ll[n];
            rank = new ll[n];

            for(ll i=0;i<n;i++)
            par[i] = -1;
            for(ll i=0;i<n;i++)
            rank[i] = 0;
        }
        ll find(ll i)
        {
            if(par[i]==-1)
                return i;

            return find(par[i]);
        }
    };
    void unite(ll x1,ll x2,united g)
    {
        ll x = g.find(x1);
        ll y = g.find(x2);
        
        if(x!=y)
        {
            if(g.rank[x]>g.rank[y])
            {
                g.rank[x] += g.rank[y];
                g.par[y] = x;
            }
            else if(g.rank[x]<g.rank[y])
            {
                g.rank[y] += g.rank[x];
                g.par[x] = y;
            }
            else if(g.rank[x]==g.rank[y])
            {
                g.rank[y]++;
                g.par[x] = y;
            }
            
        }
    }

int bits_count(unsigned int u)
{
     unsigned int uCount;
 
     uCount = u - ((u >> 1) & 033333333333) - ((u >> 2) & 011111111111);
     return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}

//compare fuction
bool comp(Edge e1,Edge e2)
{
	return e1.weight<e2.weight; 
}
*/
//Basic Information
// >>>stoi(tt[i].substr(3,5));
// >>>str.erase(str.begin() + 4); 
// >>>s.erase(std::remove(s.begin(), s.end(), c), s.end());
// >>> vector<vector<int> > vec( n , vector<int> (m, 0));
//priority_queue(int,vector<int>,greater<int> >)

//  Reverse iterator of a set
/*   set<int>::reverse_iterator rit; 
    for (rit = s.rbegin(); rit != s.rend(); rit++) 
        cout << *rit << " "; 
*/
//if we want to zero all the elemet of a array in pairs..
//we will use of DSU when number we have to join edge during the input...we can also use of DFS in the place of DSU
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Digit DP
//Normal DP
//Multidimensional DP
//Backtracking
//DSU
//all types of graph
//Number of total bits
//(int)log2(number)+1; 
//Number of set bits
//  __builtin_popcount(4)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Start Code                                                                                                                                                                                                                                                                                                                                                                                                              
ll int power(ll int x, ll int y) 
{ 
    ll int temp; 
    if( y == 0) 
        return 1ll; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
}
string Excel_part1(ll n)
{
        string s="";
        int k;
        char c;
        while(n)
        {
            k=n%26;
            c=k?(n%26+'A'-1):(26+'A'-1);
            n=k?(n-n%26):(n-26);
            n/=26;
            s=s+c;
        }
        reverse(s.begin(),s.end());
        return s;
}
ll Excel_part2(string s)
{
   ll int result = 0; 
    for (const auto& c : s) 
    { 
        result *= 26; 
        result += c  - 'A' + 1; 
    } 
  
    return result; 
} 
  


ll change_in_num(string s)
{
    ll sum=0;
    for(ll i=0;i<s.length();i++)
    sum=sum*10+(s[i]-'0');
    return sum;
}
void solve()
{
   string s;
   cin>>s;
   int n = s.length();
   int f=0,i;
   if(s[0]=='R'&&s[1]>='1'&&s[1]<='9')
  {
   for(i=0;i<n;i++)
   {
        if(s[i]=='C')
       {
           f=1;
           break;
       }
   }
  }
  string s1 = "",s2="";
   if(f)
   {
    s1 = s.substr(1,i-1);
    s2 = s.substr(i+1,s.length());
    ll x = change_in_num(s2);
    s2 = Excel_part1(x);
    cout<<s2+s1<<endl;
   }
   else
   {
       s1="",s2="";
       for(int i=0;i<n;i++)
       {
           if(s[i]>='0'&&s[i]<='9')
           s1+=s[i];
           else
           s2+=s[i];
           
       }
       ll ans = Excel_part2(s2);
           cout<<'R'<<s1<<'C'<<ans<<endl;

   }


    
  

return ;
}
int main()
{
	ios_base::sync_with_stdio(false); 
    	cin.tie(NULL); 
		ll int t=1;
	 cin>>t;
    // int src[101]={0};
    // int dest[101]={0};
	while(t--)
	{
      //we will also try to understand by DP approach
      solve();
    
    }

return 0;
}
ifndef ONLINE_JUDGE
#define debug(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printer(#__VA_ARGS__, __VA_ARGS__)
#define debugArr(...) std::cerr << __LINE__ << ": [", __DEBUG_UTIL__::printerArr(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...)
#define debugArr(...)
#endif
 
string numberToLetters(int n){
    string ans;
    while (n>0){
        n--;
        ans=char('A'+(n%26))+ans;
        n/=26;
    }
    return ans;
}
 
int lettersToNumber(const string& letters) {
    int ans= 0;
    for (char c : letters) {
        ans=ans*26+(c-'A'+1);
    }
    return ans;
}
 
void sol(){
int n;
cin>>n;
vector<string> inputs(n);
for (int i=0;i<n;++i) {
    cin>>inputs[i];
}
for (const string& s : inputs) {
    if (s[0] == 'R' && isdigit(s[1]) && s.find('C') != string::npos) {
        int row,col;
        sscanf(s.c_str(), "R%dC%d", &row, &col);
        cout << numberToLetters(col) << row << endl;
    } else {
        int index = 0;
        while (index < s.length() && isalpha(s[index])) {
            index++;
        }
        string colLetters = s.substr(0, index);
        int row = stoi(s.substr(index));
        int col = lettersToNumber(colLetters);
        cout << "R" << row << "C" << col << endl;
    }
}
}
 
int32_t main() {
IOS
    ll t=1;
    //cin>>t;
    while(t--){
        sol();
    }
    return 0;
}

