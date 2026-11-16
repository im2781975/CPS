
using namespace std;
void BeautifulMatrix(){
    int x, y;
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                x = i; y = j;
        }
    }
    cout >> abs(x - 2) + abs(y - 2);
}
using namespace std;
void StoneOnTable(){
    int n, cnt = 0; cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1])
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void BearAndBigBrother(){
    int a, b, cnt = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
}
using namespace std;
void candiesAndASisters(){
    int t; cin >> t;
    int res[t];
    for(int i = 0; i < t; i++){
        int candies; cin >> candies;
        res[i] = (candies - 1)/2;
    }
    for(int i = 0; i < t; i++)
        cout << res[i] << " ";
}
using namespace std;
void loveUsername(){
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        int tmp = abs(arr[i + 1] - arr[i]);
        if(tmp > 1)
            cnt++;
    }
    cout << cnt;
}
using namespace std;
void PoliceRecruits(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int available = 0, crimes = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            available += arr[i];
        else{
            if(available > 0)
                available--;
            else
                crimes++;
        }
    }
    cout << crimes;
	
}
using namespace std;
void PoliceRecruite(){
    int n; cin >> n;
    int police = 0, crime = 0, cnt = 0;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        if(vec[i] < 0){
            crime++;
            if(police == 0)
                cnt++;
            else if(police && crime){
                police--;
                crime--;
            }
        }
        else
            police += vec[i];
    }
    cout << cnt;
}
using namespace std;
int removeDup(int arr[], int n){
    if(n == 0 || n == 1)
        return n;
    int j = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n - 1];
    return j;
}
void WannaGuy(){
    int n; cin >> n;
    int a, b; cin >> a >> b;
    int arr[a], tmp[b];
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    for(int i = 0; i < b; i++)
        cin >> tmp[i];
    removeDup(&arr[a], a);
    removeDup(&arr[b], b);
    int cnt = n;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == j)
                cnt--;
        }
    }
    for(int i = 0; i < b; i++){
        for(int j = 0; j < n; j++){
            if(tmp[i] == j)
                cnt--;
        }
    }
    (cnt == 0) ? cout << "Wann be guy" : cout << "Oh! keyboard";
}

using namespace std;
void Drinks(){
    int n; cin >> n;
    float sum = 0;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << sum / n;
}
using namespace std;
void sumOfRound(){
    int n; cin >> n;
    int ans[n], cnt = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ans[i] = 0;
        if(x % 10 == 0){
            cnt++;
            ans[i] = x;
        }
        else{
            while(x != 0){
                cnt++;
                x /= 10;
            }
        }
    }
    cout << "Count of Operation: " << cnt << "\n";
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
using namespace std;
void VasyaTheHipster(){
    int a, b, c; cin >> a >> b;
    if(a <= b)
        c = a;
    else
        c = b;
    cout << c << " " << (a + b - 2 * c) / 2;
}
using namespace std;
void Tram(){
    int n; cin >> n;
    int ans[n];
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        ans[i] = a + b;
    }
    int maxi = ans[0];
    for(int i = 1; i < n; i++){
        if(ans[i] > maxi)
            maxi = ans[i];
    }
    cout << maxi - 1;
}
