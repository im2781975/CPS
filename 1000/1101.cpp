using namespace std;
void Isunique(){
    string str, ing; cin >> str >> ing;
    bool flag = true;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 97) str[i] -= 32;
        if(ing[i] >= 97) ing[i] -= 32;
        if(str[i] != ing[i]){
            flag = false;
            break;
        }
    }
    (flag) ? cout << "20 / 20" << "No";
}
using namespace std;
void findMin(){
    string str; cin >> str;
    int b = o = n = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'o') o++;
        else if(str[i] == 'n') n++;
        else if(str[i] == 'b') b++;
    }
    if(b < 2 || o < 2 || n < 2)
        cout << 0;
    else
        cout << min(b, min(o, n)) - 1;
}
#include<bits/stdc++.h>
using namespace std;
void Bubble(int **arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j][0] > arr[j + 1][0]){
                swap(arr[j][0], arr[j + 1][0]);
                swap(arr[j][1], arr[j + 1][1]);
            }
        }
    }
}
int main(){
    int data[4][2]{{3, 2}, {1, 4}, {4, 1}, {2, 3}};
    int *ptr[4];
    for(int i = 0; i < 4; i++)
        ptr[i] = data[i];
    Bubble(ptr, 4);
    for(int i = 0; i < 4; i++)
        cout << ptr[i][0] << " " << ptr[i][1] << "\n";
}
#include<bits/stdc++.h>
using namespace std;
void QuickSort(int *arr, int left, int right){
    int l = left, r = right;
    int mid = arr[l + (r - l) / 2];
    do{
        while(mid > arr[l])
            l++;
        while(mid < arr[r])
            r--;
        if(l <= r){
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            l++; r--;
        }
    }while(l <= r);
    if(left < r)
        QuickSort(arr, left, r);
    if(l < right)
        QuickSort(arr, l, right);
}
int main(){
    int arr[]{2, 3, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
#include<bits/stdc++.h>
using namespace std;
//How much we can divide a rod into a equal part.
void cntPart(){
    int n, res; cin >> n;
    if(n == 1) res = 0;
    else if(n % 2 == 0) res = n / 2;
    else if(n % 3 == 0) res = n / 3;
    else if(n % 5 == 0) res = n / 5;
    else if(n % 7 == 0) res = n / 7;
    else
        res = 1;
    cout << res << " " << n - res;
}
using namespace std;
void statement(){
    int arr[3]; cin >> arr[0] >> arr[1] >> arr[2];
    (arr[0] == arr[2] - 1 && arr[1] == arr[2] - 1 && arr[0] + arr[1] > arr[2]) ? cout << "Yes" : cout << "No";
}
#include<bits/stdc++.h>
using namespace std;
//determine if sumOf the pair is even.
void pairSum(){
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    bool x = (a + d) % 2;
    bool y = (b + e) % 2;
    bool z = (c + f) % 2;
    (x && y && z) ? cout << 1 : cout << p;
}
using namespace std;
void statement(){
    int x; cin >> x;
    cout >> (x * x) * (x * x + 1)/2;
}
//find the maximum sum of a specific sequence from a 2D array
const int N = 5;
void FindSum(){
    int arr[N][N], maxi = INT_MIN, cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            arr[i][j] = i + j;
    }
    for(int i = 0; i <= 1; i++){
        for(int j = i; j <= 2; j++){
            if(j > i + 1)
                j = 3;
            for(int k = j; k <= 3; k++){
                if(k > j + 1)
                    k = 4;
                for(int l = k; l <= 4; l++){
                    if(l > k + 1)
                        l = 5;
                    int sum = arr[0][0] + arr[1][i] + arr[2][j] + arr[3][k] + arr[4][l] ;
                    if(sum > maxi)
                        maxi = sum;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << " " << maxi << "\n";
}
#include<bits/stdc++.h>
using namespace std;
// count how many numbers within range [a,b] (inclusive) do not contain the digit '4' & '26'.
const int maxi = 1e5;
void cntRange(){
    int arr[maxi];
    arr[0] = 1;
    for(int i = 1; i <= maxi; i++){
        int tmp = i;
        bool forbidden = false;
        while(tmp){
            if(tmp % 10 == 4){
                forbidden = true;
                break;
            }
            if(tmp % 10 == 2 && (tmp / 10) % 10 == 6){
                forbidden = true;
                break;
            }
            tmp /= 10;
        }
        if(forbidden)
            arr[i] = arr[i - 1];
        else
            arr[i] = arr[i - 1] + 1;
    }
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0)
            break;
        if(a > b)
            swap(a, b);
        cout << arr[b] - arr[a - 1];
    }
}
using namespace std;
//convert the string in (int, char) pair
vector <pair <int, char > >process(const string &str){
    vector <pair <int, char > > res;
    int pos = 0;
    while(pos < str.length()){
        int len = 0;
        while(pos < str.length() && str[pos] >= '0' && str[pos] <= '9'){
            len = len * 10 + (str[pos] - '0');
            pos++;
        }
        if(len == 0)
            len = 1;
        if(pos < str.length()){
            res.push_back({len, str[pos]});
            pos++;
        }
    }
    return res;
}
using namespace std;
// find the minimal unused capacity of a knapsack of size cap given n items of various sizes. 
const int N = 200100;
int main(){
    int cap, n; cin >> cap >> n;
    //cap - knapsack capacity n - number of items
    int arr[N] = {0};
    for(int i = 1; i <= n; i++){
        int sz; cin >> sz;
        for(int j = cap; j >= sz; j--)
            arr[j] = max(arr[j - sz] + sz, arr[j]);
    }
    cout << cap - arr[cap];
}
#include<bits/stdc++.h>
using namespace std;
void pascalTriangle(){
    int n; cin >> n;
    int arr[33][33];
    arr[1][1] = 1;
    for(int i = 2; i <= n; i++){
        arr[i][1] = 1;
        arr[i][i] = 1;
        for(int j = 2; j < i; j++)
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
//counts how many times the subsequent elements are greater than or equal to the current element, 
// adjusts the count based on certain conditions, and then prints n - cnt for each outer loop iteration.
void SubSequent(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] >= arr[i]){
                cnt++;
                if(j == n - 1)
                    cnt--;
            }
            else{
                i = j - 1;
                //start the outer loop where it is broken.
                if(cnt > 0)
                    cnt--;
                break;
            }
        }
    }
    cout << n - cnt;
}
#include<bits/stdc++.h>
using namespace std;
void subarrSum(){
    int n; cin >> n;
    int arr[n], sum = 0;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    int i = 1, j = n -1, k = 5;
    while(k > 0 && i < n - 1 && j >= 0){
        if(arr[i] + arr[i - 1] < arr[j]){
            i += 2;
            k--;
        }
        else if(arr[i] + arr[i - 1] > arr[j]){
            j--; k--;
        }
        else if(arr[i] + arr[i - 1] == arr[j] && k >= 2){
            i += 2, j--; k-= 2;
        }
        else{
            j--; k--;
        }
    }
    i = max(1, i - 1);
    for(int idx = i; idx <= j; idx++)
        sum += arr[idx];
    cout << sum;
}
using namespace std;
//implements a sieve algorithm to generate prime numbers and 
// calculate the Euler's Totient function (φ) for each number up to N
const int N = 1e5;
bool Isprime[N];
int prime[N / 10], cnt = 0, phi[N], arr[N];
void eularTotient(){
    fill(Isprime, Isprime + N, true);
    Isprime[0] = Isprime[1] = false;
    for(int i = 0; i < N; i++)
        phi[i] = i;
    for(int i = 2; i < N; i++){
        if(Isprime[i]){
            prime[cnt++] = i;
            phi[i] = i - 1;
        }
        for(int j = 0; j < cnt && prime[j] * i < N; j++){
            int composite = i * prime[j];
            arr[composite] = prime[j];
            Isprime[composite] = false;
            if(i % prime[j] == 0){
                phi[composite] = phi[i] * prime[j];
                break;
            }
            else
                phi[composite] = phi[i] * (prime[j] - 1);
        }
    }
    for(int i = 0; i < 20; i++)
        cout << phi[i] << " ";
}
using namespace std;
//determine how dynamic the array is in terms of new highs and lows as you traverse it 
//from start to end. By counting the number of times the max and min values change,
void cntMaxMin(){
    int n; cin >> n;
    int arr[n], cntMin = 0, cntMax = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = arr[0], maxi = arr[0];
    for(int i = 1; i < n; i++){
        if(mini > arr[i]){
            mini = arr[i];
            cntMin++;
        }
        if(maxi < arr[i]){
            maxi = arr[i];
            cntMax++;
        }
    }
    cout << cntMax + cntMin;
}
using namespace std;
//find the length of the longest contiguous subarray in an array of integers where the absolute difference between consecutive elements remains consistent.
void subarrLen(){
    int n; cin >> n;
    int arr[n], cnt = 1, maxlen = 1;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int diff = abs(arr[1] - arr[0]);
    for(int i = 1; i < n; i++){
        int tmp = abs(arr[i + 1] - arr[i]);
        if(diff == tmp){
            cnt++;
            if(cnt > maxlen)
                maxlen = cnt;
        }
        else{
            diff = tmp;
            cnt = 1;
        }
    }
    cout << "maximum length is: " << maxlen;
}
//count the number of times the x value from one input pair matches the
//y value from another input pair, excluding when they are at the same index. 
using namespace std;
void matchPair(){
    int n; cin >> n;
    int arr[n], tmp[n], cnt = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        arr[i] = x; tmp[i] = y;
    }
    for(int i = 0, j = 0; i < n, j < n; i++, j++){
        if(arr[i] == tmp[j] && i != j) cnt++;
    }
    cout << "Matched pair is: " << cnt;
}
using namespace std;
//Count Consecutive Duplicate & count the number of distinct contiguous segments in an array of integers
void cntUnqDup(){
    int n; cin >> n;
    int arr[n], unq = 0, dup = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1])
            unq++;
        if(arr[i] != arr[i + 1])
            dup++;
    }
    cout << "Consecutive Duplicate: " << dup << "\nUnique element is: " << unq + 1;
}
using namespace std;
//find the maximum gap between adjacent elements in an array after removing
//one element in a way that minimizes the maximum gap between the remaining adjacent elements. 
void maximumGap(){
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = INT_MAX, pos = -1;
    for(int i = 2; i < n; i++){
        if(arr[i] - arr[i - 2] < mini){
            mini = arr[i] - arr[i - 2];
            pos = i - 1;
        }
    }
    int maxi = INT_MAX;
    for(int i = 0; i < n - 1; i++){
        if(i + 1 == pos && i + 2 < n){
            maxi = max(maxi, arr[i + 2] - arr[i]);
            i++;
        }
        else
            maxi = max(maxi, arr[i + 1] - arr[i]);
    }
}
using namespace std;
// calculate the total exercise done for each muscle group over the n days 
//and determine which muscle group has the maximum exercise.
void Exercise(){
    int n; cin >> n;
    int *exercise = new int[n];
    for(int i = 0; i < n; i++)
        cin >> exercise[i];
    int chest = biceps = back = 0;
    switch(i % 3){
        case 0: 
            chest += exercise[i]; break;
        case 1:
            biceps += exercise[i]; break;
        case 2: 
            back += exercise[i]; break;
    }
    if(chest > biceps && chest > back)
        cout << "chest: " << chest;
    else if(biceps > chest && biceps > back)
        cout << "biceps: " << biceps;
    else
        cout <<"Back: " << back;
}
using namespace std;
// calculate sum of the first two integers in each triplet, 
//store these in an array, and then find and print the largest sum decreased by 1.
void maxSum(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b;
        c = a + b;
        arr[i] = c;
    }
    int maxi = arr[0];
    for(int i = 1; i < n; i++){
        if(maxi < arr[i])
            maxi = arr[i];
    }
    cout << maxi - 1;
}
void maxSum(){
    int n; cin >> n;
    int a[n], b[n], c[n], sum = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for(int i = 0; i < n; i++){
        sum -= (a[i] + b[i]);
        c[i] = sum;
    }
    int maxi = c[0];
    for(int i = 1; i < n; i++){
        if(maxi < c[i])
            maxi = c[i];
    }
    cout << maxi;
}
#include<bits/stdc++.h>
using namespace std;
void executeIng(){
    int n; cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        if(str.size() > 10 )
            cout << str[0] << " " << str.size() - 2 << " " << str[str.size() - 1];
        else
            cout << str;
    }
}
using namespace std;
const int N = 1e7;
bool mark[N];
int prime[N / 10], cnt = 0;
void printPrime(){
    mark[0] = mark[1] = false;
    for(int i = 2; i < N; i++)
        mark[i] = true;
    for(int i = 2; i < N; i++){
        if(mark[i]){
            prime[++cnt] = i;
            for(int j = i * 2; j < N; j += i)
                mark[j] = false;
        }
    }
    int sum = 0;
    for(int i = 0; i < 25; i++){
        cout << prime[i] << " ";
        sum += prime[i];
    }
    cout << "sum of the prime is: " << sum;
}
using namespace std;
// find and print the 1-based index of the unique element in
void findUnqIdx(){
    int t; cin >> t;
    int res[t];
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int unqIdx = -1;
        if(arr[0] != arr[1]){
            unqIdx = (arr[1] == arr[2]) ? 0 : 1;
        }
        else{
            for(int i = 2; i < n; i++){
                if(arr[0] != arr[i]){
                    unqIdx = i;
                    break;
                }
            }
        }
        res[t] = unqIdx + 1;
    }
    for(int i = 0; i < t; i++)
        cout << res[i] << " ";
}
using namespace std;
//Sum consecutive integer Diffrence
void sumDiff(){
    int arr[3];
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    for(int i = 0; i < n; i++)
        arr[i] = abs(arr[i]);
    
    int x = abs(arr[1] - arr[0]);
    int y = abs(arr[2] - arr[1]);
    cout << x + y;
}
// determine the minimum number of steps required to make two integers equal. 
using namespace std;
void countStep(){
    int n; cin >> n;
    vector <int> res(n);
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        int step = 0;
        if(a > b){
            int diff = a - b;
            if(diff % 2 == 0) ? step = 1 : step = 2;
        }
        else if(a < b){
            int diff = b - a;
            if(diff % 2 == 0) ? step = 2 : step = 1;
        }
        else
            step = 0;
        res[i] = step;
    }
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
}
//find the first occurrence where adjacent elements are different
using namespace std;
void spyDetect(){
    int t; cin >> t;
    vector <int> res(t);
    for(int k = 0; k < t; k++){
        int n; cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int cnt = -1;
        if(arr[0] != arr[1]){
            cnt = (arr[0] != arr[2]) ? 1 : 2;
        }
        else{
            for(int i = 2; i < n; i++){
                if(arr[i] != arr[0]){
                    cnt = i + 1;
                    break;
                }
            }
        }
        res[t] = cnt;
    }
    for(int i = 0; i < t; i++)
        cout << res[i] << " ";
}
using namespace std;
//Find the nxt number which contain unique digits
bool IsDistinct(int num){
    set <int> digits;
    while(num > 0){
        int dig = num % 10;
        //if already exits dig
        if(digits.count(dig))
            return false;
        digits.insert(dig);
        num /= 10;
    }
    return true;
}
int main(){
    int n; cin >> n;
    for(int i = n + 1; ; i++){
        //print the nxt distinct
        if(IsDistinct(i)){
            cout << i ;
            break;
        }
    }
}
using namespace std;
// determine if all the levels from 1 to n are covered by the unique elements present in two given arrays. 
int RemoveDup(int *arr, int n){
    if(n == 0 || n == 1)
        return n;
    int tmp[n], j = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i + 1])
            tmp[j++] = arr[i];
    }
    tmp[j++] = arr[n - 1];
    for(int i = 0; i < n; i++)
        arr[i] = tmp[i];
    return j;
}
int main(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int arr[a], tmp[b];
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    a = RemoveDup(arr, n);
    for(int i = 0; i < b; i++)
        cin >> tmp[i];
    b = RemoveDup(tmp, n);
    int cnt = n;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == j)
                cnt--;
        }
    }
    for(int i = 0; i < b; i++){
        // Iterate over all levels Player B can complete
        for(int j = 0; j < n; j++){
        // Compare each level Player B can complete to all levels from 0 to n-1
            if(tmp[i] == j)
                cnt--;
        }
    }
    (cnt == 0)? cout << "Become the Guy" : cout << "No ome";
}
using namespace std;
void IsDistinct(){
    int totalLevel; cin >> totalLevel;
    //Number of Levels that a can complete
    int a; cin >> a;
    set <int> Levels;
    for(int i = 0; i < a; i++){
        int lev; cin >> lev;
        Levels.insert(lev);
    }
    int b; cin >> b;
    for(int i = 0; i < b; i++){
        int lev; cin >> lev;
        Levels.insert(lev);
    }
    if((int)Levels.size() == n) ? cout << "Become the Guy" : cout << "No one";
    
    /*bool Levels[totalLevel + 1];
    for(int i = 0; i < a; i++)
        Levels[i] = true;
    for(int i = 0; i < b; i++)
        Levels[i] = true;
    for(int i = 1; i <= n; i++){
        if(!Levels[i])
            return 0;
    }
    cout << "Become the Guy";*/
}
using namespace std;
//calculate and display 2^num to find the sum of the digits of the resulting number. 
int powerTwo(int digits[], int cntDig){
    int tmp = 0;
    for(int i = 0; i < cntDig; i++){
        //double the digit arr elements
        int product = digits[i] * 2 + tmp;
        digits[i] = product % 10;
        tmp = product / 10;
    }
    while(tmp){
        digits[cntDig] = tmp % 10;
        tmp /= 10;
        cntDig++;
    }
    return cntDig;
}
void powerBase(int num){
    int digits[500], cntDig = 1, sumDig = 0;
    
    digits[0] = 1;  //2^0 = 1
    for(int i = 1; i <= num; i++)
        cntDig = powerTwo(digits, cntDig);
    for(int i = cntDig - 1; i >= 0; i--){
        cout << digits[i];
        sumDig += digits[i];
    }
    cout << "\n" << sumDig << "\n";
}
int main(){
    int num; cin >> num;
    powerBase(num);
}
using namespace std;
void checkDiag(){
    int n; cin >> n;
    vector <vector <char> >matrix(n, vector <char> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    char Diag = matrix[0][0];
    for(int i = 0; i < n; i++){
        if(matrix[i][i] != Diag || matrix[i][n - i - 1] != Diag){
            cout << "No";
            return 0;
        }
    }
    char notDiag = matrix[0][1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && i + j != n - 1){
                if(matrix[i][j] != notDiag){
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
}
using namespace std;
// fill a matrix with alternating 'B' and 'W' characters, starting from the given positions marked with a dot ('.'). 
void fillChar(){
    int row, col; cin >> row >> col;
    cin.ignore();
    vector <string> matrix(row);
    for(int i = 0; i < row; i++){
        getline(cin, matrix[i]);
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == '.'){
                matrix[i][j] = ((i + j) % 2 == 0) ? 'B' : 'W';
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}
using namespace std;
const int N = 1010;
int w, n, dp[N][N], wt[N], item[N];
void KnapSack(){
    cin >> w >> n;
    for(int i = 1; i <= n; i++)
        cin >> wt[i] >> item[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < w; j++){
            //If the curr item isn't included, the value remains the same as when considering only the first (i - 1)items.
            dp[i][j] = dp[i - 1][j];
            if(j >= wt[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - wt[i]] + item[i]);
        }
    }
    cout << dp[n][w];
}
using namespace std;
//an array representing the number of additional sockets available from various devices. 
//Each device can contribute a certain number of additional sockets.
//determine how many of these devices you need to use to ensure that you have enough sockets to accommodate a given number of devices.
void mergesort(int *arr, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1], right[n2];
    for(int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for(int i = 0; i < n2; i++)
        right[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = left[i];
        k++; i++;
    }
    while(j < n2){
        arr[k] = right[j];
        k++; j++;
    }
}
void merge(int *arr, int l, int r){
    if(l < r){
        int mid = l + (r - l) / 2;
        merge(arr, l, mid);
        merge(arr, mid + 1, r);
        mergesort(arr, l, mid, r);
    }
}
int main(){
    //supply :The number of devices have to (or array elements)add.each supply device contibute some socket which is stored in arr
    //devices:(total number of devices) sockets: initial number of available sockets
    int supply, socket, device; cin >> supply >> socket >> device;
    int arr[supply];
    for(int i = 0; i < supply; i++)
        cin >> arr[i];
    merge(arr, 0, supply - 1);
    if(socket >= device)
        cout << 0;
    else{
        int i = 0;
        while(i < supply && device > socket){
            //atleast 1 socket connect with supply device.
            socket += arr[i] - 1;
            i++;
        }
        if(i != supply)
            cout << i;
        else if(socket >= device)
            cout << i;
        else
            cout << -1;
    }
}
using namespace std;
void Collatz Conjecture(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        (x % 2 == 0) ? x /= 2 : x = 3 * x + 1;
        cout << x << " ";
    }
}
using namespace std;
//if the charge is less than 60% will take 1 minute to charge for every 1%. If the charge is less than 80%  will take 2 minute 
// And finally from 80% it will take 3 minutes .if the current charge is X% then how many minutes it will take to charge completely.
void cntMinute(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int minute[n];
    if(arr[i] >= 0 && arr[i] < 60)
        minute[i] = (60 - arr[i]) * 1;
    else if(arr[i] >= 60 && arr[i] < 80)
        minute[i] = (80 - arr[i]) * 2 + 40;
    else if(arr[i] >= 80 && arr[i] <= 100)
        minute[i] = (100 - arr[i]) * 3 + 140;
    for(int i = 0; i < n; i++)
        cout << minute[i] << " ";
}
using namespace std;
// determine how many 01 and 10 pair exist in the a string.
void pairMatch(){
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 0;
    for(int i = 0, j = 1; str[j]; i++, j++){
        if((str[i] == '1' && str[j] == '0') || (str[i] == '0' && str[j] == '1')
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void binarySearch(){
    vector <int> vec {2, 6, 8, 10, 12, 14, 15, 18, 19, 28, 30};
    int low = 0, high = vec.size() - 1;
    int trg = 15, res = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            res = mid;
            break;
        }
        else if(arr[mid] > trg)
             high = mid - 1;
        else
            low = mid + 1;
    }
    cout << res;
}
using namespace std;
void Diffrence(){
    int a, b; cin >> a >> b;
    if(a >= 0 && b >= 0 && a <= 100 && b <= 100){
        int dist = abs(a - b)
        cout << dist;
    }
}
using namespace std;
void pattern(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--)
            cout << j << " ";
        cout << "\n";
    }
}
// divide N among 3 people such that every person get the same amount. If possible give same amount to 3 people, print -1 otherwise print the amount.
void divideAgain(){
    int x; cin >> x;
    (x % 3 == 0)? cout << x / 3 ; cout << -1;
}
using namespace std;
//captain put the notebooks of girls first, and then the boys. captain should keep the boy's notebooks to the left side and then the girl's notebooks. 
//If the last index of a girl's notebook is K then can you print them in the right order? Note: If K is 0, that means there is no girl's notebook.
void divideThem(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int m; cin >> m;
    //girls notebook
    for(int i = m; i <= n; i++)
        cout << arr[i] << " ";
    //boys botebook
    for(int i = 0; i < m; i++)
        cout << arr[i] << " ";
}
using namespace std;
void fifaYear(){
    int year; cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "Yes";
    else
        cout << "No";
}
using namespace std;
void FirstLastIdx(){
    vector <int> arr{1, 2, 3, 3, 3, 4, 5, 6};
    int low = 0, high = arr.size() - 1;
    int trg = 3, firstIdx = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            firstIdx = mid;
            high = mid - 1;
        }
        else if(arr[mid] > trg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    low = 0, high = arr.size() - 1;
    int lastIdx = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == trg){
            lastIdx = mid;
            low = mid + 1;
        }
        else if(arr[mid] > trg)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << firstIdx << " " << lastIdx;
}
using namespace std;
// given an array of N positive integers. Find the maximum even value from the array. For finding, can perform only one of the following operations-
//Choose any even value from the array.
// Choose any two(must be different) values from the array and perform summation on those two values. If it will even you can pick those two values.
void pickValue(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    int res = ans = 0;
    int evenCnt = oddCnt = 2;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] % 2 == 0 && evenCnt > 0){
            evenCnt--;
            res += arr[i];
        }
        else if(arr[i] % 2 == 1 && oddCnt > 0){
            oddCnt--;
            ans += arr[i];
        }
    }
    if(oddCnt > 0)
        cout << res;
    else
        cout << max(res, ans);
}
using namespace std;
//Count the total unique characters from the string
void cntUnique(){
    int arr[26] = {0}, cnt = 0;
    string str; cin >> str;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z')
            arr[str[i] - 'a']++;
        i++;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] > 0)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
//count the total unique hand shakes
void cntHandShakes(){
    int n; cin >> n;
    int res = (n * (n - 1)) / 2;
    cout << res;
}
using namespace std;
//reorder a string letters in such a way that it becomes a palindrome
void createPalindrome(){
    string str; cin >> str;
    int len = str.size();
    vector <int> freq(27, 0);
    for(int i = 0; i < freq.size(); i++)
        freq[str[i] - 'A' + 1]++;
    int oddval = -1, totalchar = 0,odd = 0;
    char ch;
    for(int i = 1; i <= 26; i++){
        if(freq[i] >= 0) totalchar++;
        if(freq[i] % 2 != 0){
            oddval = freq[i];
            ch = i + 64;
            freq[i] = 0;
            odd++;
        }
    }
    if(odd > 1){
        cout << "No Solution";
        return 0;
    }
    int remain = len;
    if(odd != -1){
        totalchar -= 1;
        remain -= oddval;
    }
    string first, second;
    for(int i = 1; i <= 26; i++){
        if(freq[i] > 1){
            char evenchar = i + 64;
            int half = freq[i] / 2;
            first.append(half, evenchar);
            second.append(half, evenchar);
        }
    }
    reverse(second.begin(), second.end());
    cout << first;
    if(odd != -1)
        cout << string(oddval, ch);
    cout << second;
}
using namespace std;
void xossPatern(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i;
        for(int j = 2; j <= n; j++){
            if(i == 1)
                cout << j;
            else if(i < n){
                if(j == n)
                    cout << n;
                else
                    cout << " ";
            }
            else
                cout << n;
        }
        cout << "\n";
    }
}
using namespace std;
bool Isvalid(){
    string str; cin >> str;
    stack <char> st;
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else if(ch == ')' && !st.empty() && st.top() == '(')
            st.pop();
        else if(ch == '}' && !st.empty() && st.top() == '{')
            st.pop();
        else if(ch == ']' && !st.empty() && st.top() == '[')
            st.pop();
        else
            st.push(ch);
    }
    (st.empty())? cout << "valid" : cout << "Invalid";
}
using namespace std;
bool Isvalid(string str){
    int n = str.size();
    bool found = true;
    vector <int> vec();
    for(int i = 0; i < n; i++){
        if((int)vec.size() == 0)
            vec.push_back(str[i]);
        else{
            char ch = vec.back();
            if(ch == '{' && str[i] == '}')
                vec.pop_back();
            else if(ch == '[' && str[i] == ']')
                vec.pop_back();
            else if(ch == '(' && str[i] == ')')
                vec.pop_back();
            else
                vec.push_back(str[i]);
        }
    }
    found = (vec.size() == 0) ? true : false;
    return found;
}
#include<bits/stdc++.h>
using namespace std;
// If b is added to twice a number, the sum will be sum. What is the number
void TwinNumber(){
    int sum, a, b; cin >> sum >> a;
    b = sum - a;
    cout << b / 2;
}
using namespace std;
//If a value of a matrix matches with the current row and column  add 3.
//If matches only the current row then add 2, If matches only the current column number then add 1 with the value.
void 2DOperation(){
    int row, col; cin >> row >> col;
    int arr[101][101];
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++)
            cin >> arr[i][j];
    }
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if(i == arr[i][j] && j == arr[i][j])
                arr[i][j] += 3;
            else if(i == arr[i][j])
                arr[i][j] += 2;
            else if(j == arr[i][j])
                arr[i][j] += 1;
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
using namespace std;
//return the square root of n rounded down the nearest integers
void sqrot(){
    int n; cin >> n;
    int low = 0, high = n - 1, res;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(mid * mid <= n){
            res = mid;
            low = mid + 1;
        }
        if(mid * mid > n)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << res;
}
using namespace std;
void searchVal(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int trg; cin >> trg;
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == trg){
            idx = i;
            break;
        }
    }
    (idx!= -1) ? cout << idx + 1 : cout << "Not Found";
}
using namespace std;
// a number would be a good secret code if no other number except 1 and N can divide that number. find out that number
void secretCode(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        int cnt = 0;
        if(arr[i] == 0 || arr[i] == 1)
            cnt++;
        for(int j = 2; j <= (arr[i] / 2); j++){
            if(arr[i] % j == 0){
                cnt++;
                break;
            }
        }
        (cnt == 0) ? cout << "Yes" : cout << "No";
    }
}
using namespace std;
void ReversePrint(){
    int n; cin >> n;
    stack <int> st;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        st.push(x);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
using namespace std;
//each number [1 – 9] represent [A – I].But if the number is more than one digit it reverse itself.
void RevCode(){
    int n; cin >> n;
    while(n > 0){
        cout << char(64 + n % 10);
        n /= 10;
    }
}
using namespace std;
//given signs(plus or minus) consecutively. not one by one.count maximum of all signs which give sequentially
void plusMinus(){
    int n; cin >> n;
    string str; cin >> str;
    int cnt = 1, maxi = 1;
    for(int i = 1; i < n; i++){
        if(str[i] == str[i - 1])
            cnt++;
        else
            cnt = 1;
        if(maxi <= cnt)
            maxi = cnt;
    }
    cout << maxi;
}
using namespace std;
int peakIdx(vector <int> &vec){
    int res;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > vec[i - 1] && vec[i] > vec[i + 1]){
            res = i;
            break;
        }
    }
    cout << res;
}
using namespace std;
//If any player isn't able to make at least K runs he will be out of the team. Count number of players that will be out of the team
void outOfTeam(){
    int player, run; cin >> player >> run;
    int arr[player], cnt = 0;
    for(int i = 0; i < player; i++)
        cin >> arr[i];
    for(int i = 0; i < player; i++){
        if(arr[i] < run)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
// given a string consisting Add, Mult. next line will contain two positive values. Calculate the sum of every operations. 
void Operation(){
    string str; cin >> str;
    int a, b; cin >> a >> b;
    int res = 0;
    for(int i = 0; str[i]; i++){
        if(str[i] == '+')
            res = a + b;
        else if(str[i] == '*')
            res = a * b;
    }
    cout << res;
}
using namespace std;
const int N = 300;
void MissingSeqNum(){
    int n; cin >> n;
    int arr[N];
    for(int i = 1; i < n; i++){
        int x; cin >> x;
        arr[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] != 1)
            cout << i << " ";
    }
}
using namespace std;
// Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers
void MissingNum(){
    int sum, a, b, c; cin >> sum >> a >> b >> c;
    int res = sum - (a + b + c);
    cout << res;
}
using namespace std;
//If a word isn't a palindrome, print “Not Palindrome”.elseIfword is too long if its and length more than 7 characters.
//All too long words should be replaced with a special abbreviation.if it is plaindrome and length is less than or equal 7 characters.Then, print the word
void Ispalindrome(){
    string str; cin >> str;
    int IsPalindrome = 1, len = str.size();
    for(int i = 0; i < len / 2; i++){
        if(str[i] != str[len - 1 - i]){
            IsPalindrome = 0;
            break;
        }
    }
    if(IsPalindrome){
        if(len > 7)
            cout << str[0] << " " << len - 2 << " " << str[len - 1];
        else
            cout << str;
    }
    else
        cout << "Not Palindrome";
}
using namespace std;
//Find the highest marks.and print the diffrence between another marks
void HighestMark(){
    int n; cin >> n;
    int mark[n];
    for(int i = 0; i < n; i++)
        cin >> mark[i];
    int tmp = mark[0];
    for(int i = 1; i < n; i++){
        if(tmp < mark[i])
            tmp = mark[i];
    }
    for(int i = 0; i < n; i++){
        cout << tmp - mark[i] << " ";
    }
}
using namespace std;
//modify an array so that it is increasing.every element at least as large as previous one.
//one each move you can increase the value of any element by one.what is the minimum move required.
void Incrarr(){
    int n; cin >> n;
    int arr[n], res = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1])
            res += arr[i - 1] - arr[i];
    }
    cout << res;
}
using namespace std;
bool IsPalindrome(string str){
    int n = str.size();
    int l = 0, r = n - 1;
    while(l < r){
        if(str[l] != str[r])
            return false;
        l++; r--;
    }
    return true;
}
bool IsPalindrome(string str){
    if(str == " " || str.size() == 1)
        return true;
    int n = str.size();
    string ing = str.substr(1, n - 1);
    return IsPalindrome(ing) && (str[0] == str.back())b;
}
using namespace std;
//distribute a TotalL into a specified number of parts(num) with each part not exceeding a maximum limit (maxiL). 
void distributeLen(){
    int num, maxiL, totalL; cin >> num >> maxiL >> totalL;
    for(int i = 1; i < num; i++){
        if(maxiL <= totalL){
            cout << maxiL << " ";
            totalL -= maxiL;
        }
        else if(totalL > 0){
            cout << totalL << " ";
            totalL = 0;
        }
        else
            cout << 0;
    }
}
using namespace std;
void binarySum(){
    int x; cin >> x;
    int sum = 0, i = 0;
    while(x > 0){
        sum += (x % 10) + pow(2, i++);
        x /= 10;
    }
    cout << sum;
}
using namespace std;
void Operation(){
    int x; cin >> x;
    int res = pow(x, 2) + x + 41;
    cout << res;
}
using namespace std;
//Find the minimum difference between the largest & 2nd smallest and
//the difference between the second largest & the smallest element.
void FindMinDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    if(n < 2){
        cout << "Not Enough Elements";
        return;
    }
    cout << "Minimum Diff is: " << min((vec[n - 1] - vec[1]), (vec[n - 2] - vec[0]));
}
using namespace std;
//calculates the difference between the sum of the max and sum of the min elements
void maxDiffrence(){
    int n; cin >> n;
    if(n < 2){
        cout << "Invalid Input";
        return;
    }
    int mid = n / 2;
    vector <int> vec(mid), cev(mid);
    for(int i = 0; i < mid; i++)
        cin >> vec[i];
    for(int i = 0; i < mid; i++)
        cin >> cev[i];
    sort(vec.begin(), vec.end())
    sort(cev.begin(), cev.end());
    int maxSum = vec[mid - 1] + cev[mid - 1];
    int minSum = vec[0] + cev[0];
    cout << maxSum - minSum;
}
using namespace std;
void multMaxInt(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    int x = vec[n - 1] * vec[n - 2];
    int y = vec[0] * vec[1];
    (x >= y) ? cout << x : cout << y;
}
using namespace std;
//determines the minimum number of elements needed such that 
//their sum is greater than the sum of the remaining elements in the vector.
void CntElements(){
    int n; cin >> n;
    int sum = 0, cnt = 0, tmp = 0;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        vec.push_back(val);
        sum += val;
    }
    sort(vec.begin(), vec.end());
    for(int i = n - 1; i >= 0; i--){
        tmp += vec[i]; cnt++;
        if(tmp > (sum - tmp))
            break;
    }
    cout << "Maximum Sum elements Count are: " << cnt;
}
using namespace std;
//calculates the length of the longest contiguous subarray that excludes the min & max values
void lengthSubarr(){
    int n, res = 0; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        vec.push_back(val);
    }
    sort(vec.begin(), vec.end());
    auto it = upper_bound(vec.begin(), vec.end(), vec[0]);
    int dist1 = it - vec.begin();
    it = lower_bound(vec.begin(), vec.end(), vec[vec.size() - 1]);
    it--;
    int dist2 = it - vec.begin();
    cout << "Diff between upper & lower bound is: " << max(res, dist2 - dist1 + 1);
}
using namespace std;
// Determine weither a vector decreasing or not
void IsDecreasing(){
    int n, m, val; cin >> n >> m;
    vector <int> vec, cev;
    for(int i = 0; i < n; i++){
        cin >> val; vec.push_back(val);
    }
    for(int i = 0; i < m; i++){
        cin >> val; cev.push_back(val);
    }
    sort(cev.begin(), cev.end(), greater <int> ());
    int j = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] == 0 && j < m){
            vec[i] = cev[j];
            j++;
        }
    }
    bool IsDecrease = true;
    for(int i = 1; i < n ; i++){
        if(vec[i] >= vec[i - 1])
            IsDecrease = false;
    }
    (IsDecrease)? cout << "Yes" : cout << "No";
}
using namespace std;
//find and print the absolute diff between consecutive elements, 
//the absolute diff between each element and the max & min values in the sequence, 
// the diff between the min and max values in the sequence.
void AbsDiff(){
    int x = INT_MIN, y = INT_MAX;
    int n, val; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        cin >> val; vec.push_back(val);
        x = max(x, val);
        y = min(y, val);
    }
    cout << abs(vec[0] - vec[1]) << "\n" << abs(vec[1] - x) << "\n";
    for(int i = 1; i < n - 1; i++){
        cout << min(abs(vec[i] - vec[i - 1]), abs(vec[i] - vec[i + 1])) << "\n";
        cout << max(abs(vec[i] - x), abs(vec[i] - y)) << "\n";
    }
    cout << abs(vec[n - 1] - vec[n - 2]) << "\n" << y - x;
}
using namespace std;
//count sequences of consecutive 'B's in a given string 
//and output the number of such sequences along with their lengths.
void cntConsecutiveLen(){
    int n, cnt = 0; cin >> n;
    string str; cin >> str;
    vector <int> vec;
    for(int i = 0; str[i]; i++){
        if(str[i] == 'B')
            cnt++;
        else if(cnt != 0){
            vec.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt != 0)
        vec.push_back(cnt);
    cout << vec.size() << " ";
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
using namespace std;
//counts consecutive zeros and outputs the length of
//longest such consecutive zero sequence for each test case
void cntZeroLen(){
    int n, cnt = 0; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 0) cnt++;
        else if(cnt != 0){
            vec.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt > 0)
        vec.push_back(cnt);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
using namespace std;
// Determines whether it's possible to split a string of digits into two increasing subsequences. 
//If possible, outputs a vector indicating which subsequence each digit belongs to (1 or 2). else outputs "-".
void splitString(){
    int n; cin >> n;
    string str; cin >> str;
    bool found = false;
    for(int i = 0; i <= 9; i++){
        string a, b;
        vector <int> vec;
        bool validSplit = true;
        bool added = false;
        for(int j = 0; j < n; j++){
            int cur = str[j] - '0';
            if(cur > i){
                if(!a.empty() && a.back() > str[j]){
                    validSplit = false;
                    break;
                }
                vec.push_back(2);
                a += str[j];
                added = true;
            }
            else if(cur < i){
                if(!b.empty() && b.back() > str[j]){
                    validSplit = false;
                    break;
                }
                vec.push_back(1);
                b += str[j];
            }
            else{
                if(added){
                    if (!b.empty() && b.back() > str[j]) {
                        validSplit = false;
                        break;
                    }
                    vec.push_back(1);
                    b += str[j];
                }
                else{
                    if (!a.empty() && a.back() > str[j]) {
                        validSplit = false;
                        break;
                    }
                    vec.push_back(2);
                    a += str[j];
                    added = true;
                }
            }
        }
        if(validSplit){
            for(int i = 0; i < vec.size(); i++)
                cout << vec[i] << " ";
            found = true;
            break;
        }
    }
    if(!found)
        cout << "-";
}
using namespace std;
//print first positive and negetive integer
void print(){
    int n; cin >> n;
    vector <int> vec;
    int pos = neg = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > 0){
            if(pos == 0) pos = x;
            else vec.push_back(x);
        }
        else if(x < 0){
            if(neg == 0) neg = x;
            else vec.push_back(x);
        }
        //zero case
        else vec.push_back(x);
    }
    sort(vec.begin(), vec.end(), greater <int> ());
    //first positive number
    cout << 1 << " " << pos << "\n";
    if(neg != 0)
        cout << 1 << " " << neg << "\n";
    else{
        // If no negative number, select the last two elements from `vec`
        int a = vec.back(); vec.pop_back();
        int b = vec.back(); vec.pop_back();
        cout << 2 << " " << a << " " << b << "\n";
    }
    cout << vec.size() << " ";
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
using namespace std;
//takes three integer and determine if it's possible to represent sum of distinct integers from 1 to n excluding the integer x
void forbiddenInteger(){
    int sum, n, x; cin >> sum >> n >> x;
    vector <int> vec(n), res;
    for(int i = 0; i < n; i++)
        vec[i] = i + 1;
    for(int i = 0; i < n; i++){
        while(sum >= vec[i] && vec[i] != x){
            sum -= vec[i];
            res.push_back(vec[i]);
        }
    }
    if(sum == 0){
        cout << "Yes, size is: " << vec.size() << "\n";
        for(int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    }
    else
        cout << "No";
}
using namespace std;
//determine whether there exists a pair such that elements of the vector vec at those indices are equal (vec[i]==vec[j]),
//but the corresponding elements of the vector cev are different (cev[i]!=cev[j]). 
//If such a pair is found, the code outputs "Yes", otherwise it outputs "No".
void varifyPair(){
    int n, cnt = 0; cin >> n;
    vector <int> vec(n), cev(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> cev[i];
    for(int i = 0; i < n; i++){
        int x = vec[i], y = cev[i];
        for(int j = 1; j < n; j++){
            if(vec[i] == x && cev[i] != y)
                cnt++;
        }
    }
    (cnt > 0) ? cout << "Yes" : cout << "No";
}
using namespace std;
//if contain odd or even or diffrence between consecutive odd or even print 'Yes' else 'No'
void containOddOrEven(){
    int n; cin >> n;
    vector <int> vec(n);
    bool hasOdd = hasEven = diffOdd = diffEven = false;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] > 0)
            (vec[i] % 2 == 0) ?  hasEven = true :  hasOdd = true;
        if(i > 0){
            int diff = abs(vec[i] - vec[i - 1])
            if(diff > 0){
                (diff % 2 == 0) ? diffEven = true : diffOdd = true;
            }
        }
    }
    (hasOdd || hasEven || diffOdd || diffEven) ? cout << "Yes" : cout << "No";
}
using namespace std;
void Manipulate(){
    int n, k; cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int res = 0;
    while(true){
        sort(vec.begin(), vec.end());
        if(vec[n - 1] > k)
            break;
        vec[1] += vec[0];
        vec[0] = 0;
        res++;
    }
    cout << "Number of operation: " << res << "\n";
    print(vec); cout << "\n";
    int trv = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            trv = i;
            break;
        }
    }
    cout << "First Even occuring idx is: " << trv << "\n";
    int mini = *min_element(vec.begin(), vec.end());
    int maxi = *max_element(vec.begin(), vec.end());
    cout << (mini != 1)? cout << maxi : cout << mini + 1;
    int cnt = 0;
    while(accumulate(vec.begin(), vec.end(), 0) > n){
        print(vec); cout << "\n";
        cout << "Sum is: " << accumulate(vec.begin(), vec.end(), 0) << "\n";
        for(int i = 0; i < n; i++){
            if(vec[i] > mini)
                vec[i] -= mini;
        }
        print(vec); cout << "\n";
        cnt++; break;
    }
    cout << "Count of iteration is: " << cnt + 1;
}
using namespace std;
//solve a problem involving selecting items with
// certain properties and minimizing the cost.
void MinimizeCost(){
    int n; cin >> n;
    vector <pair <int, string> >vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    int cnt01 = found01 = 0, cont01 = tmp1 = tmp2 = INT_MAX;
    for(int i = 0; i < n; i++){
        if(vec[i].second == "01"){
            cnt01++;
            cont01 = min(cont01, vec[i].first);
            found01 = 1;
        }
        else if(vec[i].second == "10"){
            cnt10++;
            cont10 = min(cont10, vec[i].first);
            found10 = 1;
        }
        else if(vec[i].second == "11"){
            cnt01++; cnt10++;
            tmp1 = min(tmp1, vec[i].first);
        }
    }
    if(found01 > 0 && found10 > 0)
        tmp2 = min(tmp2, cont01 + cont10);
    if(tmp1 == INT_MAX && tmp2 = INT_MAX)
        cout << -1;
    else
        cout << min(tmp1, tmp2);
}
using namespace std;
int Fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * Fact(n - 1);
}
int main(){
    int n; cin >> n;
    cout << Fact(n);
}
using namespace std;
void CntDigit(){
    int n, cnt = 0; cin >> n;
    while(n != '\0'){
        n /= 10;
        cnt++;
    }
    cout << cnt;
}
using namespace std;
void LuckyDigit(){
    int x; cin >> x;
    int arr[] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    bool flag = false;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(x % arr[i]){
            flag = true;
            break;
        }
    }
    (flag)? cout << "Yes" : cout << "No";
}
using namespace std;
void reverse(){
    int n; cin >> n;
    int rev = 0;
    while(n!= '\0'){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    cout << rev;
}
using namespace std;
//count 1's in Binary
int Binary(int n){
    int cnt = 0;
    while(n > 0){
        if(n % 2 == 1)
            cnt++;
        n /= 2;
    }
    return cnt;
}
int Hex(int n){
    int res = 0, cnt = 0;
    while(n > 0){
        res += (n % 10) * pow(16,  cnt++);
        n /= 10;
    }
    return Binary(res);
}
int main(){
    int n; cin >> n;
    cout << Hex(n);
}
using namespace std;
void SubArrSum(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int q; cin >> q;
    while(q--){
        int x, y, sum = 0; cin >> x >> y;
        //converst 1th based to 0th based idx
        x--; y--;
        if(x > y) swap(x, y);
        int maxi = x, mini = x;
        for(int i = x; i <= y; i++){
            sum += arr[i];
            if(arr[i] > maxi)
                maxi = i;
            if(arr[i] < mini)
                mini = i;
        }
    }
    cout << arr[maxi] << " " << arr[mini] << " " << sum;
}
using namespace std;
void BinToDecimal(){
    int n; cin >> n;
    int sum = 0, cnt = 0;
    while(n > 0){
        sum += (n % 10) * pow(2, cnt++);
        n /= 10;
    }
    cout << sum;
}
using namespace std;
//transform a given string into a palindrome with the minimum number of
//character changes & then output the number of changes
void TransformStr(){
    int n; cin >> n;
    char *str = new char[n + 1];
    cin >> str;
    if(strlen(str) != n){
        cout << "Size Mismatch";
        delete []arr;
        return 0;
    }
    int cnt = 0; //count transform
    int l = 0, r = n - 1;
    while(l < r){
        if(arr[l] != arr[r]){
            cnt++;
            if(arr[l] < arr[r])
                arr[r] = arr[l];
            else
                arr[l] = arr[r];
        }
        l++; r--;
    }
    cout << cnt << " " << str;
    delete []str;
}
using namespace std;
//Subtract n among a & b.in which player n will be zero,He will 
//be win.If neg another player will be win
void FindWinner(){
    int a, b, n; cin >> a >> b >> n;
    while(true){
        if(n >= __gcd(a, b))
            n -= __gcd(a, b);
        else{
            cout << "Second Win";
            break;
        }
        if(n >= __gcd(b, a))
            n -= __gcd(b, a);
        else
            cout << "First win";
            break;
    }
}
using namespace std;
// Determine x can be written as the sum of two even numbers. If such pair found,print 'Yes' else 'No'.
void EvenPair(){
    int n; cin >> n;
    for(int i = 2; i < x; i+= 2){
        if((n - i) % 2 == 0){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
using namespace std;
//Seperate into Even & Odd, and sort them.
void SeperateEvenOdd(){
    int n; cin >> n;
    int Ec = Oc = -1;
    int *Even = new int[n];
    int *Odd = new int[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2 == 0)
            Even[Ec++] = x;
        else
            Odd[Oc++] = x;
    }
    if(Oc > -1){
        for(int i = Oc; i >= 0; i--)
            cout << Odd[i] << " ";
    }
    if(Ec > -1){
        for(int i = 0; i <= Ec; i++)
            cout << Even[i] << " ";
    }
    delete []Odd;
    delete []Even;
}
using namespace std;
void Manhatten(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int x; cin >> x;
            if(x == 1){
                cout << abs(i - 2) + abs(j - 2);
                return 0;
            }
        }
    }
}
void Manhatten(){
    int arr[5][5];
    int row, col;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                row = i; col = j;
            }
        }
    }
    cout << abs(row - 2) + abs(col - 2);
}
using namespace std;
//determine how many iterations takes for the length to become greater than breadth
void MakeEqual(){
    int len, breadth; cin >> len >> breadth;
    while(true){
        if(len > breadth)
            break;
        else{
            len *= 3;
            breadth *= 2;
            cnt++;
        }
    }
    cout << cnt;
}
//calculates the total width required to pass through a checkpoint based on their heights.
//Each person either takes 1 unit or 2 units of width depending on 
//whether they are taller than a specified height limit.
using namespace std;
void calculateWidth(){
    int num, limit; cin >> num >> limit;
    int width = 0
    for(int i = 0; i < num; i++){
        int height; cin >> height;
        if(height > limit)
            width += 2;
        else
            width += 1;
    }
    cout << width;
}
using namespace std;
//calculate how many sub-blocks can fit into a larger grid of size x * y, 
// and to account for any additional blocks needed if there are leftover spaces along the edges of the grid.
void calculateSubBlock(){
    int x, y, z; cin >> x >> y >> z;
    int a = x / z;
    int b = y / z;
    int cnt = a * b;
    if(x % z != 0)
        cnt += b;
    if(y % z != 0)
        cnt += a;
    if(x % z != 0 && y % z != 0)
        cnt += 1;
    cout << cnt;
}
using namespace std;
void BankersAlgo(){
    int num; cin >> num;
    vector <vector <int> >allocation(num, vector <int> (3));
    vector <vector <int> > maximum(num, vector <int> (3));
    vector <int> available(3);
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++)
            cin >> allocation[i][j];
    }
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++)
            cin >> maximum[i][j];
    }
    for(int i = 0; i < 3; i++)
        cin >> available[i];
    vector <vector <int> >need(num, vector <int> (3));
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++)
            need[i][j] = maximum[i][j] - allocation[i][j];
    }
    vector <bool> finished(num, false);
    vector <int> safeseq;
    for(int k = 0; k < num; k++){
        bool found = false;
        for(int i = 0; i < num; i++){
            if(!finished[i]){
                bool canAllocate = true;
                for(int j = 0; j < 3; j++){
                    if(need[i][j] > available[j]){
                        canAllocate = false;
                        break;
                    }
                }
                if(canAllocate){
                    for(int j = 0; j < 3; j++)
                        available[j] += allocation[i][j];
                    safeseq.push_back(i);
                    finished[i] = true;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "The system is not in a safe state\n";
            return 0;
        }
    }
    cout << "The system is in a safe state.\nSafe sequence is: ";
    for (int i = 0; i < safeseq.size(); i++) {
        cout << "P" << safeseq[i] + 1;
        if (i != safeseq.size() - 1) 
            cout << " -> ";
    }
    cout << endl;
}
using namespace std;
// determine if the total sums of three series of integers are all zero
void checkSum(){
    int n; cin >> n;
    int suma = sumb = sumc = 0;
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        suma += a; sumb += b; sumc += c;
    }
    (suma == sumb == sumc == 0) ? cout << "Yes" : cout << "No";
}
using namespace std;
//counting occurrences of the integer 1 among three given numbers for each test case. 
void CountOne(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int cntOne = 0;
        for(int j = 0; j < 3; j++){
            int x; cin >> x;
            if(x == 1) cntOne++;
        }
        if(cntOne > 1)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
//Increment if positive else decreament.return count
void countPositive(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        char ch; cin >> ch;
        if(ch == '+')
            cnt++;
        if(ch == '-')
            cnt--;
    }
    cout << cnt;
}
void countPositive(){
    int n; cin >> n;
    int cnt = 0; char arr[3];
    for(int i = 0; i < n; i++){
        cin >> arr;
        int idx = 0;
        while(idx < 2){
            if(arr[idx] == '+'){
                cnt++;
                break;
            }
            if(arr[idx] == '-'){
                cnt--;
                break;
            }
            idx++;
        }
    }
    cout << cnt;
}
void countPositive(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string str; cin >> str;
        if(str.find('+') != string::npos)
            cnt++;
        if(str.find('-') != string::npos)
            cnt--;
    }
    cout << cnt;
}
using namespace std;
//determine if the square of l is less than or equal to half the square of r.
void IsEqual(){
    int l, r; cin >> l >> r;
    int x = l * l;
    int y = 0.5 * r * r;
    (x <= y) ? cout << "Yes": cout << "No";
}
using namespace std;
void collatzLength(int num){
    int len = 1;
    while(num > 1){
        if(num % 2 != 0)
            num = num * 3 + 1;
        else
            num /= 2;
        len++;
    }
    return len;
}
int main(){
    int start, end, maxL = -1;
    for(int i = start; i < end; i++){
        int len = collatzLength(i);
        if(len > maxL)
            maxL = len;
    }
    cout << maxL;
}
void collatzLength(){
    int x, y; cin >> x >> y;
    int maxi = 1;
    for(int i = x; i <= y; i++){
        int tmp = i, cnt = 1;
        while(tmp > 1){
            if(tmp % 2 != 0)
                tmp = tmp * 3 + 1;
            else
                tmp /= 2;
            cnt++;
        }
        if(cnt > maxi)
            maxi = cnt;
    }
    cout << maxi;
}
using namespace std;
//determine how many of these scores fall into specific ranges
//and then calculate and display the percentages of scores
void calculatePercent(){
    int n; cin >> n;
    int Top = Avg = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > 85){
            Top++; Avg++;
        }
        else if(x >= 60 && x < 85)
            Avg++;
    }
    double b = (Top / (n * 1.0) * 100);
    double c = (Top / (n * 1.0) * 100);
    ((b - int(b)) >= 0.5)? Top = int(b) + 1 : Top = int(b);
    ((c - int(c)) >= 0.5)? Avg = int(c) + 1 : Avg = int(c);
    //Top = round(b);
    //Avg = round(c);
    cout << Top << '%' << "\n" << Avg << '%';
}
using namespace std;
//determine the minimum number of boxes required to store a certain number of balls of  three different colors.
//Each type of ball has a specific quantity requirement based on a given integer n, and the boxes have a capacity of k balls.
void main(){
    int n, k; cin >> n >> k;
    int blue, green, red;
    blue = (8 * n) / k;
    green = (5 * n) / k;
    red = (2 * n) / k;
    if(8 * n % k != 0)
        blue += 1;
    if(5 * n % k != 0)
        green += 1;
    if(2 * n % k != 0)
        red += 1;
    /*blue = (8 * n + k - 1) / k;
    green = (5 * n + k - 1) / k;
    red = (2 * n + k - 1) / k;*/
    cout << blue + green + red;
}
using namespace std;
void GCD(int a, int b){
    if(b > a)
        return GCD(b, a);
    if(b == 0)
        return a;
    return GCD(b, a % b);
}
using namespace std;
//find the maximum sum of a contiguous subarray in an array
void maxSubarrSum(int *arr, int n){
    int maxi = INT_MIN, cursum = 0;
    for(int i = 0; i < n; i++){
        cursum += arr[i];
        if(cursum > maxi)
            maxi = cursum;
        if(cursum < 0)
            cursum = 0;
    }
    cout << maxi;
}
using namespace std;
void primeFactor(){
    int n; cin >> n;
    int cnt = 0;
    while(n % 2 == 0){
        cnt++;
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i+= 2){
        while(n % i == 0){
            cnt++;
            n /= i;
        }
    }
    if(n > 2)
        cnt++;
    cout << cnt;
}
using namespace std;
//partition an number into two nearly equal parts.
void MakePartition(){
    int n; cin >> n;
    //Bitwise And operation if n becomes odd returns true(0011 & 0001 = 0001)
    if(n & 1)
        cout << n / 2 << " " << n / 2 + 1;
    else
        cout << n / 2;
}
using namespace std;
void sqrt(){
    int x; cin >> x;
    int res = 0;
    for(int i = 1 << 15; i > 0; i >>= 1){
        if((res + i) * (res + i) <= x)
            res += i;
    }
    cout << res << " ";
}
using namespace std;
//computes the binomial coefficient C(n,r) using a recursive
int fact(int n, int r, vector <vector <int> >dp){
    if(r > n) return 0;
    if(r == 0 || r == 1) return 1;
    if(dp[n][r] != -1) return dp[n][r];
    // Use the recursive relation: nCr = (n-1)Cr + (n-1)C(r-1)
    dp[n][r] = fact(n - 1, r, dp) + fact(n - 1, r - 1, dp);
    return dp[n][r];
}
int main(){
    int n, r; cin >> n >> r;
    vector <vector <int> >dp(n, vector <int> (r + 1, 1))
    cout << fact(n, r, dp);
}
using namespace std;
void BubbleSort(){
    int n; cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i + 1])
            continue;
        else
            cnt = -1;
    }
    if(cnt == 0){
        cout << "Ordered";
        return 0;
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1- i; i++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void Bubblesort(){
    int n; cin >> n;
    int arr[n + 5];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(arr[i]) > abs(arr[j]))
                swap(arr[i], arr[j]);
        }
    }
    for(int i = 0; i < n - 1; i++)
        cout << arr[i] << " ";
    cout << arr[n - 1] << " ";
}
using namespace std;
//count how many times a sequence is greater or less than the previous integer in the sequence.
void cntGreaterLess(){
    int n; cin >> n;
    int greater = 0, less = 0;
    int prv; cin >> prv;
    for(int i = 0; i < n; i++){
        int cur; cin >> cur;
        if(cur > prv)
            greater++;
        else if(cur < prv)
            less++;
        prv = cur;
    }
    cout << greater << " " << less;
}
using namespace std;
//count the consecutive integers that are divisors of n
//Find the max length of such consecutive divisors and prints this max length.
void cntMaxLen(){
    int n; cin >> n;
    int cnt = mxsz = 0;
    int sqrt_ = sqrt(n);
    for(int i = 1; i <= sqrt_; i++){
        if(n % i == 0)
            cnt++;
        else{
            mxsz = max(mxsz, cnt);
            cnt = 0;
        }
    }
    mxsz = max(mxsz, cnt);
    cout << mxsz;
}
using namespace std;
//Is the string contain NonZero
bool check(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i]!= '0')
            return true;
    }
    return false;
}
using namespace std;
//determines whether a vector of integers has any local maximum
//A local maximum is an element that is greater than its immediate neighbors
bool LocalMax(vector <int> vec){
    for(int i = 1; i < vec.size(); i++){
        if(i != vec.size() - 1){
            if(vec[i] > vec[i - 1] && vec[i] < vec[i + 1])
                return true;
        }
        return false;
    }
}
using namespace std;
bool IsSorted(vector <int> vec){
    for(int i = 1; i < vec.size(); i++){
        if(vec[i - 1] > vec[i])
            return false;
    }
    return true;
}
using namespace std;
//Find Kth element which is not divisible by n
void kthElement(){
    int n, k; cin >> n >> k;
    cout << k + ((k - 1) / (n - 1));
}
using namespace std;
//determine whether the Equity(even or odd nature) of the input
//matches the parity of their positions (index)
void checkEquity(){
    int num; cin >> num;
    int cur, idx = 1, cnt = 0;
    for(int i = 0; i < num; i++){
        cin >> cur;
        if((cur % 2 == 0 && idx % 2 == 0) || (cur % 2 != 0 && idx % 2 != 0))
            cnt++;
        idx++;
    }
    (cnt == num) ? cout << "Yes" : cout << "No";
}
using namespace std;
void Operation(){
    int n; cin >> n;
    vector <char> str(n);
    vector <double> dbl(n + 1);
    for(int i = 0; i < n; i++)
        cin >> str[i];
    for(int i = 0; i <= n; i++)
        cin >> dbl[i];
    for(int i = 0; i < n; i++){
        switch(str[i]){
            case '+': dbl[i + 1] = dbl[i] + dbl[i + 1]; break;
            case '-': dbl[i + 1] = dbl[i] - dbl[i + 1]; break;
            case '*': dbl[i + 1] = dbl[i] * dbl[i + 1]; break;
            case '/': 
                if(dbl[i + 1] != 0)
                    dbl[i + 1] = dbl[i] / dbl[i + 1];
                else{
                    cout << "Division By Zero";
                    return 1;
                }
                break;
            default:
                cout << "Invalid Operator";
                return 1;
        }
    }
    cout << dbl[n];
}
//print the unique integers in sorted order
void uniqueInt(){
    const int maxi = 1001;
    int n; cin >> n;
    vector <int> vec(maxi, -1);
    for(int i = 0; i < maxi; i++){
        int x; cin >> x;
        vec[x] = x;
    }
    for(int i = 0; i < maxi; i++){
        if(vec[i] != -1)
            cout << vec[i] << " ";
    }
}
using namespace std;
// check if there is any row or column in a grid that is  filled with '*'.
void fillChar(){
    char arr[10][10];
    int rowCnt[10] = {0}, colCnt[10] = {0};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j] == '*')
                rowCnt++; colCnt++;
        }
    }
    for(int i = 0; i < 10; i++){
        if(rowCnt[i] == 10 || colCnt[i] == 10)
            cout << "Yes"
        else
            cout << "No";
    }
}
using namespace std;
// count the occurance of trg & print the first idx of trg
void cntPos(){
    int n, trg, pos = -1;
    int idx = cnt = 0;
    while(cin >> n >> trg && n > 0 && trg > 0){
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == trg){
                if(cnt == 0)
                    pos = idx;
                cnt++;
            }
            idx++;
        }
    }
    (cnt == 0) ? cout << -1 : cout << pos << " " << cnt;
}
using namespace std;
//Count hididng places & positions in a grid which is represent by '#'
void hidingPlaces(){
    int row; cin >> row;
    if(row <= 0){
        cout << "Invalid input";
        return 0;
    }
    vector <string> grid(row);
    for(int i = 0; i < row; i++){
        cin >> grid[i];
        if(grid[i].length() != row){
            cout << "row didn't match";
            return 0;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row; j++){
            if(grid[i][j] == '#'){
                cout << i + 1 << " " << j + 1 << "\n";
                cnt++;
            }
        }
    }
    (cnt == 0)? cout << "No Hiding Places" : cout << "Hiding places are: " << cnt;
}
using namespace std;
//implementation of the modular exponentiation algorithm, which efficiently computes (a^b) % c
void Exponentiation(){
    int a, b, mod; cin >> a >> b >> mod;
    int res = 1;
    a %= mod;
    while(b){
        if(b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    cout << res;
}
using namespace std;
//compute the result of raising a base a to an exponent b under a modulus mod
bool powerMod(int a, int b, int mod){
    if(b == 0)
        return 1;
    int k = powerMod(a, b / 2, mod);
    k = (k * k) % mod;
    if(b & 1)
        k = (k * a) % mod;
    return k;
}
bool Isprime(int n, int iter = 5){
    if(n < 4)
        return n == 3 || n == 2;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    srand(time(nullptr));
    for(int i = 0; i < iter; i++){
        int a = 2 + rand() % (n - 2);
        if(powerMod(a, n - 1, n) != 1)
            return false;
    }
    return true;
}
int main(){
    int num; cin >> num;
    (Isprime(num)) ? cout << "Yes": cout << "No";
    int a, b, mod; cin >> a >> b >> mod;
    cout << powerMod(a, b, mod);
}
using namespace std;
void Power(){
    int a, b; cin >> a >> b;
    int res = 1;
    while(b){
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    cout << res;
}
void FindSqrt(){
    int n; cin >> n;
    int l = 1, r = n;
    while(l > r){
        r = l + (r - l) / 2;
        l = n / r;
    }
    cout << r;
}
void countCeil(){
    int a, b; cin >> a >> b;
    (a % b == 0) ? cout << a / b : cout << a / b + 1;
}
using namespace std;
//Count the number of times the digit '2' appears in the loop
void cntTwo(){
    int res = 0;
    for(int i = 1; i <= 2020; i++){
        int tmp = i;
        while(tmp){
            cout << tmp << " ";
            if(tmp % 10 == 2)
                res++;
            tmp /= 10;
        }
    }
    cout << res;
}
//counts the number of pairs  within the range that are coprime (they share no common divisors other than 1).
using namespace std;
int gcd(int a, int b){
    if(a % b == 0)
        return b;
    return gcd(b, a % b);
}
int main(){
    int cnt = 0;
    for(int i = 1; i <= 2020; i++){
        for(int j = 1; j <= 2020; j++){
            if(gcd(i, j) == 1)
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
//check if all numbers in the range [x,y], transformed by f(i)=i^2 + i + 41 result in prime numbers.if match outputs "ok"; else  "Break out".
bool Isprime(int x){
    if(x <= 1)
        return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
int main(){
    int x, y;
    while(cin >> x >> y && x != 0 && y != 0){
        bool flag = true;
        for(int i = x; i <= y; i++){
            if(!Isprime(i * i + i + 41)){
                flag = false;
                break;
            }
        }
        (flag) ? cout << "Ok" : cout << "Breakout";
    }
}
using namespace std;
//check if all numbers in the range [x,y], transformed by f(i)=i^2 + i + 41 result in prime numbers.if match outputs "ok"; else  "Break out".
bool Isprime(int x){
    if(x <= 1)
        return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
int main(){
    int x, y;
    while(cin >> x >> y && x != 0 && y != 0){
        bool flag = true;
        for(int i = x; i <= y; i++){
            if(!Isprime(i * i + i + 41)){
                flag = false;
                break;
            }
        }
        (flag) ? cout << "Ok" : cout << "Breakout";
    }
}
//Divide n in even pair
using namespace std;
void DivideEvenPair(){
    int n; cin >> n;
    for(int i = 2; i < n; i+= 2){
        if((n - i) % 2 == 0){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
using namespace std;
//determine whether there exists an integer i in range[0, 65] such that the expression (n * i + 18) % 65 == 0 will true
void determineCond(){
    int n; cin >> n;
    bool flag = false;
    for(int i = 0; i < 66; i++){
        if((n * i + 18) % 65 == 0){
            flag = true;
            cout << i << " ";
            break;
        }
    }
    (flag) ? cout << "Yes" : cout << "No";
}
using namespace std;
//calculates the area of the smallest square that can completely cover two given rectangles on a 2D plane. 
void CoveredRect(){
    int x1, x2, x3, x4; cin >> x1 >> x2 >> x3 >> x4;
    int y1, y2, y3, y4; cin >> y1 >> y2 >> y3 >> y4;
    int a = max(x2, x4) - min(x1, x3);
    int b = max(y2, y4) - min(y1, y3);
    int c = max(a, b);
    cout << c * c;
}
using namespace std;
//wether sum of the three num less than two
void cond(){
    int n; cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        if((a + b + c) <= 2)
            res++;
    }
    cout << res;
}
#include <bits/stdc++.h>
//determine if a & b form an amicable pair. Amicable numbers are two different numbers so related that 
// the sum of the proper divisors (excluding the number itself) of each is equal to the other number

using namespace std;
int IsAmicable(int x){
    int res = 1;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            res += i;
            if(i != x / i)
                res += x /i;
        }
    }
    return res;
}
int main(){
    int a, b; cin >> a >> b;
    (IsAmicable(a) == b && IsAmicable(b) == a) ? cout << "Yes" : cout << "No";
}
using namespace std;
void timeAdd(){
    int Sec, Min, Hrs; cin >> Sec >> Min >> Hrs;
    int addHrs, addMin, addSec; cin >> addHrs >> addMin >> addSec;
    Sec += addSec;
    if(Sec >= 60){
        Min += Sec /60;
        Sec %= 60;
    }
    Min += addMin;
    if(Min >= 60){
        Hrs += Min / 60;
        Min %= 60
    }
    Hrs += addHrs;
    cout << "\nHours: " << Hrs << "\nMinutes: " << Min << "\nSecond: " << Sec;
}
using namespace std;
void Fibonacci(){
    int n; cin >> n;
    int a = 0, b = 1, c;
    for(int i = 0; i < n; i++){
        c = a + b;
        a = b; b = c;
    } 
    cout << c;
}
using namespace std;
//perform operations on the last two digits of two numbers & print the sum as the result
void operation(){
    int a, b; cin >> a >> b;
    a %= 100; b %= 100;
    a += b;
    cout << a % 100;
}
using namespace std;
//process a list of arithmetic operations and output their results in fraction format
void fractionFormat(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(y == 0){
            cout << "Undefined";
            return 0;
        }
        else if(x % y == 0)
            cout << x / y << " ";
        else{
            int divi = __gcd(x, y);
            cout << x / divi << "/" << y / divi ;
        }
    }
}
using namespace std;
void BitManipulation(){
    int x = -2147483647;
    long z = 4294967296U;
    unsigned int y = static_cast <unsigned int> (x);
    cout << "x: " << x << "\n" << "y (unsigned version of x): " << y << "\n";
    cout << "z: " << z << "\n" << "z - (-x): " << z - (-x) << "\n";
    cout << "Enter integer for see binary rep: ";
    cin >> x;
    for(int i = 31; i >=0; i--){
        if(x & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
    //set bits of a & b
    int a = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 8);
    int b = (1 << 3) | (1 << 6) | (1 << 8) | (1 << 9);
    int c = a | b;
    cout << "\nposition of " << c << " is: " ;
    for(int i = 0; i < 32; i++){
        if(c & (1 << i))
            cout << i << " ";
    }
}
using namespace std;
void CountSetBits(){
    int num, cnt = 0; cin >> num;
    while(num){
        cnt += (num & 1);
        num >>= 1;
    }
    cout << cnt;
}
using namespace std;
void BinConv(){
    int num; cin >> num;
    for(int i = 31; i >= 0; i--){
        if(num & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}
using namespace std;
void euclidGCD(int a, int b){
    if(b == 0)
        return a;
    int rem = a % b;
    return euclidGCD(b, rem);
}
int main(){
    int a, b; cin >> a >> b;
    cout << euclidGCD(a, b);
}
using namespace std;
void cntMinute(){
    int res = 0;
    for(int i = 1922; i <= 2020; i++){
        if((i % 4 == 0 && i % 4 != 0) || (i % 400 == 0))
            res += 366;
        else
            res += 365;
    }
    cout << res * 24 * 60;
}
using namespace std;
void productionTime(){
    int Quantity = 10000, Ump = 10;
    int totalTime = 0;
    while(Quantity){
        if(Quantity < 300){
            totalTime += n / 10;
            break;
        }
        else{
            n -= 300;
            totalTime += 30;
        }
    }
    cout << totalTime;
}
using namespace std;
//define is a number prime or not.if prime will be Intelligeng else stupid
bool Isprime(int x){
    if(x <= 1)
        return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        (Isprime(x)) ? cout << "Intelligent" : cout << "stupid";
    }
}
using namespace std;
// divide n into a specified number of parts, ensuring that no part exceeds a given limit. 
void Dividelimit(){
    int n, limit, part; cin >> n >> limit >> part;
    for(int i = 0; i < part; i++){
        if(n >= limit){
            n -= limit;
            cout << limit << " ";
        }
        else{
            cout << n << " ";
            n = 0;
        }
    }
}
void AddVal(){
    int ans = 0;
    for(int i = 0; i < 2; i++){
        ans += 4;
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 6; k++)
                ans += 5;
            ans += 7;
        }
        ans += 8;
    }
    ans += 9;
    cout << ans;
}
using namespace std;
void CompDivisible(){
    int x, y; cin >> x >> y;
    (x % y == 0) ? cout << "Yes" : cout << "No";
    (sqrt(x * x + y * y) == int(sqrt(x * x + y * y))? cout << "Same" : cout << "Not Same");
}
using namespace std;
//find the divisor of 100 that minimizes the expression involving the quotient and the divisor itself. 
void satisfyCond(){
    int idx = 0, sum = INT_MAX;
    for(int i = 1; i <= 100; i++){
        if(100 % i == 0){
            int tmp = 100 / i + i;
            if(tmp < sum)
                sum = tmp;
                idx = i;
        }
    }
    cout << idx;
}
using namespace std;
void countAvg(){
    int n; cin >> n;
    int score[n], sum = 0;
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> score[i];
        mini = min(mini, score[i]);
        maxi = max(maxi, score[i]);
        sum += score[i];
    }
    double avg = double(sum) / double(n);
    cout << "Maxi: " << maxi << "\nMini: " << mini << "\nAvg: " << avg;
}
using namespace std;
//compute the modular inverse of a number num modulo mod using the Extended Euclidean Algorithm. 
int Extend(int num, int mod, int x, int y){
    //num * x + mod * y = gcd(num, mod)
    if(num == 0){
        x = 0; y = 1;
        return mod;
    }
    int a, b;
    // mod * a + (num % mod) * b = gcd(num, num % mod)
    int gcd = Extend(mod % num, num, a, b);
    x = b - (mod / num) * a;
    y = a;
    return gcd;
}
int modInv(int num, int mod){
    if x, y;
    int gcd = Extend(int num, int mod, int x, int y);
    if(gcd != 1)
        return -1;
    else{
        x = (x % mod + mod) % mod;
        return x;
    }
}
int main(){
    int num, mod; cin >> num >> mod;
    int inverse = modInv(num, mod);
    if (inverse == -1)
        cout << "Modular Inverse doesn't exist" << endl;
    else
        cout << "Modular Inverse of " << num << " mod " << mod << " is " << inverse << endl;

}
using namespace std;
//Calculate Binomial Coefficient(ncr)
#define mod 998244353
int Exp(int a, int b){
    int res = 1;
    while(b){
        if(b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}
int Inverse(int n){
    return Exp(n, mod - 2);
}
int fact(int n){
    int res = 1;
    while(n){
        res = (res * n) % mod;
        n--;
    }
    return res;
}
int main(){
    int n, r; cin >> n >> r;
    int numer = fact(n);
    int denom = (fact(r) * fact(n - r)) % mod;
    int res = (numer * Inverse(denom)) % mod;
    cout << res;
}
using namespace std;
//finds the minimum integer x such that the sum of the following series is at least a given target sum = x+ x/k + x/k^2 + x/k^3..... 
bool check(int x, int trg, int k){
    int a = k;
    int sum = x;
    while(x / a > 0){
        sum += x / a;
        a *= k;
    }
    if(sum >= trg)
        return true;
    return false;
}
int FindMin(int trg, int k){
    int low = 1, high = trg;
    while(low < high){
        int mid = low + (high - low) / 2;
        if(check(mid, trg, k))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    int trg, k; cin >> trg >> k;
    if(k == 1){
        cout << "The minimum x such that the sum of the series is at least " << trg << " is: " << trg << "\n";
        return 0;
    }
    int res = FindMin(trg, k);
    cout << "The minimum x such that the sum of the series is at least " << trg << " is: " << res << "\n";
}
using namespace std;
void lastDig(){
    int n; cin >> n;
    int tmp = n, mult = 1, sum = 0;
    while(tmp > 0){
        mult *= tmp % 10;
        sum += tmp % 10;
        tmp /= 10;
    }
    cout << "Multiplication of Digits is: " << mult;
    int cnt = 0; tmp = n;
    while(tmp > 0){
        if(tmp % 10 == 0)
            cnt++;
        tmp /= 10;
    }
    cout << "\nCount of Zero is: " << cnt;
    int rev = 0; tmp = n;
    while(tmp > 0){
        rev += tmp % 10;
        rev *= 10;
        tmp /= 10;
    }
    rev /= 10;
    cout << "\nAfter Reverse the seq is: " << rev;
}
using namespace std;
void statement(){
    int n;
    while(cin >> n){
        int res = n;
        if(n == 1) cout << 1;
        else if(n == 2) cout << 4;
        else{
            int tmp = n;
            while(tmp > 0){
                if(tmp == 2){
                    res *= 2; break;
                }
                else
                    res = (res + 1) * 2 + 1;
                tmp--;
            }
        }
        cout << res;
    }
}
//read integers n and m. compute the average of every m consecutive numbers in the sequence of the first n even numbers, and print these averages.
using namespace std;
void cntGrpAvg(){
    int n, m;
    vector <int> res;
    while(cin >> n >> m){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i * 2;
            if(i % m == 0){
                res.push_back(sum / m);
                sum = 0;
            }
        }
        if(n % m != 0)
            res.push_back(sum / (n % m));
        if(!res.empty()){
            cout << res[0] << " ";
            for(int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
        }
    }
}
using namespace std;
//construct a binary tree from user input
vector <int> vec(100, 0);
int create(int i){
    int x; cin >> x;
    if(x == 0)
        return 0;
    vec[i] = x;
    create(2 * i);
    create(2 * i + 1);
    return x;
}
void func(int i){
    if(i >= vec.size() || vec[i] == 0)
        return;
    func(i * 2);
    cout << vec[i] << " ";
    func(i * 2 + 1);
}
int main(){
    create(1); func(1);
    string str(1, char(127));
    cout << str;
}
using namespace std;
int letterCnt(int n){
    string unit[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string hundred = "hundred";
    int cnt = 0;
    if(n >= 100){
        cnt += unit[n / 100].length() + hundred.length();
        if(n % 100 != 0)
            cnt += 3; //for 'and'
        n %= 100;
    }
    if(n >= 20){
        cnt += tens[n / 10].length();
        n %= 10;
    }
    if(n >= 10)
        cnt += teens[n - 10].length();
    else
        cnt += unit[n].length();
    return cnt;
}
int main(){
    int digit = 11; //one thousand;
    for(int i = 1; i <= 999; i++)
        digit += letterCnt(i);
    cout << "Total letter: " << digit;
    cout << letterCnt(911);
}
using namespace std;
int power(int numer, int denom, int mod){
    if(denom == 0)
        return 1;
    if(denom % 2 == 0){
        int half = power(numer, denom / 2, mod);
        return (half * half) % mod;
    }
    else
        return (numer * power(numer, denom - 1, mod)) % mod;
}
int main(){
    int numer, denom, mod; cin >> numer >> denom >> mod;
    cout << power(numer, denom, mod);
}
using namespace std;
//Access elements from spiral
void spiral(){
    int row, col, res; cin >> row >> col;
    if(row > col){
        if(row % 2 == 0)
            res = (row * row) - col + 1;
        else
            res = (row - 1) * (row - 1) + col;
    }
    else{
        if(col % 2 == 0)
            res = (col - 1) * (col - 1) + row;
        else
            res = (col * col) - row + 1;
    }
    cout << res;
}
using namespace std;
//identify if a number power of two or not
void poweredOfTwo(){
    int n; cin >> n;
    // [n & (n - 1)] rep binary bitset.a power of 2 rep only one bitset.(100 & 011 = 000)
    //(n > 0 && (n & (n - 1)) == 0)? cout << "Yes" : cout << "No";
    for(int i = 0; i <= n; i++){
        if(pow(2, i) == n){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
//check is number contain all unique int
using namespace std;
void IsUnique(){
    int n; cin >> n;
    int digit[4];
    if(n < 1000 && n > 9999){
        cout << "Invalid";
        return 0;
    }
    //(1234 / 10^i) % 10 return the last digits.
    for(int i = 0; i < 4; i++)
        digit[i] = (n / static_cast < int >(pow(10, i))) % 10;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(digit[i] == digit[j]){
                cout << "Not Unique";
                return 0;
            }
        }
    }
    cout << "unique";
}
using namespace std;
void makePalindrome(){
    int len; cin >> len;
    char arr[len + 1];
    int l = 0, r = len - 1, cnt = 0;
    while(l < r){
        if(arr[l] !=  arr[r]){
            cnt++;
            if(arr[l] < arr[r])
                arr[r] = arr[l];
            else
                arr[l] = arr[r];
        }
        l++; r--;
    }
    cout << change;
}
using namespace std;
void IsPalindrome(){
    int n; cin >> n;
    if(n < 0)
        return 0;
    if(n == 0 || n == 1){
        cout << "palindrome";
        return 0;
    }
    int arr[n], cnt = 0;
    while(n != 0){
        arr[cnt++] = n % 10;
        n /= 10;
    }
    int i = 0, j = cnt - 1;
    while(i < j){
        if(arr[i] != arr[j]){
            cout << "Not palindrome";
            return 0;
        }
        i++; j--;
    }
    cout << "palindrome;"
}
using namespace std;
bool Ispalindrome(int *arr, int idx, int n){
    if(idx >= n / 2)
        return true;
    return (arr[idx] == arr[n - 1 - idx]) && Ispalindrome(arr, idx + 1, n);
}
int main(){
    int arr[] = {1, 2, 3, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    (Ispalindrome(arr, 0, n) ? cout << "Yes" : cout << "No");
}
using namespace std;
//checks if n can be decomposed into a sum of two even integers.If n is even and greater than 2,  prints "YES", else prints "NO".
void DivideEven(){
    int n; cin >> n;
    if(n % 2 == 0 && n != 2)
        cout << "Yes";
    if(n % 2 == 1 || n == 2)
        cout << "No";
}
using namespace std;
// reads pairs of hex numbers, computes their sum, and outputs the result in uppercase hex format
void convertToHex(){
    int a, b;
    // hex manipulator tells to interpret input values as hexadecimal numbers.
    while(cin >> hex >> a >> b){
        int sum = a + b;
        cout << hex << uppercase;
        if(sum < 0)
            cout << "-" << -sum;
        else
            cout << sum;
        //setiosflags(uppercase): Ensures that hexadecimal letters (A–F) are displayed in uppercase.
        /*if(a + b < 0)
            cout << setiosflags(uppercase) << hex << "-" << -(a + b);
        else
            cout << setiosflags(uppercase) << a + b;
        cout << "\n";*/
    }
}
using namespace std;
void pairSum(){
    int a, b; cin >> a >> b;
    //((a + b) % 3 == 0 || a <= 2 * b || b <= 2 * a)? cout << "Yes" : cout << "No";
    while(true){
        if(a == 0 && b == 0)
            break;
        else if((a + b) % 3 != 0)
            break;
        if((a % 3 == 0) && (b % 3 == 0)){
            a = 0; b = 0;
            break;
        }
        else{
            if(a > b)
                a -= 2; b -= 1;
            else
                a -= 1; b -= 2;
        }
    }
    (a == 0 && b == 0)? cout << "Yes" : cout << "No";
}
using namespace std;
void statement(){
    int n; cin >> n;
    (n == 2)? cout << 2 : cout << 2 * n - 4;
}
using namespace std;
void statement(){
    int x, y; cin >> x >> y;
    if((2 * x - y) >= 0 && (2 * x - y) % 3 == 0 && (2 * y - x) >= 0 && (2 * y - x) % 3 == 0)
        cout << "Yes";
    else
        cout << "No";
}

using namespace std;
//determine how many iterations will take for the value of 'a' to become greater than or
//equal to the value of 'b' when a is tripled and b is doubled in each iteration.
void countIteration(){
    int a, b; cin >> a >> b;
    int cnt = 0;
    while(a < b){
        a *= 3; b *= 2;
        cnt++;
    }
    cout << cnt;
}
using namespace std;
//Find Minimum & diffrence between sum of these number & twice of minimum
void MinDiff(){
    int a, b, c; cin >> a >> b;
    if(a <= b) c = a;
    else c = b;
    cout << "Min val is: " << c << " Expression is: " << (a + b - 2 * c);
}
using namespace std;
//After some specific operation in k times whats the value of n 
void wrongSubtract(){
    int n, k; cin >> n >> k;
    for(int i = 0; i < k; i++){
        if(n % 10 == 0)
            n /= 10;
        if(n % 10 != 0)
            n--;
    }
    cout << n;
}
using namespace std;
void sumInt(){
    int a, b, res = 0; char ch;
    while(cin >> ch && ch != 'e'){
        cin >> a >> b;
        res += a + b;
    }
    cout << res;
}
using namespace std;
void seive(){
    const int maxi = 1e7;
    bool prime[maxi];
    prime[0] = prime[1] = false;
    for(int i = 2; i <= maxn; i++)
        prime[i] = true;
    for(int i = 2; i <= maxn; i++){
        if(prime[i]){
            for(int j = i * i; j <= maxn; j += i)
                prime[j] = false;
        }
    }
    for(int i = 2; i <= maxn; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
}
using namespace std;
//determine if the count of 'lucky' digits (4 and 7) in a given number n is exactly 4 or exactly 7. 
void Lucky(){
    int n, cnt = 0; cin >> n;
    while(n != 0){
        int dig = n % 10;
        n /= 10;
        if(dig == 4 || dig == 7)
            cnt++;
    }
    (cnt == 4 || cnt == 7) ? cout << "Yes" : cout << "No";
}
using namespace std;
//Geo series
int modPower(int a, int b, int mod){
    if(b == 0)
        return 1;
    int tmp = modPower(a, b / 2, mod);
    tmp = (tmp * tmp) % mod;
    if(b % 2 == 0)
        return tmp;
    else
        return (tmp * a) % mod;
}
int Geoseries(int a, int b, int mod){
    //a^0 + a^1 + a^2 + a^3+.... 
    if(b == 1) return 1;
    if(b == 2) return (1 + a) % mod;
    //calculate geo of the first half
    int tmp = Geoseries(a, b / 2, mod) % mod;
    int x = modPower(a, b/2, mod) % mod;
    int y = modPower(a, b - 1, mod) % mod;
    if(b % 2 == 0)
        return (tmp *(1 + x)) % mod;
    else
        return ((tmp *(1 + x)) % mod + y % mod) % mod;
}
int main(){
    int a, b, mod; cin >> a >> b >> mod;
    cout << "\nMod power is: " << modPower(a, b, mod);
    cout << "\nGeometricSeries are: " << Geoseries(a, b, mod);
}
using namespace std;
void Bitwise(){
    const int mod = 1e9;
    int n; cin >> n;
    if(n < 31)
        cout << (1 << n) % mod << " ";
    else
        cout << "OutOf Bound";
    int x = 1;
    for(int i = 0; i < n; i++)
        x = 2 * x % mod;
    cout << x << " ";
}
using namespace std;
bool Isprime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
using namespace std;
void Ispalindrome(int n){
    int rev = 0, tmp = n;
    while(n > 0){
        rev += rev * 10 + n % 10;
        n /= 10;
    }
    (tmp == rev) ? cout << "palindrome" : cout << "Not palindrome";
}
using namespace std;
int fib(int n){
    if(n == 1 || n == 2)
        return 1
    return fib(n - 1) + fib(n - 2);
}
using namespace std;
//check of all digits of giver integer odd
bool oddDigit(int n){
    while(n > 0){
        if((n % 10) % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}
using namespace std;
//Is Last number even or odd
bool lastDigit(int n){
    while(n > 0){
        if(n % 2 == 0)
            return false;
        n /= 10;
    }
    return true;
}
using namespace std;
int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
using namespace std;
void recursive(int a, int b){
    if(a <= b){
        cout << a << " ";
        if(a < b){
            cout << " ";
            recursive(a + 1, b);
        }
    }
}
using namespace std;
int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
using namespace std;
void ExtendGCD(int a, int b, vector<int> vec){
    if(b == 0){
        vec[0] = 1; //x
        vec[1] = 0; //y
        vec[2] = a; //gcd(a, b)
        return;
    }
    ExtendGCD(b, a % b, vec);
    int tmp = vec[1];
    vec[1] = vec[0] - vec[1] *(a / b);
    vec[0] = tmp;
}
int main(){
    int a, b; cin >> a >> b;
    vector <int> vec(3);
    ExtendGCD(a, b, vec);
    cout << "Coefficients x and y such that ax + by = gcd(a, b):" << "\n";
    cout << "x: " << vec[0] << ", y: " << vec[1] << "\n";
    cout << "gcd(a, b): " << vec[2] << "\n";
}
using namespace std;
//prints the number of ways to place two knights on i x i chessboard such that they do not attack each other.
//A knight can attack total 8 position in L shape.(i - 1) or (i - 2).(x + 2, y + 1), (x + 2, y - 1), (x - 2, y + 1), (x - 2, y - 1)
//(i−1)×(i−2) horizontally & (i - 2)*(i - 1) vertically.total ways 4*(i - 1)*(i - 2)
void knightAttack(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int sqr = i * i;
        int totalway = sqr * (sqr - 1) / 2;
        int invalidWay = 0;
        if(i > 2)
            invalidway = 4 * (i - 1) * (i - 2);
        int validway = totalway - invalidway;
        cout << validway << " ";
    }
}
using namespace std;
// define four conditions define specific regions in a 2D coordinate plane
//a ->upper ragion / b->left ragion
//c->lower ragion / d -> right ragion
void statement(){
    int x, y; cin >> x >> y;
    int res = 0;
    if(x < y && x >= -y){
        res += -2 *y + 4;
        cout << "a";
    }
    else if(x > y && x <= -y + 1){
        cout << "b";
        res += -y * 4;
    }
    else if(x >= y && x > -y + 1){
        cout << "c";
        res += -3 + x*4;
    }
    else if(x <= y && x > -y){
        cout << "d";
        res += -1 - 4*x;
    }
    cout << res;
}
using namespace std;
//count how many elements in a given list are greater than or equal to a specific threshold value.
int cntGreater(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    sort(vec.begin(), vec.end(), greater <int> ());
    int hold = max(1, vec[n - 1]);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] >= hold)
            cnt++;
    }
    cout << cnt;

using namespace std;
vector <bool> DetectPrime(int n){
    vector <bool> num(n, true);
    num[0] = num[1] = false;
    for(int i = 2; i < n; i++){
        if(num[i]){
            for(int j = i * i; j <= n; j += i)
                num[j] = false;
        }
    }
    return num;
}
vector <int> getDigit(int n){
    vector <int> Digits;
    while(n > 0){
        Digits.push_back(n % 10);
        n /= 10;
    }
    return Digits;
}
int main(){
    int n; cin >> n;
    vector <bool> prime = DetectPrime(n);
    vector <int> get = getDigit(n);
    for(int i = 2; i <= n; i++){
        if(prime[i])
            cout << i << " ";
    }
    for(int i = 0; i < get.size(); i++)
        cout << get[i] << " ";
}
using namespace std;
// determine whether a given target number n can be reached starting from 1
bool canReached(int cur, int trg){
    if(cur == trg) return true;
    if(cur > trg) return false;
    return canReached(cur *10, trg) || canReached(cur * 20, trg);
}
int main(){
    int n; cin >> n;
    (canReached(1, n)? cout << "Yes" : cout << "No");
}
using namespace std;
// check whether a given integer num will eventually converge to 1 when repeatedly replaced by 
//the sum of the squares of its digits. If not, it checks if the sequence enters a cycle
int squaresum(int num){
    int sum = 0;
    while(num > 0){
        int dig = num % 10;
        sum += dig * dig;
        num /= 10;
    }
    return sum;
}
void convergence(int num, int maxiter){
    int cur = num, org = num, iter = 0;
    do{
        cur = squaresum(num);
        if(cur == 1) return 1;
        if(cur == org) return 0;
        iter++;
    }while(iter < maxiter);
    return 0;
}
int main(){
    int num; cin >> num;
    res = convergence(num, 100);
    (res == 1)? cout << num << "Covergence to 1" : cout << "Not convergence or entered into cycle";
}
using namespace std;
void statement(){
    int a, b, res; cin >> a >> b;
    (a == 0) ? res = 1 : res = a + 2 * b + 1;
    cout << res;
}
using namespace std;
void statement(){
    int n; cin >> n;
    int x = n % 10 - 1;
    int res += 10 * x;
    int k = n % 10;
    int cnt = 0, ptr = 1;
    while(cnt <= n){
        cnt = cnt % 10 + k;
        res += ptr;
        ptr++;
    }
    cout << res;
}
using namespace std;
void statement(){
    int x, y; cin >> x >> y;
    if(x == 1 && y == 1)
        cout << 0;
    else if((x == 1 && y == 2) || (x == 2 && y == 1))
        cout << 1;
    else if(x == 1 || y == 1)
        cout << 2;
    else{
        int maxi = max(x, y);
        if((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1))
            cout << (maxi - 1) * 2;
        else 
            cout << (maxi - 1) * 2 -1;
    }
}
using namespace std;
void Hanoi(int n, char a, char b, char c){
    if(n > 0){
        Hanoi(n - 1, a, c, b);
        cout << "Move from " << a << " to " << b << " use " << c << "\n";
        Hanoi(n - 1, c, b, a)
    }
}
int main(){
    int n; cin >> n;
    int a, b, c; cin >> a >> b >> c;
    Hanoi(n, a, b, c);
}
using namespace std;
void calAvg(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << sum / n;
}
using namespace std;
//determine whether an array of integers contains any 1s. If it does, output "Hard"; otherwise, "Easy".
void hardEasy(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 1) cnt++;
    }
    (cnt == 0)? cout << "Easy" : cout << "Hard";
}
using namespace std;
// count how many times the cumulative sum of the array elements becomes negative.
//while also keeping the cumulative sum within the range of -1 to 1 during the process.
void cntNegSum(){
    int n; cin >> n;
    int arr[n], cnt = sum = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum < 0){
            cnt++; 
            sum = 0;
        }
        /*if(sum < -1)
            sum = -1;
        else if(sum > 1)
            sum = 1;*/
    }
    cout << cnt;
}
using namespace std;
//Find the mid between n & m
void FindMid(){
    int n, m; cin >> n >> m;
    int cnt = (n + 1) / 2;
    int res = ((cnt + m - 1) / m) * m;
    (res > n)? cout << -1 : cout << res;
}
using namespace std;
// maximize the value of a number when it is negative by simulating the removal of one digit
void maximize(){
    int n; cin >> n;
    if(n >= 0)
        cout << n;
    else{
        int a = -n /10 %10;
        int b = n % 10;
        cout << (a > b) ? n /10 - b : n / 10;
    }
}
using namespace std;
// outputs the coordinates of the other two points required to complete a square. 
void CompleteSquare(){
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    if(abs(x1 - x2) == abs(y1 - y2))
        cout << x1 << " " << x2 << " " << y1 << " " << y2;
    //if these points are horizontal
    else if(x1 == x2){
        int length = abs(y2 - y1);
        cout << x1 + length << " " << y1 << " " << x2 + length << " " << y2;
    }
    //if these points are vertically
    else if(y1 == y2){
        int length = abs(x2 - x1);
        cout << x1 << " " << y1 + length << " " << x2 << " " << y2 + length;
    }
    else 
        cout << -1;
}
using namespace std;
//count How Much 5 will be exits
void cntFive(){
    int n; cin >> n;
    int cnt = 0, tmp = 0;
    while(n--){
        int x; cin >> x;
        (x == 5) ? cnt++ : tmp++;
    }
    if(tmp == 0){
        cout << -1; return;
    }
    if(cnt < 9){
        cout << 0; return;
    }
    int five = (cnt / 9) * 9;
    for(int i = 0; i < five; i++)
        cout << 5 << " ";
    for(int i = 0; i < tmp; i++)
        cout << 0 << " ";
}
using namespace std;
//calculate the sum of 5 integers , and determine if the sum can be evenly divided by 5
void DivisibleFive(){
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    a += b + c + d + e;
    (a % 5 == 0 && a / 5 != 0) ? cout << "Yes" : cout << "No";
}
//count how many of the n integers are greater than the threshold value 
using namespace std;
void cntGreater(){
    int n, trg; cin >> n >> trg;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num > trg) cnt++;
    }
    cout << cnt + n;
}
using namespace std;
// divide a resource c into chunks of size equal to the LCM of two other quantities a & b
void divide(){
    int a, b, c; cin >> a >> b >> c;
    int x = (a * b) / __gcd(a, b);
    cout << c / x;
}
using namespace std;
//calculate the minimum number of steps required to adjust a given range defined by start and end to a target range
void calculateStep(){
    int l, r, start, end; cin >> l >> r >> start >> end;
    int cnt = 0;
    if(start != l)cnt++;
    if(end != r) cnt++;
    if(start != l && end != r){
        cnt += abs(start - end);
        cnt += min(abs(l - start), abs(r - end));
    }
    else if(start == l && end != r)
        cnt += abs(end - r);
    else if(start != l && end == r)
        cnt += abs(start - l);
    cout << cnt;
}
using namespace std;
//find the highest possible value of maxi
void statement(){
    int a, b, maxi = -1;
    int n, trg; cin >> n >> trg;
    while(n--){
        cin >> a >> b;
        if(a < trg){
            if(b != 0)
                maxi = max(maxi, 100 - b);
            else
                maxi = max(maxi, 0);
        }
        else if(a == trg){
            if(b == 0)
                maxi = max(maxi, 0);
        }
    }
    cout << maxi;
}
using namespace std;
// compare two numbers and output which one is larger, 
void compBetween(){
    int a, b; cin >> a >> b;
    if(a > b) cout << "A";
    else if cout << "B";
    else cout << "Equal";
}
using namespace std;
// determine whether it is possible to perform a series of jumps between two integers
//a and b, using a fixed step size c, such that the total number of jumps is even.
void cntJump(){
    int start, end, step; cin >> start >> end >> step;
    int dist = abs(start - end);
    if(dist % step != 0){
        cout << "No";
        return 0;
    }
    dist /= step;
    (dist % 2 == 0) ? cout << "Yes" : cout << "No";
}
using namespace std;
//determines the final position in a circular range after performing a given number of adjustments. 
void circularRange(){
    int maxi, adjust, cur; cin >> maxi >> adjust >> cur;
    cur = (cur + adjust) % maxi;
    if(cur <= 0)
        cur += maxi;
    cout << cur;
}
using namespace std;
//How much steps we need for being two variable same
void cntOperation(){
    int x, y; cin >> x >> y;
    if(x == y)
        cout << 0;
    else if(x > y)
        cout << x - y;
    else{
        int operation = 0;
        while(y > x){
            (y % 2 == 0) ? y /= 2 : y++; 
            operation++;
        }
        operation += x - y;
        cout << operation;
    }
}
using namespace std;
// divide an integer into the smallest possible number of parts, where each part is either 2 or 3
void divideInto(){
    int n; cin >> n;
    if(n % 2 == 0){
        cout << n / 2 << "\n";
        for(int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    }
    else{
        cout << (n - 3) / 2 + 1 << "\n";
        cout << 3 << " ";
        for(int i = 0; i < (n - 3) / 2 ; i++)
            cout << 2 << " ";
    }
}
using namespace std;
// determines whether a given number of units can be distributed evenly across a specified number of groups
void EvenDistribute(){
    int x, y; cin >> x >> y;
    if(y == 1){
        cout << (x == 0 ? cout << "Yes" : cout << "No");
        return;
    }
    y -= 1;
    x -= y;
    (x >= 0 && y >= 0 && x % 2 == 0) ? cout << "Even" : cout << "Odd";
}
using namespace std;
// Calculate total values for two participants & determine which one is win
void compare(){
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int first = b * a + 2 *d;
    int sec = c * a + 2 * e;
    if(first > sec) cout << "first";
    else if(sec > first) cout << "Second";
    else cout << "Friendship"
}
using namespace std;
//compute and print the minimum value from a set of given expressions 
void findMin(){
    int a, b, c; cin >> a >> b >> c;
    cout << min({a + b + c, 2 *(a + b), 2 * (b + c), 2 *(c + a)});
}
using namespace std;
vector <int> suffixSum(vector <int> &vec){
    vector <int> suffix(vec.size());
    suffix[vec.size() - 1] = vec[vec.size() - 1];
    for(int i = vec.size() - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] + vec[i];
    return suffix;
}
vector <int> prefixSum(vector <int> &vec){
    vector <int> prefix;
    prefix[0] = vec[0];
    for(int i = 1; i < vec.size(); i++)
        prefix[i] = prefix[i - 1] + vec[i];
    return prefix;
}
vector <int> minPos(vector <int> &vec){
    int maxi= 0, mini = 0;
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] > vec[maxi])
            maxi = i;
    }
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] < vec[mini])
            mini = i;
    }
    return maxi, mini;
}
int main(){
    vector <int> vec{2, 3, 1, 5, 4};
    vector <int> suffix = suffixSum(vec);
    vector <int> prefix = prefixSum(vec);
    for(int i = 0; i < suffix.size(); i++)
        cout << suffix[i] << " "; 
}

using namespace std;
int GCD(int a, int b){
    if(b > a) swap(b, a);
    if(a == b) return a;
    for(int i = b; i > 0; i--){
        if(a % i == 0 && b % i == 0)
            return i;
    }
}
int GCD(int a, int b){
    if(a == 0 || b == 0) return a + b;
    if(a > b) return GCD(a % b, b);
    else
        return GCD(a, b % a);
}
int LCM(int a, int b){
    for(int i = max(a, b); i <= a * b; i++){
        if(i % a == 0 && i % b == 0)
            return i;
    }
    return -1;
}
int main(){
    int n, x; cin >> n >> x;
    cout << GCD(n, x);
}
using namespace std;
// Print three consecutive even numbers starting from l. if they fit within the range [l, r].
void printBetween(){
    int l, r; cin >> l >> r;
    if(l % 2 != 0) l += 1;
    if(r - l >= 4)
        cout << l << " " << l + 2 << " " << l + 4;
    else
        cout << -1;
}
using namespace std;
//calculate the maximum number of drinks (servings) that can be made for a group of friends based on the availability of ingredients:
void partyArrange(){
    int amico, bottle, mlBottle, lime, sliceLime, salt, mlServing, saltServing;
    cin >> amico >> bottle >> mlBottle >> lime >> sliceLime >> salt >> mlServing >> saltServing;
   int totalMl = (bottle * mlBottle) / mlServing / amico;
    int totalLime = (lime * sliceLime) / amico;
    int totalsalt = salt / saltServing / amico;
    res = min({totalMl, totalLime, totalsalt});
    cout << res;
}
using namespace std;
//check if there is at least one item where the price does not match the quality.
void checkQuality(){
    int n; cin >> n; 
    for(int i = 0; i < n; i++){
        int price, quality; cin >> price >> quality;
        if(price != quality)
            cout << "Happy";
            return 0;
    }
    cout << "Poor";
}
using namespace std;
//calculates the maximum "happiness" value achievable from a list of items, 
//considering a penalty for exceeding a given time limit.
void cntmaxHappiness(){
    int n, k; cin >> n >> k;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        int curr;
        if(y <= k)
            curr = x;
        else
            curr = x - (y - k);
        maxi = max(maxi, curr);
    }
}
using namespace std;
//determine how many times each die wins, and how many times there is a draw, 
// when compared to a series of possible dice outcomes (from 1 to 6).
void compDice(){
    int dice1, dice2; cin >> dice1 >> dice2;
    int win1, win2, draw = 0;
    for(int i = 1; i <= 6; i++){
        if(abs(dice1 - i) > abs(dice2 - i))
            win1++;
        else if(abs(dic1 - i) < abs(dice2 - i))
            win2++;
        else
            draw++;
    }
}
using namespace std;
void snakePattern(){
    int row, col; cin >> row >> col;
    for(int i = 0; i < row; i++){
        if(i % 2 == 0){
            for(int j = 0; j < col; j++)
                cout << "#";
        }
        else{
            if((i / 2) % 2 == 0){
                for(int j = 0; j < col - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else{
                cout << "#";
                for(int j = 1; j < col; j++)
                    cout << ".";
            }
        }
        cout << "\n";
    }
}
using namespace std;
//find first even or odd unique element
void findUnique(){
    int n; cin >> n;
    int pos1 = -1 pos2 = -1, even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2 == 0){
            even++;
            pos1 = i + 1;
        }
        else{
            odd++;
            pos2 = i + 1;
        }
    }
    (odd == 1) ? cout << pos2 : cout << pos1;
}
#include<bits/stdc++.h>
using namespace std;
void transform(){
    int n; cin >> n;
    int res[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        int mid = (x + 1) / 2;
        res[i] = mid - 1;
    }
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
}
using namespace std;
//counting how many times an element in the guest array matches an element in the host array
void cntMatch(){
    int n; cin >> n;
    int host[n], guest[n];
    for(int i = 0; i < n; i++)
        cin >> host[i];
    for(int i = 0; i < n; i++)
        cin >> guest[i];
    for(int i = 0; i < n; i++){
        int tmp = guest[i];
        for(int j = 0; j < n; j++)
            if(host[i] == tmp)
                cnt++;
    }
    cout << cnt;
}
using namespace std;
bool isSorted(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
bool contain0(int *arr, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            return true;
    }
    return false;
}
bool containDup(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
                return true;
        }
    }
    return false;
}
#include<bits/stdc++.h>
using namespace std;
void MinIdx(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int idx = 0, mini = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < mini){
            mini = arr[i];
            idx = i;
        }
    }
    if(idx != 0)
        swap(arr[0], arr[idx]);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
using namespace std;
//Find the largest abs value 1-th based idx
void findLargest(){
    int row, col; cin >> row >> col;
    int arr[row][col], x, y;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
    int res = arr[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(abs(arr[i][j]) > abs(res)){
                res = arr[i][j];
                x = i + 1; y = j + 1;
            }
        }
    }
    cout << x << " " << y;
}
using namespace std;
void appendVal(){
    int n, x; cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    arr[n] = x;
    sort(arr, arr + n + 1);
    for(int i = 0; i <= n; i++)
        cout << arr[i] << " ";
}
using namespace std;
// determine how many participants in a competition will advance to the next round based on their scores.
void nextRound(){
    int n, k; cin >> n >> k;
    int arr[n], cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int tmp = arr[k - 1];
    for(int i = 0; i < n; i++){
        if(arr[i] >= tmp && arr[i] > 0)
            cnt++;
    }
    cout << cnt;
}
#include<bits/stdc++.h>
using namespace std;
//prrint integers that are div by 10 & cnt digits from int that arn't divisible by 10
void divisibleByTen(){
    int n; cin >> n;
    vector <int> vec(n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 10 == 0)
            vec.push_back(x);
        else{
            int tmp = x;
            while(tmp != 0){
                r++;
                tmp /= 10;
            }
        }
    }
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "digits that aren't divisible by 10: " << r;
}
using namespace std
//calculates the minimum cost of traveling a given number of units, 
//given the cost of single tickets and special tickets. The special tickets cover 
//multiple units at a potentially reduced cost
//dist(total distance), Gdist(special ticket can covered dist), Ticprice(normal ticket price), (GTicketPrice)
void TravellingCost(){
    int dist, Gdist, Ticprice, GTicprice;
    cin >> dist >> Gdist >> Ticprice >> GTicprice;
    int price = 0;
    if(TicPrice * Gdist <= GTicprice){
        price += dist * Ticprice;
        return 0;
    }
    int needGTic = dist / Gdist;
    int remainDist = dist % Gdist;
    int x = (needGTic + 1) * GTicprice;
    int y = needTic * GTicprice + remainDist * Ticprice;
    price = min(x, y);
    cout << price;
}
#include<bits/stdc++.h>
using namespace std;
//compute specific values related to the movement or relationship between two points on a 2D grid
void GridMove(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int IsDiffrent = (a != c && b != d) ? 2 : 1;
    int SameParity = ((a + b) % 2 == (c + d) % 2) ? 1 : 0;
    int DiffrentDirection = (a - b == c - d || a + b == c + d) ? 1 : 0;
    int res = IsDiffrent * (2 - DiffrentDirection);
    int maxDist = max(abs(c - a), abs(d - b));
    cout << res << " " << SameParity * res << " " << maxDist ;
}
using namespace std;
// print sum between range
int sumRange(int l, int r){
    if(r < l) 
        return 0;
    if(l > 1)
        return sumRange(1, r) - sumRange(1, l - 1);
    if(r % 2 == 1)
        return sumRange(1, r - 1) + r;
    else
       return r * (r + 1) / 2;
}

void task764_3_C() {
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> u(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        while (a[i] > n || (a[i] <= n && u[a[i]]))
            a[i] /= 2;
        if (a[i] == 0) {
            cout << "NO";
            return;
        }
        u[a[i]] = true;
    }
    cout << "YES";
}

void task764_3_D() {
    int n, k;
    cin >> n >> k;
    vector<int> count(26);
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        ++count[c - 'a'];
    }
    int p = 0, no = 0;
    for (int i = 0; i < 26; ++i) {
        p += count[i] / 2;
        no += count[i] % 2;
    }
    int cl = 2 * (p / k);
    no += 2 * (p % k);
    cl += (no / k) >= 1;
    cout << cl;
}
void task20C() {
    int n, m;
    cin >> n >> m;
    V<VPii> graph(n + 1, VPii(n + 1));
    forn (k, m, 0) {
        int i, j, w;
        cin >> i >> j >> w;
        graph[i][j].fi = w;
        graph[i][j].se = j;
        graph[j][i].fi = w;
        graph[j][i].se = i;
    }
    Vll dist(n + 1, 1e18);
    Vi p(n + 1);
    dist[1] = 0;
    p[1] = 1;
    priority_queue<Pii, VPii, greater<Pii>> q;
    q.push(mp(0, 1));
    while (!q.empty()) {
        Pii u = q.top();
        q.pop();
        if (u.fi > dist[u.se]) continue;
        forn(i, n + 1, 1) {
            int v = graph[u.se][i].se, len = graph[u.se][i].fi;
            if (dist[v] > dist[u.se] + len) {
                p[v] = u.se;
                dist[v] = dist[u.se] + len;
                q.push(mp(dist[v], v));
            }
        }
    }
    if (dist[n] == 1e18) cout << -1;
    else {
        int i = n;
        string c;
        while (i != 1) {
            string pl = to_string(i);
            reverse(pl.begin(), pl.end());
            c += pl + " ";
            i = p[i];
        }
        cout << 1;
        for (int i = (int) c.size() - 1; i > -1; i--)
            cout << c[i];
    }
}

void task_Educ119_2_A() {
    string s;
    cin >> s;
    int count = 0;
    for (char i : s)
        if (i == 'E')
            count++;
    if (count == s.size() - 1)
        cout << "NO";
    else
        cout << "YES";
}

void task_Educ119_2_B() {
    ll w, h, ans = 0;
    cin >> w >> h;
    for (int j = 0; j < 4; ++j) {
        ll k; cin >> k;
        vector<int> points(k);
        for (int i = 0; i < k; ++i)
            cin >> points[i];
        if (j < 2)
            ans = max(ans, (points[k - 1] - points[0]) * h);
        else
            ans = max(ans, (points[k - 1] - points[0]) * w);
    }
    cout << ans;
}

void task_Educ119_2_C() {
    ll n, k, x;
    cin >> n >> k >> x;
    string s;
    cin >> s;
    vector<ll> count;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '*') {
            count.push_back(0);
            while (i < n - 1 && s[i + 1] == '*')
                i++, count[count.size() - 1]++;
        }
    }
    // think about it
}

void task763_2_A() {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    vector<int> p;
    if (cd >= cb)
        p.push_back(cd - cb);
    if (rd >= rb)
        p.push_back(rd - rb);
    if (cd <= cb)
        p.push_back(2 * m - cd - cb);
    if (rd <= rb)
        p.push_back(2 * n - rd - rb);
    int Min = 1e9;
    for (int i = 0; i < p.size(); ++i)
        if (p[i] < Min)
            Min = p[i];
    cout << Min;
}

void taskEduc120_2_A() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a || (a == b && c % 2 == 0) || (a == c && b % 2 == 0) || (b == c && a % 2 == 0))
        cout << "YES";
    else
        cout << "NO";
}

void task760_3_A() {
    int a[7];
    for (int i = 0; i < 7; ++i)
        cin >> a[i];
    cout << a[0] << ' ' << a[1] << ' ' << a[6] - a[1] - a[0];
}

void task760_3_B() {
    int n;
    cin >> n;
    string ans, last;
    bool flg = false;
    for (int i = 0; i < n - 2; ++i) {
        string nw;
        cin >> nw;
        if (i == 0 || flg || nw[0] == last[1]) {
            ans += nw[0];
            last = nw;
        } else {
            flg = true;
            ans += last[1];
            ans += nw[0];
        }
        if (i == n - 3)
            ans += nw[1];
    }
    if (!flg)
        ans += 'a';
    cout << ans;
}

void task766_2_A() {
    int n, m, r, c, count = 0;
    cin >> n >> m >> r >> c;
    --r, --c;
    bool flg = false, flg1 = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char k; cin >> k;
            if (flg)
                continue;
            count += (k == 'B');
            if (i == r && j == c && k =='B') {
                cout << 0;
                flg = true;
            } else if ((i == r || j == c) && k == 'B') {
                flg1 = true;
            }
        }
    }
    if (count == 0) {
        cout << -1;
        return;
    }
    if (flg1 && !flg)
        cout << 1;
    else if (!flg)
        cout << 2;
}

void task766_2_B() {
    int n, m;
    cin >> n >> m;
    vector<int> p;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            p.push_back(max(max(i + j, i + m - j - 1), max(j + n - i - 1, m - 1 - j + n - 1 - i)));
    sort(p.begin(), p.end());
    for (int i = 0; i < n * m; ++i)
        cout << p[i] << ' ';
}

void taskGlobal18_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count += a;
    }
    cout << (count % n + n - 1) / n;
}

void task756_3_A() {
    string n; cin >> n;
    if ((n[n.length() - 1] - '0') % 2 == 0) {
        cout << 0;
        return;
    }
    if ((n[0] - '0') % 2 == 0) {
        cout << 1;
        return;
    }
    for (int i = 0; i < n.length(); ++i) {
        if ((n[i] - '0') % 2 == 0) {
            cout << 2;
            return;
        }
    }
    cout << -1;
}

void task756_3_B() {
    ll a, b;
    cin >> a >> b;
    cout << min(min(a, b), (a + b) / 4);
}

void task757_2_A() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<int> c(n);
    for (int i = 0; i < n; ++i)
        cin >> c[i];
    sort(c.begin(), c.end());
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (c[i] < l)
            continue;
        if (c[i] > r)
            break;
        if (k >= c[i]) {
            k -= c[i];
            count++;
        } else
            break;
    }
    cout << count;
}

void task757_2_B() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> h;
    for (ll i = 0; i < n; ++i) {
        int num; cin >> num;
        h.push_back(make_pair(num, i));
    }
    sort(h.begin(), h.end());
    reverse(h.begin(), h.end());
    ll now = 1, minus = 1;
    vector<ll> a(n), k(n);
    for (ll i = 0; i < n; ++i)
        a[h[i].second] = i;
    ll count = 0;
    for (auto i : h) {
        k[i.second] = minus * now;
        count += 2 * abs(now) * i.first;
        minus = -minus;
        if (minus == 1)
            now++;
    }
    cout << count << "\n0 ";
    for (ll i = 0; i < n; ++i) {
        cout << k[i] << ' ';
    }
}

void task756_3_C() {
    int n; cin >> n;
    vector<int> p(n);
    deque<int> ans;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    if (n == 1) {
        cout << 1;
        return;
    }
    if (p[r] != n && p[0] != n) {
        cout << -1;
        return;
    }
    if (p[r] == n)
        --r;
    else
        ++l;
    ans.push_back(n);
    while (r != l) {
        if (min(p[l], p[r]) == p[l]) {
            ans.push_back(p[r]);
            --r;
        } else {
            ans.push_front(p[l]);
            ++l;
        }
    }
    ans.push_front(p[l]);
    for (int i : ans)
        cout << i << ' ';
}

void taskEduc118_Rated_2_A() {
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int l1 = log10(x1), l2 = log10(x2);
    if (l1 + p1 < l2 + p2) {
        cout << '<';
        return;
    } else if (l1 + p1 > l2 + p2) {
        cout << '>';
        return;
    }
    if (l1 == l2) {
        if (x1 < x2)
            cout << '<';
        else if (x1 > x2)
            cout << '>';
        else
            cout << '=';
        return;
    }
    bool swapped = false;
    if (l1 > l2) {
        swap(x1, x2);
        swap(l1, l2);
        swap(p1, p2);
        swapped = true;
    }
    int new1 = x1 * pow(10, l2 - l1);
    if (new1 < x2) {
        if (swapped)
            cout << '>';
        else
            cout << '<';
    } else if (new1 > x2) {
        if (swapped)
            cout << '<';
        else
            cout << '>';
    } else
        cout << '=';
}

void taskEduc118_Rated_2_B() {
    int n, mn = 1e6 + 7;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    int count = 0;
    for (int i = 0; i < n && count < n / 2; ++i) {
        if (a[i] == mn)
            continue;
        cout << a[i] << ' ' << mn << '\n';
        count++;
    }
}

bool can(ll m, ll n, ll h, vector<int> &d) {
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 || d[i] + m < d[i + 1])
            count += m;
        else
            count += d[i + 1] - d[i];
    }
    if (count >= h)
        return true;
    return false;
}

void taskEduc118_Rated_2_C() {
    ll n, h;
    cin >> n >> h;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];
    ll l = 0, r = 1e18 + 4;
    while (r - l > 1) {
        ll k = (r + l) / 2;
        if (can(k, n, h, d))
            r = k;
        else
            l = k;
    }
    cout << r;
}

void taskEduc118_Rated_2_D() {
    int n; cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {

    }
}

void taskGlobal19_A() {
    int n; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i];
    for (int i = 0; i < n - 1; ++i) {
        if (*max_element(p.begin(), p.begin() + i + 1) > *min_element(p.begin() + i + 1, p.end())) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

void taskGlobal19_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    for (int i = 0; i < n; ++i) {
        int last_zero_count = 0;
        for (int j = i; j < n; ++j) {
            int zero_count = last_zero_count + (a[j] == 0);
            count += j - i + 1 + zero_count;
            last_zero_count = zero_count;
        }
    }
    cout << count;
}

void taskGlobal19_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    ll count = 0, count_m = 0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        if (i != 0 && i != n - 1) {
            count_m += (a[i] + 1) / 2;
            count += a[i];
        }
    }
    if (count % 2 == 1) {
        if (n == 3) {
            cout << -1;
            return;
        }
    }
    if (count <= n - 2) {
        cout << -1;
        return;
    }
    cout << count_m;
}

void taskGlobal19_E() {
    int n, m;
    cin >> n >> m;
    map<int, int> count;
    multiset<int> a;
    for (int i = 0; i < n; ++i) {
        int k;
        if (count.count(k) == 0)
            count[k] = 1;
        else
            ++count[k];
        a.insert(k);
    }
    set<pair<int, int>> bad;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        bad.insert(make_pair(x, y));
        bad.insert(make_pair(y, x));
    }
    set<pair<int, int>> count_set;
    for (auto i : count)
        count_set.insert(make_pair(i.second, i.first));
    auto end1 = a.end();
    --end1;
    ll mx;
    while (end1 != a.begin()) {
        auto end2 = count_set.end();
        --end2;
        bool flg = false;
        while (end2 != count_set.begin()) {
            if (*end1 != (*end2).second && bad.count(make_pair(*end1, (*end2).second)) == 0) {
                mx = (count[*end1] + (*end2).first) * (*end1 + (*end2).second);
                flg = true;
                break;
            }
            --end2;
        }
        if (flg)
            break;
        --end1;
    }
    auto end2 = a.end();
    --end2;
    while (end2 != a.begin()) {
        auto end1 = count_set.end();
        --end1;
        bool flg = false;
        while (end1 != count_set.begin()) {
            if (*end2 != (*end1).second && bad.count(make_pair(*end2, (*end1).second)) == 0) {
                if (mx < (count[*end2] + (*end1).first) * (*end2 + (*end1).second))
                    mx = (count[*end2] + (*end1).first) * (*end2 + (*end1).second);
                flg = true;
                break;
            }
            --end1;
        }
        --end2;
        if (flg)
            break;
    }
    cout << mx;
}

void task761_2_A() {
    string s, t;
    cin >> s >> t;
    map<int, int> count;
    set<char> sym;
    for (int i = 'a'; i < 'z' + 1; ++i) {
        count[i] = 0;
    }
    for (auto i : s) {
        ++count[i];
        sym.insert(i);
    }
    if (t[0] != 'a' || t == "acb" || count['a'] == 0 || count['b'] == 0 || count['c'] == 0) {
        for (char i : sym) {
            for (int j = 0; j < count[i]; ++j) {
                cout << i;
            }
        }
    } else if (t == "abc") {
        for (char i : sym) {
            if (i == 'b') {
                for (int j = 0; j < count['c']; ++j)
                    cout << 'c';
            } else if (i == 'c') {
                if (count['b'])
                    continue;
                else
                    for (int j = 0; j < count['c']; ++j)
                        cout << 'c';
            }
            for (int j = 0; j < count[i]; ++j)
                cout << i;
        }
    }
}

void task761_2_B() {
    int n; cin >> n;
    if (n % 2 == 0)
        cout << n - 3 << ' ' << "2 1";
    else if (n % 4 == 1)
        cout << n / 2 - 1 << ' ' << n / 2 + 1 << " 1";
    else
        cout << n / 2 - 2 << ' ' << n / 2 + 2 << " 1";
}

void task761_2_C() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());

}

void task753_3_A() {
    map<char, int> keyboard;
    for (int i = 0; i < 26; ++i) {
        char key;
        cin >> key;
        keyboard[key] = i;
    }
    string s;
    cin >> s;
    int n = s.length();
    int now = -1, time = 0;
    for (int i = 0; i < n; ++i) {
        if (now != -1)
            time += abs(now - keyboard[s[i]]);
        now = keyboard[s[i]];
    }
    cout << time;
}

void task771_2_A() {
    int n; cin >> n;
    vector<int> p(n);
    int first = 1, lg = -2;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (first == i + 1 && p[i] == i + 1)
            ++first;
        else if (lg == -2)
            lg = i - 1;
    }
    for (int i = lg + 1; i < n; ++i) {
        if (p[i] == first) {
            reverse(p.begin() + lg + 1, p.begin() + i + 1);
            break;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i] << ' ';
    }
}

void task771_2_B() {
    int n; cin >> n;
    vector<int> ne1(n), ne2(n), da1(n), da2(n);
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a % 2 == 0) {
            da1.push_back(a);
            da2.push_back(a);
        } else {
            ne1.push_back(a);
            ne2.push_back(a);
        }
    }
    sort(ne1.begin(), ne1.end());
    sort(da1.begin(), da1.end());
    if (ne1 == ne2 && da1 == da2)
        cout << "Yes";
    else
        cout << "No";
}

void task771_2_C() {
    int n;
    cin >> n;
    vector<int> p(n);
    int count = 0;
    set<pair<int, int>> mxs;
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        mxs.insert(make_pair(p[i], i));
    }
    auto maxIt = mxs.end();
    --maxIt;
    int idx = -1, mn_last = n + 1, idx_min = n;
    for (int i = n - 1; i >= (*maxIt).second; --i)
        if (p[i] <= mn_last)
            mn_last = p[i];
    bool first = true;
    while ((*maxIt).second != 0) {
        idx = (*maxIt).second;
        if (first)
            ++count;
        while (maxIt != mxs.begin() && (*maxIt).second >= idx) {
            --maxIt;
        }
        if ((*maxIt).first <= mn_last)
            ++count;
        for (int i = idx_min - 1; i > (*maxIt).second; --i) {
            if (p[i] <= mn_last) {
                mn_last = p[i];
                idx_min = i;
            }
        }
        first = false;
    }
    cout << max(count, 1);
}

void task771_2_E() {
    int n, q;
    cin >> n >> q;
    int bad = sqrt(n);
    vector<int> a(n), color(n), will_do_clr, will_do_cnt;
    for (int i = 0; i < q; ++i) {
        string s; cin >> s;
        if (s == "Color") {
            int l, r, c;
            cin >> l >> r >> c;
//            will_do_clr.push_back()
        } else if (s == "Add") {

        } else {
            cout << ' ';
        }
    }
}

void task748_3_A() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(b, c) + 1 - a, 0) << ' ' << max(max(a, c) + 1 - b, 0) << ' ' << max(max(a, b) + 1 - c, 0);
}

void task748_3_B() {
    string n; cin >> n;
    int mn = 19;
    if (stoll(n) % 25 == 0) {
        cout << 0;
        return;
    }
    for (int i = 0; i < (int) n.length(); ++i) {
        if ((n[i] - '0') % 5 != 0)
            continue;
        for (int j = 0; j < i; ++j) {
            int dif = (int) n.length() - j - 2;
            if (((n[j] - '0') * 10 + n[i] - '0') % 25 == 0 && (((n[j] - '0') * 10 + n[i] - '0') != 0 || dif != n.length() - 2))
                if (dif < mn)
                    mn = dif;
        }
    }
    cout << mn;
}

bool will_live(int m, int n, int k, vector<int> &pref) {
    return pref[k - m] < n;
}

void task748_3_C() {
    int n, k; cin >> n >> k;
    vector<int> x(k), pref(k + 1);
    for (int i = 0; i < k; ++i)
        cin >> x[i];
    sort(x.begin(), x.end());
    pref[k] = 0;
    for (int i = k - 1; i >= 0; --i)
        pref[i] = n - x[i] + pref[i + 1];
    int l = 0, r = k + 2;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (will_live(m, n, k, pref))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void taskGlobal17_A() {
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
        cout << 0;
    else if (min(n, m) == 1)
        cout << 1;
    else
        cout << 2;
}

//bool can_invite(int m, int n, vector<pair<int, int>> &f) {
//
//}

void taskGlobal17_C() {
     int n;
     cin >> n;
     vector<pair<int, int>> f(n);
     for (int i = 0; i < n; ++i)
         cin >> f[i].first >> f[i].second;
     int l = 0, r = n + 1;
//     while (r - l > 1) {
//         if ()
//     }
}

void task759_2_B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[n - i - 1];
    int mx = a[0], count = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > mx) {
            ++count;
            mx = a[i];
        }
    }
    cout << count;
}

int calcR(int k, int n, multiset<int> &x) {
    int count = 0, last = 0, now = 0;
    for (int i : x) {
        ++now;
        count += abs(i - last);
        last = i;
        if (now == k) {
            last = 0;
            now = 0;
            count += abs(i);
        }
    }
    if (now != 0) {
        auto itEnd = x.end();
        count += *(--itEnd);
    }
    return count;
}

void task759_2_C() {
    int n, k, mx = 0;
    cin >> n >> k;
    multiset<int> l, r;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (abs(a) > mx)
            mx = abs(a);
        if (a < 0)
            l.insert(abs(a));
        else
            r.insert(a);
    }
    cout << calcR(k, n, r) + calcR(k, n, l) - mx;
}

void task758_1_2_A() {
    int n; cin >> n;
    for (int i = 2; i <= n + 1; ++i)
        cout << i << ' ';
}

void taskDeltixAutumn2021_A() {
    int n;
    cin >> n;
    ll count = 0, maxEnd = 0, sumEnd = 0;
    for (int i = 0; i < n; ++i) {
        ll k; cin >> k;
        while (!(k & 1)) {
            k /= 2;
            ++count;
        }
        if (k > maxEnd)
            maxEnd = k;
        sumEnd += k;
    }
    cout << fixed << setprecision(0) << maxEnd * pow(2, count) + sumEnd - maxEnd;
}

void task117EducRated_2_A() {
    unsigned int x, y;
    cin >> x >> y;
    if (!((x + y) & 1)) {
        if (x >= y)
            cout << (x + y) / 2 - min(x, y) << ' ' << min(x, y);
        else
            cout << min(x, y) << ' ' << (x + y) / 2 - min(x, y);
    } else
        cout << "-1 -1";
}

void task117EducRated_2_B() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > n / 2 + 1 || b < n / 2 || (b > n / 2 && a > n / 2) || (b <= n / 2 && a <= n / 2)) {
        cout << -1;
        return;
    }
    for (int i = b + 1; i <= n; ++i) {
        cout << i << ' ';
    }
    int cur = a;
    for (int i = 0; i < n / 2 - (n - b); ++i) {
        cout << cur << ' ';
        ++cur;
    }
    for (int i = cur; i <= b; ++i)
        cout << i << ' ';
    for (int i = 1; i < a; ++i)
        cout << i << ' ';
}

bool can_send(ll m, ll k, ll x) {
    ll count = 0;
    if (m <= k) {
        count = (m + 1) * m / 2;
        if (count - m < x)
            return true;
    } else {
        count = (k + 1) * k / 2 + (m - k) * (k - 1 + k - (m - k)) / 2;
        if (count - (k - (m - k)) < x)
            return true;
    }
    return false;
}

void task117EducRated_2_C() {
    ll k, x;
    cin >> k >> x;
    ll l = 0, r = 2 * k;
    while (r - l > 1) {
        ll m = (r + l) / 2;
        if (can_send(m, k, x))
            l = m;
        else
            r = m;
    }
    cout << l;
}

void task755_1_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] + 1 < b[i] || a[i] > b[i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task755_2_A() {
    ll x, y;
    cin >> x >> y;
    cout << -(x * x) << ' ' << y * y;
}

void task755_2_B() {
    int n, m;
    cin >> n >> m;
    cout << (n * m + 2) / 3;
}

void task754_2_A() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if (((a1 + a3) - (2 * a2)) % 3 == 0)
        cout << 0;
    else
        cout << 1;
}

void task754_2_B() {
    int n; cin >> n;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    int first = -1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1')
            ++cnt1;
        else
            ++cnt0;
    }
    vector<int> ans;
    for (int i = 0; i < n; ++i)
        if ((s[i] == '1' && i < cnt0) || (s[i] == '0' && i >= cnt0))
            ans.push_back(i + 1);
    if (!ans.empty())
        cout << "1\n";
    cout << ans.size();
    for (int i : ans)
        cout << ' ' << i;
}

void task754_2_C() {
    int n; cin >> n;
    string s;
    cin >> s;
    int beforeLast = -1, last = -1, now = -1, mn = 1e6 + 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a')
            beforeLast = last, last = now, now = i;
        else
            continue;
        if (last == -1)
            continue;
        if (beforeLast != -1 && now - beforeLast + 1 == 7) {
            int cntA = 0, cntB = 0, cntC = 0;
            for (int j = beforeLast; j <= now; ++j)
                cntA += (s[j] == 'a'), cntB += (s[j] == 'b'), cntC += (s[j] == 'c');
            if (cntA > cntB && cntA > cntC)
                if (7 < mn)
                    mn = 7;
        }
        if (now - last - 1 > 2)
            continue;
        if (now - last - 1 < 2 || (now - last - 1 == 2 && ((s[now - 1] == 'c' && s[now - 2] == 'b') || (s[now - 1] == 'b' && s[now - 2] == 'c'))))
            if (now - last + 1 < mn)
                mn = now - last + 1;
    }
    if (mn == 1e6 + 1)
        cout << -1;
    else
        cout << mn;
}

void task753_3_B() {
    ll x, n;
    cin >> x >> n;
    ll d;
    if (n % 4 == 1)
        d = -n;
    else if (n % 4 == 2)
        d = 1;
    else if (n % 4 == 3)
        d = n + 1;
    else
        d = 0;
    if (x % 2)
        cout << x - d;
    else
        cout << x + d;
}

void task753_3_C() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    ll count = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] - count <= 0 || a[i + 1] - a[i] >= a[i])
            count += (a[i] - count);
        else {
            cout << a[i] - count;
            return;
        }
    }
    cout << a[n - 1] - count;
}

void task753_3_D() {
    int n;
    cin >> n;
    vector<pair<int, char>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].first;
    for (int i = 0; i < n; ++i)
        cin >> a[i].second;
    for (int i = 0; i < n; ++i)
        b[i] = i + 1;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if ((a[i].second == 'R' && a[i].first > b[i]) || (a[i].second == 'B' && a[i].first < b[i])) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

void task772_2_A() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (i != j)
                    a[i] -= (a[i] & a[j]);
    ll count = 0;
    for (int i = 0; i < n; ++i)
        count += a[i];
    cout << count;
}

void task772_2_B() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] > a[i + 1] && a[i] > a[i - 1]) {
            if (i < n - 2)
                a[i + 1] = max(a[i + 2], a[i]);
            else
                a[i + 1] = a[i];
            ++count;
        }
    }
    cout << count << '\n';
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
}

void task772_2_C() {
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[n - 2] > a[n - 1]) {
        cout << -1 << '\n';
        return;
    }
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] - a[i + 1] <= a[i]) {
            cout << i << '\n';
            for (int j = 0; j < i; ++j)
                cout << j + 1 << ' ' << i + 1 << ' ' << i + 1 + 1<< '\n';
            return;
        } else if (a[i] > a[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

void task772_2_D() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), used2(1e9 + 1), used4(1e9 + 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (used2[a[i]])
            continue;

    }
}

void task752_2_A() {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a - i - 1 - count > 0)
            count += (a - i - 1 - count);
    }
    cout << count;
}

void task726_2_A() {
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        sum += a;
    }
    if (sum == n)
        cout << 0;
    else if (sum < n)
        cout << 1;
    else
        cout << sum - n;
}

void task726_2_C() {
    int n;
    cin >> n;
    vector<int> h(n);
    unordered_set<int> help;
    set<int> more;
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        if (help.count(h[i]))
            more.insert(h[i]);
        help.insert(h[i]);
    }
    sort(h.begin(), h.end());
    if (!more.empty()) {
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        h.erase(find(h.begin(), h.end(), *(more.begin())));
        cout << *(more.begin()) << ' ';
        for (int i : h)
            cout << i << ' ';
        cout << *(more.begin()) << ' ';
    } else {
        cout << h[0] << ' ';
        for (int i = 2; i < n; ++i)
            cout << h[i] << ' ';
        cout << h[1];
    }
}

void taskEducRated112_2_A() {
    ll n; cin >> n;
    cout << max(6LL, n + 1) / 2 * 5;
}

void taskGoodBye2021_B() {
    int n; cin >> n;
    string s, ans, help;
    cin >> s;
    int i = 0;
    do {
        ans += s[i];
        ++i;
    } while (i < n && (i == 0 || s[i] < s[i - 1]));
    help = ans;
    reverse(help.begin(), help.end());
    cout << ans << help;
}

void taskEducRated123_2_A() {
    string s;
    cin >> s;
    set<char> here;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'r' || s[i] == 'b' || s[i] == 'g')
            here.insert(s[i]);
        if (s[i] == 'R' || s[i] == 'G' || s[i] == 'B') {
            if (s[i] == 'R') {
                if (!here.count('r')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'G') {
                if (!here.count('g')) {
                    cout << "NO";
                    return;
                }
            }
            if (s[i] == 'B') {
                if (!here.count('b')) {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
}

void taskEducRated123_2_B() {
    int n; cin >> n;
    deque<int> a(n);
    if (n != 3) {
        for (int i = 0; i < n; ++i) {
            if (i == 3)
                a[i] = i;
            else if (i != 2)
                a[i] = i + 1;
            else
                a[i] = i + 2;
        }
    } else {
        cout << "3 2 1\n1 3 2\n3 1 2";
        return;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << a[j] << ' ';
        cout << '\n';
        a.push_front(a[n - 1]);
        a.pop_back();
    }
}

void taskEducRated123_2_C() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    bool all_more = true;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < 0)
            all_more = false;
    }
    if (all_more) {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i];
        for (int k = 0; k <= n; ++k)
            cout << sum + x * k << ' ';
        return;
    }
    vector<int> pref(n + 1), max_sums(n + 1, -(1e9));
    max_sums[0] = 0;
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + a[i - 1];
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            max_sums[j - i + 1] = max(max_sums[j - i + 1], pref[j + 1] - pref[i]);
    for (int k = 0; k <= n; ++k) {
        int best = 0;
        for (int i = 0; i <= n; ++i)
            best = max(best, (max_sums[i] + min(i, k) * x));
        cout << best << ' ';
    }
}

void taskEducRated123_2_E() {
    int n; cin >> n;
    int i_pos = 1, j_pos = 1;
    string s;
    cin >> s;
    bool d_f = true;
    int count_o = 0;
    for (auto i : s) {
        i_pos += (i == 'D');
        j_pos += (i == 'R');
        if (i_pos == 1)
            d_f = false;
        if (min(i_pos, j_pos) == 1)
            count_o = max(i_pos, j_pos);
    }
    int can_r = n - j_pos, can_d = n - i_pos;
    if (i_pos == 1)
        can_d = 0;
    if (j_pos == 1)
        can_r = 0;
    vector<bool> vert(n + 1), gor(n + 1);
    i_pos = 1, j_pos = 1;
//    for (int i = 0; i < s.size(); ++i) {
//        if (s[i] == 'D');
//    }
}

void task773_2_C() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    map<ll, ll> cnt;
    for (ll i : a)
        cnt[i] = 0;
    for (ll i : a)
        ++cnt[i];
    if (x == 0) {
        ll count = 0;
        for (ll i : a)
            if (i == 0)
                ++count;
        if (count * 2 == n || (count * 2 > n && !(n & 1)))
            cout << 0;
        else
            cout << (n - count * 2);
        return;
    } else if (x == 1) {
        ll count = 0;
        for (auto i : cnt)
            if (i.second & 1)
                ++count;
        cout << count;
        return;
    }
    ll count = 0;
    for (auto i : cnt) {
        if (i.second == 0)
            continue;
        ll count_of_num = 0;
        if (cnt.count(i.first * x))
            count_of_num = cnt[i.first * x];
        if (count_of_num == i.second) {
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else if (count_of_num < i.second) {
            count += i.second - count_of_num;
            cnt[i.first] = 0;
            cnt[i.first * x] = 0;
        } else {
            cnt[i.first] = 0;
            cnt[i.first * x] = count_of_num - i.second;
        }
    }
    cout << count;
}

void task773_2_A() {
    vector<pair<double, double>> p(3);
    for (int i = 0; i < 3; ++i)
        cin >> p[i].second >> p[i].first;
    sort(p.begin(), p.end());
    if (p[1].first == p[2].first)
        cout << fixed << setprecision(10) << abs(p[2].second - p[1].second);
    else
        cout << 0;
}

void task773_2_B() {
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i) {
        int c; cin >> c;
        a.insert(c);
    }
    for (int i = 1; i <= n; ++i)
        cout << max(i, (int) a.size()) << ' ';
}

void taskEducRated116_A() {
    string s;
    cin >> s;
    if (s[0] == s[s.length() - 1])
        cout << s;
    else {
        s[0] = s[s.length() - 1];
        cout << s;
    }
}

void taskEducRated116_B() {
    ll k, n, cur = 1, acts = 0;
    cin >> n >> k;
    while (cur < k) {
        cur *= 2;
        ++acts;
    }
    if (cur < n)
        acts += (n - cur + k - 1) / k;
    cout << acts;
}

void taskEducRated116_C() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), can(n), pref(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (i == n - 1)
            can[i] = 1e18 + 1;
        else
            can[i] = pow(10, a[i + 1] - a[i]) - 1;
    }
    for (int i = 1; i < n + 1; ++i)
        pref[i] = pref[i - 1] + can[i - 1];
    for (int i = 1; i < n + 1; ++i) {
        if (pref[i] > k) {
            ll ans = 0;
            for (int j = 0; j < i - 1; ++j)
                ans += pow(10, a[j]) * can[j];
            ll num = pow(10, a[i - 1]) * min(can[i - 1], k - pref[i - 1] + 1);
            ans += num;
            cout << fixed << setprecision(0) << ans;
            return;
        }
    }
}

void task751_1_A() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << 1 << ' ';
            continue;
        }
    }
}

void task751_2_B() {
    string s;
    cin >> s;
    int n = s.size(), idx = 0;
    char mn = s[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] <= mn) {
            idx = i;
            mn = s[i];
        }
    }
    s.erase(s.begin() + idx);
    cout << mn << ' ' << s;
}

void task750_2_C() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> a(26);
    for (int c = 'a'; c <= 'z'; ++c) {
        int l = 0, r = n - 1;
        while (r - l >= 1) {
            if (s[l] != s[r]) {
                if (s[l] == c) {
                    ++a[c - 'a'];
                    ++l;
                } else if (s[r] == c) {
                    ++a[c - 'a'];
                    --r;
                } else {
                    a[c - 'a'] = -1;
                    break;
                }
            } else
                ++l, --r;
        }
    }
    int mn = 1e9 + 1;
    for (auto i : a)
        if (i < mn && i != -1)
            mn = i;
    if (mn == 1e9 + 1)
        cout << -1;
    else
        cout << mn;
}

void task774_2_A() {
    ll n, s;
    cin >> n >> s;
    if (s < n * n || (n != 1 && s <= n * n)) {
        cout << 0;
        return;
    }
}

void task775_2_A() {
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int last = -3, first = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    cout << last - first + 2;
}

void task775_2_B() {
    ll n, mx = -1, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        if (a >= mx)
            mx = a;
    }
    if (sum == 0) {
        cout << 0;
        return;
    }
    sum -= mx;
    cout << max(1LL, mx - sum);
}
void task775_2_D() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), can(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
}
void task732_2_A() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        sum2 += b[i];
    }
    string ans;
    int count = 0;
    if (sum1 != sum2) {
        cout << -1 << '\n';
        return;
    }
    else {
        for (int i = 0; i < n; ++i) {
            if (a[i] < b[i]) {
                for (int j = 0; j < n; ++j) {
                    if (i == j)
                        continue;
                    while (a[j] > b[j] && a[i] < b[i]) {
                        ++a[i], --a[j];
                        ans += to_string(j + 1) + ' ' + to_string(i + 1) + '\n';
                        ++count;
                    }
                    if (a[i] == b[i])
                        break;
                }
            }
        }
    }
    cout << count << '\n' << ans;
