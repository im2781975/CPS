// 22A
using namespace std;
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <functional> 
#include <numeric>
#include <sstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <limits.h>
#include <utility>
#include <cctype>
#include <unordered_set>
#include <chrono>
#include <array>
#include <cstdio>
#include <cstring>
 
#define int long long
#define gg cout << '\n'
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define forn(i, a, n) for (i = a; i < n; i++)
 
string Pi = "3141592653589793238462643383279502884197169399375105820974944592307816406";
 
int gcd(int x, int y)
{
    return (x == 0) ? y : gcd(y % x, x);
}
 
bool isprime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++) if (!(n % i)) return 0;
    return 1;
}
 
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int n, m, l, r, q, p, i, j, x, y, f, t, t1, t2, k, k1, k2, n1, m1, test = 1, ans = 0, cnt = 0, sum = 0, mx = 0, mn = 1e9;
    char ch;
    bool flag = 0;
    string s, st = "", alph = "abcdefghijklmnopqrstuvwxyz", ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
    //cin >> test;
    while (test--)
    {
        cin >> n;
        vector<int> a(n);
        forn(i, 0, n)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        forn(i, 1, n)
        {
            if (a[i] != a[i - 1])
            {
                ans = a[i];
                flag = 1;
                break;
            }
        }
        if (flag) cout << ans;
        else cout << "NO";
    }
}
#include <bits/stdc++.h>
#include <algorithm>

#define Moinator ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define nloop for(auto i=0;i<n;i++)
#define oneloop for(auto i=1;i<n;i++)
#define esc cout<<endl;
#define pb push_back

using namespace std;

int main() {

    Moinator

    int x;
    set<int>s;
    int n;
    cin>>n;
    nloop{
        cin>>x;
        s.insert(x);
    }
    /* Exception case */
    if( s.size() <= 1) {
        cout << "NO";
        esc
        return 0;
    }
    /* End of exception case */
    nloop{
     cout<<*++s.begin();esc /* Iterator to view second(I=1) element of set s */
     break;
    }

    return 0;
}  		
void solve()
{
int n;
cin>>n;
set<int> st;
for(int i=0 ; i<n ; i++)
{
    int x;
    cin>>x;
    st.insert(x);
}
if(st.size() < 2)cout <<"NO";
else{
 
    st.erase(st.begin());
    cout <<*st.begin();
}
 
 
 
 
}
