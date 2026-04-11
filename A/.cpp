#include<bits/stdc++.h>
using namespace std;
// Find the Winner and the Dissenters
void findwinner(int n, vector <int> arr) {
    map <int, int> cnt;
    for(int x : arr) {
        if(x >= 1 && x <= 3) cnt[x]++;
    }
    int winner = 1;
    if (cnt[2] > cnt[1] && cnt[2] > cnt[3]) winner = 2;
    else if (cnt[3] >= cnt[1] && cnt[3] >= cnt[2]) winner = 3;
    int notwinner = 0;
    for(int x : a) {
        if(x != winner) notwinner++;
    }
    cout << cnt[1] << " " << cnt[2] << " " << cnt[3] << " " << notwinner << endl;
}
// transformation and printing of each input using the formula 4x + 1.
void transform(int n, int *arr) {
    for(int i = 0; i < n; i++) arr[i] = arr[i] * 4 + 1;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
// compute 2**n
const int x = 1000000007;
void compute(int n) {
    int w = 1;
    for(int i = 0; i < n; ++i) w = (w * 2) % x;
    cout << (w * (w + 1) / 2) % MOD;
}
// computes the index of the first element such that the sum of the prefix
// up to that element is at least half of the total array sum
void computeIdx(int n, int *arr) {
    int sum = 0, prefix = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    int half = sum / 2 + sum % 2;
    for(int i = 0; i < n; i++) {
        prefix += arr[i];
        if(prefix >= half) {
            cout << i + 1; break;
        }
    }
}
// finds the largest divisor of val present in the array,
void finddivisor(int n, int val, int *arr) {
    int maxdivisor = 0;
    for(int i = 0; i < n; i++) {
        if(val % arr[i] == 0 && arr[i] > maxdivisor) maxdivisor = arr[i];
    } cout << val / maxdivisor;
}
//counts how many different numbers in the set appear in the input array
void cntappear(int n, int *arr) {
    set <int> distinct;
    for (int i = 0; i < n; ++i) {
        if (1 <= r[i] && r[i] <= 100) distinct.insert(r[i]);
    } cout << distinct.size();
}
// select a specific subset of elements from arr to form a sum in a pattern related to n % 3
void formsum(int n, int *arr) {
    sort(arr, arr + n);
    int res = 0, skip = 0;
    if(n % 3 == 1) {
        res += arr[0]; skip = 1;
    }
    else if(n % 3 == 2) {
        res += arr[0] + arr[1]; skip = 2;
    } 
    for(int i = 0; i < n / 3; i++) {
        int p = skip + 1 + 3 * i;
        res += arr[p] + arr[p + 1]:
    }
}
// prints the first letter of each word in the line 
void firstchar(string str) {
    cout << str[0];
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') cout << str[i + 1];
    }
}
// Given an integer n, it constructs and prints a special integer sequence
// that “encodes” n using groups of 3s and 3, -2 pairs.
void encode(int n) {
    vector <int> arr;
    for(int i = 0; i < n / 3; i++) arr.push_back(3);
    // For each leftover element (0, 1, or 2), add (3, -2)
    for(int i = 0; i < n % 3; i++) {
        arr.push_back(3); arr.push_back(-2);
    }
    cout << arr.size() << endl;
    for(int x : arr) cout << x << " ";
}
void powertwo(int64_t n, int64_t mx) {
    if(n > 26) {
        cout << mx; return 0;
    }
    int64_t power = 1;
    for (int i = 0; i < n; ++i) power *= 2;
    cout << x % power;
}
// checks whether the string str contains 7 consecutive identical characters in a row
void isIdentical(string str) {
    int cnt = 1;
    for(int i = 1; i < str.length(); i++) {
        if(str[i] == str[i - 1]) cnt++;
        else cnt = 1;
        if(cnt == 7) { cout << "YES"; return 0;}
    } cout << "NO";
}
// constructs a sequence of digits from even‑index positions of the input 
// string, sorts them, and outputs them in increasing order joined by +.
void construct(string str) {
    vector <int> vec;
    for(int i = 0; i < str.length(); i += 2) vec.push_back(str[i] - '0');
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++) {
        if(i > 0) cout << "+";
        cout << vec[i];
    }
}
// output the total len and longest len
void longestword(string str) {
    int m = 0, q = 0;
    for(int i = 0; str.length(); i++) {
        if(str[i] != ' ') m++;
        else q = max(q, m), m = 0;
    }
    q = max(q, m); cout << str << " " << q;
}
// prints the first and last idx of a given value in the array, or does nothing
void findIdx(int *arr, int val, int n) {
    int first = -1, last = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == val) {
            first = i; break;
        }
    }
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == val) {
            last = i; break;
        }
    }
    if(first != last) cout << first << " " << last << endl;
    else cout << -1;
}
// counts how many rows have a prefix sum (of 1, 2, or 3 elements) that is at least 2
void cntprefix(int n) {
    int m = 0;
    for(int i = 0; i < n; ++i) {
        int r = 0;
        for(int j = 0; j < 3; ++j) {
            int x; cin >> x; r += x;
            if(r >= 2){ m++; break; }
        }
    } cout << m;
}
// counts the number of elements that are at least as large as their 1‑based position in the array.
void cntval(int n, int *arr) {
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        if(arr[i] >= i + 1) ++cnt;
    } cout << cnt;
}
// maximum number of dominoes (each covering 2 cells) that can be placed on an m × n board,
void dominoes(int m, int n){ cout << 1LL * m * n / 2;}
void comparison(string str, string ing) {
    int score1 = 0, score2 = 0;
    for(int i = 0; i < str.size(); i++) {
        if(tolower(str[i]) == tolower(ing[i])) continue;
        score1 += str[i]; score2 += ing[i];
    }
    if(score1 == score2) cout << 0;
    else cout << (score1 > score2 ? 1 : -1);
    /*
    string s1, s2; cin >> s1 >> s2;
    for (size_t i = 0; i < min(s1.size(), s2.size()); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
    
        if (c1 < c2) {
            cout << -1 << endl; return 0;
        }
        else if (c2 < c1) {
            cout << 1 << endl; return 0;
    }
    cout << 0 << endl; */
}
// Given a string, remove all vowels (including 'y'), convert consonants 
// to lowercase, and insert a dot before each consonant.
void InsertDot(string str) {
    for(int i = 0; i < str.length();) {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') 
            str.erase(i, 1);
        else {
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
            i++;
        }
    }
    for(int i = str.length(); i > 0; i -= 2) str.insert(i, ".");
    cout << str;
}
void Bubble(string str) {
    for(int i = 0; i < str.size() - 2; i += 2) {
        for(int j = i; j < str.size() - 2; j += 2) {
            if(str[j] > str[j + 2]) swap(str[j], str[j + 2]);
        }
    } cout << str;
}
// Removes all duplicate characters from input string, counts unique characters
void removeDup(string str) {
    for(int i = 0; i < str.size();) {
        for(int j = i + 1; j < str.size();) {
            if(str[i] == str[j]) str.erase(j, 1);
            else j++;
        } i++;
    }
    cout << (str.size() % 2 == 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}
// Count consecutive duplicates
void cntdup(int n, string str) {
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        if(str[i] == str[i + 1]) ++cnt;
    } cout << cnt;
}
bool Isprime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) return false;
    } return true;
}
bool isprime(int n, int st = 2) {
    if(n <= 1) return false;
    if(st * st > n) return true;
    if(n % st == 0) return false;
    return isprime(n, st + 1);
}
int cntprime(int st, int end) {
    if(st > end) return 0;
    return Isprime(st) + cntprime(st + 1, end);
}
bool ispowtwo(int n) {
    return (n && !(n & (n - 1)));
}
bool issubstring(string str, string ing) {
    if(str.find(ing) != string::npos) return true;
    return false;
}
// Converts decimal num to binary string using bit manipulation.
void decimalTobin(int num) {
    if(num == 0) return "0";
    string str;
    while(num) {
        str.push_back('0' + (num & 1)); num >>= 1;
    }
    reverse(str.begin(), str.end()); return str;
}
int issubstring(string str, string ing) {
    int n = str.length(), len = ing.length();
    for(int i = 0; i <= len - n; i++) {
        int j = 0;
        while(j < n && ing[i + j] = str[j]) j++;
        if(j == n) return i;
    } return -1;
}
int issubstring(string str, string ing) {
    if(ing.find(str) != string::npos) return ing.find(str);
    return -1;
}
void erastosthenes(int n, set <int> st) {
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for(int p = 2; p * p <= n; ++p) {
        if(prime[p]) {
            for(int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
    for(int i = 2; i <= n; i++) {
        if(prime[i]) st.insert(i);
    }
}
vector <int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) prime[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) primes.push_back(i);
    }
    return primes;
}
void rightmax(vector <int> vec, int n, int st = 0) {
    if(st == n - 1) return;
    rightmax(vec, n, st + 1);
    vec[st] = max(vec[st], vec[st + 1]);
}
void rightmax(vector <int> vec, int n) {
    if(n <= 1) return;
    rightmax(vec, n - 1);
    vec[n - 2] = max(vec[n - 2], vec[n - 1]);
}
int suffix(vector <int> vec, int n, int N) {
    if(N == 0) return 0;
    return vec[n - 1] + suffix(vec, n - 1, N - 1);
}
int prefix(vector <int> vec, int n, int N) {
    if(N == 0) return 0;
    return vec[N - 1] + prefix(vec, n, N - 1);
}
bool isprefixmatch(string str, string ing, int st = 0) {
    if(st == ing.size()) return true;
    if(st >= str.size() || str[st] != ing[st]) return false;
    return isprefixmatch(str, ing, st + 1);
}
bool palindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}
bool ispalindrome(vector <int> vec, int n, int st = 0) {
    if(st >= n - 1 - st) return true;
    if(vec[st] != vec[n - 1 - st]) return false;
    return ispalindrome(vec, n, st + 1);
}
bool is_palindrome(const string& s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
bool Ispalindrome(string str) {
    for(int i = 0; i < s.size() / 2; ++i) {
        if(str[i] != str[str.size() - i - 1]) return false;
    } return true;
}
int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS) {
    if (row == ROWS - 1 && col == COLS - 1) 
        return grid[row][col];
    int max_path = INT_MIN;
    if (col < COLS - 1)
        max_path = max(max_path, grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS));
    if (row < ROWS - 1)
        max_path = max(max_path, grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS));
    if (row < ROWS - 1 && col < COLS - 1)
        max_path = max(max_path, grid[row][col] + path_sum(grid, row + 1, col + 1, ROWS, COLS));
    return max_path;
}
#define mod 1e9 + 7
#define x 1e5
int ifact[x];
int fastpow(int a, int p) {
    int res = 1; a %= mod;
    while(p > 0) {
        if(p & 1) res = res * a % mod;
        a = a * a % mod; p >>= 1;
    } return res;
}
int fact(int n) {
    int res = 1;
    for(int i = 1; i <= n; i++) res = res * i % mod;
    return res;
}
void precompute() {
    ifact[x - 1] = fastpow(fact[x - 1], mod - 2);
    for (int i = x - 2; i >= 0; i--) {
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
}
int combination(int n, int r, int *fact, int *ifact) {
    if(r > n - r) r = n - r;
    return fact[n] * ifact[r] % mod * ifact[n - r] % mod;
}
int gcd(int a, int b) {
    while(b != 0) {
        int tmp = b; b = a % b; a = tmp;
    } return a;
}
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
void extendgcd(int a, int b, int *arr) {
    int x = 1, y = 0, x1 = 0, y1 = 1;
    int a1 = a, b1 = b;
    while (b1 != 0) {
        int q = a1 / b1, tmp = a1 % b1;
        a1 = b1; b1 = temp;
        
        temp = x - q * x1; x = x1; x1 = temp;
        temp = y - q * y1; y = y1; y1 = temp;
    }
    arr[0] = x; arr[1] = y; arr[2] = a1;
}
int modInv(int a, int b) {
    int arr[3]; extendgcd(a, b, arr);
    return arr[0];
}
// Counts divisors of n (returns 3 for perfect squares, 2 for primes, 1 for 1)
int cntdivisors(int n) {
    int cnt = 0;
    if(n <= 1) return false;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cnt++; if(cnt > 3) return 0;
        }
    } return cnt;
}
bool nestedproper(string str) {
    stack <char> st;
    for(char ch : st) {
        if(ch == '(' || ch == '[' || ch == '{') st.push(ch);
        else {
            if(st.empty()) return false;
            char tp = st.top(); st.pop();
            if ((ch == ')' && tp != '(') || (ch == ']' && tp != '[') || (ch == '}' && tp != '{')) return false;
            
        }
    }
    return st.empty();
}
int zeroOne(const vector<int>& v) {
    int num_zeroes = count(v.begin(), v.end(), 0);
    int num_ones = count(v.begin(), v.end(), 1);
    
    if (num_zeroes <= (v.size() + 1) / 2) return 0;
    else if (num_zeroes + num_ones == v.size() && num_ones > 0) return 2;
    else return 1;
}
// Lucky numbers are positive integers with no digit '4'. Find the k-th lucky number in ascending order.
bool has_four(long long x) {
    while (x > 0) {
        if (x % 10 == 4) return true;
        x /= 10;
    } return false;
}
long long count_living(int n) {
    return n == 0 ? 1 : 9LL * count_living(n - 1); 
}
long long nth_living(long long k) {
    int n = 1;
    long long total = 0;
    while (true) {
        long long cnt = count_living(n);
        if (total + cnt >= k) break;
        total += cnt;
        n++;
    }
    long long x = 1LL * pow(10, n - 1);
    long long remaining = k - total;
    while (remaining > 0) {
        x++;
        if (!has_four(x)) remaining--;
    }
    return x;
}
// 4 teams (A,B,C,D) compete. Given n scores (n divisible by 4), assign scores cyclically to teams and output the winning team letter.
void winner(int n) {
    int idx = 0;
    array <long long, 4> sum = {0};
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sums[idx++ % 4] += x;
    }
    sort(sums.begin(), sums.end());
    string res = {"A", "B", "C", "D"};
    cout << res[find(sums.begin(), sums.end(), sums[3]) - sums.begin()] << ' ';
}
// calculates the sum of the p largest positive numbers minus the sum of the q smallest negative numbers from an array of n integers.
void diffposneg(int n, int p, int q, vector <int> arr) {
    int pos = 0, neg = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) neg++;
        else pos++;
    }
    sort(arr.begin(), arr.end());
    int res = 0, negsum = 0, possum = 0;
    for(int i = 0; i < min(q, neg); i++) negsum += arr[i];
    for(int i = n - min(p, pos); i < n; i++) possum += arr[i];
    cout << possum - negsum;
}
// determines if player 1 can "win" a grid domination game against zeros.
void iswin() {
    int m, n; cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    int zero_cnt = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
            if (v[i][j] == 0) zero_cnt++;
        }
    }
    if (zero_cnt == 0) {
        cout << "WIN" << endl; return 0;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 1) {
                int adj_zeros = 0;
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        if (di == 0 && dj == 0) continue;
                        int ni = i + di, nj = j + dj;
                        if (ni >= 0 && ni < m && nj >= 0 && nj < n && v[ni][nj] == 0)
                            adj_zeros++;
                    }
                }
                if (adj_zeros >= zero_cnt) {
                    cout << "WIN" << endl;
                    return 0;
                }
            }
        }
    } cout << "LOSE" << endl;
}
// Calculate sum of differences between largest n/2 elements and smallest n/2 elements
void calculatediff(int n, vector <int> arr) {
    sort(arr.begin(), arr.end());
    int sum = 0, half = n / 2;
    for(int i = 0; i < half; i++)
        sum += arr[n - 1 - i] - arr[i];
    cout << sum;
}
// consecutive sequences of negatives separated by positives
void cntneg(int n, vector <int> arr) {
    int neggrp = 0, sum = 0; bool inneggrp = false;
    for(int i = 0; i < n; i++) {
        sum += abs(arr[i]);
        if(arr[i] < 0) {
            if(!inneggrp) {
                neggrp++; inneggrp = true;
            }
            else inneggrp = false;
        }
    } cout << sum << " " << neggrp << endl;
}
// Count groups of consecutive identical numbers in a sequence.
void cntgrp(int n) {
    stack <int> st; int grp = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(st.empty() || st.top() == x) st.push(x);
        else {
            while(!st.empty()) st.pop();
            st.push(x); grp++;
        }
    }
    if(!st.empty()) grp++;
    cout << grp << endl;
}
void alicebob(int n, deque <int> dq) {
    int a = 0, b = 0;
    for(int i = 0; i < n; i++) {
        int x = dq.front() > dq.back() ? dq.front() : dq.back();
        if(dq.front() > dq.back()) dq.pop_front();
        else dq.pop_back();
        (i % 2 == 0 ? a : b) += x;
    }
    cout << a << " " << b << endl;
}
