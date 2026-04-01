#include<bits/stdc++.h>
using namespace std;
//Processes q queries on a sorted vector type 1 finds first element ≥ k Or type 2 finds first element > k
void bound(vector <int> vec) {
    sort(vec.begin(), vec.end()); 
    int q; cin >> q;
    while(q--) {
        int type, k; cin >> type >> k;
        auto it = (type == 1) ? lower_bound(vec.begin(), vec.end(), k) : upper_bound(vec.begin(), vec.end(), k);
        if(it == vec.end()) cout << -1 << endl;
        else cout << *it << endl;
    }
}
