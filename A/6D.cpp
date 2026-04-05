#include <iostream>
using namespace std;
void Tic_tac_toe(){
    int n, flag= 0;
    //Flag to determine if there is a winner (1) or not (0).
    cout<<"Enter the number of turns: \n";
    cin >> n;
    char arr[3][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) 
                cin >> arr[j][k];
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.') {
            flag= 1;
            cout << arr[0][0] << "\n";
        } else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.') {
            flag= 1;
            cout << arr[0][2] << "\n";
        } else {
            // Check rows and columns
            for (int z = 0; z < 3; z++) {
                if (arr[z][0] == arr[z][1] && arr[z][2] == arr[z][1] && arr[z][1] != '.') {
                    flag= 1;
                    cout << arr[z][0] << "\n";
                    break;
                }
                if (arr[0][z] == arr[1][z] && arr[2][z] == arr[0][z] && arr[0][z] != '.') {
                    flag= 1;
                    cout << arr[0][z] << "\n";
                    break;
                }
            }
        }
        // Draw if no winner
        if (f == 0) {
            cout << "DRAW\n";
        }
    }
}
void FixedChar()
{
    int f = 0;
    char arr[8][8];
  
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][7] == 'R')
                f = i;
        }
    }
    if (f != 0 && arr[f][7] == 'R')
        cout << arr[f][7] ;
    else 
        cout << 'B' ;
}
void solve_wheelBag() {
    int n;
    cin >> n;
    //number of wheels
    int wheel[100];
  
    for (int i = 0; i < n; i++)
        cin >> wheel[i];
        //initial positions of wheels
    for (int i = 0; i < n; i++) {
        int count;
        cin >> count;
        //count of moves for the current wheel
    
        for (int j = 0; j < count; j++) {
            char move;
            cin >> move;
      
            if (move == 'U')
                wheel[i]--;
            else
                wheel[i]++;
        }
        if (wheel[i] < 0)
            wheel[i] += 10;
      
        if (wheel[i] >= 10)
            cout << wheel[i] % 10 << " ";
        else
            cout<< wheel[i] << " ";
    }
    cout << "\n";
}
void game() {
    int n;
    cin >> n;
    char arr[1000][3];
    char* ptr = new char[n];
    int flag = 0, gr = 0, pi = 0, green = 0, pink = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++) {
        int g = 0, rr = 0;
        if (pi == 5) {
            ptr[flag++] = 'g';
            i++;
            green++;
            pi = 0;
        }
        if (gr == 5) {
            ptr[flag++] = 'p';
            i++;
            pink++;
            gr = 0;
        }
        for (int c = 0; c < 3; c++) {
            if (arr[i][c] == 'G') {
                g++;
                break;
            }
            if (arr[i][c] == 'B') {
                rr++;
            }
        }
        if (g == 1) {
            ptr[flag++] = 'g';
            gr++;
            green++;
        }
        if (rr == 3) {
            ptr[flag++] = 'p';
            pi++;
            pink++;
        }
    }

    gr = 0;
    cout << pink * 3 << " " << green * 3 << endl;

    while (gr++ < n) {
        if (ptr[gr - 1] == 'g')
            cout << "Green" << "\n";
        if (ptr[gr - 1] == 'p')
            cout << "Pink" << endl;
    }
    delete[] ptr;
    return 0;
}
void MaxIdx()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    int idx=0;
    bool check=true;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
            check=false;
        
        if(arr[i] > arr[idx])
            idx=i;
    }
    if(idx==0)
    {
        while(arr[idx+1]==arr[idx])
        {
            idx++;
        }
    }
    if(check) 
        cout << -1;
    else
        cout << idx;
}
void CompareLength()
{
    //compare between two length
    int n, k;
    cin >>n >>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    if(n > k)
    {
        cout << "No";
            return 0;
    }
    int count=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > arr[i+1])
            count+=2*arr[i] - arr[i+1];
    }
    if(count +n <=k)
        cout <<"Yes";
    else
        cout <<"No";
}
void CompareLength()
{
    int n, m, cnt=0;
    cin >>n >>m;
    int arr[n];
    if(n > m)
    {
        cout<< "No";
        return 0;
    }
    for(int i=0; i<n; i++)
        cin >>arr[i];
    
    sort(arr, arr+n);
    for(int i= 0; i< n-1; i++ )
    {
        cnt+= max(arr[i], arr[i+1]);
    }
    cnt+= max(arr[0], arr[n-1]);
    cnt+= n;
    cout<< cnt;
    if(cnt > m)
        cout<< "\nNO";
    else
        cout<< "\nYES";
}
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool ans = true;
    int first = 0, second = 0;
    if(n == 1){
        t--;
        cout << "YES" << endl;
        continue;
    }
    else{
        for(int i = 1; i < n; i++){
            if(arr[i] != (arr[i-1] + 1)){
                if(first == 0){
                    first = i;
                }
                else if(second == 0){
                    second = i;
                }
                else{
                    ans = false;
                    break;
                }
            }
        }
    }
    // cout << first << second << endl;
    if(ans){
        if(first != 0 && second == 0){
            if(arr[first] - arr[first-1] > 3){
                ans = false;
            }
        }
        else if(first != 0 && second != 0){
            if(arr[first] - arr[first-1] > 3) ans = false;
            else if(arr[first] - arr[first-1] == 3 && arr[second] - arr[second-1] >= 1) ans = false;
            else if(arr[first] - arr[first-1] == 2 && arr[second] - arr[second-1] >= 2) ans = false;
            else if(arr[first] - arr[first-1] == 1 && arr[second] - arr[second-1] >= 3) ans = false;
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
//segment with small sum
// the segment of the array is good if the sum of the elements of segment at most s;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    int l=0, r=0, sum=0, ans=0;
    while(r < n)
    {
        sum+=v[r];
        if(sum <= k)
        {
            ans=max(ans, r-l+1);
            r++;
        }
        else if(sum > k)
        {
            while(sum > k && l<=r)
            {
                sum-=v[l];
                l++;
            }
            r++;
        }
    }
    cout << ans;
}
#include<bits/stdc++.h>
using namespace std;
void solve1(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int sum = 0 ;
    for(int i=0; i<n; i++)
        sum += (arr[i] - 1);
    
    if(sum % 2 == 0){
        cout << "maomao90" << "\n";
    else
        cout << "errorgorn" << "\n"; 
    return 0;
}
void solve2() {
    string s;
    cin >> s;
    int n = s.length();
    bool ans = true;

    if (s[0] == 'B' || s[n - 1] == 'A') {
        ans = false;
    } else {
        int a = 1, b = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'A') {
                a++;
            } else if (s[i] == 'B') {
                b++;
                if (a < b) {
                    ans = false;
                    break;
                }
            }
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
void solve3(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i - 1]){
                count++;
                i++;
            }
        }
        if(count == 0 || count == 1){
            // Add your logic here for cases where count is 0 or 1
            // For example, you can print a message or perform some operation
            // based on the specific requirement.
            cout << "Special case: Count is either 0 or 1." << endl;
        }
        else {
            // Add your logic here for cases where count is not 0 or 1
            // For example, you can continue with the existing code or modify it accordingly.
            // It depends on your specific task.
        }
        t--;
    }
    return 0;
}
void solve4() {
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        sum += abs(a[i + 1] - a[i]) + abs(b[i + 1] - b[i]);
    }
    cout << sum << endl;
}
void solve5() {
    int x;
    cin >> x;
    char *y = new char[x];
    int *s = new int[x];
    int *r = new int[x];
    int z = 0, i = 0, h = 26;
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    while (z < x)
        cin >> y[z++];

    for (z = 0; z < x; z++)
        for (i = 0; i < h; i++)
            if (y[z] == a[i])
                s[z] = i + 1;

    i = x;

    for (z = 0; z < x; z++) {
        int max = 0;
        for (h = 0; h < x; h++)
            if (s[h] >= s[max])
                max = h;

        r[max] = i--;
        s[max] = 0;
    }

    z = 1;
    cout << r[0];

    while (z < x)
        cout << " " << r[z++];

    cout << "\n";

    delete[] y;
    delete[] s;
    delete[] r;
    return 0;
}
void solve6() {
    int n, p = 0, z = 0, f = 0, k = 0;
    cin >> n;
    char *c = new char[n];
    cin >> c;
    while (z++ < n)
        if (c[z - 1] != '*') p++;

    z = 0, f = 1, k = 20 - p;
    while (z++ < n - p)
        f = f * k--;

    cout << f;
    delete[] c; 
    return 0;
}
void solve7() {
    int x[12];
    int size = 12;
    int y = 0;

    while (y < size)
        cin >> x[y++];

    cin >> y;

    int min = 22, mini = 0, minj = 0, i = 0, j = 0, po = 0;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (x[i] + x[j] > y) {
                po++;
                if ((i + j) < min) {
                    min = i + j;
                    mini = i;
                    minj = j;
                }
            }
        }
    }
    if (po == 0)
        cout << "NULL";
    else
        cout << mini + 1 << " " << minj + 1;

    char str[10];
    int f = 0, z = 0;

    cin >> str;

    while (z++ < 10)
        if (str[z - 1] == 'F')
            f++;

    if (f == 1 || f == 2 || f == 5 || f == 8 || f == 9)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
}
void solve8() {
    int x[3], c = 0;
    int y = 0;

    while (y++ < 3) 
        cin >> x[y - 1];

    y = 0;
    int min = 0;

    while (y++ < 3) {
        if (x[min] > x[y]) 
            min = y;
    }

    int ff = 0;
    float ffs = x[min], sds = 10;

    while (ffs > 10) {
        ffs /= 10;
        ff++;
    }

    ffs = pow(sds, ff - 1);
    y = 0;

    while (y++ < 3) 
        x[y - 1] -= ffs;

    while (true) {
        if (x[0] == x[1] && x[0] == x[2]) {
            c = c + x[0];
            break;
        }
        if (x[0] > x[1] && x[0] > x[2]) {
            swap(x[0], x[2]);
            if (x[0] > x[1]) 
                swap(x[0], x[1]);
        }
        if (x[0] > x[1] && x[0] <= x[2]) 
            swap(x[0], x[1]);

        if (x[0] > x[2] && x[0] <= x[1]) {
            swap(x[0], x[2]);
            swap(x[1], x[2]);
        }

        if (x[0] <= x[1] && x[0] <= x[2] && x[1] > x[2]) 
            swap(x[2], x[1]);

        if (x[0] == 0 && x[1] == 0) 
            break;
        if (x[0] + x[1] + x[2] > 3) {
            x[2] -= 2;
            x[1] -= 1;
            c++;
        } else {
            if (x[0] + x[1] + x[2] == 3) {
                c++;
                break;
            } else
                break;
        }
    }
    cout << c + ffs << endl;
}
void solve9() {
    int x;
    cout << "Enter number of programs\n";
    cin >> x;

    float *arr = new float[x];
    float *bur = new float[x];
    float *bur2 = new float[x];
    float *prr = new float[x];
    float *end = new float[x];
    int z = 0, prrr = 0;

    while (z++ < x) {
        cout << "Enter the arrival time of p" << z << endl;
        cin >> arr[z - 1];
        cout << "And its burst time\n";
        cin >> bur[z - 1];
        bur2[z - 1] = bur[z - 1];
        prrr += bur[z - 1];
        cout << "And its priority\n";
        cin >> prr[z - 1];
    }

    arr[x] = 1000000;
    int c = 0, s = 0, min = 0, miny = 0;
    float *fin = new float[x];
    z = 0;
    int max = 0;

    while (s++ < x) {
        end[s - 1] = 0;
    }

    s = 0;
    
    while (c < prrr) {
        s = 0, min = 0;
        
        while (s++ < x) {
            if (arr[s - 1] <= c && end[s - 1] == 0 && prr[s - 1] < prr[min] && bur[s - 1] > 0)
                min = s - 1;
        }

        s = 0;

        if (c >= arr[max]) miny = x;
        else miny = min + 1;

        while (s++ < x) {
            if (arr[miny] >= arr[s - 1] && arr[s - 1] >= 0 && s - 1 != min)
                miny = s - 1;
        }

        bur[min]--;
        c++;

        if (bur[min] == 0) {
            end[min] = 1;
            fin[min] = c;
            prr[min] = 100000;
        }
    }

    z = 0;
    while (z++ < x)
        cout << fin[z - 1] << endl;

    z = 0;
    float suma = 0, sumw = 0;

    while (z++ < x) {
        float t = fin[z - 1] - arr[z - 1];
        float w = t - bur2[z - 1];
        cout << "The T(a) of p" << z << " = " << t << endl << "And its T(w) = " << w << endl;
        suma += t;
        sumw += w;
    }

    cout << "Average T(a) = " << suma / x << "\n and average T(w) = " << sumw / x << endl;

    delete[] arr;
    delete[] bur;
    delete[] bur2;
    delete[] prr;
    delete[] end;
    delete[] fin;

    return 0;
}
void solve10() {
    int x;
    cout << "enter no of process";
    cin >> x;

    int all[x][3], max[x][3], ava[1][3];

    int i, j;
    for (i = 0; i < x; i++) {
        cout << "enter the allocation of P" << i + 1 << " separated each digit with a space\n";
        for (j = 0; j < 3; j++)
            cin >> all[i][j];
    }

    for (i = 0; i < x; i++) {
        cout << "enter the max. of P" << i + 1 << " separated each digit with a space\n";
        for (j = 0; j < 3; j++)
            cin >> max[i][j];
    }

    cout << "enter the available separated each digit with a space\n";
    cin >> ava[0][0] >> ava[0][1] >> ava[0][2];

    for (i = 0; i < x; i++) {
        for (j = 0; j < 3; j++)
            max[i][j] -= all[i][j];
    }

    int z = 0, c = 0, min = 0;
    while (z++ < x) {
        for (i = 0; i < x; i++) {
            c = 0;
            for (j = 0; j < 3; j++) {
                if (max[i][j] <= ava[0][j] && max[i][0] != -1)
                    c++;
                if (c == 3) {
                    min = i;
                    goto dd;
                }
            }
        }
    dd:
        if (c < 3) {
            cout << "The system is not in a safe state\n";
            return 0;
        }

        for (i = 0; i < 3; i++)
            ava[0][i] += all[min][i];

        max[min][0] = -1;
        cout << "P" << min + 1 << " & new work=" << ava[0][0] << " " << ava[0][1] << " " << ava[0][2];

        if (z != x)
            cout << " --->";
    }
}
#include <iostream>
using namespace std;
void solve1() {
    int x, z = 0;
    cin >> x;
    int y[x];

    while (cin >> y[z++]);

    int l = 0, k = x;

    for (int i = 0; i < x; i++) {
        if (y[i]) {
            int m = 0;

            for (int j = i + 1; j < x; j++) {
                if (y[i] == y[j]) {
                    m++;
                    y[j] = 0;
                }
            }
            if (m > 0) k -= m;
            if (m > l) l = m;
        }
    }
    cout << l + 1 << " " << k;
}
void solve2() {
    int x, z = 0, even = 0, odd = 0, eve = 0, od = 0;
    cin >> x;
    int y[x];
    
    while (z < x)
        cin >> y[z++];
    
    z = 0;
    while (z++ < x) {
        if (y[z - 1] % 2 == 0) {
            even++;
            eve = z - 1;
        } else {
            odd++;
            od = z - 1;
        }
    }
    if (even == 1) 
        cout << eve + 1;
    else 
        cout << od + 1;
    return 0;
}
void solve3() {
    int n, k, z = 0, c = 0;
    cin >> n >> k;
    int y[n];

    while (cin >> y[z++]);
    z = 0;
    while (z++ < n) {
        if (y[z - 1] >= y[k - 1]) {
            if (y[z - 1] > 0)
                c++;
        } else {
            break;
        }
    }
    cout << c;
}
void solve4(){
    float y = 0, z[3], sum = 0;
    int x = 0;

    while (x++ < 4) {
        cin >> y;
        sum = sum + y;
    }
    int min = 0;
    x = 0;

    while (x++ < 3) {
        cin >> z[x - 1];
        if (z[min] > z[x - 1]) min = x - 1;
    }

    x = 0;
    float f = 0;

    while (x++ < 3) {
        if (x - 1 == min) continue;
        f += z[x - 1];
    }

    sum += f / 2;

    if (sum >= 90) {
        cout << "A";
        return 0;
    }
    if (sum >= 80 && sum < 90) {
        cout << "B";
        return 0;
    }
    if (sum >= 70 && sum < 80) {
        cout << "C";
        return 0;
    }
    if (sum >= 60 && sum < 70) {
        cout << "D";
        return 0;
    }
    if (sum < 60) {
        cout << "F";
        return 0;
    }

    return 0;
}
void solve5() {
    int x;
    while (cin >> x) {
        int l[x], r[x];
        int z = 0, c = 0;
        while (z < x) {
            cin >> l[z];
            z++;
        }

        z = 0;
        while (z < x) {
            cin >> r[z];
            z++;
        }
        for (z = 0; z < x; z++) {
            int m = 0;
            for (int f = 0; f < x; f++) {
                if (l[z] == r[f]) {
                    r[f] = 0;
                    m++;
                    break;
                }
            }
            if (m == 0) {
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
void solve6() {
    int n, b;
    cin >> n >> b;
    int res = n / b;

    int x[3] = {abs(res - 1) * b, res * b, (res + 1) * b};
    int y[3] = {abs(n - (abs(res - 1) * b)), abs(n - (res * b)), ((res + 1) * b) - n};

    int z = 0, min = 0;

    while (z++ < 2) {
        if (y[z] < y[min]) 
            min = z;
        if (y[z] == y[min]) {
            if (x[z] > x[min])
                min = z;
        }
    }
    cout << x[min];
    return 0;
}
void solve7() {
    int n, v, x, m;
    cin >> n >> v;
    
    int yy[n], d = 0;
    while (d++ < n)
        yy[d - 1] = 1;

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            cin >> m;
            if (v > m)
                yy[i] = 0;
        }
    }
    int z = 0, c = 0, r = -1;
    while (z++ < n) {
        if (yy[z - 1] == 0)
            c++;
        if (c == 1 && r == -1)
            r = z - 1;
    }
    cout << c << endl;
    if (c > 0) {
        cout << r + 1;
        z = 0;
        while (z++ < n) {
            if (z - 1 == r)
                continue;
            if (yy[z - 1] == 0)
                cout << " " << z;
        }
    }
    return 0;
}
void solve8() {
    int z, f = 0;
    sd: while (cin >> z) {
        for (int y = 2; y < 35; y++) {
            f = 0;
            for (int x = 2; x <= y && f < z; x++) {
                f = pow(x, y) + pow(y, x);
                if (f == z) {
                    cout << "YES" << endl << x << " " << y << endl;
                    goto sd;
                }
            }
        }
        cout << "NO" << "\n";
    }
    return 0;
}
void solve9() {
    int n, m, x, y;
    cin >> n >> m;
    char z[n + 1][m + 1], f;

    for (x = 0; x < n; x++)
        for (y = 0; y < m; y++) {
            cin >> f;
            if (f == '.')
                z[x][y] = '0';
            else
                z[x][y] = f;
        }

    for (x = 0; x < n; x++)
        for (y = 0; y < m; y++) {
            if (z[x][y] == '*') {
                if (z[x + 1][y] != '*' && x + 1 > -1 && y > -1)
                    z[x + 1][y]++;
                if (z[x + 1][y + 1] != '*' && x + 1 > -1 && y + 1 > -1)
                    z[x + 1][y + 1]++;
                if (z[x + 1][y - 1] != '*' && x + 1 > -1 && y - 1 > -1)
                    z[x + 1][y - 1]++;
                if (z[x - 1][y] != '*' && x - 1 > -1 && y > -1)
                    z[x - 1][y]++;
                if (z[x - 1][y - 1] != '*' && x - 1 > -1 && y - 1 > -1)
                    z[x - 1][y - 1]++;
                if (z[x - 1][y + 1] != '*' && x - 1 > -1 && y + 1 > -1)
                    z[x - 1][y + 1]++;
                if (z[x][y - 1] != '*' && x > -1 && y - 1 > -1)
                    z[x][y - 1]++;
                if (z[x][y + 1] != '*' && x > -1 && y + 1 > -1)
                    z[x][y + 1]++;
            }
        }

    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {
            cout << z[x][y];
        }
        if (x != n - 1)
            cout << endl;
    }

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve10() {
    int y[102], z[102], i, j, f = 0, d = 0;
    while (cin >> y[d++]);
    d--;
    if (d == 1) {
        cout << -1;
        return 0;
    }
    for (i = 0; i < d; i++)
        for (j = i + 1; j < d; j++)
            z[f++] = gcd(y[i], y[j]);

    i = 0, j = 0;
    while (i++ < f)
        if (z[i - 1] > j)
            j = z[i - 1];
    cout << j;
    return 0;
}

void solve11() {
    int a, b, c, x = 0, y = 0, d, z = 0;
    double f = 0;
    cin >> a >> b;
    // Calculate the sum of reversed digits for a
    while (a > 0) {
        if (a % 10 != 0) x += ((a % 10) * pow(10, f++));
        a /= 10;
    }
    f = 0;
    // Calculate the sum of reversed digits for b
    while (b > 0) {
        if (b % 10 != 0) y += ((b % 10) * pow(10, f++));
        b /= 10;
    }
    f = 0;
    // Calculate the sum of reversed digits for the sum of a and b
    c = x + y;
    while (c > 0) {
        if (c % 10 != 0) z += ((c % 10) * pow(10, f++));
        c /= 10;
    }
    // Check if the reversed sum of a and b is equal to the reversed sum
    // of their digits
    d = x + y;
    if (z == d) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
#include <iostream>
using namespace std;

void solve1() {
    char y[3][3];
    int i, j, x = 0, o = 0, no = 0;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            cin >> y[i][j];
            if (y[i][j] == 'X')
                x++;
            if (y[i][j] == 'O')
                o++;
            if (y[i][j] == '.')
                no++;
        }

    if ((x == o || x - 1 == o)) {
        for (i = 0; i < 3; i++) {
            if (y[i][0] == y[i][1] && y[i][0] == y[i][2]) {
                if (y[i][0] == 'X') {
                    if (x - 1 == o) {
                        cout << "the first player won";
                        return 0;
                    }
                    goto ff;
                }
                if (y[i][0] == 'O') {
                    if (x == o) {
                        cout << "the second player won";
                        return 0;
                    }
                    goto ff;
                }
            }
            if (y[0][i] == y[1][i] && y[0][i] == y[2][i]) {
                if (y[0][i] == 'X') {
                    if (x - 1 == o) {
                        cout << "the first player won";
                        return 0;
                    }
                    goto ff;
                }
                if (y[0][i] == 'O') {
                    if (x == o) {
                        cout << "the second player won";
                        return 0;
                    }
                    goto ff;
                }
            }
        }
        if ((y[0][0] == y[1][1] && y[0][0] == y[2][2]) || (y[0][2] == y[1][1] && y[0][2] == y[2][0])) {
            if (y[1][1] == 'X') {
                if (x - 1 == o) {
                    cout << "the first player won";
                    return 0;
                }
                goto ff;
            }
            if (y[1][1] == 'O') {
                if (x == o) {
                    cout << "the second player won";
                    return 0;
                }
                goto ff;
            }
        }
        if (no == 0) {
            cout << "draw";
            return 0;
        }
        if (x == o) {
            cout << "first";
            return 0;
        }
        if (x - 1 == o) {
            cout << "second";
            return 0;
        }
    }

ff:
    cout << "illegal";
    return 0;
}

void solve2(){
    int x;
    cin >> x;
    int y[x][x];

    for (int i = 0; i < x; i++) {
        int f = i, d = 1;
        for (int k = 0; k <= i; k++) {
            y[f][x - d] = i + 1;
            if (i + 1 != x)
                y[x - d][f] = i + 1;
            d++, f--;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int k = 0; k < x; k++) {
            cout << y[i][k];
            if (k != x - 1)
                cout << " ";
        }
        if (i != x - 1)
            cout << endl;
    }
}
void solve2() {
    int x;
    cin >> x;
    int y[x][x];

    for (int i = 0; i < x; i++) {
        int f = i, d = 1;
        for (int k = 0; k <= i; k++) {
            y[f][x - d] = i + 1;
            if (i + 1 != x)
                y[x - d][f] = i + 1;
            d++, f--;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int k = 0; k < x; k++) {
            cout << y[i][k];
            if (k != x - 1)
                cout << " ";
        }
        if (i != x - 1)
            cout << endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
int reverse(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x/=10;
	}
	return ans;
}

bool check(int x)
{
	if(x<=n) return false;
	int d=x%100;
	x/=100;
	int m=x%100;
	return m>0&&m<13&&d<=month[m];
}

int main()
{

	cin>>n;
	for(int i=n/10000;i<=9999;i++)
	{
		int x=i*10000+reverse(i);
		if(check(x)) 
		{
			cout<<x<<endl;
			break;
		}
	}
	for(int i=n/1000000;i<=9999;i++)
	{
		int x=i*1000000+i*10000+reverse(i)*100+reverse(i);
		if(check(x))
		{
			cout<<x<<endl;
			break; 
		}
	}
	return 0;
}
*
#include<bits/stdc++.h>
using namespace std;

int n;
int m[4]={0};
int a,b,g;
// 123 213 231 132
int p[4]={0,1,2,3};
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>g;
		swap(p[a],p[b]);
		m[p[g]]++;
	}
	int max_n=0;
	int max_index=0;
	for(int i=1;i<4;i++)
	{
		if(m[i]>max_n)
		{
			max_n=m[i];
			max_index=i;
		}
	}
	cout<<max_index<<endl;
	return 0;
}
------
#include<bits/stdc++.h>
using namespace std;
const int N = 510,INF=1e9;

int f[N][N];
int a[N][N];
int n;

int main()
{
    cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	cin>>a[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
	    	f[i][j]=-INF;
	f[1][1]=a[1][1];
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			f[i][j]=max(f[i-1][j-1]+a[i][j],f[i-1][j]+a[i][j]);
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++) ans=max(ans,f[n][i]);
	cout<<ans<<endl;
    return 0;
}
-----
#include<bits/stdc++.h>
using namespace std;

const int N = 510,INF=1e9;

int f[N][N];
int m[N][N];

int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			cin>>f[i][j];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			//f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
		    if(f[i-1][j-1]>f[i-1][j])
		    {
		    	f[i][j]+=f[i-1][j-1];
		    	m[i][j]=m[i-1][j-1]+1;
		    }
		    else
		    {
		    	f[i][j]+=f[i-1][j];
		    	m[i][j]=m[i-1][j]-1;
		    }
		}
	}
	int ans=-INF;
	for(int i=1;i<=n;i++)
	{
		if(abs(m[n][i])<=1&&f[n][i]>ans) ans=f[n][i];
	}
	cout<<ans<<endl;
}
------
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int a[N],b[N];
int n,m;

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	int l=0,r=0,ans=0;
	while(l<n&&r<m)
	{
		if(a[l]==b[r]) 
		{
			l++;
			r++;
			ans++;
		}
		else if(a[l]>b[r])
		{
			r++;
			b[r]+=b[r-1];
		}
		else
		{
			l++;
			a[l]+=a[l-1];
		}
	}
	cout<<ans<<endl;
	return 0;
}
void solve()
{
    const unsigned int Size = 20;
    unsigned int matrix[Size][Size];

    // read from console
    for (unsigned int y = 0; y < Size; y++)
    for (unsigned int x = 0; x < Size; x++)
        cin >> matrix[x][y];

    unsigned int best = 0;
    // walk through all cells of the matrix
    for (unsigned int y = 0; y < Size; y++)
        for (unsigned int x = 0; x < Size; x++)
    {
        // three more horizontal cells (right)
        if (x + 3 < Size)
        {
            unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
            if (best < current)
                best = current;
        }
        // three more vertical cells available (down)
        if (y + 3 < Size)
        {
            unsigned int current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
            if (best < current)
                best = current;
        }
        // three more diagonal cells (right-down)
        if (x + 3 < Size && y + 3 < Size)
        {
            unsigned int current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
            if (best < current)
                best = current;
        }
        // three more diagonal cells (left-down)
        if (x + 3 < Size && y >= 3)
        {
            unsigned int current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
            if (best < current)
                best = current;
        }
    }
    cout << best << endl;
}
void solve()
{
    long long int num = 1,num1 = 1,num2 = 1,num3 = 1,num4 = 1,maxi = 1;
    for(int i = 0;i<=19;i++){
        for(int j = 0;j<=19;j++){
                num = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                num1 = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
                num2 = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
                if (num>maxi)
                    maxi = num;
                if (num1>maxi)
                    maxi = num1;
                if (num2>maxi)
                    maxi = num2;

        }
    }
    cout<<maxi;
}
#include<bits/stdc++.h>
using namespace std;
void MinSumDiagonal()
{
    //find the minimum sum of diagonals in a 2D array
    cout<< "Enter row & column number: ";
    int n;
    cin >> n;
    int arr[n][n], result =0;
    int Max=0;
    int MAXROW=INT_MAX;
    cout<< "\nEnter elements: \n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    }
    for(int i=0; i<n; i++)
    {
        Max=0;
        for(int j=0; j<n; j++)
        {
            Max+=arr[i+j][j];
        }
        MAXROW=min(MAXROW, Max);
    }
    cout<<MAXROW<<"\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            result=max(result, Max);
    }
    cout<< result;
}
void BeautifulMatrix()
{// https://codeforces.com/contest/1772/problem/B
    bool flag = false;
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        cout << "YES\n";
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int tmp1 = arr[1][0];
            int tmp2 = arr[1][1];
            int tmp3 = arr[0][0];
            int tmp4 = arr[0][1];
            arr[0][0] = tmp1;
            arr[0][1] = tmp3;
            arr[1][0] = tmp2;
            arr[1][1] = tmp4;
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        cout << "NO\n";
    }
}
void ManhattanDistance()
{
    //Manhattan Distance misured by center of matrix
    long long a[5][5], c, b;
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1) 
            {
                b = i + 1;
                c = j + 1;
            }
        }
    }
    b = abs(3 - b);
    c = abs(3 - c);
    cout << c + b ;
}
void Manhattandistance()
{
    int a, ans;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> a;
            if(a == 1)
                ans = abs(2 - i) + abs(2 - j);
        }
        cout << ans ;
    }
}
void diffrence()
{
    //checks difference between the two largest elements 
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
        
    sort(arr, arr+n, greater<int>());
    if(n==1)
    {
        if(arr[0] > 1)
            cout <<"No";
        else
            cout<< "Yes";
    }
    else
    {
        if(arr[0]-arr[1]<=1)
            cout <<"Yes";
        else
            cout<< "No";
    }
}
void OrGate()
{
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
        ans=ans | arr[i];
    cout << ans;
}
void SortElements()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    for(int i=0; i<n-1; i++)
    {
        int j=i+1;
        int mini=INT_MAX;
        int idx=-1;
        while(j < n)
        {
            if(arr[j] < arr[i] && arr[j] < mini)
            {
                mini=arr[j];
                idx=j;
            }
            j++;
        }
        if(mini!=INT_MAX)
        {
            reverse(arr+i, arr+idx+1);
                break;
        }
    }
    for(int i=0; i<n; i++)
        cout <<arr[i] <<" ";
}
void consecutive()
{
    //counts the consecutive zeros in the array between the 
    //first and last non-zero elements and prints the result
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int i=0, j=n-1, ans=0;
    while(arr[i]==0)
    {
        i++;
    }
    while(arr[j]==0)
    {
        j--;
    }
    while(i!=j)
    {
        if(arr[i]==0)
            ans++;
        i++;
    }
    cout <<ans;
}
void CompareSum {
    //compare pair sum with an integer.if 'Yes',count++.
    int n;
    cin >> n;

    while (n-- > 0) {
        int y, z;
        cin >> y >> z;

        int *ptr = new int[z];
        int a = 0, b = 0, c = 0;

        while (b < z) {
            cin >> ptr[b++];
        }
        
        sort(ptr, ptr + z);
        cout << ptr[0] << " " << ptr[z - 1];

        b = 0;
        while (b < z) {
            if (a + ptr[b] <= y) {
                a += ptr[b++];
                c++;
            } else {
                break;
            }
        }
        cout << " " << c << " " << a << endl;
        delete[] ptr; 
    }
    return 0;
}
void consecutive()
{
    int n, ans=0;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >>arr[i];
    for(int i=1; i<n-1; i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            if(i+2!=n && arr[i+2] > arr[i])
                arr[i+1]=arr[i+2];
            else
                arr[i+1]=arr[i];
            ans++;
        }
    }
    cout <<ans <<"\n";
    for(int i=0; i<n; i++)
        cout << arr[i] <<" ";
}
#include<bits/stdc++.h>
using namespace std;

class compare {
public:
    bool operator()(pair<int, int> p, pair<int, int> q) {
        return p.second < q.second;
    }
};

int main() {
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<int, int> m;
        for (auto i : arr) m[i]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        for (auto i : m) {
            pq.push(i);
        }

        vector<int> ans;
        bool check = true;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            if (ans.empty() || ans.back() != top.first) {
                ans.push_back(top.first);
                if (top.second != 1) {
                    pq.push({top.first, top.second - 1});
                }
            } else {
                if (pq.empty()) {
                    check = false;
                    break;
                } else {
                    auto newtop = pq.top();
                    pq.pop();
                    ans.push_back(newtop.first);
                    if (newtop.second != 1) {
                        pq.push({newtop.first, newtop.second - 1});
                    }
                    pq.push({top.first, top.second});
                }
            }
        }

        map<int, queue<int>> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]].push(i);
        }

        if (!check) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int x = mp[ans[0]].front();
            mp[ans[0]].pop();
            int y = mp[ans[1]].front();
            mp[ans[1]].pop();
            cout << x + 1 << " " << y + 1 << endl;

            for (int i = 2; i < ans.size(); i++) {
                cout << y + 1 << " " << mp[ans[i]].front() + 1 << endl;
                y = mp[ans[i]].front();
                mp[ans[i]].pop();
            }
        }
        t--;
    }
    return 0;
}
void display(int a)
{
     for(int k=32;k>=0;k--)
    {
        if(a&(1<<k))
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
 
}
int arr[]={1,2,3,4,3,2,1};
    int a=0;
 
    for(int i=0;i<7;i++)
    {
        a=a^arr[i];
    }
    cout<<a;
 
    int cnt=0;
    while(a)
    {
        cnt++;
        a=a>>1;
    }
    cout<<cnt<<endl;
    cnt--;
    cout<<(1<<cnt)<<endl;
    
    int next=ceil(log2(a));
    cout<<next<<endl;
    next--;
 
    cout<<(1<<next)<<endl;
    int x=132;
    int cnt=0;
    while(x)
    {
        if(x&1)
            cnt+=1;
        x>>=1;
    }
     cout<<cnt<<endl;
     int arr[5]={0};
     int n[5]={2,3,1,5};
     for(int i=0;i<5;i++)
     {
       arr[n[i]-1]=1;
 
     }
     for(int i=0;i<5;i++)
     {
         if(arr[i]==0)
            cout<<i+1;
     }
    display(a);
    a=a<<1;
    cout<<a<<endl;
    display(a);
    cout<<sizeof(int)<<endl;
    cout<<((a<<3)|(a>>(8-3)));
----
  int x=0,arr[3]={0},count = 0,result=0;
    cin>>x;
    for(int j=0 ; j<x ; j++)
    {
        for(int i=0; i<3; i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                    count++;
            }
            if(count >= 2 )
                result+=1;

            count=0;

    }
    cout<<result;
}
int main()
{
int size=0;
cin>>size;
int arr[size];
for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

sort(arr,arr+size);

    for(int i=0; i<size ; i++)
        cout<<arr[i]<<" ";
}
int main()
{
int s ,ser =0 ,dem =0 , left= 0 ,right ;
bool flag =true ;
  cin>>s ;
    int arr[s];
    right = s ;
  for(int i = 0 ; i < s ; i++ )
        {
            cin>>arr[i];
        }
        if(s == 1){
            cout<<arr[0] <<" " << 0 ;
            return 0 ;
        }
        else {
              for(int i = 0 ; i < s ; i++ )
              {
                  if(flag == true )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            ser +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            ser +=arr[left];
                            left+=1 ;
                          }
                     flag =false ;
                     continue ;
                  }


                  if(flag == false )
                  {
                      if(arr[ right -1 ] >= arr[left]){
                            dem +=arr[right-1];
                            right-=1;
                      }
                      else if(arr[ right -1 ] < arr[left]){
                            dem +=arr[left];
                            left+=1 ;
                          }
                     flag =true ;

                  }
              }
        }
cout<<ser << " " <<dem ;
}
int main()
{
    int x , c = 0 , h=0 ;
    cin >> x ;
    int arr[x];
        for (int i = 0 ; i < x ; i ++ ){
            cin >> arr [i] ;
        }
        for (int i = 0 ; i < x ; i ++ ){
            if(arr [ i ] >= 1)
            {
                h += arr [ i ] ;
                continue ;
            }
            else if(arr [ i ] < 0 && h >= 1 ){
                h-- ;
                continue ;
            }
            else if ( arr[ i ] < 0 && h == 0 )
                c++ ;

        }
cout<< c ;
}
int main()
{
    int x , c = 0 , temp = 0 , s = 0 ;
bool flag = false ;

  cin >> x ;

   for(int  i = 0 ; i < x ; i++){

        cin >> temp ;


            if(temp > 0  ){
                flag = true ;
                s += temp ;
                x-=1 ;
                continue ;
                }
   else if( temp < 0 && flag == false ){
        c++ ;
        cout<<c <<" " ;
        x -= 1 ;
        continue ;
    }
    else if( temp < 0 && flag == true)
      {
          x -= 1 ;
          s -= 1 ;
          if(s == 0 ){
            flag = false ;
            continue ;
          }
      }
   }
cout <<endl <<c ;
}
void sort(int** matrix, int n) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n -1; i++) {

            if((float) matrix[i][1] / matrix[i][0] < (float) matrix[i + 1][1] / matrix[i + 1][0]) {

                int aux1 = matrix[i][0];
                int aux2 = matrix[i][1];

                matrix[i][0] = matrix[i + 1][0];
                matrix[i][1] = matrix[i + 1][1];

                matrix[i + 1][0] = aux1;
                matrix[i + 1][1] = aux2;

                done = 0;

            }
        }
    }
}

int main() {

    int n, strength;

    scanf("%d %d", &strength, &n);

    int** matrix = (int**)malloc(sizeof(int*) * n);

    for(int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(4 * 2);

    for(int i = 0; i < n; i++)
        scanf("%d %d", &matrix[i][0], &matrix[i][1]);

    sort(matrix, n);

    for(int j = 0; j < n; j++)
        for(int i = 0; i < n; i++) {

            if(strength > matrix[i][0] && matrix[i][0] != -1) {

                strength += matrix[i][1];
                matrix[i][0] = -1;

            }
        }

    int finish = 0;


    for(int i = 0; i < n; i++)
        if(matrix[i][0] != -1)
            finish = 1;

    if(!finish)
        printf("YES");
    else
        printf("NO");
    return 0;

}
int main()
{
    int min(int a, int b) {

    return (a > b) ? b : a;

}

int main() {

    int n;
    scanf("%d", &n);

    int array[n + 1];

    int m1 = 0, m2 = 0, m3 = 0;

    for(int i = 1; i <= n; i++) {

        scanf("%d", &array[i]);

        switch(array[i]) {

        case 1:
            m1++;
            break;

        case 2:
            m2++;
            break;

        case 3:
            m3++;
            break;

        }
    }
    int minim = min(m1, m2);
    minim = min(minim, m3);

    int aux[4];
    int k = 0;

    printf("%d\n", minim);

    for(int i = 0; i < minim; i++) {

        k=1;

        for(int j = 1; k < 4; j++) {

            if(j == n + 1)
                j = 1;

            if(array[j] == k) {

                aux[k++] = j;
                array[j] = -1;

            }
        }

        for(int j = 1; j < k; j++)
            printf("%d ", aux[j]);
        printf("\n");


    }
    return 0;
}
}
int main()
{
void sort(int n, int array[n]) {

    int done = 0;

    while(!done) {

        done = 1;

        for(int i = 0; i < n - 1; i++) {

            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
        }
    }
}
int main() {

    int n, d;
    scanf("%d %d", &n, &d);

    int array[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {

        scanf("%d", &array[i]);
        sum += array[i];

    }

    sum += 10 * (n - 1);

    if(sum > d)
        printf("-1");
    else {

        //sort(n, array);

        int ct = 2 * (n - 1);
        while(sum + 5 <= d) {

            ct++;
            sum+=5;

        }
        printf("%d", ct);

    }


    return 0;
}
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int* array, int size) {

    int done = 0;

    while(!done) {

        done = 1;
        for(int i = 0; i < size - 1; i++)
            if(array[i] > array[i + 1]) {

                int aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                done = 0;

            }
    }
}

int main() {


    int n, v;
    scanf("%d %d", &n, &v);

    int* array = (int*)malloc(sizeof(int) * 50);
    int k;
    int* deals = (int*)malloc(sizeof(int) * 50);
    int sizeDeals = 0;
    int done;
    for(int i = 0; i < n; i++) {

        scanf("%d", &k);
        done = 0;
        for(int j = 0; j < k; j++) {

            scanf("%d", &array[j]);
            if(array[j] < v)
                done = 1;

        }

        if(done)
            deals[sizeDeals++] = i + 1;
        done = 0;

    }

    if(sizeDeals != 0) {


        sort(deals, sizeDeals);
        printf("%d\n", sizeDeals);
        for(int i = 0; i < sizeDeals; i++)
            printf("%d ", deals[i]);

    } else
        printf("0");
    return 0;

}
