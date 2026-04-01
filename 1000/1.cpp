http://codeforces.com/gym/101575/problem/B
// B. Merge Grids.cpp
using namespace std;
int main(){
    char arr[3][3], arr2[3][3], result[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    string s; getline(cin, s);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cin >> arr2[i][j];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            char mat1 = arr[i][j];
		    char mat2 = arr2[i][j];
		    if(mat1 == mat2)    result[i][j] = mat1;
            else if(mat1 != mat2 && mat1 == '.')    result[i][j]=mat2;
		    else if(mat1 != mat2 && mat2 == '.')    result[i][j]=mat1;
		    else    result[i][j] = 'X';
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout << result[i][j] << " ";
        cout << "\n";
    }
}
using namespace std;
int main() {
    char a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char c1 = a[i][j];
            char c2 = b[i][j];
            if (c1 == c2) {
                cout << c1;
            } else if (c1 == '.') {
                cout << c2;
            } else if (c2 == '.') {
                cout << c1;
            } else {
                cout << 'X';
            }
        }
        cout << "\n";
    }
}

http://codeforces.com/gym/101575/problem/0
// A. Beautiful Necklace.cpp
using namespace std;
bool isbeautiful(string s){
	int n = s.length();
	char y = s[0];
	int cou = count(s.begin(), s.end(), y);
	if(n == cou)    return 1;
	else    return 0;
}
int main(){
    int n; cin >> n;
    int counter = 0, maxlength = 0;
    for(int i = 0; i < n; i++){
	    string s; cin >> s;
	    if(isbeautiful(s)){
	        ++counter;
	        int x = s.length();
	        maxlength = max(maxlength, x);
	    }
	    if(counter)    cout << maxlength;
	    else    cout << 0;
    }
}
using namespace std;
// Check if all characters in the string are the same
bool isBeautiful(const string &s) {
    return count(s.begin(), s.end(), s[0]) == (int)s.size();
}
int main() {
    int n; cin >> n;
    int maxLen = 0;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        if (isBeautiful(s))
            maxLen = max(maxLen, (int)s.size());
    }
    cout << maxLen << "\n";
}
using namespace std;
void main(){
    int n, sum = 0, cnt = 0, cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < 0){
            cnt++; 
            sum = 0;
        }
    }
    cout << cnt;
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n], tmp[n];
    int cur = 0, maxi = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i] >> tmp[i];
    for(int i = 0; i < n; i++){
        cur -= arr[i] + tmp[i];
        if(cur > maxi)
            maxi = cur;
    }
    cout << maxi;
}
using namespace std;
void main(){
    int n; cin >> n;
    int res[10000], cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        while(x > 0){
            int pos = 1;
            while(pos * 10 <= x){
                pos *= 10;
            }
            res[cnt++] = pos;
            x -= pos;
        }
    }
    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++)
        cout << res[i] << " ";
}
using namespace std;
void main(){
    int n; cin >> n;
    vector <int> vec;
    int val = 1;
    while(n > 0){
        int dig = n % 10;
        if(dig != 0)
            vec.push_back(dig * val);
        n /= 10;
        val *= 10;
    }
    cout << vec.size();
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
using namespace std;
int main(){
    int n, cnt = 0; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 1)
            cnt++;
    }
    (cnt == 0) ? cout << "Easy" : cout << "Hard";
}
using namespace std;
int main(){
    int n, cntMin = 0, cntMax = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int maxi = arr[0];
    int mini = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxi){
            cntMax++;
            maxi = arr[i];
        }
        if(arr[i] < mini){
            cntMin++;
            mini = arr[i];
        }
    }
    cout << cntMax + cntMin;
}
using namespace std;
void main(){
    int num; cin >> num;
    int cnt = 0;
    while(num != 0){
        int rem = num % 10;
        num /= 10;
        if(rem == 4 || rem == 7)
            cnt++;
    }
    if(cnt == 4 || cnt == 7)
        cout << "Yes";
    else
        cout << "No";
}
using namespace std;
void main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 2; i++){
        if(arr[i] != arr[i + 1] && arr[i + 1] != arr[i + 2]){
            cout << i + 2;
            break;
        }
        if(arr[i] != arr[i + 1] && arr[i + 1] == arr[i + 2])
            cout << i + 1;
            break;
    }
}
using namespace std;
void main(){
    string str, res; cin >> str;
    int len = str.length();
    if(len > 10)
        res = str[0] + to_string(len - 2) + str[len - 1];
    else
        res = str;
    cout << res;
}
using namespace std;
void main(){
    string str; cin >> str;
    int x = str.length();
    for(int i = 0; i < x - 1; i++){
        for(int j = 0; j < x - i - 1; j++){
            if(str[j] != '+'){
                char tmp = str[j];
                str[j] = str[j + 2]; 
                str[j + 2] = tmp;
            }
        }
    }
    cout << str;
}
