https://codeforces.com/problemset/problem/3/A
// 3A.Shortest path of the king
using namespace std;
int main() {
    string init, end; cin >> init >> end;
    // dx counts colums, dy counts rows
    int dx = abs(init[0] - end[0]);
    int dy = abs(init[1] - end[1]);
    cout << max(dx, dy) << endl;
    while(init != end) {
        string move = "";
        if(init[0] < end[0]) {
        	move += 'R'; init[0]++;
            // cout << 'R';
        }
        else if(init[0] > end[0]) {
        	move += 'L'; init[0]--;
            // cout << 'L';
        }
        if(init[1] < end[1]) {
        	move += 'U'; init[1]++;
            // cout << 'U';
        }
        else if(init[1] > end[1]) {
        	move += 'D'; init[1]--;
            // cout << 'D';
        }
        // cout << endl;
        cout << move << endl;
    }
}
https://codeforces.com/problemset/problem/4/B
// 4B. Before an Exam
using namespace std;
int main() {
    int days, totaltime; cin >> days >> totaltime;
    vector <int> mintime(days), maxtime(days);
    for(int i = 0; i < days; i++) cin >> mintime[i] >> maxtime[i];
    int totalmintime = accumulate(mintime.begin(), mintime.end(), 0);
    int totalmaxtime = accumulate(maxtime.begin(), maxtime.end(), 0);
    if(totaltime < totalmintime || totaltime > totalmaxtime) {
        cout << "NO"; return 0;
    }
    cout << "YES" << endl; vector <int> res(days);
    int rem = totaltime - totalmintime;
    for(int i = 0; i < days; i++) {
        int extra = min(rem, maxtime[i] - mintime[i]);
        res[i] = mintime[i] + extra;
        rem -= extra;
    }
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    /* 
    if(totalmintimee <= totaltime && totalmaxtime >= totaltime){
        cout << "YES\n";
        for(int i = 0; i < days; i++){
            int t = min(mintime[i] + totaltime - totalmintime, maxtime[i])
            cout << t << (i + 1 < days) ? ' ' : '\n';
            totaltime -= (t - mintime[i]);
        }
    }
    else    cout << "NO"; */
}
https://codeforces.com/problemset/problem/4/C
// 4C. Registration system
using namespace std;
int main() {
    int t; cin >> t;
    map <string, int> mp;
    while(t--) {
        string str; cin >> str;
        if(!mp[str]) cout << "OK" << endl;
        else cout << str << mp[str] << endl;
        // cout << (mp[str] == 0 ? "OK" : str + to_string(mp[str]))<< endl;
        ++mp[str];
    }
}
