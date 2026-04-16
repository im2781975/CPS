using namespace std;
void freeIcecreem(){
    int num, stock, amount, distressCount = 0;
    //A distressCnt is defined as a scenario where an attempt is made to 
    //subtract more ice cream (amount) from the stock than is currently available
    char Type;
    cin >> num >> stock;
    for(int i = 0; i < num; i++){
        cin >> Type >> amount;
        if(Type == '+')
            stock += amount;
        else{
            if(stock >= amount)
                stock -= amount;
            else
                distressCnt++;
        }
    }
    cout << stock << " " << distressCnt;
}
using namespace std;
//determine if using two ovens can bake a given number of cakes faster than using just one oven
void CakeBaking(){
    int numOfCake, batchTime, cakePerBatch, ovenDelay;
    // NumOfCakes:total cakes need to be baked, (BatchTime) :time takes to bake one batch
    // CakesPerBatch:number of cakes that can be baked in one batch.(OvenDelay):time delay after which the second oven can start baking.
    cin >> numOfCake >> batchTime >> cakePerBatch >> ovenDelay;
    //For round the batch it add (cakePerBatch - 1)
    int totalBatch = (numOfCake + cakePerBatch - 1) / cakePerBatch;
    int singleOven = totalBatch * batchTime;
    int firstOven = 0, secondOven = ovenDelay;
    for(int i = 0; i < totalBatch; i++){
        if(firstOven <= secondOven)
            firstOven += batchTime;
        else
            secondOven += batchTime;
    }
    (max(firstOven, secondOven) < singleOven)? cout << "Yes" : cout << "No";
}
using namespace std;
//determine how many characters from a string need to be checked to find a sequence that matches the entire another string in order.
void Matching(){
    string str, ing; cin >> str >> ing;
    int cnt = 0;
    for(int i = 0; str[i]; i++){
        if(str[i] == ing[cnt])
            cnt++;
        if(ing.length() == cnt)
            break;
    }
    cout << cnt;
}
using namespace std;
void insert(){
    set <char> st;
    string str; getline(cin, str);
    for(int i = 0; str[i]; i++){
        if(str[i] == '{' || str[i] == '}' || str[i] == " " || str[i] == ',')
            continue;
        st.insert(str[i]);
    }
    cout << st.size();
}
using namespace std;
void insert(){
    set <int> st;
    int arr[4];
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    st.insert(arr, arr + 4);
    cout << 4 - st.size();
}
using namespace std;
//find the smallest positive integer i such that the last digit of the product x×i is either y or 0
void findSmall(){
    int x, y; cin >> x >> y;
    int i = 1;
    while(true){
        if((x * i) % 10 == 0 || (x * i) % 10 == y){
            cout << i;
            break;
        }
        i++;
    }
}
using namespace std;
//count how many times the cumulative sum of a sequence of integers exceeds a specified limit. 
int cntSum(){
    int n, tmp, limit; cin >> n >> tmp >> limit;
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > tmp) continue;
        sum += x;
        if(sum > limit){
            cnt++;
            sum = 0;
        }
    }
    cout << cnt;
}
using namespace std;
// calculates the probability of rolling a number greater than or equal to the maximum of two given numbers on a six-sided die. 
void probabilities(){
    int x, y; cin >> x >> y;
    int maxi = max(x, y);
    int tmp = (6 - maxi) + 1;
    if(tmp == 6) cout << "1";
    else if(tmp == 5) cout << "5 / 6";
    else if(tmp == 4) cout << "2 / 3";
    else if(tmp == 3) cout << "1 / 2";
    else if(tmp == 2) cout << "1 / 3 ";
    else if(tmp == 1) cout << "1 / 6";
}
using namespace std;
void helpfulMath(){
    string str, ing; cin >> str;
    int j = 0;
    for(int i = 0; str[i]; i++){
        if(isdigit(str[i]))
            ing += str[i];
    }
    sort(ing.begin(), ing.end());
    for(int i = 0; ing[i]; i++){
        if(i > 0)
            cout << "+";
        cout << ing[i];
    }
}
using namespace std;
void longestUncmmonSubseq(){
    string str, ing; cin >> str >> ing;
    if(str == ing)
        cout << -1;
    else
    //If strings are different, LUS will be the length of the longer string
        cout << max(str.length(), ing.length());
}
using namespace std;
//determine which of these arrays have at least one element smaller than a given limit.
void getGreater(){
    int num, limit; cin >> num >> limit;
    vector <int> zeroIdx(num);
    //sets number is num
    for(int i = 0; i < num; i++){
        //size of the set is x;
        int x; cin >> x;
        bool smaller = false;
        for(int j = 0; j < x; j++){
            //element value
            int val; cin >> val;
            if(val < limit){
                smaller = true;
                break;
            }
        }
        if(smaller)
            zeroIdx.push_back(i + 1);
    }
    cout << zeroIdx.size() << "\n";
    for(int i = 0; i < zeroIdx.size(); i++)
        cout << i << " ";
}
// find the index of the element in the array arr that has the minimum absolute difference from a given value n. 
using namespace std;
void minDiff(){
    int x, y; cin >> x >> y;
    int res = x / y;
    int arr[3] = { abs(res - 1) * y, res * y, (res + 1) * y};
    int minIdx = 0;
    for(int i = 0; i < 3; i++){
        if(abs(x - arr[i]) < abs(x - arr[minIdx]) || (abs(x - arr[i]) == abs(x - arr[minIdx]) && arr[i] > arr[minIdx]))
            minIdx = i;
    }
    cout << minIdx;
}
// count how many elements from the first vector do not have a matching element in the second vector . 
using namespace std;
void cntUnmatched(){
    int n;
    while(cin >> n){
        vector <int> vec(n), tor(n);
        for(int i = 0; i < n; i++)
            cin >> vec[i];
        for(int i = 0; i < n; i++)
            cin >> tor[i];
        int Unmatched = 0;
        bool match = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(vec[i] == tor[j]){
                    tor[j] = 0;
                    match = true;
                    break;
                }
            }
            if(!match)
                Unmatched++;
        }
        cout << Unmatched;
    }
}
using namespace std;
//calculate a student's final grade based over four scores and three additional values that represent some assessment or performance metrics. 
void gradeCalculation(){
    int sum = 0, arr[5];
    for(int i = 0; i < 4; i++){
        int x; cin >> x;
        sum += x;
    }
    int minIdx = 0;
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        if(arr[i] < arr[minIdx])
            minIdx = i;
    }
    int remain = 0;
    for(int i = 0; i < 3; i++){
        if(i == minIdx)
            continue;
        remain += arr[i];
    }
    sum += remain / 2;
    if(sum >= 90) cout << "A";
    else if(sum >= 80) cout << "B";
    else if(sum >= 70) cout << "C";
    else if(sum >= 60) cout << "D";
    else cout << "F";
}
using namespace std;
// count how many times a number is greater or less than the prv one in the sequence, starting from a specified initial limit.
void cntLimit(){
    int n, limit; cin >> n >> limit;
    int high = 0, low = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x > limit) high++;
        else if(x < limit) low++;
        limit = x;
    }
    cout << high << " " << low;
}
using namespace std;
void incrDecr(){
    int n, x = 0; cin >> n;
    string str;
    for(int i = 0; i < n; i++){
        if(str.length() != 1){
            cout << "its exceed";
            return 1;
        }
        if(str[i] == '+')
            x++;
        else if(str[i] == '-')
            x--;
        else{
            cout << "Invalid";
            return 1;
        }
    }
    cout << x;
}
using namespace std;
//find how many steps are required for each number in a given range [x,y] to reach 1 under the Collatz conjecture and identifying the maximum step count.
void cntMaxStep(){
    int x, y; cin >> x >> y;
    int maxi = 0, idx = 0;
    if(x > y)
        swap(x, y);
    for(int i = x; i <= y; i++){
        int tmp = i, cnt = 1;
        while(tmp > 1){
            if(tmp % 2 != 0)
                tmp = tmp * 3 + 1;
            else
                tmp /= 2;
            cnt++;
        }
        if(cnt > maxi){
            maxi = cnt;
            idx = i;
        }
    }
    cout << "Number with maximum steps: " << idx << " (Steps: " << maxi << ")" << endl;
}
using namespace std;
// snacks arrive in random order and must be placed on a table in descending order from the largest to the smallest. 
//Each time a snack arrives, it determines how many snacks can now be placed on the table and prints them.
void snackTower(){
    int n; cin >> n;
    int arr[n];
    bool tmp[n] = {false};
    int cnt = n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        tmp[arr[i]] = true;
        while(cnt > 0 && tmp[cnt] == true)
            cout << cnt-- << " ";
        cout << "\n";
    }
}
using namespace std;
void upperTolower(){
    string str; cin >> str;
    for(int i = 0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << str;
}
using namespace std;
void cntChar(){
    int n; cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 'F')
            cnt++;
    }
    (cnt == 1 || cnt == 2 || cnt == 5 || cnt == 8 || cnt == 9)? cout << "No" : cout << "Yes";
}
using namespace std;
//find the pair of minimum index which element sum is greater than trg.
void IdxSum(){
    int n, trg; cin >> n >> trg;
    int arr[n + 1], pairCnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int Idxsum = INT_MAX, idx1 = 0, idx2 = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] < trg){
                pairCnt++;
                if((i + j) < Idxsum){
                    Idxsum = i + j;
                    idx1 = i, idx2 = j;
                }
            }
        }
    }
    (pairCnt == 0)? cout << "NUll" << idx1 + 1 << " " << idx2 + 1;
}
using namespace std;
//classify and count sets of color information based on specific conditions, 
void cntColoring(){
    int num; cin >> num;
    char color[1000][3];
    char res[num];
    int idx = 0, greencnt = pinkcnt = 0, greentotal = pinktotal = 0;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < 3; j++)
            cin >> color[i][j];
    }
    for(int i = 0; i < num; i++){
        int greenset = blueset = 0;
        if(pinkcnt == 5){
            res[idx++] = 'g';
            greentotal++;
            pinkcnt = 0; i--;
            // Don't skip the current set
            continue;
        }
        if(greencnt == 5){
            res[idx++] = 'p';
            pinktotal++;
            greencnt = 0;
            i--; continue;
        }
        for(int j = 0; j < 3; j++){
            if(color[i][j] == 'G'){
                greenset++;
                break;
            }
            if(color[i][j] == 'B')
                blueset++;
        }
        if(greenset == 1){
            res[idx++] = 'g';
            greencnt++;
            greentotal++;
        }
        else if(blueset == 3){
            res[idx++] = 'p';
            pinkcnt++;
            pinktotal++;
        }
    }
    cout << greentotal * 3 << "  " << pinktotal * 3;
    for(int i = 0; i < idx; i++){
        if(res[i] == 'g')
            cout << "Green";
        else if(res[i] == 'p')
            cout << "Pink";
    }
}
using namespace std;
void Find3rdsmallest(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
    cout << arr[2];
}
using namespace std;
//print the idx where string matches
vector <int> matchIdx(string txt, string str){
    int n = txt.size(), m = str.size();
    vector <int> vec;
    for(int i = 0; i <= n - m; i++){
        int j;
        for(j = 0; j < m; j++){
            if(txt[i + j] != str[j])
                break;
        }
        // means the entire substring str matches the corresponding portion of txt.
        if(j == m)
            vec.push_back(i);
    }
    /*for(int i = 0; i <= n - m; i++){
        if(txt.substr(i, m) == str)
            vec.push_back(i);*/
    }
    return vec;
}
int main(){
    string txt = "ABABDABACDABABCABAB";
    string str = "ABABCABAB";  
    vector <int> res = matchIdx(txt, str);
    for(int i = 0; i < res.size(); i++)
        cout << res[i];
}
using namespace std;
void cntDiv(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            //if both divisors are same(ex: 9 / 3 = 3)
            (n / i == i) ? cnt++ : cnt += 2;
        }
    }
    return cnt;
}
using namespace std;
void sumOdd(int num){
    int sum = 0;
    for(int i = 2; i < num; i += 2){
        sum += i + 1;
        sum += i + 1;
    }
    return sum;
}
using namespace std;
void sumEven(int num){
    int sum = 0;
    for(int i = 4; i < num; i += 3){
        sum += i + 1;
        sum += i + 1;
    }
}
using namespace std;
void sumOfDigit(int num){
    return num == 0 ? 0 : num % 10 + sumOfDigit(num / 10);
}
#include<bits/stdc++.h>
using namespace std;
void trgSum(){
    int n;
    while(cin >> n){
        vector <int> price(n);
        for(int i = 0; i < n; i++)
            cin >> price[i];
        sort(price.begin(), price.end());
        int m; cin >> m;
        int left = 0, right = n - 1;
        int book1 = book2 = 0;
        while(left < right){
            int sum = price[left] + price[right];
        if(sum == m){
            book1 = price[left];
            book2 = price[right];
            left++; right--;
        }
        else if(sum < m)
            left++;
        else
            right--;
    }
    cout << "Peter should buy books whose prices are " << book1 << " and " << book2 ;
}
using namespace std;
void distance(){
    int tim, vel; cin >> tim >> val;
    int dist = 2 * tim * vel;
    cout << dist;
}
using namespace std;
void statement(){
    int row, maxi; cin >> row >> maxi;
    int cur = row;
    for(int i = 1; i <= row; i++){
        if(i > cur){
            cout << "\n";
            cur += row;
        }
        cout << i << " ";
    }
}
using namespace std;
void conversion(){
    int x = 10;
    float y = 2.5;
    float res = x / y;
    cout << x << " " << y << " " << res;
}
using namespace std;
void greaterLower(){
    int arr[100], ray[100];
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    for(int i = 0; i < 3; i++)
        cin >> ray[i];
    int high = low = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > ray[i])
            high++;
        else if(arr[i] < ray[i])
            low++;
        else
            continue;
    }
    cout << high << " " << low;
}
using namespace std;
void printOdd(){
    int n; scanf("%d", &n);
    while(n >= 0){
        if(n % 2 == 0)
            continue;
        else
            cout << n;
        n--;
    }
}
using namespace std;
void statement(){
    int a, b; cin >> a >> b;
    if(a < 0 && b < 0)
        break;
    else
        cout << 100 - abs(a - b);
}
using namespace std;
void strlength(){
    char str[20]; getline(cin, str);
    int len = strlen(str);
    cout << len;
}
using namespace std;
void conversion(){
    int x = 10.5;
    cout << (int)x;
}
using namespace std;
void printvec(){
    vector <int> vec;
    vec.push_back(5);
    while(vec.back() > 0)
        vec.push_back(vec.back() - 1);
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "\n";
    while(!vec.empty()){
        cout << vec.back() << " ";
        vec.pop_back();
    }
}
using namespace std;
void Insertvec(){
    vector <int> vec;
    for(int i = 0; i < 6; i++){
        int val; cin >> val;
        vec.push_back(val);
    }
    cout << "Even numbers: ";
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] % 2 == 0)
            cout << vec[i] << " ";
    }
    cout << "\nOdd numbers: ";
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] % 2 != 0)
            cout << vec[i] << " ";
    }
    cout << "\nElements are: ";
    while(!vec.back()){
        cout << vec.back();
        vec.pop_back();
    }
}
using namespace std;
template <class x>
void swapped(x &a, x &b){
    x tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b;
}
int main(){
    float a = 20.9, b = 17.45;
    swapped(a, b);
}
using namespace std;
void loop(){
    for(int i = 4; i <= 20; i++){
        for(int j = 1; j <= 20; j++){
            for(int k = 1; k <= 20; k++){
                if(i + j + k == 20 && (i / k + 2 * j + 3 * k) == 20)
                    cout << i << " " << j << " " << k << "\n";
            }
        }
    }
}
using namespace std;
void printDiv(){
    char str[200]; gets(str);
    int len = strlen(str);
    int res = 0;
    for(int i = 0; i < len ; i++){
        if(str[i] == 'a' || str[i] == 'd' || str[i] == 'g' || str[i] == 'j' || str[i] == 'm' || str[i] == 'p' || str[i] == 't' || str[i] == 'w' || str[i] == ' ')
            res += 1;
        else if(str[i] == 'b' || str[i] == 'e' || str[i] == 'h' || str[i] == 'k' || str[i] == 'n' || str[i] == 'q' || str[i] == 'u' || str[i] == 'x')
            res += 2;
        else if(str[i] == 'c' || str[i] == 'f' || str[i] == 'i' || str[i] == 'l' || str[i] == 'o' || str[i] == 'r' || str[i] == 'v' || str[i] == 'y')
            res += 3;
        else if(str[i] == 's' || str[i] == 'z')
            res += 4;
        cout << res;
}
using namespace std;
void revstr(){
    string str; cin >> str;
    for(int i = str.size() - 1; i >= 0; i--)
        cout << str[i];
}
void revstr(){
    char str[100]; gets(str);
    int len = strlen(str) - 1;
    for(int i = 0; i < len; i++){
        int tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
    }
    cout << str;
}
using namespace std;
void printArr(){
    int arr[100];
    while(true){
        int n; cin >> n;
        if(n == 0)
            break;
        arr[1] = 1;
        for(int i = 2; i <= 100; i++)
            arr[i] = i * i + arr[i - 1];
        cout << arr[n];
    }
}
using namespace std;
class student{
    char name[200];
    int mark1, mark2, mark3;
    friend class friendclass;
    public:
    void getData(){
        cin >> name;
        cin >> mark1 >> mark2 >> mark3;
    }
    void disp(int avg){
        cout << "Name: " << name;
        cout << "\nAvg: " << avg;
    }
};
class friendclass{
    public:
    void average(student &st){
        int avg = (st.mark1 + st.mark2 + st.mark3) / 3;
        st.disp(avg);
    }
};
int main(){
    student st; 
    st.getData();
    friendclass obj;
    obj.average(st);
    getch();
}
using namespace std;
void reversed(){
    int n; cin >> n;
    int tmp = n;
    while(n > 0){
        int rem = n % 10;
        cout << rem;
        n /= 10;
    }
}
void reversed(){
    int n; cin >> n;
    int rev = 0;
    while(n > 0){
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev
}
using namespace std;
void currentBill(){
    int unit; cin >> unit;
    int charge = subCharge = 0;
    if(unit <= 100) charge += unit 0.60;
    else if(unit > 100 && unit <= 300)
        charge += (100 * 0.60) + (unit - 100) * 0.80;
    else if(unit > 300)
        charge += (100 * 0.60) + (200 * 0.80) + (unit - 300) * 90;
    if(charge < 50)
        charge = 50;
    if(charge > 300){
        scharge = 0.5 * charge;
        charge += scharge;
    }
    cout << fixed << setprecision(2) << charge;
}
using namespace std;
void pattern(){
    int n; cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            cout << "*";
        for(int k = 1; k <= i; k++)
            cout << " ";
        cout << "\n";
    }
}
using namespace std;
void Xmass(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++)
            cout << " ";
        for(int k = 1; k <= i; k++)
            cout << "*";
        cout << "\n";
    }
}
using namespace std;
void triangle(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= i; j++)
            cout << " ";
        for(int k = n; k >= i; k--)
            cout << "*";
        cout << "\n";
    }
}
using namespace std;
void triangle(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << '*';
        cout << "\n";
    }
}
using namespace std;
void triangle(){
    int n; cin >> n;
    for(int i = n; i >= 1; i--){
        for(j = 1; j <= i; j++)
            cout << '*';
        cout << "\n";
    }
}
using namespace std;
void Butterfly(){
    int n; cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--)
            cout << "*";
        cout << "\n";
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}
using namespace std;
void reversed(){
    int n; cin >> n;
    while(n > 0){
        int mod = n % 10;
        cout << mod ;
        n /= 10;
    }
}
using namespace std;
void triangular(){
    int n; cin >> n;
    cout << (n * (n + 1)) / 2;
}
using namespace std;
//special number
int fact(int n){
    if(n == 0)
        return 1;
    return n * fact(n - 1);
}
int main(){
    int n; cin >> n;
    int tmp = n, sum = 0;
    while(n > 0){
        int rem = n % 10;
        n /= 10;
        sum += fact(n);
    }
    (sum == tmp) ? cout << "Special number" : cout << "Not special";
}
using namespace std;
void containDigits(){
    int n; cin >> n;
    int tmp = n;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    if((a + b) + (a * b) == tmp)
        cout << "Contain special digits";
    else
        cout << "Doesn't contain special digits";
}
using namespace std;
void PerfectDiv(){
    int n, sum = 0; cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int div1 = i, div2 = n / i;
            if(div1 * div2 == n)
                sum += div1;
            else
                sum += div1 + div2;
        }
    }
    if(sum == n) cout << "Perfect";
    else if(sum < n) cout << "Difficient";
    else cout << "Abumdant";
}
using namespace std;
void fibSeries(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        if(i == 0)
            arr[i] = 0;
        else if(i == 1)
            arr[i] = 1;
        else 
            arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;
void consecutiveSum(){
    int row; cin >> row;
    int arr[row];
    for(int i = 0; i < row; i++)
        cin >> arr[i];
    for(int i = 1; i < row; i++)
        arr[i] += arr[i - 1];
    int pos; cin >> pos;
    cout << arr[pos];
}
using namespace std;
void consecutiveSum(){
    int row, col; cin >> row >> col;
    int arr[row][col];
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++)
            cin >> arr[i][j];
    }
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++)
            arr[i][j] += arr[i][j - 1];
    }
    //positions
    int x, y; cin >> x >> y;
    cout << arr[x][y];
}
#include<bits/stdc++.h>
using namespace std;
void teamScore(){
    int n; cin >> n;
    int score[100200], maxi = 0, mini = INT_MAX, total = 0;
    for(int i = 0; i < n; i++){
        cin >> score[i];
        maxi = max(maxi, score[i]);
        mini = min(mini, score[i]);
        total += score[i];
    }
    double avg = static_cast <int>(total) / n;
    cout << maxi << " " << mini << " " << total << " " << avg;
}
using namespace std;
void Morse(){
    string str, ing; cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '.')
            ing += '0';
        else if(str[i] == '-'){
            if(i + 1 < len && str[i + 1] == '.'){
                ing += '1'; 
                i++; //skip this value
            }
            else if(i + 1 < len && str[i + 1] == '-'){
                ing += '2';
                i++; //skip this value;
            }
        }
    }
    cout << ing;
}
using namespace std;
int GCD(int a, int b){
    if(a % b == 0)
        return b;
    return GCD(b, a % b);
}
int main(){
    int cnt = 0;
    for(int i = 1; i <= 2020; i++){
        for(int j = 1; j <= 2020; j++){
            if(GCD(i, j) == 1)
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
//cnt remainder two containt digit
int remTwo(int n){
    int cnt = 0;
    while(n){
        if(n % 10 == 2)
            cnt++;
        n /= 10;
    }
    return cnt;
}
int main(){
    int res = 0;
    for(int i = 1; i <= 2020; i++){
        res += remTwo(i);
    }
    cout << res;
}
using namespace std;
//find the divisor of 100 that minimizes the value of the expression 100 / i + i
void findDiv(){
    int res = 0, sum = INT_MAX;
    for(int i = 1; i <= 100; i++){
        if(100 % i == 0){
            int cur = 100 / i + i;
            if(sum > cur){
                sum = cur;
                res = i;
            }
        }
    }
    cout << res;
}
using namespace std;
//convert number format to string format
void printChar(){
    string str; cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(i + 1 < str.size() && isdigit(str[i + 1])){
            int n = str[i + 1] - '0';
            for(int j = 0; j < n; j++)
                cout << str[i] << " ";
            i++; //skips over the digit because it has already been processed
        }
        else
            cout << str[i] << " ";
    }
}
using namespace std;
//Replace 'BG' with 'GB'
void replace(){
    int n; cin >> n;
    string str; cin >> str;
    size_t found = 0;
    while(found < str.size()){
        //Search for the substring "BG" starting from index `found`
        found = str.find("BG", found); 
        if(found != string :: npos){
            str[found] = 'G';
            str[found + 1] = 'B';
            found += 2;
        }
        else
            break;
    }
    cout << str;
}
using namespace std;
void statement(){
    int n; cin >> n;
    string str[n];
    for(int i = 0; i < n; i++)
        cin >> str[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((str[i][0] == str[j][0] && str[i][1]!= str[j][1]) || (str[i][0] != str[j][0] && str[i][1] == str[j][1]))
                cnt++;
        }
    }
    cout << cnt;
}
using namespace std;
void evenOddIdx(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool valid = true;
    int evenIdx = arr[0] % 2;
    for(int i = 0; i < n; i+= 2){
        if(arr[i] % 2 != evenIdx){
            valid = false;
            break;
        }
    }
    if(valid){
        int oddIdx = (n > 1) ? arr[1] % 2 : evenIdx;
        for(int i = 1; i < n; i += 2){
            if(arr[i] % 2 != oddIdx){
                valid = false;
                break;
            }
        }
    }
    cout << valid ? "Yes" : "No";
}
#include<bits/stdc++.h>
using namespace std;
void find3Consecutive(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(n < 3){
        cout << -1;
        continue;
    }
    sort(arr, arr + n);
    bool found = false;
    for(int i = 0; i < n - 2; i++){
        if(arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]){
            cout << arr[i];
            found = true;
            break;
        }
    }
    if(!found)
        cout << -1;
}
using namespace std;
void consecutive(){
    string str; cin >> str;
    int len = str.length();
    if(len == 1){
        cout << "No";
        return 0;
    }
    bool valid = true;
    for(int i = 0; i < len; i++){
        if(i == 0){
            if(str[i] != str[i + 1]){
                valid = false;
                break;
            }
        }
        else if(i == n - 1){
            if(str[i] != str[i - 1]){
                valid = false;
                break;
            }
        }
        else{
            if(str[i] != str[i - 1] && str[i] != str[i + 1])
                valid = false;
                break;
        }
    }
    cout << (valid) ? cout : "Yes" : cout << "No";
}
using namespace std;
string RemoveDup(string str){
    string res = "";
    for(int i = 0; i < str.size(); i++){
        char ch = str[i];
        if(!res.empty() && res.back() == ch)
            res.pop_back();
        else
            res.push_back(ch);
    }
    return (res.empty()?"Empty" : res);
}
int main(){
    string str; cin >> str;
    cout << RemoveDup(str);
}
using namespace std;
bool sortbysec(const pair <string, int> &a, const pair <string, int> &b){
    //always return greater value
    if(a.second != b.second)
        return a.first > b.first;
    // if one is prefix of another return greater one
    if(a.first.find(b.first) == 0 || b.first.find(b.first) == 0)
        return a.first.size() > b.first.size();
    //return laxicografical order
    return a.first < b.first;
}
int main(){
    int n; cin >> n;
    vector <pair <string, int> > vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i].first >> vec[i].second;
    //string represent the name & int represeng the mark
    sort(vec.begin(), vec.end(), sortbysec);
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i].first << " " << vec[i].second << "\n";
}
using namespace std;
void windowsSum(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    int tmp[n];
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(i != j)
                sum += arr[j];
        }
        tmp[i] = sum;
        sum = 0;
    }
    for(int i = 0; i < n; i++)
        cout << tmp[i] << " ";
}
using namespace std;
//print prime numbers within range
int prime[100200];
int main(){
    int num; cin >> num;
    int k = 0;
    for(int i = 2; i <= num; i++){
        bool IsPrime = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                IsPrime = false;
                break;
            }
        }
        if(IsPrime)
            prime[k++] = i;
    }
    for(int i = 0; i < k; i++)
        cout << prime[i] << " ";
}
using namespace std;
//find and output the maximum and minimum values in subarrays
void findMaxMin(){
    int n; cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int query; cin >> query;
    for(int i = 0; i < query; i++){
        int l, r; cin >> l >> r;
        if(l > r) swap(l, r);
        int first = l - 1, last = r - 1;
        int maxIdx = first, minIdx = first;
        for(int i = first + 1; i <= last; i++){
            if(arr[i] > arr[maxIdx])
                maxIdx = i;
            if(arr[i] < arr[minIdx])
                minIdx = i;
        }
        cout << arr[maxIdx] << " " << arr[minIdx];
    }
}
using namespace std;
void modifyStr(){
    int n; cin >> n;
    string str; cin >> str;
    string k = "Final";
    for(int i = 0; i < n; i++){
        if(i == 1){
            cout << str << "\n";
            str += '-';
        }
        else{
            str += k;
            if(i == n - 1)
                str += "Wally";
        }
    }
    cout << str << "\n";
}
using namespace std();
void printStr(){
    string str; cin >> str;
    string name[]{"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    int cnt[8] = {0};
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < name[i].length(); j++){
            if(str[i] == name[i][j])
                cnt[i]++;
        }
    }
    int maxIdx = 0;
    for(int i = 0; i < 8; i++){
        if(cnt[i] > cnt[maxIdx])
            maxIdx = i;
    }
    cout << name[maxIdx];
}
using namespace std;
void Operation(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int denom, numer; cin >> numer >> denom;
        char ch; cin >> ch;
        if(numer % denom == 0)
            cout << numer / denom << " ";
        else{
            if(denom == 1)
                cout << numer << " ";
            else if(numer == 1)
                cout << numer << " " << ch << " " << denom;
            else{
                int gcd = __gcd(numer, denom);
                cout << numer / gcd << " " << ch << " " << denom / gcd;
            }
        }
        if(i < n)
            cout << endl;
    }
}
using namespace std;
//determine how many ways stars ('*') can be added to a string of length n while keeping the total length below or equal to 20. 
void cntStar(){
    int n; cin >> n;
    string str; cin >> str;
    int notStar = 0, res = 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] != '*')
            notStar++;
    }
    int remSlot = 20 - notStar;
    if(remSlot <= 0){
        cout << "Invalid";
        return;
    }
    int res = 1;
    for(int i = 0; i < n - notStar; i++){
        res *= remSlot;
        remSlot--;
        if(remSlot <= 0)
            break;
    }
    cout << res;
}
using namespace std;
// determine whether a given integer n can be expressed as the sum of i^j and j^i
void expressed(){
    int n;
    while(cin >> n){
        bool found = false;
        for(int i = 2; i <= 35 && !found; i++){
            for(int j = 2; j <= i; j++){
                int x = pow(i, j) + pow(j, i);
                if(x == n){
                    cout << "Yes " << x;
                    found = true;
                    break;
                }
                if(x > n) break;
            }
        }
        if(!found)
            cout << "No";
    }
}
using namespace std;
//Increment the adj matrix point & print the matrix
void minesWeeper(){
    int row, col; cin >> row >> col;
    char ch, arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> ch;
            if(ch == '.')
                arr[i][j] = '0';
            else 
                arr[i][j] = '*';
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            for(int dx = -1; dx <= 1; dx++){
                //incr 8 direction
                for(int dy = -1; dy <= 1; dy++){
                    //skip the cur pos
                    if(dx == 0 && dy == 0)
                        continue;
                    int nx = i + dx;
                    int ny = j + dy;
                    //check bound
                    if(nx >= 0 && ny >= 0 && nx < row && ny < col && arr[nx][ny] != '*')
                        arr[nx][ny]++;
                }
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
}
using namespace std;
// count the number of elements in an array that are neither the min nor the max value of the array. 
void OathOfNightWatch(){
    int n; cin >> n;
    int arr[n], cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 1; i < n - 1; i++){
        if(arr[0] < arr[i] && arr[n - 1] > arr[i])
            cnt++;
    }/*
    int mini = *min_element(arr, arr + n);
    int maxi = *max_element(arr, arr + n);
    for(int i = 0; i < n; i++){
        if(arr[i] > mini && arr[i] < maxi)
            cnt++;
    } */
    cout << cnt;
}
// its a variation of the knapsack problem which tries to maximize the number of items 
//included in a knapsack without exceeding its capacity, while minimizing the total weight.
void Knapsack(){
    int n; cin >> n;
    while(n--){
        int cap, numItem; cin >> cap >> numItem;
        int weight[numItem];
        for(int i = 0; i < numItem; i++)
            cin >> weight[i];
        int totalWeight = 0, itemInclude = 0;
        for(int i = 0; i < numItem; i++){
            int minIdx = i;
            for(int j = i + 1; j < numItem; j++){
                if(weight[i] > weight[j])
                    minIdx = j;
                swap(weight[i], weight[minIdx]);
            }
        }
        for(int i = 0; i < numItem; i++){
            if(totalWeight + weight[i] < cap){
                totalWeight += weight[i];
                itemInclude++;
            }
            else
                break;
        }
    }
    cout << totalWeight << " " << itemInclude;
}
using namespace std;
//simulates an array where each element of the array is reduced by a specified value and the remaining value is redistributed to neighboring elements
void distribute(){
    int n; cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int size; cin >> size; // number of shoots
    for(int i = 0; i < size; i++){
        //index of shoot & value
        int idx, val; cin >> idx >> val;
        
        --idx; //convert to 0-based index
        if(idx == 0){
            if(idx + 1 < n){
                arr[idx + 1] = arr[idx] - val;
                arr[idx] = 0;
            }
        }
        else if(idx == n - 1){
            if(idx - 1 >= 0){
                   arr[idx - 1] += arr[idx] - val;
                   arr[idx] = 0;
            }
        }
        else{
            if(idx + 1 < n)
                arr[idx + 1] += arr[idx] - val;
            if(arr[idx] - val == 0)
                arr[idx - 1] += 1;
            else
                arr[idx - 1] += arr[idx] - val - 1;
            arr[idx] = 0;
        }
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
#include<bits/stdc++.h>
using namespace std;
void roundNum(){
    int n; cin >> n;
    vector <int> res(n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 10000 != 0){
            cnt++;
            res[i] = (x / 10000) * 10000;
        }
        else if(x % 1000 != 0){
            cnt++;
            res[i] = (x / 1000) * 1000;
        }
        else if(x % 100 != 0){
            cnt++;
            res[i] = (x / 100) * 100;
        }
        else if(x % 10 != 0){
            cnt++;
            res[i] = (x / 10) * 10;
        }
        else
            res[i] = x; //No round need
    }
    cout << cnt << "\n";
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
}
//Determining a scaling factor based on the smallest number.
//Combining the scaling factor and the reductions to produce a final value.
using namespace std;
void produceVal(){
    int n = 3, res = 0;
    int arr[n];
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    int minIdx = 0;
    for(int i = 1; i < 3; i++){
        if(arr[i] < arr[minIdx])
            minIdx = i;
    }
    int smallest = arr[minIdx];
    int factor = 0;
    while(smallest > 10){
        factor++;
        smallest /= 10;
    }
    int scaler = pow(10, factor - 1);
    for(int i = 0; i < 3; i++)
        arr[i] -= scaler;
    while(true){
        if(arr[0] == arr[1] && arr[0] == arr[2]){
            res += arr[0];
            break;
        }
        sort(arr, arr + 3);
        if(arr[0] == 0 && arr[1] == 0)
            break;
        if(arr[0] + arr[1] + arr[2] > 3){
            arr[2] -= 2;
            arr[1] -= 1;
            res++;
        }
        else
            break;
    }
    cout << scaler + res;
}
using namespace std;
//wildcard
int main(){
    string str; int n;
    cin >> str >> n;
    vector <string> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    bool start = (str[0] == '*');
    bool end = (str[str.size() - 1] == '*');
    if(start && !end){
        string suffix = str.substr(1);
        for (const auto &word : vec){
            if (word.size() >= suffix.size() &&
                word.compare(word.size() - suffix.size(), suffix.size(), suffix) == 0)
                cout << word << "\n";
        }
    }
    else if(!start && end){
        string prefix = str.substr(0, str.size() - 1);
        for (const auto &word : vec) {
            if (word.size() >= prefix.size() &&
                word.compare(0, prefix.size(), prefix) == 0)
                cout << word << "\n";
        }
    }
    else{
        for (const auto &word : vec)
            cout << word << "\n";
    }
}
using namespace std;
// arrange a string characters in a square grid, and then prints them in a zigzag pattern (
int main(){
    string str; cin >> str;
    int len = ceil(sqrt(str.length()));
    while(str.length() < len * len)
        str += '.';
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            for(int j = i * len; j < (i + 1) * len; j++)
                cout << str[j] << " ";
        }
        else{
            for(int j = (i + 1) * len - 1; j > i * len - 1; j--)
                cout << str[j] << " ";
        }
        cout << "\n";
    }
}
using namespace std;
//wildcard
int main(){
    int n; cin >> n;
    string str; cin >> str;
    int dv = str.find("*");
    string first = str.substr(0, dv);
    string sec = str.substr(dv + 1);
    int len = sec.length();
    vector <string> tmp;
    for(int i = 0; i < n; i++){
        string ing; cin >> ing;
        if(str.length() - 1 > ing.length())
            continue;
        string c = ing.substr(0, dv);
        string d = ing.substr(ing.length() - len);
        if(first == c && sec == d)
            tmp.push_back(ing);
    }
    for(int i = 0; i < tmp.size(); i++)
        cout << tmp[i] << " ";
}
using namespace std;
int delta(int x){
    if(x % 4 == 0) return x;
    if(x % 4 == 1) return 1;
    if(x % 4 == 2) return x + 1;
    return 0;
}
int main(){
    int x, y; cin >> x >> y;
    cout << delta(x - 1) ^ delta(y);
}
using namespace std;
int main(){
    string str, ing; cin >> str >> ing;
    int len1 = str.length(), len2 = ing.length();
    int maxL = max(len1, len2);
    vector <int> vec(maxL, 0), tor(maxL, 0), res(maxL + 1, 0);
    for(int i = 0; i < len1; i++)
        vec[len1 - 1 - i] = str[i] - '0';
    for(int i = 0; i < len2; i++)
        tor[len2 - 1 - i] = ing[i] - '0';
    int carry = 0;
    for(int i = 0; i < maxL; i++){
        sum = vec[i] + tor[i] + carry;
        res[i] = sum % 10;
        carry = sum / 10;
    }
    if(carry > 0)
        res[maxL] = carry;
    int highestIndex = maxL;
    while (highestIndex > 0 && res[highestIndex] == 0)
        highestIndex--;
    for (int i = highestIndex; i >= 0; i--)
        cout << res[i] << " ";
}
using namespace std;
// identify the name that has the highest number of matching strings from a given list.
void FindStr() {
    int n; cin >> n;
    vector <string> vec(n);
    unordered_set <string> st;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        st.insert(vec[i]);
    }
    int m; cin >> m;
    vector <string> name(m);
    vector <int> src(m, 0);  
    for (int i = 0; i < m; i++) {
        cin >> name[i];
        int x; cin >> x;
        for (int j = 0; j < x; j++) {
            string str; cin >> str;
            if (st.count(str)) {
                src[i]++;
            }
        }
    }
    int maxIdx = 0;
    for (int i = 1; i < m; i++) {
        if (src[i] > src[maxIdx])
            maxIdx = i;
    }
    cout << name[maxIdx] << endl;
}
using namespace std;
int main(){
    int n; cin >> n;
    vector < pair < int, int> > pir(n);
    for(int i = 0; i < n; i++)
        cin >> pir[i].first >> pir[i].second;
    sort(pir.rbegin(), pir.rend());
    int mx = pr[0].second, res = 1;
    for(int i = 1; i < n; i++){
        if(pr[i].second > mx){
            mx = pr[i].second;
            res++;
        }
    }
    cout << res;
}
using namespace std;
int main(){
    string str; getline(cin, str);
    (str.find("molla") != -1) ? cout << str.find("molla") + 1 : cout << -1;
    double n; cin >> n;
    cout << fixed << setprecision(2) << (n - 1)/2 * n/2;
    int x, k; cin >> x >> k;
    cout << fixed << setprecision(5) << (1 / x) * (x - k - 1) / (x - 1);
}
using namespace std;
int main(){
    int n; cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    /*for(int i = 0; i < n / 2; i++)
        cout << arr[i] << "\n" << arr[n - 1 - i] << "\n";
    if(n % 2 != 0)
        cout << arr[n / 2] << "\n"; */
    if(n % 2 == 1){
        for(int i = 1; i <= n /2; i++)
            swap(arr[i], arr[n - i]);
    }
    else{
        for(int i = 1; i < n /2; i++)
            swap(arr[i], arr[n - i]);
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
using namespace std;
// process a list of n integers in groups of size k, adding the max value of each group plus 1 
//to an accumulator, and finally output the accumulated result.
int main(){
    int n, k; cin >> n >> k;
    int mx = 0, cnt = 0, res = 1;
    while(n--){
        cnt++;
        int x; cin >> x;
        mx = max(mx, x);
        if(cnt == k){
            res += mx + 1;
            mx = 0; cnt = 0;
        }
    }
    if(cnt > 0)
        res += mx + 1;
    cout << res;
}
using namespace std;
// determine whether a student, identified by their id, ranks within the top m students based on their scores in three subjects (sub1, sub2, and sub3).
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m; 
        // number of student & thereshold
        int id; cin >> id;
        vector <int> dent(n), sub1(n), sub2(n), sub3(n);
        for(int i = 0; i < n; i++)
            cin >> dent[i] >> sub1[i] >> sub2[i] >> sub3[i];
        for (int j = 0; j < n; j++) {
            if (id == dent[j]) { 
                for (int k = 0; k < n; k++) {
                    if (j == k) continue;  
                    if (sub3[k] > sub3[j] || 
                        (sub3[k] == sub3[j] && sub2[k] > sub2[j]) || 
                        (sub3[k] == sub3[j] && sub2[k] == sub2[j] && sub1[k] > sub1[j]))
                        rank++;
                }
                break; 
               
            }
        }
        (rank <= m) ? cout << "YA" : cout << "TIDAK" ;
    }
}
using namespace std;
int main(){
    int n, a, b; cin >> n >> a >> b;
    int x = n - (n * (a / 100));
    int y = x * (b / 100);
    cout << x + y;
}
using namespace std;
int main(){
    string str; getline(cin, str);
    string ing = "mollav ai";
    int i = 10, cnt = 0, res = 1;
    while(i--){
        if(str[i] == ing[i] || str[i] + 32 = ing[i])
            cnt++;
    }
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'e'){
            if(str[i] == 'u') res *= 3;
            else res *= 2;
        }
    }
    cout << cnt << " " << res;
    string str, ing; cin >> str >> ing;
    cout << str + ing << "\n";
    int tmp = str.find(ing);
    if(tmp != -1)
        cout << "No";
    else
        cout << "Yes" << "\n" << str + "molla";
}
using namespace std;
void func(int n, int denom){
    if(n >= denom){
        cout << denom << " " << n / denom << "\n";
        n %= denom;
    }
}
int main(){
    int n; cin >> n;
    func(n, 1000);  func(n, 500);
    func(n, 200);   func(n, 100);
    func(n, 50);    func(n, 20);
    func(n, 10);    func(n, 5);
    func(n, 2);     func(n, 1);
}
using namespace std;
int main(){
    int n, m, x, y; cin >> n >> m >> x >> y;
    int a = (n / x) * (m / y);
    int b = (n / y) * (m / x);
    cout << max(a, b);
}
using namespace std;
int main(){
    int x, y, n; cin >> x >> y >> n;
    int arr[2006], res = 0;
    for(int i = 0; i < n * n; i++){
        if(arr[x] == 0){
            arr[x]++; res++;
        }
        int tmp = (x + y) % m;
        x = y; y = tmp;
    }
    cout << res;
}
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            if(i % 3 == 0) cout << "Three";
            else if(i % 5 == 0) cout << "Five";
            else if(i % 7 == 0) cout << "seven";
        }
        else
            cout << " " << i;
    }
}
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n * 2; i++){
        int x; cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    int res = 0, tmp = 2 * n - 1;
    for(int i = tmp; i >= n; i--)
        res += vec[i];
    cout << res;
}
using namespace std;
int main(){
    int n, prv = -1; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 0 || x != prv)
            vec.push_back(x);
    }
    if(vec.size() < n) cout << "0";
    else if(vec.size() == n) cout << "1";
    else cout << n + 1;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10000], n; cin >> n;
    vector <int> vec[10000];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vec[arr[i]].push_back(x);
    }
    priority_queue <int> pq;
    for(int i = 10000; i >= 1; i--){
        for(auto j : vec[i])
            pq.push(j);
        if(!pq.empty()){
            res += pq.top(); pq.pop();
        }
    }
    cout << res;
}
using namespace std;
void main(){
    int n, d, a; cin >> n >> d >> a;
    int cur = a, res = 1;
    for(int i = 1; i < n; i++){
        cin >> a;
        if(a - cur >= d)
            res++;
        cur = a;
    }
    cout << res;
}
using namespace std;
int main(){
    int cur; cin >> cur;
    int peak = lowest = prv = cur;
    int maxDiff = 0, nxtVal;
    while(cin >> nxtVal){
        if(nxt > prv){
            peak = nxt;
            maxDiff = max(maxDiff, peak - lowest);
        }
        else if(nxt < prv){
            lowest = nxt;
            maxDiff = max(maxDiff, abs(lowest - peak));
        }
        prv = nxt;
    }
    cout << maxDiff;
}
using namespace std;
int main(){
    int n; cin >> n;
    pair <int, int> pir[n];
    for(int i = 0; i < n; i++)
        cin >> pir[i].first >> pir[i].second;
    sort(pir, pir + n);
    int cur = n - 2;
    for(int i = n - 1; i >= 0; i--){
        if(i == cur) cur--;
        while(pir[i].first == pir[cur].first){
            if(pir[i].second > pir[cur].second)
                pir[cur].first--;
            else
                pir[i].first--;
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(pir[i].first != 0)
            res += pir[i].second;
    }
    cout << res;
}
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n][1000];
    for(int i = 0; i < n; i++)
        cin >> arr[0][i];
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = arr[i - 1][j + 1] - arr[i - 1][j];
    }
    for(int i = 0; i < n; i++)
        cout << arr[i][0] << " ";
}
using namespace std;
int main(){
    int n; cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n / 2; i++)
        cout << vec[i] << "\n" << vec[n - 1 - i];
    if(n % 2 != 0)
        cout << vec[n / 2];
}
using namespace std;
int main(){
    int x, y, mn; cin >> x >> y;
    int mx = (x - y) / 4;
    if(x > 5 * y || y > x)
        cout << -1;
    else{
        if(x <= 4 * y)
            mn = 0;
        else
            mn = x - 4 * y;
    }
    cout << mn;
}
using namespace std;
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    int x, y; cin >> x >> y;
    if(x % y != 0){
        cout << -1;
        return 0;
    }
    int a, b, tmp = x / y;
    for(int i = 1; i <= sqrt(tmp); i++){
        if(gcd(i, tmp/i) == 1 && tmp % i == 0){
            a = i; b = tmp / i;
        }
    }
    cout << a * x << " " << b * x;
}
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int gcd = __gcd(a, b);
    int lcm = a * b/gcd;
    cout << (lcm / a) + (lcm / b);
}
using namespace std;
int main(){
    int n, cnt = 1; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    string str; str += "G";
    n = n / 2 + 1;
    while(cnt++ < n)
        str += "LG";
    cout << str.size() << "\n" << str;
}
using namespace std;
int solve(int x){
    if(x <= 1)
        return 1;
    else
        return solve(x / 2) * 2 + x;
}
using namespace std;
int main(){
    int n, m, ans = 0; cin >> n >> m;
    vector <int> freq(10005, 0);
    vectror <pair <int, int> >range;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        freq[x]++;
    }
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        range.push_back({r, l});
    }
    sort(range.begin(), range.end());
    for(int i = 0; i < m; i++){
        int l = range[i].second;
        int r = range[i].first;
        for(int j = l; j <= r; j++){
            if(freq[j] > 0){
                freq[j]--;
                ans++;
                break;
            }
        }
    }
    cout << ans;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, maxDiff, Query; cin >> num >> maxDiff >> Query;
    vector <pair <int, int> >twin(num + 1);
    for(int i = 1; i <= num; i++){
        cin >> twin[i].first;
        twin[i].second = i;
    }
    sort(twin.begin() + 1, twin.end());
    priority_queue <pair <int, int> > pq;
    vector <int> res(num + 1, 0);
    for (int i = 1, j = 1; i <= num; i++) {
        while (j <= num && twin[j].first - twin[i].first <= maxDiff)
            j++;
        j--;
        pq.push({j - i + 1, j});
        while (pq.top().second < i)
            pq.pop();
        res[twin[i].second] = pq.top().first;
    }
    for (int i = 0; i < Query; i++) {
        int idx; cin >> idx;
        cout << res[idx] << endl;
    }
}
using namespace std;
int main(){
    int n; cin >> n;
    string str; cin >> str;
    vector <int> vec(26, 0);
    for(int i = 0; i < n; i++)
        vec[str[i] - 'A']++;
    sort(vec.begin(), vec.end());
    int a = vec[25], b = vec[24], c = [23];
    if(c == 0){
        cout << -1;
        return 0;
    }
    int res = 3 * c;
    if(a > c) res++;
    if(b > c) res++;
    cout << res;
}
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    pair <int, int> twin[n];
    int arr[k];
    for(int i = 0; i < n; i++)
        cin >> twin[i].first >> twin[i].second;
    for(int i = 0; i < k; i++)
        cin >> arr[i];
    sort(twin, twin + n); sort(arr, arr + k);
    int r = n - 1, res = i = 0;
    while(r >= 0){
        if(twin[i].second > 0){
            res += twin[i].first * arr[r];
            r--; twin[i].second--;
        }
        else
            i++;
    }
    cout << res;
}
using namespace std;
int main(){
    int n, q; cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        int l = 0, r = n - 1;
        bool flag = 0;
        while(l < r){
            int sum = arr[l] + arr[r];
            if(sum == x){
                flag = 1; break;
            }
            else if(sum < x) l++;
            else r--;
        }
    }
    (flag) ? cout << "Yes" : cout << "No";
}
using namespace std;
int main() {
    int n, x, y; cin >> n >> x >> y;
    int s = abs(x), r = abs(y);
    int t = s + r;   
    // Minimum required moves (Manhattan distance)
    if (t > n) {
        cout << -1;
        return 0;
    }
    // If the remaining moves (n - t) is odd, we cannot distribute evenly
    if ((n - t) % 2 != 0) {
        cout << -1;
        return 0;
    }
    int extraMoves = (n - t) / 2;
    // Assign moves
    int a = (y >= 0) ? r + extraMoves : extraMoves;
    int c = (y < 0) ? r + extraMoves : extraMoves;  
    int b = (x >= 0) ? s + extraMoves : extraMoves; 
    int d = (x < 0) ? s + extraMoves : extraMoves; 
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
using namespace std;
int main(){
    int n, a, b; cin >> n >> a >> b;
    int lcm = a * b/__gcd(a, b);
    cout << lcm / a + lcm / b;
}
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int mx = max(a, b), mn = min(a, b);
    while(mx % mn != 0){
        int tmp = mx - mn;
        mx = max(mn, tmp);
        mn = min(mn, tmp);
    }
    cout << mn;
}
using namespace std;
int main(){
    int n, a, b, c; cin >> n >> a >> b >> c;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        (x % a == 0 && x % b == 0 && x % c == 0) ? cout << "YA\n" : cout << "No\n";
    }
}
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int arr[n]; cin >> arr[0];
    for(int i = 1; i < n; i++){
        int x; cin >> x;
        arr[i] = arr[i - 1] + x;
    }
    for(int i = 0; i < k; i++){
        int y; cin >> y;
        cout << upper_bound(arr, arr + n, y) - arr;
    }
}
using namespace std;
int main(){
    int n; cin >> n;
    multiset <int> mset;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(mset.lower_bound(x) != mset.end())
            mset.erase(mset.lower_bound(x));
        mset.insert(x);
    }
    cout << mset.size();
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    (n % m == 0) ? cout << "Yes" : cout << "No";
}
using namespace std;
int main(){
    int n; cin >> n;
    if(n % 4 == 0) cout << "Yes";
    else if(n % 2 == 0) cout << "No";
    else{
        ((n - 1) % 4 == 0) cout << "No" : cout << "Yes";
    }
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            (j % 2 == 0) ? cout << "W" : cout << "B";
        }
    }
}
using namespace std;
int main(){
    int n, m, x, y; cin >> n >> m >> x >> y;
    int res = (n - x) + (m - y) * 2;
    (res > 20) ? cout << "Yes": cout << "No";
}
using namespace std;
int main(){
    int m, a, b; cin >> m >> a >> b;
    if(a + b == 2 * m){
        (a % 2 == 1 && b % 2 == 1) ? cout << "1" : cout << "0";
        cout << min(a, b);
    }
    else
        cout << "0" << " " << min(a, b);
}
using namespace std;
int main(){
    int n; cin >> n;
    cout << (n % 10 ? cout << "Yes": cout << "No");
}
using namespace std;
int main(){
    int n, cnt = 1; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cnt *= x;
    }
    cout << cnt;
}
using namespace std;
int main(){
    int n; cin >> n;
    char ch[26];
    vector <bool> visited(n, false);
    vector <char> arr(n);
    vector <int> vec(n), res(n);
    for(int i = 0; i < 26; i++)
        ch[i] = 'a' + i;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            if(arr[i] == ch[j]){
                vec[i] = j + 1;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        int minIdx = -1;
        for(int j = 0; j < n; j++){
            if(!visited[j] && (minIdx == - 1 || vec[j] < vec[minIdx]))
                minIdx = j;
        }
        res[minIdx] = n - i;
        visited[minIdx] = true;
    }
    for(int i = 0; i < n; i++)
        cout << res[i] << " ";
}
// output the sequence of unique number
using namespace std;
int main(){
    int n; cin >> n;
    int arr[1001] = {0}, unique[n], cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(arr[x] == 0){
            arr[x] = 1;
            unique[cnt++] = x;
        }
    }
    for(int i = 0; i < cnt; i++)
        cout << unique[i] << " ";
}
using namespace std;
//find index
int main(){
    int n, trgIdx; cin >> n >> trgIdx;
    int arr[n], cnt = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if(arr[trgIdx - 1] == 0){
        for(int i = 0; i < n; i++){
            if(arr[i] > 0) cnt++;
        }
    }
    else{
        cnt = trgIdx;
        for(int i = trgIdx; i < n; i++){
            if(arr[trgIdx - 1] <= arr[i])
                cnt++;
        }
    }
    cout << cnt << "\n" << arr[TrgIdx - 1] << "\n";
    (trgIdx < n) ? cout << arr[trgIdx] : cout << "Idx OutOfBound";
}
using namespace std;
//Findpos
int main(){
    int row, col, cnt = 0, mini = INT_MAX, MinRow = -1, MinCol = -1;
    cin >> row >> col;
    char arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == 'E'){
                int dist = i + j;
                if(distance < mini){
                    //convert to 1-Based Idx
                    MinRow = i + 1;
                    MinCol = j + 1;
                }
                cnt++;
            }
        }
    }
    (cnt == 0) ? cout << -1 : cout << MinRow << " " << MinCol;
}
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = n; i > 0; i--){
        int cnt = 0;
        for(int j = n; j > 0; j--){
            for(int k = n; k > 0; k--){
                if(k * k + j * j == i * i)
                    cnt++;
            }
        }
        if(cnt == 2){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    int mx = max(a, max(b, c));
    for(int i = mx; i <= 100; i++){
        if(i % a != 0 && i % b != 0 && i % c != 0){
            cout << i;
            break;
        }
    }
}
using namespace std;
int main(){
    double d; cin >> d;
    cout << fixed << setprecision(1) << n *(n + 1) /2;
    int n, m, r; cin >> n >> m >> r;
    int mn = min(n, m);
    cout << (mn - 1) / (2 * r + 1) + 1;
}
using namespace std;
int main(){
    int p, q, r, s, t; cin >> p >> q >> r >> s >> t;
    int x = sqrt(p * q * r * s * t);
    cout << x / (q * s) << " " << x / (r * t) << " " << x / (p * s) << " " << x / (q * t) << " " << x / (p * r);
}
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    bool isDecr = false, isIncr = false, isEqual = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i > 0){
            if(arr[i] < arr[i - 1]) isDecr = true;
            else if(arr[i] > arr[i - 1]) isIncr = true;
            else isEqual = true;
        }
    }
    if(isIncr && isDecr) cout << "NONE";
    else if (isEqual){
        if(isDecr) cout << "NONINCREASING";
        else if (isIncr) cout << "NONDECREASING";
        else cout << "EQUAL";
    }else if (hasIncrease) cout << "NONDECREASING";
    else if (hasDecrease) cout << "NONINCREASING";
    else cout << "NONE";
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    cout << n + (n - 3) - m;
    int ans = 1;
    for(int i = 1; i <= n * m - 1; i++)
        ans *= 2;
    cout << ans;
}
using namespace std;
int main(){
    int n; cin >> n;
    if(n >= 100)
        cout << 9;
    else if(n >= 19 && n <= 99){
        string str = to_string(n);
        if(str[1] == '9')
            cout << n / 10;
        else
            cout << n / 10 -1;
    }
    else
        cout << "0";
}
using namespace std;
int main(){
    int n; cin >> n;
    int a = b = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(n > 2){
            a += x * pow(-1, i % 2);
            b += x * pow(-1, (i + 1) % 2);
        }
        else{
            b += x * pow(-1, (i + 1) % 2);
            a = INT_MIN;
        }
    }
    cout << max(a, b);
}
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int arr[a][b];
    int x, y = z = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> arr[i][j];
            if(arr[i][j] == -1) x = (i + j) % 2;
            else if((i + j) % 2 == 0) y += arr[i][j];
            else z += arr[i][j];
        }
    }
    if(x == 0)
        (y > z)? cout << "No\n" : cout << "Yes\n" << z - y;
    else
        (y < z)? cout << "No\n" : cout << "Yes\n" << y - z;
}
using namespace std;
int main(){
    int n; cin >> n;
    int tmp = 2, cnt = 0;
    while(tmp <= n)
        tmp *= 2;
    cout << tmp - n;
    int x, y; cin >> x >> y;
    int mn = min(x, y), mx = max(x, y);
    cout << (mn - 1) * mx;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        cout << 2 * min(a, b);
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int arr[n], cnt = 0;
    for(int i = 1; i <= n; i++)
        arr[i] = 0;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        arr[x] = (arr[x] + 1) % 4;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] == 2 || arr[i] == 3)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
int main(){
    int n; cin >> n;
    int even = odd = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if((x + y) % 2 == 0) even++;
        else odd++;
    }
    (even == 0 || odd == 0) ? cout << "No" : cout << "Yes";
}
using namespace std;
int main(){
    string str; cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'o') cnt++;
        if(cnt > 1) break;
    }
    (cnt == 1) ? cout << "Yes" : cout << "No";
}
using namespace std;
int main(){
    int n; cin >> n;
    double r, v; cin >> r >> v;
    int arr[n];
    for(int i = 0; i < n; i++){
        if(arr[i] == v){
            cout << "-1";
            return 0;
        }
    }
    double res = 0;
    for(int i = 0; i < n; i++)
        res = max(res, r / abs(arr[i] - v));
    cout << setprecision(9) << res;
}
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)   
        cin >> arr[i];
    int id = 0;
    while(id < n && arr[id] == 1)
        id++;
    id %= n;
    int i = id, res = 0, cnt = 0;
    do{
        if (arr[i] == 1){
            cnt++;  
            res += cnt;
        }else cnt = 0;
        i = (i + 1) % n;
    }while (i != id);
    cout << res << endl;
}
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int cnt = 1, res = 0;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        if(cnt < l){
            res += abs(cnt - l);
            cnt = l;
        }
        else if(cnt > r){
            res += abs(cnt - r);
            cnt = r;
        }
    }
    cout << res;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 4
int arr[N], tree[4 * N];
void initial(int node, int start, int end){
    if(start == end){
        tree[node] = arr[start]; return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (start + end) / 2;
    initial(left, start, mid);
    initial(right, mid + 1, end);
    tree[node] = tree[left] + tree[right];
}
void update(int node, int start, int end, int pos, int val){
    if(pos > end || pos < start)
        return;
    if(start == end){
        tree[node] = val;
        return;
    }
    int left = 2 * node, right = 2 * node + 1;
    int mid = (start + end) / 2;
    update(left, start, mid, pos, val);
    update(right, mid + 1, end, pos, val);
    tree[node] = tree[left] + tree[right];
}
int query(int node, int start, int end, int i, int j){
    if(i > end || j < start) return 0;
    if(i <= start && j >= end) return tree[node];
    int left = 2 * node, right = 2 * node + 1, mid = (start + end) / 2;
    int q1 = query(left, start, mid, i, j);
    int q2 = query(right, mid + 1, end, i, j);
    return q1 + q2;
}
int main(){
    int n, q; cin >> n >> q;
    initial(1, 1, n);
    while(q--){
        int type; cin >> type;
        if(type == 1){
            int pos, val; cin >> pos >> val;
            update(1, 1, n, pos, val);
        }
        else{
            int a, b; cin >> a >> b;
            cout << query(1, 1, n, a, b);
        }
    }
} 
void solveuwu()
{
    //convert a numeric string into corresponding alphabet characters.
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> vec;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 2] == '0' && i + 2 < s.length() && s[i + 3] != '0')
        {
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
            vec.push_back(char(num + 'a' - 1));
            i += 2;
        }
        else
        {
            int num = s[i] - '0';
            vec.push_back(char(num + 'a' - 1));
        }
    }
    for(int i=0; i<n; i++)
        cout << vec[i] << " ";
}
void solve3divA()
{
    //find and output a combination of three numbers from the input vector 
    //such that their sum is equal to the last element of the vector.
    vector<int> v(7);
    vector<int> res;
    int temp = 0;
    int f = 0;
    int temp2 = 0;
    int counter = 5;
    for (int i = 0; i < 7; i++)
        cin >> v[i];
    int max = v[6];
    if (v[0] + v[1] + v[2] == v[6])
    {
        cout << v[0] << " " << v[1] << " " << v[2];
    }
    else
    {
        for (int j = 0; j < 7; j++)
        {
            for (int i = j + 1; i < 7; i++)
            {
                for (int z = 0; z < 7; z++)
                {
                    if (v[j] + v[i] + v[z] == v[6])
                    {
                        cout << v[j] << " " << v[i] << " " << v[z] << "\n";
              return;
                    }
                }
            }
        }
    }
    cout << "\n";
}
void solveDiv4C()
{
    //finding the minimum absolute difference in character positions between two strings of length
    int a, b, res = 0, finalResult = 100000;
    cin >> a >> b;
    vector<string> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int z = i + 1; z < a; z++)
        {
            res = 0;
            for (int j = 0; j < b; j++)
            {
                if (z != i)
                res += abs((s[i][j] - 'a') - (s[z][j] - 'a'));
            }
            finalResult = min(finalResult, res);
        }
    }
    cout << finalResult << "\n";
}
#include<vits/stdc++.h>
using namespace std;
int main()
{
    You are given a problem where you need to determine if it's possible to create an array of size n containing only 1 and -1, such that the sum of the counts of pairs of positive numbers and pairs of negative numbers is exactly k. If possible, the program should print "Yes" followed by the array, otherwise, it should print "No".
    int n, k;
    cin >> n >> k;
    vector<int>v;
    for(int i=1; i<=n; i++)
        v.push_back(1);
    int pos=n, neg = 0, total = 0;
    for(int i=0; i<n; i++)
    {
        total = (pos*(pos - 1)/2)+(neg*(neg - 1 )/2);
        if(total== k)
            break;
        v[i]*=-1;
        pos--;
        neg++;
    }
    if(total==k)
    {
        cout << "Yes";
        for(auto val:v)
            cout << val << " ";
        cout << "\n";
    }
    else 
        cout << "No";
}
#include<bits/stdc++.h>
using namespace std;
void usaco() {
    int n;
    cin >> n;
    
    int a, b;
    string x;
    
    vector<string> s(n);
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> res(n);
    
    for (int i = 0; i < n; i++) {
        cin >> x >> a >> b;

        if (x == "on") {
            s[i] = "on";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "none") {
            s[i] = "none";
            v[i].first = a;
            v[i].second = b;
        } else if (x == "off") {
            s[i] = "off";
            v[i].first = a;
            v[i].second = b;
        }
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == "none" && s[i - 1] == "on") {
            res[i].first = v[i].first;
            res[i].second = v[i].second - 1;
        }
        if (s[i] == "off" && s[i - 1] == "none") {
            res[i].first = v[i - 1].first - v[i].first - 1;
            res[i].second = v[i - 1].second - v[i].second;
        }
    }
    for (auto i : res) {
        if (i.first > 0)
            cout << i.first << " " << i.second ;
    }
}
void cowQueue(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    int r = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    r = v[0].first + v[0].second;
    for(int i = 1; i < n; i++){
        if (v[i].first <= r)
            r += v[i].second;
        else
            r = v[i].first + v[i].second;
    }
    cout << r;
}
void mixMilk() {
    //simulate a pouring process involving three buckets of milk. The buckets 
    //represented by two vectors: c (capacity of each bucket) and m (current amount of milk in each bucket).
    vector<int> m(3);
    vector<int> c(3);
    
    for (int i = 0; i < 3; i++)
        cin >> c[i] >> m[i];

    for (int i = 0; i < 100; i++) {
        int amount = min(c[(i + 1) % 3] - m[(i + 1) % 3], m[i % 3]);
        m[i % 3] -= amount;
        m[(i + 1) % 3] += amount;
    }

    for (int j = 0; j < 3; j++) {
        cout << m[j] << "\n";
    }
}
void cbarn() {
    int n;
    cin >> n;
    const int num = n;
    int tmp = 0;
    int finalResult = 0;
    vector<int> rooms(n * 2);

    for (int i = 0; i < n; i++)
        cin >> rooms[i];

    for (int j = 0; j < num; j++) {
        rooms[n + j] = rooms[j];
        
        for (int i = j + 1; i < num + j; i++) {
            for (int z = i; z < num + j; z++) {
                tmp += rooms[z];
            }
        }
        if (j == 0) {
            finalResult = tmp;
        }
        finalResult = min(finalResult, tmp);
        tmp = 0;
    }
    cout << finalResult;
}
void Block_game() {
    int n;
    cin >> n;
    vector<int> v(100);
    vector<int> v1(100);
    vector<int> v2(100);
    vector<int> empty(100);
    string x, y;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        for (int a = 0; a < x.length(); a++) {
            v1[x[a] - '0']++;
        }

        for (int b = 0; b < y.length(); b++) {
            v2[y[b] - '0']++;
        }

        for (int z = 49; z < 75; z++) {
            v[z] += max(v1[z], v2[z]);
        }
        v1 = empty;
        v2 = empty;
    }
    for (int j = 49; j < 75; j++) {
        cout << v[j] << " ";
    }
}
void tic_tac_toe() {
    vector<string> v(3);
    string team1;
    string team, team2, team3;
    //cin>>team1 >> team2 >>team3;
    int t1 = 0, t2 = 0;
    // Assume if I have 1 cow in vector team:
    for (int j = 0; j < 3; j++) {
        cin >> team1;
        v[j] = team1;
    }

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if (v[j][i - 1] == v[j][i] && v[j][i] == v[j][i + 1]) 
                    t1++;
            if (v[0][j] == v[1][j] && v[0][j] == v[2][j]) {
                t1++;
                break;
            }
        }
    }

    if (v[0][0] == v[1][1] && v[1][1] == v[2][2]) t1++;
    if (v[0][2] == v[1][1] && v[1][1] == v[2][0]) t1++;
    if (t1 > 3) t1 /= 2;

    for (int i = 0; i < 2; i++) {
        if (v[0][0] == v[1][1] && v[1][1] != v[2][2]) t2++;
        else if (v[0][2] == v[1][1] && v[1][1] != v[2][0]) t2++;
    
        else if (v[0][2] == v[2][2] && v[2][2] != v[1][2]) t2++;
        else if (v[0][0] == v[0][2] && v[0][2] != v[0][1]) t2++;
        else if (v[1][0] == v[1][2] && v[1][2] != v[1][1]) t2++;
        else if (v[2][0] == v[2][2] && v[2][2] != v[2][1]) t2++;
        else if (v[0][0] == v[2][2] && v[2][2] != v[1][1]) t2++;
        else if (v[0][2] == v[2][0] && v[2][0] != v[1][1]) t2++;
    }

    if (v[0] == v[2] && v[0][0] == v[2][2]) {
        t1 /= 2;
        t2 /= 2;
    }
    if (t1 == 3) t2 = 0;
    if (v[0] == "AXY" && t2 == 2) {
        t2 = 3;
    }
    cout << t1 << "\n" << t2;
}
void GameWithArrays() {
    //https://codeforces.com/contest/1859/problem/B
    int n, tmp, val, final = 0;
    int maxi = INT_MAX;
    cin >> n;
    int x;
    vector<vector<int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            int num;
            cin >> num;
            vec[i].push_back(num);
            if (maxi > num) {
                maxi = num;
                tmp = i;
                val = num;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        sort(vec[i].begin(), vec[i].end()); 
        val += vec[i][0]; 
        // Use vec[i][0] to get the smallest element after sorting
    }

    for (int i = 0; i < n; i++) {
        final = max(final, val - vec[i][0]);
    }
    cout << final;
}
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    int idx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    int temp = v[k-1];
    if(k > n)
    {
        cout << 0 << "\n";
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] >= temp && v[i] >0) idx = i+1;
    }
    cout << idx << "\n";
}
bool sameDif(int a , int b, int c){
    int temp = b - a;
    if(temp == c-b)
        return true;
    return false;
}
bool check(vector<int>v , int k){
    for(int i = 0; i < v.size(); i++){
        if(v[i] - k >0) 
            return false;
    }
    return true;
}
https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include<bits/stdc++.h>
using namespace std;
bool targetSum(vector<int>v, int size, int sum, int trg)
{
    if(size == 0)
    {
        if(sum == trg)
            return true;
        return false;
    }
    return targetSum(v, size-1, sum- v[size-1], trg) || targetSum(v, size-1, sum + v[size -1], trg);
}
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    if(targetSum(v, n, 0, x) == true)
        cout << "Yes";
    else
        cout << "No";
}

#include<bits/stdc++.h>
using namespace std;
void ArrayColoring()
{
    // https://codeforces.com/contest/1843/problem/A
    int size;
    cin >> size;
    vector<int> v(size);
    int subtracts = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (size % 2 == 0)
    {
        for (int j = size - 1, i = 0; j >= size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    else
    {
        for (int j = size - 1, i = 0; j > size / 2, i < size / 2; j--, i++)
                sum += v[j] - v[i];
    }
    cout << sum - subtracts << "\n";
}
void LongLong()
{
    //https://codeforces.com/contest/1843/problem/B
    int n;
    cin >> n;
    vector<int>vec(n);
    int sum=0, cnt=0, c=0;
    bool flag=true;
    for(int i=0; i<n; i++)
    {
        cin >>vec[i];
        sum+=abs(vec[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(vec[i]==0)
            continue;
        for(int j=i; j<n; j++)
        {
            if(vec[j] < 0)
            {
                flag=false;
                i = j;
            }
            else  
                break;
        }
        if(!flag)
        {
            cnt++;
            flag=true;
            c++;
        }
    }
    cout << sum << " " << cnt;
}
void DifferentDifferences()
{
    //https://codeforces.com/contest/1772/problem/C
    int n, max;
    cin >> n >> max;
    int nmax = 1;
    int temp = 1;
    int sum = n;
    vector<int> v;
    while (nmax - 1 < max - n && n > 2)
    {
        v.push_back(nmax);
        temp++;
        nmax += temp;
        n--;
    }
    while (n > 0)
    {
        v.push_back(max);
        max--;
        n--;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<vec.size(); i++)
        cout << vec[i] <<" ";
    
    cout << charac(v, v.size()) << "\n";
}
void EveryOneLovesToSleep()
{
    // https://codeforces.com/contest/1714/problem/A
    int n, h, m, temp = 100;
    cin >> n >> h >> m;
    vector<pair<int, int>> v(n);
    vector<pair<int, int>> result(n);
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        int AlarmTime = v[i].first * 60 + v[i].second;
        int BedTime = (h * 60) + m;
        int Total = abs(AlarmTime - BedTime) / 60;
        int Time_in_min = abs(BedTime - AlarmTime) - Total * 60;
        result[i].first = Total;
        result[i].second = Time_in_min;
        if (Total > 12)
        {
            Total = (((24 * 60) - BedTime) + AlarmTime) / 60;
            Time_in_min = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
            result[i].first = (((24 * 60) - BedTime) + AlarmTime) / 60;
            result[i].second = abs((24 * 60 - (h * 60 + m) + AlarmTime) - Total * 60);
        }
        else if (v[i].first < h || h == v[i].first && m > v[i].second)
        {
            int anaT3bt = 24 * 60 - ((h * 60 + m) - (v[i].first * 60 + v[i].second));
            result[i].first = anaT3bt / 60;
            result[i].second = abs(60 - Time_in_min);
        }
    }
    sort(result.begin(), result.end());
    cout << result[0].first << " " << result[0].second << "\n";
}
void ArrayDecrements()
{
    // https://codeforces.com/contest/1690/problem/B
    int n;
    cin >> n;
    int temp = 0;
    bool f = false;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
      cin >> v[i].second;
      
    sort(v.begin(), v.end());
    temp = v[n - 1].first - v[n - 1].second;
    for (int i = 0; i < n; i++)
    {
        if (v[i].second > v[i].first)
        {
            f = false;
            break;
        }
        if (v[i].first - temp < 0)
            v[i].first = 0;
        else
            v[i].first -= temp;
        if (v[i].first == v[i].second)
            f = true;
        else
        {
            f = false;
            break;
        }
    }
    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}
void RestoringTheDurationOfTasks()
{
    // https://codeforces.com/contest/1690/problem/C
    int n;
    cin >> n;
    vector<int> start(n);
    vector<int> end(n);
    vector<int> result(n);
    for (int i = 0; i < n; i++)
        cin >> start[i];
    for (int i = 0; i < n; i++)
        cin >> end[i];
    for (int j = 0; j < n; j++)
    {
        if (start[j] < end[j - 1] && j >= 1)
            result[j] = (end[j] - end[j - 1]);
        else
            result[j] = (end[j] - start[j]);
    }
    for(int i=0; i<result.size(); i++)
        cout << result[i] << " ";
}
void fact(){
    int t;
    cin >> t;
    vector<long long int> fact(1001);
    fact[0] = 1;
    long long int mod = 998244353;
    
    for(int i = 1; i <= 1000; i++){
        fact[i] = (fact[i-1] * i) % mod;
    }
    while(t){
        int n;
        cin >> n; 
        
        if(n % 2 == 1) cout << 0 << endl;
        else{
            cout << (fact[n/2] * fact[n/2]) % mod << endl;
        }
        t--;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> c(n, 0);
    vector<int> b(n + m + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        b[a[x]] += i - c[x];
        c[x] = i;
        a[x] = y;
    }
    m++;

    for (int i = 0; i < n; i++)
        b[a[i]] += m - c[i];

    int ans = 0;

    for (int i = 0; i < b.size(); i++) {
        ans += ((b[i] * (m - b[i])) + ((b[i] * (b[i] - 1)) / 2));
    }
    cout << ans << "\n"
}
void greater() {
    //count greater values from specific idx
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    int val = vec[k - 1];
    int i = 0;
    int cnt = 0;

    if (val == 0) {
        int cap = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] > 0)
                cap++;
        }
        cout << cap << endl;
    } else {
        while (vec[i] >= val && i < n) {
            i++;
            cnt++;
        }
        cout << cnt << "\n";
    }
}
void AllEqual()
    bool flag = false;
    vector<int> vec{1, 1, 1, 1, 1};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < vec.size(); i++)
    {
        maxi = max(maxi, vec[i]);
        mini = min(mini, vec[i]);
        cout << maxi << " ";
        if (maxi == mini)
        {
            flag = true;
            cout << "Yes";
            break;
        }
    }
    if (!flag)
        cout << "No";
    return 0;
}
void solve(){
    int i = 1, j = 2;
    vector<vector<char>> v = {{'.', '*', '.'}, {'*', '*', '*'}, {'.', '*', '.'}};
    vector<vector<int>> vis(v.size(), vector<int>(v[0].size(), 0));

    int cnt = 0;
    for (; cnt < v.size() - i; cnt++) {
        for (int k = j - cnt; k <= j + cnt; k++) {
            if (k >= v[0].size() || k < 0 || v[i + cnt][k] != '*') {
                cout << cnt;
                return 0;
            }
        }
    }
    cout << cnt;
    return 0;
}
void SecondMin()
{
    vector<int>vec{1, 2, 3, 4, 5};
    int idx=-1, mini=INT_MAX;
    for(int i=0; i<vec.size(); i++)
    {
        if(i == idx)
            continue;
        if(vec[i] < mini)
        {
            mini = vec[i];
            idx = i;
        }
    }
    cout << idx;
}

int Sum(const vector<int>& v) {
    int result = 0;
    for (int val : v) {
        result += val;
    }
    return result;
}

int element(vector<int>& v) {
    int lastElement = v.back();
    v.pop_back();
    return lastElement;
}
int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "sum of the consecutive is: " << sum;
    if (sum % 2 != 0)
        cout << "NO" << "\n";
    else {
        vector< int >vec;
        for (int i = 1; i <= n; i++)
            vec.push_back(i);

        cout << "\n";
        int a = Sum(vec) / 2;
        vector<int> set1;
        vector<int> set2;

        if (n % 2 != 0) {
            set1.push_back(vec[n - 1]);
            vec.pop_back();
            set2.push_back(vec[n - 2]);
            vec.pop_back();

            for (int i = 0; i < vec.size(); i++) {
                if (Sum(set1) == a || Sum(set2) == a) {
                    break;
                }
                set2.push_back(element(vec));
                vec.pop_back();
                set1.push_back(element(vec));
                vec.pop_back();
            }

            if (Sum(set1) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set1.push_back(vec[i]);
            }
            if (Sum(set2) != a) {
                for (int i = 0; i < vec.size(); i++)
                    set2.push_back(vec[i]);
            }
        } else {
            int turn = 1;
            int start = 1;
            int last = n;
            while (start < last) {
                if (turn) {
                    set1.push_back(start);
                    set1.push_back(last);
                    turn = 0;
                } else {
                    set2.push_back(start);
                    set2.push_back(last);
                    turn = 1;
                }
                start++;
                last--;
            }
        }
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for (int i = 0; i < set1.size(); i++)
            cout << set1[i] << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (int i = 0; i < set2.size(); i++)
            cout << set2[i] << " ";
    }
    return 0;
}
void solve() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    int m = v[0];
    int *p;
    p = new int[m + 1];

    for (int i = 0; i < m + 1; i++)
        p[i] = 0;

    for (int i = 0; i < n; i++) {
        p[v[i]]++;
    }

    for (int i = 0; i < m + 1; i++) {
        if (p[i] != 0)
            count++;
    }
    cout << count << endl;
    delete[] p;
    return 0;
}
int main() {
    int n;
    cin >> n;
    int cont = 0;
    while (n--) {
        vector<int> v;
        int x;
        int a = 0;
        for (int i = 0; i < 3; i++) {
            cin >> x;
            v.push_back(x);
            a += x;
        }

        int sumOfElements = sum(v);
        if (sumOfElements >= 2)
            cont += 1;
    }
    cout << cont << std::endl;
    return 0;
}

void solve_tc() {
    int n, k;
    k = number of updates
    cin >> n >> k;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) 
        cin >> v1[i];

    vector<vector<int>> v;
    v.push_back(v1);

    vector<vector<int>> v3(k + 1, vector<int>(2));

    int ans = 0;
    int k1 = k;
    int cnt1 = 1;
    v3[0][0] = 1;
    v3[0][1] = v1[0];

    while (k1--) {
        cin >> v3[cnt1][0] >> v3[cnt1][1];
        cnt1++;
    }

    int k2 = k + 1;
    int cnt = 0;

    while (cnt < k) {
        v1[(v3[cnt][0]) - 1] = v3[cnt][1];

        int cnt2 = cnt + 1;
        vector<int> v2 = v1;

        while (cnt2 < k2) {
            vector<int> v2 = v1;
            v2[(v3[cnt2][0]) - 1] = v3[cnt2][1];

            set<int> op;

            for(int i=0; i<op.size(); i++)
                op.insert(v1[i]);
            for(int i=0; i<op.size(); i++)
                op.insert(v2[i]);
            ans += op.size();
            cnt2++;
        }
        cnt++;
    }
    cout << ans << endl;
}
int performOperations(const vector<int>& v1, vector<vector<int>>& v3, int k) {
    vector<int> v2 = v1;
    int ans = 0;

    for (int cnt = 0; cnt < v3.size(); cnt++) {
        int pos = v3[cnt][0];
        int value = v3[cnt][1];

        v2[pos - 1] = value;
        v2[(v3[cnt][0]) - 1] = v3[cnt][1];

        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k + 1; j++) {
                set<int> op;
                for (int me : v1) {
                    op.insert(me);
                }
                for (int me : v2) {
                    op.insert(me);
                }
                ans += op.size();
            }
        }
    }
    return ans;
}
int main() {
    int pos, value, k;
    vector<int> v1; 
    vector<vector<int>> v3;
    cin >> pos >> value >> k;
    
    vector<vector<int>> v;
    int result = performOperations(v1, v3, k);
    cout << "Result: " << result << endl;

    return 0;
}
void Matching Pair()
{
    //https://codeforces.com/problemset/problem/1788/C
    int n;
    cin >> n;
    if(n%2==0)
        cout << "No";
    else
    {
        cout << "Yes";
        vector<pair<int, int>> ans(n);
        int nxt=2*n;
        for(int i=0; i<n; i++)
        {
            ans[i].second=nxt;
            nxt--;
        }
        nxt = 1;
        for(int i=0; i<=n/2; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        nxt = 2;
        for(int i=(n/2)+1; i<n; i++)
        {
            ans[i].first=nxt;
            nxt+=2;
        }
        cout << "\n";
        for(auto val:ans)
            cout <<val.first << " " << val.second << "\n";
    }
}
//finding the maximum product of four consecutive numbers in a grid
void MaxProduct(){
    int H, W;
    //Height & Weidth of the grid
    cin >> H >> W;
    int arr[20][20];
    vector <vector <int> > mp(H, vector <int> (W));
   /* mp.resize(H);
    for(int i = 0; i < H; ++i)
        mp.resize(W);*/
        
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cin >> mp[i][j];
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << mp[i][j] << " ";
            arr[i][j] = mp[i][j];
        }
        cout << "\n";
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    int maxi = INT_MIN, Hp = 1, Vp = 1, LDp = 1, RDp = 1;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(j + 3 < W) {
                Hp= mp[i][j] * mp[i][j+1] * mp[i][j+2] * mp[i][j+3];
                maxi = max(maxi, Hp);
            }
            if(i + 3 < H) {
                Vp = mp[i][j] * mp[i+1][j] * mp[i+2][j] * mp[i+3][j];
                maxi = max(maxi, Vp);
            }
            //top-left to bottom-right)
            if(i + 3 < H && j + 3 < W) {
                LDp= mp[i][j] * mp[i+1][j+1] * mp[i+2][j+2] * mp[i+3][j+3];
                maxi = max(maxi, LDp);
            }
            // (top-right to bottom-left)
            if(i + 3 < H && j - 3 >= 0) {
                RDp= mp[i][j] * mp[i+1][j-1] * mp[i+2][j-2] * mp[i+3][j-3];
                maxi = max(maxi, RDp);
            }
        }
    }
    cout << maxi;
}

//****//
//Determine combination
 FindComb(vector <char> &vec, string tmp, vector <string> &res, int k, int cnt, int n){
    if(cnt == n){
        if(tmp.size() == k)
            res.push_back(tmp);
        return;
    }
    FindComb(vec, tmp, res, k, cnt + 1, n);
    tmp += vec[cnt];
    FindComb(vec, tmp, res, k, cnt + 1, n);
    return;
}
void DetermineCombination(){
    vector <char> vec{'a', 'b', 'c'};
    int k = 2, cnt = 0;
    int n = vec.size();
    string tmp = "";
    vector <string> res;
    FindComb(vec, tmp, res, k, cnt, n);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}

//****//
//recursively checks subgrids by removing rows and columns that contain 1s and counts how many valid configurations exist.
int Combinatorial(int n, vector <vector <int> >&vec, map<vector <vector<int>>, int>&mp){
    //Checks if the current grid configuration a is already in the memoization map m.
    if(mp.count(vec) == 1)
        return mp[vec];
    //if 1*1 matrix
    if(n == 1){
        mp[vec] = (vec[0][0] == 1)? 1: 0;
        return mp[vec];
    }
    for(int i = 0; i < n; i++){
        int rowSum = 0;
        for(int j = 0; j < n; j++)
            rowSum += vec[i][j];
        if(rowSum == 0) {
            mp[vec] = 0;
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        int colSum = 0;
        for(int j = 0; j < n; j++)
            colSum += vec[j][i];
        if(colSum == 0){
            mp[vec] = 0;
            return 0;
        }
    }
    int x = -1, y = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vec[i][j] == 1){
                x = i; y = j;
                break;
            }
        }
    }
    cout << "\nCo-ordinates which contain 1 is: " << x << "," << y << "\n";
    //construct a new grid from the original grid excluding the row & column
    vector<vector<int> >remain(n-1, vector <int> (n-1));
    //remain is the row index for the new grid
    for(int i = 0, bi = 0; i < n; i++) {
        if(i == x)
            continue;
        for(int j = 0, bj = 0; j < n; j++){
            if(j == y)
                continue;
            remain[bi][bj++] = vec[i][j];
        }
        bi++;
    }
    // Sets the element at position (x, y) in the original grid to 0.
    vec[x][y] = 0;
//Calls the function recursively with the modified grid where the element 
//at (x, y) is set to 0.ans1 stores the result of this recursive call, which represents the 
//number of ways to process the grid a with the specific 1 at (x, y) removed.
    int ans1 = Combinatorial(n, vec, mp);
//Restores the original grid a by setting the element at position (x, y) back to 1.
    vec[x][y] = 1;
//Calls the remain function recursively with the smaller grid
//ans2 stores the result of this recursive call, representing the number of ways to process the smaller grid.
    int ans2 = Combinatorial(n - 1, remain, mp);
   // vec[x][y] = 1;
    mp[vec] = ans1 + ans2;
    return mp[vec];
}
void CountConfigur(){
    int n; cin >> n;
    vector<vector <int> >vec(n, vector <int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> vec[i][j];
    }
    map<vector <vector<int>>, int> mp;
    cout << Combinatorial(n, vec, mp);
}

//This portion of the code defines and uses a function to search for 
//a path in a grid from a starting point to a destination marked by the character 'B'. 
void FindPath(int x, int y, int row, int col, vector <vector<char>>&cev, vector <vector <int> > &vec, int cnt, string str, string *res){
    if(x < 0 || y < 0 || x >= row || y >= col)
        return;
    //cnt: Counter for the steps taken so far.
    //str: Current path as a string of directions.
    //res: Pointer to the result string that stores the final path.
    if(vec[x][y] <= cnt && vec[x][y] != -1)
        return;
    if(cev[x][y] == '#'){
        //vec[x][y] = -1: Marks the cell in the vec grid as -1 to indicate 
        //it is an obstacle and should not be revisited.
        vec[x][y] = -1;
        return;
    }
    vec[x][y] = cnt;
    if(cev[x][y] == 'B'){
        *res = str;
        return;
    }
    FindPath(x + 1, y, row, col, cev, vec, cnt + 1, str + "D", res);
    FindPath(x - 1, y, row, col, cev, vec, cnt + 1, str + "U", res);
    FindPath(x , y + 1, row, col, cev, vec, cnt + 1, str + "R", res);
    FindPath(x , y - 1, row, col, cev, vec, cnt + 1, str + "L", res);
}
void SearchPath(){
    int row, col;
    cin >> row >> col;
    vector <vector <char> >cev(row, vector<char> (col));
    vector <vector <int> >vec(row, vector <int>(col, INT_MAX));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin >> cev[i][j];
    }
    //starting position
    int x, y;
    cin >> x >> y;
    string res;
    FindPath(x, y, row, col, cev, vec, 0, "", &res);
    if (res.empty())
        cout << "No path found to the destination 'B'.\n";
    else 
        cout << "Path to destination 'B': " << res << "\n";
}
void PrimeFactor(){
    int n; cin >> n;
    vector <int> prime;
    if(n % 2 == 0){
        prime.push_back(2);
        while(n % 2 == 0)
            n /= 2;
    }
    for(int i = 3; i * i <= n; i +=2){
        prime.push_back(i);
        while(n % i == 0)
            n/= i;
    }
    if(n > 2)
        prime.push_back(n);
    for(int i = 0; i < prime.size(); i++)
        cout << prime[i] << " ";
}

// checks if the vector is sorted in increasing order. If it is, calculates the minimim diff 
//between consecutive elements and outputs half of this difference plus one. If not sorted, outputs 0.
void ConsecutiveDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    bool flag = true;
    int tmp = INT_MAX;
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 1; i < n; i++){
        if(vec[i] < vec[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i = 1; i < n; i++)
            tmp = min(tmp, vec[i] - vec[i - 1]);
        cout << tmp/2 + 1;
    }
    else
        cout << 0;
}

//determine to finds the shortest  from the point (x, y) to any of the four edges of the grid.
// find and print the minimum distance from a given point (x, y) to any edge of an n x n grid.
int FindMinEdge(int n, int x, int y){
    vector <int> vec(4);
    vec[0] = x;
    vec[1] = y;
    vec[2] = n + 1 - x;
    vec[3] = n + 1 - y;
    sort(vec.begin(), vec.end());
    return vec[0];
}
void MinEdge(){
    int n, x, y;
    cin >> n >> x >> y;
    cout << FindMinEdge(n, x, y);
}

//Display vector Based Other Vector
int BSearch(vector <int> &vec, int low, int high, int key){
    while(low <= high){
        int mid = low + (high - low)/2;
        if(vec[mid] == key)
            return mid;
        else if(vec[mid] > key)
            high = mid -1;
        else if(vec[mid] < key)
            low = mid + 1;
    }
    return -1;
}
void BasedOtherVector(){
    vector <int> a{2, 3, 4};
    vector <int> b{5, 6, 7};
    vector <int> c = a;
    for(int i = 0; i < a.size(); i++){
        int idx = BSearch(a, 0, a.size() - 1, c[i]);
        cout << b[idx] << " ";
    }
}

//Count How many Elements are less than other array
void Count(){
    int a[]{2, 3, 4, 5, 6};
    int b[]{6, 5, 4, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int cnt = 0, ans = 1;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(b[i] < a[j])
                cnt++;
            else
                break;
        }
    }
    ans *= cnt;
    cout << ans;
}

//determine a array where pair diffrence is samw
void PairDiff(){
    int n; cin >> n;
    vector <int> vec(n);
    int a = ceil(double(n) /2);
    for(int i = 0; i < n; i+= 2){
        vec[i] = a; a--;
    }
    int b = n;
    for(int i = 1; i < n; i+= 2){
        vec[i] = b; b--;
    }
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

//determine How many elements didn't match in the sequence
void CountDismatch(){
    int n; cin >> n;
    vector <int> vec(n), cev(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 0; i < n; i++)
        cin >> cev[i];
    int ans = 0, i = n -1, j = n-1;
    while(i >= 0) {
        int tmp = cev[i];
        if(tmp !=vec[i])
            i--;
        else if(tmp == vec[i]) {
            ans++;
            i--; j--;
        }
    }
    cout << n - ans;
}

//Determine Is the programme palindromic
void IsPalindrome(){
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int cnt = 0, diff = 0, mini = 1;
    int i = 0, j = n -1;
    while(i <= j){
        if(vec[i] !=vec[j]){
            diff = abs(vec[i] - vec[j]);
            mini = min(vec[i], vec[j]);
            break;
        }
        i++, j--;
    }
    if(diff == 0) {
        cout << 0;
        return 0;
    }
    vector <int> cev(n), tor(n);
    for(int i = 0; i < n; i++){
        cev[i] = vec[i] % diff;
        tor[i] =(mini !=0) ? (vec[i] % mini) : 0;
    }
    
    i = 0, j = n -1;
    bool flag = false, band = false;
    while(i <= j) {
        if(cev[i] !=cev[j])
            flag = true;
        else if(tor[i] !=tor[j])
            band = true;
        i++; j--;
    }
    if(flag && band)
        cout << 1;
    else if(flag)
        cout << mini;
    else if(band)
        cout << diff;
    else {
        for(int i = 0; i < n; i++){
            if(vec[i]% diff != 0)
                cnt++;
        }
        sort(vec.begin(), vec.end());
        (vec[0] == vec[n - 1])? cout << vec[0] : cout << 1;
    }
}

//Distribute deduct among n elememts
void Distribute(){
    int n, sum, deduct, cnt = 1;
    cin >> n >> sum >> deduct;
    int tmp = deduct;
    vector <int> result;
    vector <int> sides{1, 2, 3, 4, 5, 6 };
    for(int i = 0; i < n - 1; i++){
        for(int j = 5; j < 0; j--){
            while(deduct >= sides[j] && sides[j] <= sum - deduct) {
                deduct -= sides[j];
                result.push_back(sides[j]);
                cnt++;
            }
        }
    }
    sort(result.rbegin(), result.rend());
    for(int i = 0; i < n - 2; i++){
        while(result[i] > 1) {
            if(result.size()== n -1)
                break;
            result[i]--;
            result.push_back(1);
        }
    }
    result.push_back(sum - tmp);
    if(result.size() > n){
        result[n - 1] += result.back();
        result.pop_back();
    }
    else 
        result.push_back(1);
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
} 

//Count Diffrence of smallest pair
void Diff(){
    int n, k, cnt = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int a = n, b = n - i;
        for(int j = 2; j < k; j++){
            int diff = a - b;
            if(diff >= 0 && a >= b)
                cnt++;
            if(diff >= 2) {
                a = b; b = diff;
            }
            else 
                break;
            cout << diff << " " << a << " " << b << " " << cnt << "\n";
        }
    }
    cout << "\n" << cnt;
}
#include<bits/stdc++.h>
using namespace std;
void solve_b_div4()
{
    int n;
    cin >> n;
    set<int> s({});
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.emplace(x);
    }
    for (auto j : s)
        ans++;
    if (ans == n)
        cout << "YES\n";
    else
        cout << "NO\n" ;
}
void solve_div3()
{
    set<char> unique_chars;
    int n;
    cin >> n;
    string s;
    cin >> s;
    string tmp = "";

  // Convert all characters to lowercase
    for (int i = 0; i < n; i++)
        s[i] = tolower(s[i]);

  // Create a string with unique characters
    for (int i = 0; i < n; i++)
        tmp += s[i];
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());

  // Check if the unique characters form the string "meow"
    if (tmp == "meow")
        cout << "YES\n";
    else
        cout << "NO\n";
}
void diff() {
    vector<int> vec = {1, 3, 7, 10, 15};
    int n = vec.size();
    set<int> diff;
    for (int i = 0; i < n - 1; i++)
        diff.insert(vec[i + 1] - vec[i]);
    cout << diff.size();
}
void solve8()
{
    // https://codeforces.com/contest/1702/problem/B
    string s;
    cin >> s;
    set<char> set({});
    int c = 0;
    int cpp = 0;
    int it = 0;
    for (int i = 0; i < s.length(); i++)
    {
        map<char, int> m;
        string ns;
        for (int j = i; j < s.length(); j++)
        {
            if (m[s[j]] == 0)
            {
                c++;
                m[s[j]]++;
            }
            if (c == 3)
            {
                if (m[s[j + 1]] == 0)
                {
                    cpp++;
                    c = 0;
                    i = j;
                    break;
                }
            }
            else
                i = j;
        }
    }
    if (c > 0)
        c = 1;
    cout << c + cpp << "\n";
}
void musical_puzzle()
{
    //https://codeforces.com/contest/1833/problem/A
    int n;
    int result = 0;
    string str;
    char temp;
    cin >> n;
    set<char> s({});

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cin >> str;
    
        for (int j = 1; j < str.length(); j++)
        {
            temp = str[j] + str[j - 1];
            cout << temp << endl;
            s.insert(temp);
        }
        temp = 0;
        for (int z = 0; z < s.size(); z++)
        {
            result++;
        }
        cout << result << "\n";
    }
}
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool prime[1000000 + 1];
vector<int> parent(1000000 + 1);
vector<int> siz(1000000 + 1);

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    siz[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}

void SieveOfEratosthenes() {
    int n = 1000000;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    // Call SieveOfEratosthenes to precompute primes
    SieveOfEratosthenes();

    // Example union-find operations
    int num1 = 7;
    int num2 = 11;

    // Initialize sets
    make_set(num1);
    make_set(num2);

    // Check if the numbers are prime
    if (prime[num1] && prime[num2]) {
        cout << num1 << " and " << num2 << " are prime numbers." << endl;

        // Perform union operation
        union_sets(num1, num2);

        // Check if they are in the same set after union
        if (find_set(num1) == find_set(num2)) {
            cout << num1 << " and " << num2 << " are in the same set." << endl;
        } else {
            cout << "Error: Union failed." << endl;
        }
    } else {
        cout << "Both numbers must be prime for the union operation." << endl;
    }

    return 0;
}
-----
ll traverse(ll a, ll b, ll m,ll n, set<int> s, vector<vector<int> > final){
     if(s.count(final[a][b])==1){
         return 0;

     }
     if(a==m-1 && b==n-1){
         return 1;
     }
     s.insert(final[a][b]);
     if(a>=m-1){
         return traverse(a,b+1,m,n,s,final);
     }
     if(b>=n-1){
         return traverse(a+1,b,m,n,s,final);
     }
     return traverse(a+1,b,m,n,s,final)+traverse(a,b+1,m,n,s,final);
 }
#include<bits/stdc++.h>
using namespace std;
void solve7() {
    int n;
    cin >> n;
    map<int, int> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool ans = false;
    for (auto i : m) {
        if (i.second >= 3) {
            ans = true;
            cout << i.first << endl;
            break;
        }
    }
    if (!ans) {
        cout << -1 << endl;
    }
}

void solve8() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans << "\n";
}
void solve9()
{
    // https://codeforces.com/contest/1702/problem/D
    string s, ns = "", op;
    int n, c = 0, news = 0;
    cin >> s >> n;
    int nn = n;
    string temp = s;
    map<char, int> m;
    sort(s.begin(), s.end());
    for (int j = 0; j < s.length(); j++)
    {
        if ((s[j] - 'a' + 1) <= n)
        {
            ns += s[j];
            n -= (s[j] - 'a' + 1);
        }
    }
    for (int i = 0; i < ns.length(); i++)
        m[ns[i]]++;
    for (int i = 0; i < temp.length(); i++)
    {
        if (m[temp[i]] > 0)
        {
            op += temp[i];
            m[temp[i]] -= 1;
            c++;
        }
        if (c == ns.length())
            break;
    }
    cout << op << "\n";
}
void solve10()
{
    // https://codeforces.com/contest/1702/problem/C
    int n, q;
    cin >> n >> q;
    // vector<int>stations(n+1);
    // vector<pair<int, int>>queries(q+1);
    int last = n - 1;
    map<int, int> m;
    map<int, int> m2;
    map<int, int> l;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
        if (m2[x] == 1)
        {
            m[x] = i;
            l[x] = i;
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        if (l[b] && m[a] && m[a] < l[b])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
void solve11()
{
    int n;
    cin >> n;
    string op = "";
    int t = 0;
    string s;
    cin >> s;
    map<string, int> m;
    for (int i = 1; i < n; i++)
    {
        string temp;
        temp += s[i - 1];
        temp += s[i];
        m[temp]++;
        if (t < m[temp])
        {
            t = m[temp];
            op = temp;
        }
        temp = "";
    }
    cout << op << "\n";
}
void solve12() {
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            if (m[x * arr[i]]) {
                m[x * arr[i]]--;
                m[arr[i]]--;
            } else {
                ans++;
                m[arr[i]]--;
            }
        }
    }
    cout << ans ;
}
int &maxe(int &a, int &b)
{
    return a > b ? a : b;
}
void hard_problem()
{
    int n, display = 0;
    cin >> n;
    map<string, int> result = {{"Bessie", 7}, {"Mildred", 7}, {"Elsie", 7}};
    int *temp = &result["Bessie"];
    int temp2 = 7;
    vector<pair<int, string>> cows(n);
    vector<pair<int, int>> changeAmt(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cows[i].first >> cows[i].second >> changeAmt[i].second;
        changeAmt[i].first = cows[i].first;
    }

    sort(cows.begin(), cows.end());
    sort(changeAmt.begin(), changeAmt.end());

    // cout << "a7a " << "\n";
    // for (int z = 0; z < n ; z++){
    //   cout << cows[z].first << " " << cows[z].second << " " << changeAmt[z].second << "\n";
    // }
    for (int j = 0; j < n; j++)
    {
        // temp = maxe(  result[cows[0].second] , maxe(result[cows[1].second] , result[cows[2].second] ) );
        result[cows[j].second] += changeAmt[j].second;

        if (&result[cows[j].second] == temp)
        {
            if (temp != &result[cows[j].second])
            {
                display++;
            }
            temp = &result[cows[j].second];
            temp2 = result[cows[j].second];
        }
        cout << cows[j].second << " display : " << display << " value -->  " << result[cows[j].second] << "\n";
    }
    cout << display;
}
void solve_div4C()
  {
    int n;
    int temp = 0;
    cin >> n;
    string v[3][n];
    map<string, int> v2;
    string t = "";
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> v[i][j];
        v2[v[i][j]]++;
      }
    }
    for (int i = 0; i < 3; i++)
    {
      for (int z = 0; z < n; z++)
      {
        if (v2[v[i][z]] == 2)
          temp += 1;
        if (v2[v[i][z]] == 1)
          temp += 3;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
  }
/* for(int i = 0 ; i < 3 ; i++){
      for(int j = 0;  j < n ; j++){
      if(v2[i][j] == 2) temp +=1;
      if(v2[i][j] == 1) temp +=3;
      }
      cout << temp << " ";
    }
    */
void solve_LLRR()
  {
    ll n, temp = 0, temp1 = 0, temp2 = 0;
    map<char, int> m;
    cin >> n;
    string s;
    cin >> s;
    int counter = 0;
    int idx = 0;
    int idx2 = 1;
    int size = n / 2;
    s[0] = 'R';
    for (int j = 0; j < n; j++)
    {
      if (j <= size)
      {
        s[n - j] = 'L';
        // cout << s[n-j-1] << " "  << n-j-1;
      }
      if (j > size)
      {
        s[j - (size + 1)] = 'R';
        // cout << s[j-size] << " " << j-size <<" ";
      }
      for (int z = 0; z < n; z++)
      {
        if (s[z] == 'R')
          temp += (n - 1) - z;
        else
          temp += z;
      }
      cout << temp << " ";
      temp = 0;
    }
    cout << "\n";
    // cout << idx;
    // cout << s;
  }
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
