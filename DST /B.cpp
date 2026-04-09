#include<bits/stdc++.h>
using namespace std;
void present(int n) {
    vector <int> freq(n + 1);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x >= 1 && x <= n) freq[x - 1] = i + 1;
    }
    for(int i = 0; i < freq.size(); i++) cout << freq[i] << " ";
}
void newpassword(int n, int k) {
    // n -> total len, k -> cycle len
    char str[26] = {};
    for(int i = 0; i < 26; i++) str[i] = 'a' + i;
    string str = "abcdefghijklmnopqrstuvwxyz";
    /*for(int i = 97; i <= 122; i++) str[i - 97] = i; */
    for(int i = 0; i < n / k; i++) {
        for(int j = 0; j < k; j++) cout << str[j] << " ";
        cout << endl;
    } // remaining char
    for(int i = 0; i < n % k; i++) cout << str[i] << " ";
}
// given a flag of length n colored with three colors: 'W', 'B', 'R' Determine if the flag is validly colored.
void check(int n, string str) {
    if(n == 1) {
        cout << (str == "W" ? "Yes" : "NO"); return;
    }
    if(n == 2) {
        cout << (str == "WW" || str == "RB" || str == "BR" ? "Yes" : "NO"); return;
    }
    bool valid = true; int i = 0;
    while(i < n) {
        while(i < n && str[i] == 'W') i++;
        if(i == n) break;
        int blue = red = 0;
        while(i < n && str[i] != 'W')
            (str[i++] == 'B' ? blue : red)++;
        if(blue == 0 || red == 0) {
            valid = false; break;
        }
    }
    cout << (valid ? "YES" : "NO");
}
//determine if a string composed of the characters 'R', 'B', and 'W' satisfies 
// specific adjacency rules for the characters 'R' and 'B'
void issatisfied(string str) {
    int n = str.size();
    for(int i = 0; i < n; i++) {
        if(str[i] == 'R' || str[i] == 'B') {
            bool validadj = (i > 0 && str[i - 1] != 'W') || (i < n - 1 && str[i + 1] != 'W');
            if(!validadj) {
                cout << "NO"; return;
            }
            if(i > 0 && str[i - 1] == 'W' && (i == n - 1 || str[i + 1] != 'B')) {
                cout << "No"; return;
            }
            if(i < n - 1 && str[i + 1] == 'W' && (i == 0 || str[i - 1] != 'B')) {
                cout << "NO"; return;
            }
        }
    }
    cout << "YES";
}
// Finds the next year > input where all 4 digits are unique.
bool hasunqyear(int year) {
    /* int y; cin >> y;
    while (!hasunqyear(++y)); cout << y; */
    int dig[10] = {0};
    while(year > 10) {
        int num = year % 10;
        if(dig[num] > 0) return false;
        dig[num]++; year /= 10;
    }
    return true;
}
void cntchar(string str) {
    int upper = 0, lower = 0, dig = 0, special = 0;
    for(char ch : str) {
        if(isupper(ch)) upper++;
        else if(islower(ch)) lower++;
        else if(isdigit(ch)) dig++;
        else special++;
    }
    if(upper > lower) transform(str.begin(), str.end(), str.begin(), ::toupper);
    else transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << " " << upper << " " << lower << " " << dig << " " << special << endl;
}
// calculates the total steps needed to reach query elements from both ends of an array
void cntsteps(int n, int m) {
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int forward = 0, backward = 0;
    for(int i = 0; i < m; i++) {
        int trg; cin >> trg;
        auto it = find(arr.begin(), arr.end(), trg);
        if(it != arr.end()) {
            int idx = it - arr.begin();
            forward += idx + 1;
            backward += n - idx;
        }
    }
    cout << forward << " " << backward << endl;
}
int binpow(int a, int b, int mod) {
    int res = 1; a %= mod;
    while(b > 0) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod; b >>= 1
    } return res;
}
int nCr(int n, int p, int r) {
    if(r < 0 || r > n) return 0;
    if(r == 0 || r == n) return 1;
    int fact = 1, factr = 1, factnr = 1;
    for(int i = 1; i <= n; i++) fact = fact * i % p;
    for(int i = 1; i <= r; i++) factr = factr * i % p;
    for(int i = 1; i <= n - r; i++) factnr = factnr * i % p;
    int x = binpow(factr, p - 2, p);
    int y = binpow(factnr, p - 2, p);
    return (fact * x % p) * y % p;
}
const int x = 100100; bool prime[x];
void isprime() {
    for(int i = 2; i < x; i++) prime[i] = true;
    prime[0] = prime[1] = true;
    for(int p = 2; p < x; p++) {
        if(prime[p]) {
            for(int i = p * p; i < x; i += p) prime[i] = false;
        }
    }
}
void primefactor(int n, vector <int> &vec) {
    while(n % 2 == 0) {
        vec.push_back(2); n /= 2;
    }
    for(int i = 3; 1LL * i * i <= n; i += 2) {
        while(n % i == 0) {
            vec.push_back(i); n /= i;
        }
    }
    if(n > 2) vec.push_back(n);
}
void primefactors(int n) {
    if(n <= 1) return;
    vector <int> vec(n + 1, 0);
    for(int i = 2; i <= n; i += 2) vec[i] = 2;
    for(int i = 3; i <= n; i += 2) {
        if(vec[i] == 0) {
            vec[i] = i;
            for(int j = i * i; j <= n; j += i) {
                if(vec[j] == 0) vec[j] = i;
            }
        }
    }/*
    vector<int> res;
    while (n != 1) {
        res.push_back(Factor[x]);
        n /= Factor[x];
    } 
    for(auto x : res) cout << x << " "; */
    map <int, int> factor;
    int x = n;
    while(x > 1) {
        int p = vec[x]; factor[p]++; x /= p;
    }
    for(auto [p, power] : factor) cout << p << " " << power << endl;
}
int smallestDiv(int n) {
    if(n % 2 == 0) return 2;
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) return i;
    }
    return n;
}
vector <pair <int, int>> findsubarr(int *arr, int n) {
    int sum = 0;
    unordered_map <int, vector <int>> mp;
    vector <pair <int, int>> vec;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum == 0) vec.push_back({0, i});
        if(mp.count(sum)) {
            for(int idx : mp[sum]) vec.push_back({idx + 1, i});
        }
        mp[sum].push_back(i);
    }
    return vec;
}
int cntdisjoint(vector <pair <int, int>> vec) {
    int cnt = 1, prv = -1;
    for(auto it : vec) {
        if(it.first > prv) {
            cnt++; prv = it.second;
        }
    } return cnt;
}
// the length of the longest increasing subsequence (LIS) in vec.
int longestsubseq(vector <int> vec) {
    vector <int> res;
    for(int x : vec) {
        auto it = upper_bound(vec.begin(), vec.end(), x);
        if(it == res.end()) res.push_back(x);
        else *it = x;
    } return res.size();
}
bool iskthbit(int n, int k){ return n & (1 << k); }
// count subarrays whose XOR equals m using prefix XOR and a hash map.
int subarrXor(int *arr, int n, int m) {
    int cnt = 0, cxor = 0;
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) {
        cxor ^= arr[i];
        if(cxor == m) cnt++;
        int tmp = cxor ^ m;
        if(mp.count(tmp)) cnt += mp[tmp];
        mp[cxor]++;
    }
    return cnt;
}
void minrange(int n, int k, vector <int> arr) {
    int mn = 1e9; sort(arr.begin(), arr.end());
    for(int i = 0; i <= n - k; i++)
        mn = min(mn, arr[i + k - 1] - arr[i]);
    cout << mn;
}
// given a polynomial‑like weighted sum in powers of 2, decide if it’s divisible by
//the highest power 2ⁿ; if yes, return the quotient, else return -1
void isdivisible(int n) {
    int res = 0, base = 1;
    for(int i = 0; i <= n; i++) {
        int x; cin >> x;
        res += x * base; base *= 2;
    }
    int tmp = 1 << n;
    cout << (res % tmp != 0 ? -1 : res / tmp);
}
// implements the FCFS (First‑Come, First‑Serve) CPU scheduling algorithm for n processes 
const int x = 1e5;
int finish[x], revtime[x], wait[x], start[x];
void FCFS(int n) {
    vector <int> arrive(n), burst(n), id(n);
    for(int i = 0; i < n; i++) {
        id[i] = i + 1;
        cin >> arrive[i] >> burst[i];
    }
    vector <int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int i, int j){
        if(arr[i] == arr[j]) return id[i] < id[j];
        else arr[i] < arr[j]; });
    double avgrevtime = 0, avgwait = 0;
    for(int pos = 0; pos < n; ++pos) {
        int i = idx[pos];
        if(pos == 0) start[i] = arrive[i];
        else start[i] = finish[idx[pos - 1]];
        finish[i] = start[i] + burst[i];
        revtime[i] = finish[i] - arrive[i];
        wait[i] = revtime[i] - burst[i];
        avgrevtime += revtime[i];
        avgwait += wait[i];
    }
    cout << avgrevtime / n << " " << avgwait / n << endl;
}
// modeling a cyclic‑tournament‑style matching between two strings and counting the total number of wins.
void cyclicmatch(int n) {
    int a1 = b1 = c1 = 0;
    int a2 = b2 = c2 = 0; char ch;
    for(int 0; i < n; i++) {
        cin >> ch;
        if (ch == 'G') a1++;
        if (ch == 'B') b1++;
        if (ch == 'K') c1++;
    }
    for(int i = 0; i < n; i++) {
        cin >> ch;
        if (ch == 'G') a2++;
        if (ch == 'B') b2++;
        if (ch == 'K') c2++;
    }
    cout << min(a1, c2) + min(c1, b2) + min(b1, a2) << endl;
}
// Computes the minimum possible “maximum gap” in a cyclic‑style setting
void minpossible(int n, int k, vector <int> arr) {
    sort(arr.begin(), arr.end());
    int res = arr[n - 1] - arr[0];
    for(int i = 0; i < n - 1; i++)
        res = min(res, arr[i] + k - arr[i - 1]);
    cout << res << " ";
}
// finds the smallest possible maximum difference over any contiguous subarray of length m after sorting the array
void minpossible(int n, int k, vector <int> arr) {
    sort(arr.begin(), arr.end());
    int res = arr[k - 1] - arr[0];
    for(int i = k - 1; i < n; ++i) 
        res = min(res, arr[i] - arr[i - k + 1])
    cout << res << " ";
}
// Sum‑of‑max and sum‑of‑min over 3 triplets, repeated 3 times with separate output each time.
void sumOf(int n) {
    while(n--) {
        int mx = 0, mn = 0;
        for(int i = 0; i < 3; i++) {
            int x, y, z; cin >> x >> y >> z;
            mx += max({x, y, z});
            mn += min({x, y, z});
        }
        cout << mx << " " << mn << endl;
    }
}
// Given a budget x and three item costs arr[0], arr[1], arr[2], it computes the maximum number of items you can buy
void maxbuy(int budget, vector <int> arrint
    sort(arr.begin(), arr.end());
    int cost = arr[0] + arr[1] + arr[2];
    int tmp = budget / cost;
    int res = tmp * 3;
    int rem = budget - tmp * cost;
    for(int i = 0; i < 3; i++) {
        if(rem >= arr[i])
            rem -= arr[i], res++;
    }
    cout << res << ' ';
}
// simplifies the ratio [a : b] by their GCD, or indicates that they are already coprime.
void factorization(int a, int b) {
    int x = __gcd(a, b);
    if(x > 1) cout << a / x << " " << b / x << endl;
    else cout << "NO";
}
// counts a “number of even positions” in [l, r] 
void cntEven(int l, int r, int k) {
    if(l == r) 
        cout << (l == 1 ? "NO" : "YES") << endl, return 0;
    int cnt = (r - l) / 2;
    if(l % 2 != 0 || r % 2 != 0) cnt++;
    cout << (cnt > k ? "No" : "Yes") << endl;
}
void sumOf(int n, int k, vector <int> arr, vector <int> tmp) {
    vector <pair <int, int>> vec;
    for(int i = 0; i < n; i++) 
        vec.push_back({arr[i], tmp[i]});
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; ++i) {
        if(vec[i].first <= k) k += vec[i].second;
        else break;
    }
    cout << k << " ";
}
// Do the two arrays share exactly half of the elements of the first array
void Ishalfed(int n, int m, vector <int> arr, vector <int> tmp) {
    sort(arr, arr + n); sort(tmp, tmp + m);
    int cnt = 0;
    for(int i = 0, j = 0; i < n, j < m;) {
        if(arr[i] == tmp[j]) {
            i++; j++; cnt++;
        }
        else if(arr[i] < tmp[j]) i++;
        else j++;
    }
    (cnt == n / 2) ? cout << "Yes" : cout << "No";
}
// count how many integer starting values x exist so that x + every prefixsum stays in [lower, upper].
int cntdig(vector <int> vec, int lower, int upper) {
    int mini = maxi = sum = 0;
    for(int x : vec) {
        sum += x; maxi = max(sum, maxi);
        mini = min(sum, mini);
    } /*
    int cnt = 0;
    for(int i = lower; i <= upper; i++) {
        if(i + mini < lower || i + maxi > upper) continue;
        else cnt++;
    } return cnt; */
    int l = lower - mini, r = upper - maxi;
    if(r < lower || l > upper) return 0;
    return min(upper, r) - max(lower, l) + 1;
}
// removes every 3rd highest price as a discount.Prints the final minimized cost after discounts.
void mincost(int n, vector <int> vec) {
    sort(vec.rbegin(), vec.rend());
    int sum = 0;
    for(int x : vec) sum += x;
    for(int i = 2; i < vec.size(); i += 3) sum -= vec[i];
    cout << sum;
}
int flipbits(int x) {
    int flipp = 0, pos = 0;
    while(x) {
        if(x % 2 == 0) flipp += (1 << pos);
        x /= 2; pos++;
    } return flipp;
}
int bitsum(int n) {
    int totalsum = 0;
    while(n > 0) {
        int val = flipbits(n), tmp = n;
        if((tmp && (tmp + 1)) == 0) tmp--;
        int partialsum = tmp * (tmp + 1) / 2 - val * (val - 1) % 2;
        totalsum += 2 * partialsum;
        n = val - 1;
    } cout << totalsum << endl;
}
// Find the longest prefix of the string that can be ‘zeroed out’ with 
// at most k operation‑cost, using a carry‑like digit‑increment trick
int calculate(int mid, string str) {
    int add = 0;
    for(int i = mid; i >= 0; i--) {
        int x = ((str[i] - '0') + add) % 10;
        if(x == 0) continue;
        add += 10 - x;
    } return add;
}
void longestprefix(int n, int k, string str) {
    int l = 0, r = n - 1, res = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(calculate(mid, str) > k) r = mid - 1;
        else res = mid + 1, l = mid + 1;
    } cout << res << " ";
}
void compute(int n) {
    if(n <= 3) cout << "-3", return;
    int res = n;
    if(n % 2 == 0) res += n / 2;
    else res += (n - 1) / 2;
    cout << res; /*
    int curr = 2;
    for(int i = 0; i < n; i++) {
        cout << curr << " ";
        if(i % 2 == 0) curr++;
        else curr += 3;
    } */
}
vector <int> Incrsubseq(vector <int> vec) {
    vector <int> res;
    for(int i = 0; i < vec.size(); i++) {
        if(res.empty() || res.back() <= vec[i]) res.push_back(vec[i]);
        else {
            int bnd = upper_bound(res.begin(), res.end(), vec[i]) - res.begin();
            res[bnd] = vec[i];
        }
    }
    return res.size();
}
int Incrsubseq(vector <int> vec) {
    multiset <int> st;
    for(int x : vec) {
        st.insert(x);
        auto it = st.upper_bound(x);
        if(it != st.end()) st.erase(it);
    } return (int)st.size();
}
// minimum cost to transform str to ing by flipping zeros
void mincost(int n, string str, string ing) {
    vector <int> vec(n + 1, 0), grp(n + 1, 0);
    for(int i = n - 1; i >= 0; i--) {
        vec[i] = vec[i + 1] + (str[i] == '0');
        grp[i] = grp[i + 1] + (ing[i] == '0');
    }
    vector <vector <int>> dp(n + 1, vector <int> (n + 1, 1e8));
    dp[n][n] = 0;
    for(int j = n - 1; j >= 0; j--) {
        dp[n][j] = dp[n][j + 1];
        if(ing[j] == '1') dp[n][j] += vec[n] + grp[j];
    }
    for(int i = n - 1; i >= 0; i--) {
        for(int j = n - 1; j >= 0; j--) {
            if (str[i] == '1')
                dp[i][j] = min(dp[i][j], dp[i + 1][j + 1] + vec[i] + grp[j]);
        }
    }
    cout << dp[0][0];
}
// computes the avg of the n−1 smallest values and adds back the largest val
void computeavg(int n, vector <float> vec) {
    sort(vec.rbegin(), vec.rend());
    int sum = 0;
    for(int i = 1; i < n; i++) sum += vec[i];
    cout << sum / (n - 1) + vec[0];
}
void printchar(int n) {
    for(int i = 0; i < n; i++) cout << 'a' + (i % 26) << " ";
}
// computes the GCD of all elements in the array except those in that range.
void computeGCD(int *prefix, int *arr, int *suffix, int n) {
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++) 
        prefix[i] = gcd(prefix[i - 1], arr[i]);
    suffix[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
        suffix[i] = gcd(suffix[i + 1], arr[i]);
}
int calculate(int l, int r, int *prefix, int *suffix, int n) { /*
    computeGCD(prefix.data(), arr.data(), suffix.data(), n);
    while (q--) {
        int l, r; cin >> l >> r;
        cout << calculate(l, r, prefix.data(), suffix.data(), n) << " ";
    } */
    if(l == 0) return suffix[r + 1];
    if(r == n - 1) return prefix[l - 1];
    return gcd(suffix[r + 1], prefix[l - 1]);
}
void framework(int row, int col, int n) {
    for(int i = 0; i < row; i++) {
        int start = i + 1, step = col + 1;
        cout << start << " ";
        for(int j = 1; j < col; j++) {
            start += step; cout << start << " ";
        }
    } cout << endl; /*
    for(int i = 0; i < col; i++) cout << i + 1 << " ";
    int face = 2 + n;
    for(int i = 1; i < row; i++) {
        int x = face; cout << x << " ";
        for(int j = 1; j < col; j++) {
            x += i + 1, cout << x << " ";
        }
        face += row + 1;
    } cout << " "; */
}
int leftrotation(int n, int pos, int *arr) {
    pos %= n;
    for(int r = 0; r < pos; r++) {
        int tmp = arr[0];
        for(int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
        arr[n - 1] = tmp;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
#include<bits/stdc++.h>
using namespace std;
// Compute a recurrence‑based integer sequence using memoized recursion
int tmp[1e5];
int dp(int n) {
    if(n == 1 || n == 2) return 1;
    if(n == 3) return 2;
    if(tmp[n] != 0) return tmp[n];
    return tmp[n] = tmp(n - 1) + tmp(n - 3);
}
// Counts how many times team 'B' appears.
void appear() {
    int a = 0, b = 0;
    for(int i = 0; i < 6; i++) {
        char ch; cin >> ch;
        if(ch == 'A') a++;
        else if(ch == 'B') b++;
    }
    if (b >= 3) cout << 100;
    else if (b == 2) cout << 70;
    else cout << 40;
}
// find positions where character differs from two previous
void findpos(string str) {
    if(str[0] != str[1]) cout << (str[0] != str[2] ? "1" : "2");
    for(int i = 2; i < str.length(); i++) {
        if(str[i] != str[i - 1] && str[i] != str[i - 2]) cout << i + 1 << " ";
    }
}
// builds a forward‑difference table and outputs only the first column of that table.
void difftable(int n) {
    int arr[100][100], tmp[100][100];
    for(int i = 0; i < n; i++) cin >> arr[0][i];
    for(int i = 0; i < n; i++) tmp[0][i] = arr[0][i];
    for(int j = 1; j < n; j++) {
        for(int i = 0; i < n; i++)
            tmp[j][i] = tmp[j - 1][i + 1] - tmp[j - 1][i];
    }
    for(int i = 0; i < n; i++) cout << tmp[i][0] << " ";
}
const int mod = 1000000007;  
int mulMod(int a, int b){ return 1LL * a * b % mod; }
int powerMod(int x, int y) {
    if (y == 0) return 1;
    int res = powerMod(x, y / 2);
    res = mulMod(res, res);
    if (y & 1) res = mulMod(res, x);
    return res;
}
// There are n machines, and machine i takes arr[i] seconds to produce one unit of a product. 
// computes how long it takes to produce the next unit after the first m units are completed.
int Bsearch(int *arr, int trg, int high) {
    // cout << Bsearch(m + 1, max_time) - Bsearch(m, max_time) << " ";
    int low = 0, res = high; // time
    while(low <= high) {
        int mid = (low + high) / 2;
        int total = 0;
        // total units produced by all machines in time `mid`
        for(int i = 0; i < n; i++) {
            total += mid / arr[i];
            if(total < trg) low = mid + 1;
            else {
                res = mid; high = mid - 1;
            }
        }
    }
    return res;
}
// shift each uppercase‑like letter in the input string backward by 2 positions in the alphabet
void shiftchar(string str) {
    for(auto ch : str) {
        if(ch != ' ') {
            if(ch - 2 < 'A') ch += 24;
            else ch -= 2;
        } cout << ch;
    }
}
// check whether the second sequence of n numbers appears as a subsequence in the first array arr, in order
void check(int n, int *arr) {
    int tmp = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(tmp != x) {
            while(cnt < n && arr[cnt] != x) ++cnt;
            tmp = x;
        }
    }
    cout << (cnt < n ? "Yes" : "No");
}
// Given the first letter of each Platonic‑solid name. computes the sum of their face counts
void sumface(int n) {
    int score = 0;
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        if(str[0] == 'T') score += 4;
        else if(str[0] == 'C') score += 6;
        else if(str[0] == 'O') score += 8;
        else if(str[0] == 'D') score += 12;
        else if(str[0] == 'I') score += 20;
    } cout << score << endl;
}
// Given a starting time and increasing penalty per problem, finds the 
// maximum number of problems that can be solved within 240 minutes.
void maxsolved(int n, int k) {
    // n, k -> total problems, initial time
    int penalty[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int totaltime = k;
    if(totaltime > 240) cout << 0, return;
    for(int i = 0; i < n; i++) totaltime += 5 * (i + 1);
    if(totaltime <= 240) cout << 0, return;
    int Quetoremove = 0;
    for(int i = n; i > 0; i--) {
        Quetoremove++;
        totaltime -= penalty[i - 1];
        if(totaltime <= 240)
            cout << n - Quetoremove, return;
    } cout << 0 << endl;
}
// Converts string to majority case - all uppercase if ≥ 50% uppercase chars exist, else all lowercase.
void convertstr(string str) {
    int upper = 0, lower = 0;
    for(char ch : str) {
        if(ch >= 'a' && ch <= 'z') lower++;
        else if(ch >= 'A' && ch <= 'Z') upper++;
    }
    if(upper >= lower) 
        for(char& c : str) c = toupper(c);
    else 
        for(char& c : str) tolower(c); /*
    int upper = 0;
    for(char ch : str) {
        if(isupper(ch)) upper++;
    }
    for(char ch : str) 
        ch = (upper * 2 >= str.size()) ? toupper(ch) : tolower(ch); */
    cout << str << endl;
}
// Count multiples of LCM(a,e) up to n:
void cntmulti(int n, int a, int b) {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(i % a == 0 && i % b == 0) ++cnt;
    }
    cout << cnt;
    // cout << n / lcm(a, b); 
}
// checks if two numbers are equal or consecutive
void isequal(int a, int b){ cout << (abs(a - b) <= 1 ? "YES" : "NO"); }
// Count the number of ways to tile a 2 * n board using 2 * 1 dominoes and
// L‑shaped trominoes, and print only the last digit of the answer
void cntways(int n) {
    if(n == 0) cout << 1;
    else cout << "6842"[n%4];
}
// Count how many times you can triple a and double b until a becomes strictly 
// greater than b, starting from two initial integers a and b
void cnttimes(int a, int b) {
    int steps = 0;
    while(a <= b) {
        a *= 3; b *= 2; steps++;
    } cout << steps;
}
// computes the sum of a geometric sequence of powers of 2, starting from 2
void geosum(int n) {
    int sum = 0, base = 2;
    for(int i = 0; i < n; i++) {
        sum += base; base *= 2;
    } cout << sum;
}
// count the total number of digits used when writing all integers from n down to 1
void cntdigits(int n) {
    int res = 0;
    for(int i = 1; i <= n; i++) {
        int tmp = i, cnt = 0;
        while(tmp) {
            tmp /= 10; ++cnt;
        } res += cnt;
    } cout << res;
}
// Count how many knight moves are possible from a given chess square (assuming an 8 × 8 board)
void cntmoves(string str) {
    int moves = 8;
    if(str[0] == 'a' || str[0] == 'h') moves = 5;
    if(str[1] == '1' || str[1] == '8') {
        if(moves == 8) cout << 5;
        else if(moves == 5) cout << 3;
        else cout << moves;
    }
}
void func(int n) {
    cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2);
}
// computing a sum over decreasing integers and then adding 1 at the end
void computesum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += i * 6;
    cout << sum + 1;
}
// Count how many elements become at most 5 after adding x, and report how many full groups of 3 such elements exist.
void cntgrp(int n, int x) {
    int arr[n], cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] += x;
        if(arr[i] <= 5) ++cnt;
    }
    cnt /= 3; cout << cnt;
}
//Given an arr and step size x, compute the minimum number of steps of size x 
//needed to reach or cross zero from the total sum
void steps(int n, int x, int *arr) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    if(sum == 0) cout << 0, return 0;
    int steps = 0;
    if(sum > 0) steps = (sum + x - 1) / x; // ceil(sum / x)
    else {
        sum -= sum; steps = (sum + x - 1) / x;
    } cout << steps;
}
// Count who wins more rounds (Mishka or Chris) from pairwise score comparisons, and print the winner (or a tie message).
void game(int n, int *arr) {
    int miska = 0, chris = 0;
    for(int i = 0; i < n; i += 2) {
        if(arr[i] > arr[i + 1]) miska++;
        else (arr[i] < arr[i + 1]) chris++;
    }
    if(miska > chris) cout << "miska";
    else if(chris > miska) cout << "chris";
    else cout << "Friendship is magic";
}
// Check if a string is symmetric about its center, where the left half with b↔d flipped equals the right half.
void issymmetric(string str) {
    int len = str.size();
    if(len % 2 == 0) cout << "NIE", return 0;
    if(len == 1) cout << "TAK", return 0;
    int mid = (len - 1) / 2;
    string left = str.substr(0, mid);
    string right = str.substr(mid + 1, mid);
    reverse(left.begin(), left.end());
    for (char &c : left) {
        if (c == 'b' || c == 'B') c = 'd';
        else if (c == 'd' || c == 'D') c = 'b';
    }
    cout << (left == right) ? "TAK" : "NIE";
}
#include<bits/stdc++.h>
using namespace std;
// compute n**n
void compute(int n) {
    int res = 1;
    for(int i = 0; i < n; i++) res *= n;
    cout << res;
}
// compute a modified value of a by iteratively adding a / b to a while 
//original a keeps being divided by b, with special rules when b ≥ a.
void compute(int a, int b) {
    if(b > a) cout << a << endl;
    else if(b == a) cout << a + 1 << endl;
    else {
        int orig = a;
        while(orig >= b) {
            a += a / b; orig /= b;
        }
        cout << a << endl;
    }
}
// Check whether the string is “almost symmetric”, allowing at most one mismatch after reversing the left half and comparing it with the right half.
void almostsymmetric(string str) {
    int len = str.size(), mid = len / 2;
    string x, y;
    if(len % 2 == 1) {
        x = str.substr(0, mid); y = str.substr(mid + 1, mid);
    }
    else {
        x = str.substr(0, mid); y = str.substr(mid, mid);
    }
    reverse(x.begin(), x.end());
    int diff = 0;
    for(int i = 0; i < x.length(); ++i) {
        if(x[i] != y[i]) ++diff;
    }
    cout << (diff <= 1 ? "Yes" : "No");
}
// swap only the even‑idx elements in the first half with their mirror positions 
//in the second half, leaving odd‑indexed elements in the first half unchanged.
void sorthalf(int *arr, int n) {
    for(int i = 0; i < n / 2; i++) swap(arr[i], arr[n - 1 - i]);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
// compute the total adjusted gap between each number and the maximum, where each strictly‑below gap is reduced by one.
void adjgap(int a, int b, int c) {
    int maxi = max({a, b, c});
    int diff_a = maxi - a, diff_b = maxi - b, diff_c = maxi - c;
    if (diff_a > 0) diff_a--;
    if (diff_b > 0) diff_b--;
    if (diff_c > 0) diff_c--;
    cout << diff_a + diff_b + diff_c;
}
// Check whether n is a triangular number
void istriangular(int n) {
    int k = 1;
    while(n > 0) {
        n -= k; k++;
    }
    cout << (n == 0 ? "YES" : "NO");
}
// Count either the even or odd elements in the array, depending on the parity of the total sum.
void cntevenOdd(int n, int *arr) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    bool iseven = (sum % 2 == 0);
    for(int i = 0; i < n; i++) {
        if(iseven && arr[i] % 2 == 0) cnt++;
        if(!iseven && arr[i] % 2 != 0) cnt++;
    }cout << cnt;
}
// if the smallest and second‑smallest values are equal print "Still Rozdil"; 
// else print the index of the first occurrence of the smallest element.
void isequal(int n, int *arr) {
    if(n == 1) cout << 1, return 0;
    int mn = min(arr[0], arr[1]);
    int duo = max(arr[0], arr[1]);
    for(int i = 2; i < n; i++) {
        if(arr[i] < mn) { duo = mn; mn = arr[i]; }
        else if(arr[i] < duo) duo = arr[i];
    }
    if(mn == duo) cout << "rodzill"; return 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mn)
            cout << i + 1 << endl; return 0;
    }
}
// compute the minimum number of steps needed so that a becomes at least c, when in each step you can add b to a.
void minsteps(int a, int b, int c) {
    if (a >= c || b <= 0) {
        cout << (a >= c ? 0 : -1) << endl;
        return 0;
    }
    int need = c - a; cout << (need + b - 1) / b;
}
// Given n numbers and a target goal,fill buckets of size 8 in order. Return the minimum number of input elements needed
//so that the total number of completely filled buckets is at least goal. If it is impossible, return -1.
void minInput(int n, int goal, int *arr) {
    if(goal == 0) {
        cout << 0; return 0;
    }
    int bucket = 0, total = 0;
    for(int i = 0; i < n; ++i) bucket += arr[i];
    total += bucket / 8; bucket %= 8;
    if(total >= goal) {
        cout << i + 1 << endl; return 0;
    } cout << -1;
}
// compare two computed scores and decide which participant “wins” or if they are equal.
void whowin(int a, int b, int c, int d, int k) {
    int first  = a * b + d * 2;
    int duo = c * a + k * 2;
    if(first < duo) cout << "first";
    else if(first > duo) cout << "duo";
    else cout << "friendship";
}
// compute the integer quotient q = a / b then check whether that quotient is odd
void isOdd(int a, int b) {
    a /= b;
    cout << (a % 2 == 1 ? "YES" : "NO");
}
// computes the total amount you would need to raise each element up to the maximum value in the array
void raiseval(int n, int *arr) {
    int maxi = arr[0];
    for(int i = 1; i < n; ++i) maxi = max(maxi, arr[i]);
    int sum = 0;
    for(int i = 0; i < n; i++) sum += maxi - arr[i];
    cout << sum;
}
// find the length of the longest contiguous segment such that 
// the diff between each adjacent pair of elements is at most limit
int findlen(int n, int limit, int *arr) {
    int len = 1, curr = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i - 1] > limit) curr = 1;
        else ++curr;
    }
    len = max(len, curr); cout << len;
}
void func(int n, int *arr) {
    int x = arr[0] - arr[1];
    for(int i = 2; i < n; i++) {
        int diff = arr[i - 1] - arr[i];
        if(diff != x && diff != arr[i - 1] * 2) {
            cout << arr[n - 1]; return 0;
        }
    }
    cout << ((a[n - 1] < 0 || d < 0) ? arr[n - 1] - x : arr[n - 1] + x);
}
// Is this array such that there is exactly one 0, and all other values are 1
void exitsZero(int n, int *arr) {
    if(n == 1) {
        cout << (arr[0] == 0 ? "YES" : "NO"); return 0;
    }
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) count0++;
        if (arr[i] == 1) count1++;
    }
    cout << (count0 == 1 ? "YES" : "NO");
}
// finds and prints the index of a specific element depending on how many odd numbers are in the array
void printIdx(int n, int *arr) {
    int Odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) ++Odd;
    }
    if(Odd == 1) {
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 == 1)
                cout << i + 1; return 0;
        }
    }
    if(Odd > 1) {
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 == 0)
                cout << i + 1; return 0;
        }
    }
}
