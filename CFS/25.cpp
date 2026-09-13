https://codeforces.com/problemset/problem/25/C
// 25C. Roads in Berland
using namespace std;
int main(){
    int n; cin >> n;
    vector <vector <int>> dist(n, vector <int> (n));
    //vector <int> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> dist[i][j];
    }
    int k; cin >> k;
    while(k--){
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        //int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                dist[i][j] = min({dist[i][j], dist[i][u] + w + dist[v][j], dist[i][v] + w + dist[u][j]});
                //sum += dist[i][j];
            }
        }
        //res.push_back(sum / 2); // sum of the undirected graph
    }
    //compute sum of all pair(i < j)
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++)
            sum += dist[i][j];
    }
    cout << sum << endl;
    //for(int i = 0; i < res.size(); i++)
        //cout << res[i] << " ";
}
using namespace std;
int main(){
    int n; cin >> n;
    vector <vector <int>> mat(n + 1, vector <int> (n));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
        }
    }
    int q; cin >> q;
    while(q--){
        int a, b, c; cin >> a >> b >> c;
        mat[a][b] = min(mat[a][b], c);
        mat[b][a] = min(mat[b][a], c);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                mat[i][j] = min({mat[i][j], mat[i][a] + mat[a][j], mat[i][b] + mat[b][j]});
        }
        int sum = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++)
                sum += mat[i][j];
        }
    }
    cout << sum / 2 << endl;
}
https://codeforces.com/problemset/problem/25/D
// 25D. Roads not only in Berland
using namespace std;
const int ax = 1005;
vector <int> adj[ax];
bool visited[ax];
vector <pair <int, int>> edgcycle; // edges that form cycle
vector <pair <int, int>> newedg; // edge that connects components
int parent[ax];
int find(int x){
    return parent[x] == x ? x : parent[x] = find(parent[x]);
}
void dfs(int u, int parent){
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) dfs(v, u);
        else if(v != parent) edgcycle.push_back({u, v});
    }
}
int main(){
    int n; cin >> n;
    // for(int i = 1; i <= n; i++)    parent[i] = i;
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        /*if(find(u) != find(v)) parent[find(u)] = find(v);
        else edgcycle.push_back({u, v}); */
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int prv = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(prv != 0) newedg.push_back({prv, i});
            prv = i; dfs(i, 0);
        }
    } /*
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(find(i) != find(j)) {
                newedg.push_back({i, j});
                parent[find(i)] = find(j);
            }
        }
    }*/
    cout << edgcycle.size() << endl;
    for(size_t i = 0; i < edgcycle.size(); i++) 
        cout << edgcycle[i].first << " " << edgcycle[i].second << " " << newedg[i].first << " " << newedg[i].second << endl;
}
using namespace std;
vector <int> parent, sizeunion;
int find(int u){
    if(u == parent[u]) return u;
    //path compression
    return parent[u] == find(parent[u]);
}
void unite(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v) return;
    if(sizeunion[u] < sizeunion[v]) swap(u, v);
    parent[v] = u;
    sizeunion[u] += sizeunion[v];
    
}
int main(){
    int n; cin >> n;
    parent.resize(n + 1);
    sizeunion.resize(n + 1, 1);
    for(int i = 1; i <= n; i++)    parent[i] = i;
    vector <pair <int, int>> edgcycle, newedg;
    for(int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        if(find(u) != find(v)) unite(u, v);
        else edgcycle.push_back({u, v});
    }
    // connect remaining components to 1
    for(int i = 2; i < n; i++){
        if(find(i) != find(1)) {
            unite(1, i);
            newedg.push_back({1, i});
        }
    }
    cout << newedg.size() << endl;
    for(size_t i = 0; i < newedg.size(); i++) 
        cout << edgcycle[i].first << " " << edgcycle[i].second << " " << newedg[i].first << " " << newedg[i].second << endl;
}
https://codeforces.com/problemset/problem/25/E
// 25E. Test
using namespace std;
const int ax = 13331;
vector <int> compute(const string &str){
    int n = str.size();
    vector <int> hash(n), p(n);
    p[0] = 1; hash[0] = str[0] - 'a';
    for(int i = 1; i < n; i++){
        p[i] = p[i - 1] * ax;
        hash[i] = hash[i - 1] * ax + (str[i] - 'a');
    }
    return hash;
}
// Get hash of substring str[l..r]
int gethash(const vector <int> &h, int l, int r, const vector <int> &p){
    if(l == 0)    return h[r];
    return h[r] - h[l] * p[r - l + 1];
}
// merge two string with maximal overlap
string mergestr(const string &a, const string &b){
    int n = a.size(), m = b.size();
    auto ahash = compute(a);
    auto bhash = compute(b);
    vector <int> pa(n), pb(m);
    pa[0] = pb[0] = 1;
    for(int i = 1; i < n; i++) 
        pa[i] = pa[i - 1] * ax;
    for(int i = 1; i < m; i++) 
        pb[i] = pb[i - 1] * ax;
    // if b is already inside a
    if(m <= n) {
        for(int i = 0; i <= n - m; i++){
            if(gethash(ahash, i, i + m - 1, pa) == bhash[m - 1])
                return a; 
        }
    }
    // find maximum suffix prefix overlap
    int best = 0;
    int overlaplen = min(n, m);
    for(int i = overlaplen; i > 0; i--){
        if(gethash(ahash, n - i, n - 1, pa) == gethash(bhash, 0, i - 1, pb)) {
            best = i; break;
        }
    }
    return a + b.substr(best);
} 
int overlap(const string &str, const string &ing) {
    string combined = ing + "#" + str;
    int m = combined.size();
    vector <int> pref(m, 0);
    int j = 0;
    for(int i = 1; i < m; i++) {
        while(j > 0 && combined[i] != combined[j])
            j = pref[j - 1];
        if(combined[i] == combined[j]) j++;
        pref[i] = j;
    }
    return pref.back();
}
//compute length of superstring formed by str[x], str[y], str[z]
int superlen(const string &a, const string &b, const string &c) {
    int ovrlap1 = overlap(a, b);
    string tmp = a + b.substr(ovrlap1);
    int ovrlap2 = overlap(tmp, c);
    return tmp.size() + c.size() - ovrlap2;
}
int main(){
    string str[3];
    for(int i = 0; i < 3; i++)
        cin >> str[i];
    int res = INT_MAX; /*
    vector <array <int, 3>> perms = {
        {0, 1, 2}, {0, 2, 1}, {1, 0, 2}, 
        {1, 2, 0}, {2, 0, 1}, {2, 1, 0}
    };
    for(auto perm : perms){
        string merged = mergestr(mergestr(perm[0], perm[1]), perm[2]);
        res = min(res, (int)merged.size());
    } */
    // check all 6 permutations of 3 strings
    vector <int> perm = {0, 1, 2};
    do {
        res = min(res, superlen(str[perm[0]], str[perm[1]], str[perm[1]]));
    } while(next_permutation(perm.begin(), perm.end())); 
    cout << res << endl;
}
