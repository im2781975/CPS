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
