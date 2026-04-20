#include<bits/stdc++.h>
using namespace std;
void findallfactors(int n, vector <int> factors) {
    factors.clear();
    int root = (int)sqrt(n);
    for(int i = 1; i <= root; ++i) {
        if(n % i == 0) {
            factors.push_back(i);
            if(i != n / i) factors.push_back(n / i);
        }
    } sort(factors.begin(), factors.end());
}
pair<int, int> extended_gcd(int a, int b) {
    if (b == 0) return {1, 0};
    auto pr = extended_gcd(b, a % b);
    return {pr.second, pr.first - (a / b) * pr.second};
}
int modInv(int a, int mod) {
    a %= mod;
    if (a < 0) a += mod;
    pair<int, int> pr = extended_gcd(a, mod);
    int x = pr.first, y = pr.second;
    int g = a * x + mod * y; 
    if (g != 1) {
        cerr << "modular inverse does not exist, gcd != 1";
        exit(1);
    }
    int res = (x % mod + mod) % mod; 
    return res;
}
int modDiv(int a, int b, int mod) {
    if (mod <= 0) {
        cerr << "invalid modulus";
        exit(1);
    }
    a = ((a % mod) + mod) % mod;   
    int inv = modInv(b, mod);     
    return (1LL * a * inv) % mod;
}
int chineseRem(int arr[], int rem[], int n) {
    long long prod = 1;
    for (int i = 0; i < n; i++) prod *= arr[i];         
    long long res = 0;
    for (int i = 0; i < n; i++) {
        long long restProd = prod / arr[i];
        long long inv = modInv(restProd % arr[i], arr[i]); 
        res += rem[i] * restProd % prod * inv % prod;
        res %= prod;
    }
    return (int) res;
}
int longestInctsubseq(vector <int> vec, int n) {
    vector <int> seq;
    for(int i = 0; i < n; ++i) {
        auto it = upper_bound(seq.begin(), seq.end(), vec[i]);
        if(it == seq.end()) seq.push_back(vec[i]);
        else *it = vec[i];
    } return (int)seq.size();
}
int primeFactorsBig(int n) {
    unordered_set<int> uns;
    int p = 2;
    while (true) {
        if (n >= p * p) {
            if (n % p == 0) {
                uns.insert(p); n /= p;
            } else p++;
        } else {
            uns.insert(n); break;
        }
    }
    return uns.size();
}
void primeFactorsBig(int n, map<int,int>& mp) {
    int p = 2;
    while (true) {
        if (n >= p * p) {
            if (n % p == 0) {
                mp[p]++; n /= p;
            } else p++;
        } else {
            mp[n]++; break;
        }
    }
}
void primeFactorsBig(int n, vector<int>& v) {
    set<int> factors;
    while (n % 2 == 0) {
        factors.insert(2); n /= 2;
    }
    for (int p = 3; p * p <= n; p += 2) {
        while (n % p == 0) {
            factors.insert(p); n /= p;
        }
    }
    if (n > 1) factors.insert(n);
    v.assign(factors.begin(), factors.end());
}
bool isPrimeBig(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int p = 3; p * p <= n; p += 2) {
        if (n % p == 0) return false;
    }
    return true;
}
void segmentedSeive(int l, int r, vector<int>& segPrimes) {
    int limit = ceil(sqrt(r));
    int sz = r - l + 1;
    vector<bool> bs(sz, 0);
    for (auto primeNum : primes) {
        if (primeNum <= limit) {
            int firstMultiple = (l / primeNum) * primeNum;
            if (firstMultiple < l) firstMultiple += primeNum;
            for (int num = max(firstMultiple, primeNum * primeNum); num <= r; num += primeNum) {
                bs[num - l] = 1;
            }
        }
    }
    for (int i = 0; i < sz; i++) {
        if (bs[i] == 0) segPrimes.push_back(i + l);
    }
}
void segmentedSeive(int l, int r, vector<int>& segPrimes) {
    if (l == 1) l = 2;  // Skip 1
    int sz = r - l + 1;
    vector<bool> isComposite(sz, false);
    
    int limit = sqrt(r);
    for (int p : primes) {
        if (p > limit) break;
        
        // First multiple >= l
        int start = ((l + p - 1) / p) * p;
        if (start == p) start += p;  // Don't mark the prime itself
        
        for (int j = start; j <= r; j += p) {
            isComposite[j - l] = true;
        }
    }
    
    // Collect primes
    segPrimes.clear();
    for (int i = 0; i < sz; i++) {
        if (!isComposite[i]) segPrimes.push_back(l + i);
    }
}
int roundOf(int n) {
    return (int)pow(2, floor(log2(n)));
}
void createZ(string s, int z[]) {
    int n = s.size();
    int l = 0, r = 0;
    z[0] = 0;
    for (int i = 1; i < n; i++) {
        if (i <= r) {
            z[i] = min(r - i + 1, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
}

void zSearch(string text, string pattern, vector<int>& match) {
    string concat = pattern + "$" + text;
    int n = concat.size();
    int psize = pattern.size();
    int z[n];
    createZ(concat, z);
    
    match.clear();
    for (int i = psize + 1; i < n; i++) {
        if (z[i] == psize) {
            match.push_back(i - psize - 1);
        }
    }
}
bool stringCompare(string &s, int ss, string &r, int rs, int len) {
    if (ss + len > s.size() || rs + len > r.size()) return false;
    for (int i = 0; i < len; i++, ss++, rs++) {
        if (s[ss] != r[rs]) return false;
    }
    return true;
}
void rabin(string s, string pattern, vector<int>& match) {
    int sz = s.size();
    int pz = pattern.size();
    if (pz > sz) return;
    int primeNum = 3;
    int patternHash = 0;
    for (int i = 0; i < pz; i++) {
        patternHash += ((int)(pattern[i] - 97 + 1)) * pow(primeNum, i);
    }
    int hashVal = 0;
    for (int i = 0; i < pz; i++) {
        hashVal += ((int)(s[i] - 97 + 1)) * pow(primeNum, i);
    }
    if (hashVal == patternHash) match.push_back(0);
    
    for (int i = pz; i < sz; i++) {
        int k = i - pz;
        hashVal -= (int)(s[k] - 97 + 1);
        hashVal /= 3;
        hashVal += ((int)(s[i] - 97 + 1)) * pow(primeNum, pz - 1);
        if (hashVal == patternHash && stringCompare(s, k + 1, pattern, 0, pz)) 
            match.push_back(k + 1);
    }
}
void prefix_function(string s, vector<int>& pf) {
    int n = s.size();
    pf.resize(n);
    pf[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = pf[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pf[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pf[i] = j;
    }
}

void kmp(string s, string pattern, vector<int>& match) {
    int pz = pattern.size();
    int pos(-1), i(0), j(0);
    vector<int> pf;
    prefix_function(pattern, pf);
    for (auto num : pf) cout << num << " ";
    cout << endl;
    while (i < s.size()) {
        if (s[i] == pattern[j]) {
            j++;
            i++;
        } else {
            if (j != 0) {
                j = pf[j - 1];
            } else i++;
        }
        if (j == pattern.size()) {
            match.push_back(i - pz);
        }
    }
}
void segBuild(vector<int>& seg, vector<int>& des, int n) {
    int domain = n;
    int start = domain - 1;
    int bit = 1;
    
    while (domain > 0) {
        for (int index = start; index < start + domain; index++) {
            if (bit == 1) {
                seg[index] = (seg[2 * index + 1] | seg[2 * index + 2]);
            } else {
                seg[index] = (seg[2 * index + 1] ^ seg[2 * index + 2]);
            }
            des[index] = bit;
        }
        bit ^= 1;
        domain /= 2;
        start = domain - 1;
    }
}
void segUpdate(vector<int>& seg, vector<int>& des, int pos, int val) {
    pos += seg.size() / 2 - 1;  // Convert leaf position
    seg[pos] = val;
    
    while (pos > 0) {
        pos = (pos - 1) / 2;
        seg[pos] = des[pos] ? (seg[2*pos+1] | seg[2*pos+2]) : (seg[2*pos+1] ^ seg[2*pos+2]);
    }
}
