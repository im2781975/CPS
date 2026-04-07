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
