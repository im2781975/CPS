
int main()
{
    int ace;
    int er = 0;
    int fff = 0;
    int sda = 0;
    string s[200000];
    cin >> ace;
    int r = ace;
    for(;r > 0;)
     {
         cin >> s[fff];
        fff = fff + 1;
        r = r - 1;
     }
    for(;ace > 0;)
    {
        if(s[er][0] == 'T')
        sda = sda + 4;
       else if(s[er][0] == 'C')
        sda = sda + 6;
       else if(s[er][0] == 'O')
        sda = sda + 8;
       else if(s[er][0] == 'D')
        sda = sda + 12;
       else if(s[er][0] == 'I')
        sda = sda + 20;
        er = er + 1;
        ace = ace - 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int a[10];
    int s = 5;
    int qef = 0;
    int kol;
    int wef = 0;
    cin >> ace >> kol;
    int d = ace;
     int er = ace;
    int sda = ace;
    wef = wef + kol;
    a[0] = 5;
    a[1] = 10;
    a[2] = 15;
    a[3] = 20;
    a[4] = 25;
    a[5] = 30;
    a[6] = 35;
    a[7] = 40;
    a[8] = 45;
    a[9] = 50;
    if(wef > 240)
    cout << 0;
    else if(wef <= 240)
    for(;ace > 0;)
    {
    wef = wef + s;
    s = s + 5;
    ace = ace - 1;
    }
    if(wef <= 240)
    cout << er;
    if(wef > 240)
    {
      for(;;)
      {
          qef = qef + 1;
          wef = wef - a[d - 1];
          if(wef <= 240)
          {
             sda = sda - qef;
             qef = qef - 1;
             break;
          }
          d = d - 1;
      }
      cout << sda;
      return 0;
    }
}
*/
/*
int main()
{
    int ace = 0;
    int sd;
    int ds = 0;
    int l = 0;
    int d = 0;
    int f = 0;
    int b = 0;
    string s;
    int er = 0;
    cin >> s;
    int sda = s.size();
    for(;sda > 0;)
    {
        if(s[ds] > 90)
            ace = ace + 1;
        else if(s[ds] <= 90)
            er = er + 1;
        ds = ds + 1;
        sda = sda - 1;
    }
    if(ace >= er)
        for(;d < s.size();)
        {
           if(s[l] <= 90)
            s[l] = s[l] + 32;
            d = d + 1;
            l = l + 1;
        }
        if(ace < er)
            for(;b < s.size();)
            {
              if(s[f] > 90)
                s[f] = s[f] - 32;
                f = f + 1;
                b = b + 1;
            }
            cout << s;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef = 1;
    int kol = 0;
    cin >> ace >> er >> sda;
    for(;qef <= sda;)
    {
        if(qef % ace == 0 && qef % er == 0)
            kol = kol + 1;
            qef = qef + 1;
    }
    cout << kol;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    if(er - ace != 1 && er - ace != 0 && ace - er != 1 && ace - er != 0)
        cout << "NO";
    else if(er - ace == 1 || ace - er == 1)
        cout << "YES";
        else if(ace == 0 && er == 0)
         cout << "NO";
    else if(ace == er)
        cout << "YES";
    else
        cout << "NO";
        return 0;
}
*/
/*
int main()
{
   int64_t ace;
   cin >> ace;
   if(ace == 0)
    cout << 1;
   else if(ace % 4 == 0)
    cout << 6;
   else if((ace - 1) % 4 == 0)
    cout << 8;
   else if((ace - 2) % 4 == 0)
    cout << 4;
   else if((ace - 3) % 4 == 0)
    cout << 2;
    else
     cout << "NO";
     return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int qef;
    int kol;
    int wef;
    int der;
    cin >> ace >> er >> sda >> qef;
    kol = min(ace,min(sda,qef));
    ace = ace - min(ace,min(sda,qef));
    wef = min(ace,er);
    kol = kol*256;
    wef = wef*32;
    der = kol + wef;
    cout << der;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    cin >> ace >> er;
    for(;ace <= er;)
    {
        ace = ace*3;
        er = er*2;
        sda = sda + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int64_t ace = 2;
    int er;
    int64_t sda = 0;
    int qef = 0;
    cin >> er;
    for(;qef < er;)
    {
        sda = sda + ace;
        ace = ace*2;
        qef = qef + 1;
    }
    cout << sda;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int64_t er = 0;
    cin >> ace;
    for(;ace > 0;)
    {
        if(ace == 1000000000)
            er = er + 10;
       else if(ace >= 100000000)
            er = er + 9;
       else if(ace >= 10000000)
            er = er + 8;
       else if(ace >= 1000000)
            er = er + 7;
       else if(ace >= 100000)
            er = er + 6;
       else if(ace >= 10000)
            er = er + 5;
       else if(ace >=1000)
            er = er + 4;
       else if(ace >= 100)
            er = er + 3;
       else if(ace >= 10)
            er = er + 2;
       else if(ace < 10)
            er = er + 1;
            ace = ace - 1;
    }
    cout << er;
    return 0;
}
*/
/*
int main()
{

    int er;
    int wer = 0;
    int sd = 0;
    int qwe = 0;
    int wet = 0;
    int wef = 0;
    int e = 0;
    int d = 0;
    cin >> er;
    int i = er;
    int ee = er;
    int iop = er;
    int ace[er];
    int sda[i - 1];
    int qef[ee - 2];
    int ftg = er;
    for(;er > 0;)
    {
        cin >> ace[d];
        d = d + 1;
        er = er - 1;
    }
    for(;i - 1 > 0;)
    {
       cin >> sda[sd];
       sd = sd + 1;
       i = i - 1;
    }
    for(;ee - 2 > 0;)
    {
        cin >> qef[wer];
        ee = ee - 1;
        wer = wer + 1;
    }
    for(;ftg > 0;)
    {
        qwe = qwe + ace[e] + ace [e + 1];
        cout << qwe;
        ftg = ftg - 1;
        if(ftg == 0)
         break;
         if(iop > e)
        wet = wet + sda[e] + sda [e + 1];
         if(iop == e)
              wet = wet + sda[e];
        ftg = ftg - 1;
        if(ftg == 0)
          break;
        if(iop > e)
        wef = wef + qef[e] + qef [e + 1];
        if(iop == e)
         wef = wef + qef[e];
        e = e + 2;
    }
    qwe = qwe - wet;
    wet = wet - wef;
    cout << qwe <<'\n'; wet;
    return 0;
}
*/
/*
int main()
{
    int er = 8;
    string s;
    cin >> s;
    if(s[0] == 'a' || s[0] == 'h')
        er = er - 3;
    if(s[1] == '1' && er == 8 || s[1] == '8' && er == 8)
        cout << 5;
    else if(s[1] == '1' && er == 5 || s[1] == '8' && er == 5)
        cout << 3;
        else
    cout << er;

}
*/
/*
int main()
{
    int ace;
    int we = 0;
    cin >> ace;
    int sda = ace;
    int er[ace];
    for(;sda > 0;)
    {
        cin >> er[we];
        we = we + 1;
        sda = sda - 1;
    }
      if(ace >= 1 && er[ace - 1] == 15)
        cout << "DOWN";
      else if(ace >= 1 && er[ace - 1] == 0)
        cout << "UP";
    else if(ace == 1)
        cout << -1;
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == -1)
        cout << "UP";
    else if(ace > 1 && er[ace - 2] - er[ace - 1] == 1)
        cout << "DOWN";
        return 0;
}
*/
/*
int main()
{
    string s;
    char r = '.';
    cin >> s;
    int er = 0;
    int ace = s.size();
    for(;ace > 0;--ace)
    {
        if(s[er] == 69 || s[er] == 65 || s[er] == 63 || s[er] == 117 || s[er] == 85 || s[er] == 89 || s[er] == 79 || s[er] == 121 || s[er] == 111 || s[er] == 97 || s[er] == 101 || s[er] == 105);
            s[er] = '.';

    }

}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    if(ace % 2 == 0)
        cout << ace/2;
    else
        cout << (ace + 1)/2 - ace - 1;
    return 0;
}
*/
/*
int main()
{
   int er;
   int ace;
   int fg = 0;
   int d = 0;
   int f = 0;
    cin >> er >> ace;
    int de = er;
    int sda[er];
    for(;er > 0;--er)
    {
        cin >> sda[d];
        d = d + 1;
    }
    for(;de > 0;)
    {
        sda[f] = sda[f] + ace;
        if(sda[f] <= 5)
            fg = fg + 1;
        f = f + 1;
        de = de - 1;
    }
    fg = fg/3;
    cout << fg;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int sda = 0;
    int d = 5;
    int e = 5;
    int er[5][5];
    for(int w = 0;w < 5;++w)
    {
        for(int we = 0;we < 5;++we)
        {
            cin >> er[w][we];
        }
    }
    if(er[0][0] == 1||er[0][4] == 1||er[4][0] == 1||er[4][4] == 1)
        cout << 4;
    if(er[0][1] == 1||er[1][0] == 1||er[3][0] == 1||er[0][3] == 1||er[4][1] == 1||er[1][4] == 1||er[4][3] == 1||er[3][4] == 1)
        cout << 3;
    if(er[0][2] == 1||er[2][0] == 1||er[1][1] == 1||er[3][3] == 1||er[4][2] == 1||er[2][4] == 1||er[1][3] == 1||er[3][1] == 1)
        cout << 2;
    if(er[2][1] == 1||er[1][2] == 1||er[3][2] == 1||er[2][3] == 1)
        cout << 1;
    if(er[2][2] == 1)
        cout << 0;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int ert = 0;
    int w = 0;
    int frr = 0;
    int er;
    int sda = 0;
    int f = 0;
    cin >> ace >> er;
    int qef[ace];
    for(int s = ace;s > 0;--s)
    {
        cin >> qef[sda];
        sda = sda + 1;
    }
    for(int e = ace - 1;e > 0;--e)
    {
        qef[0] = qef[0] + qef[f + 1];
        f = f + 1;
    }
    frr = frr + qef[0];
    if(qef[0] == 0)
    {
        cout << 0;
        return 0;
    }
    if(qef[0] > 0)
        for(;qef[0] > 0;)
    {
        qef[0] = qef[0] - er;
        ert = ert + 1;
    }
    if(frr < 0)
    {
         for(;frr < 0;)
        {
            frr = frr + er;
        w = w + 1;
        }
        cout << w;
        return 0;
    }
   cout << ert;
   return 0;
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    int we = 0;
    int d = 0;
    int b = 0;
    cin >> ace;
    int sda = ace*2;
    int er[ace*2];
    ace = ace*2;
    for(;ace > 0;--ace)
    {
        cin >> er[f];
        f = f + 1;
    }
    for(;we < sda;)
    {
        if(er[we] > er[we + 1])
            d = d + 1;
        if(er[we] < er[we + 1])
            b = b + 1;
        we = we + 2;
    }
    if(d > b)
        cout << "Mishka";
    if(d < b)
        cout << "Chris";
    if(d == b)
        cout << "Friendship is magic!^^";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace >> er >> sda;
    er = er/2;
    sda = sda/4;
    er = min(ace,min(er,sda));
    er = er*7;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    ace = ace/er;
    ace = ace + 1;
    er = er*ace;
    cout << er;
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    int d = ace;
    ace = 0;
    for(;er < d;--d)
    {
        ace = ace + d*6;
    }
    cout << ace + 1;
    return 0;
}
*/
/*
int main()
{
    int ace = 0;
    int er = 0;
    string s;
    string we;
    string e;
    cin >> s;
    int y = s.size();
    if(s.size() % 2 == 0)
    {
         cout << "NIE";
         return 0;
    }
    if(s.size() == 1)
    {
        cout << "TAK";
        return 0;
    }
    else
    {
        ace = ace + s.size();
        ace = (ace - 1)/2;
        we = s.substr(0,ace);
        e = s.substr(ace + 1,s.size());
        reverse(we.begin(),we.end());
        int a = we.size();
        for(;a > 0;)
        {
            if(we[er] == 'b')
                we[er] = 'd';
            else if(we[er] == 'B')
                we[er] = 'd';
            else if(we[er] == 'd')
                we[er] = 'b';
            else if(we[er] == 'D')
                we[er] = 'b';
                er += 1;
                a = a - 1;
        }
        if(we == e)
            cout << "TAK";
        else
            cout << "NIE";
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int f = 0;
    cin >> ace;
    string s[ace];
    for(;ace > 0;--ace)
    {
        cin >> s[f];
        if(s[f].size() <= 10)
            cout << s[f] << '\n';
        else
            cout << s[f][0] << s[f].size() - 2 << s[f][s[f].size() - 1] << '\n';
            f = f + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int d = ace;
    int s = 0;
    int dd = d;
    int er = ace;
    for(;er-1 > 0;--er)
    {
        ace = ace*dd;
        s = 1;
    }
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    int er;
    int e = 1;
    cin >> ace >> er;
    for(;e <= 9;++e)
    {
        if((ace*e - er) % 10 == 0|| ace*e % 10 == 0)
        {
            cout << e;
            return 0;
        }
    }
    cout << 10;
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er = ace;
    cout << ace/2 << '\n';
    if(er % 2 == 0)
    {
       er = er/2;
       for(;er > 0;--er)
           cout << 2 << ' ';
    }
    else
    {
        er = er/2 - 1;
        for(;er > 0;--er)
            cout << 2 << ' ';
        cout << 3;
    }
    return 0;
}
*/
/*
void f(int arr[], int sz)
{
    int ee = 0;
    int rr = 1;
    int ree = 0;
    for(int i = 0;i < sz - 1;++i)
    {
        if(arr[ee] > arr[rr])
        {
            ree = arr[ee];
            arr[ee] = arr[rr];
            arr[rr] = ree;
        }
        ee = ee + 1;
        rr = rr + 1;
    }
}
int main()
{
    int ace;
    int r = 0;
    cin >> ace;
    int ew = ace;
    int e = 0;
    int er[ace];
    for(int w = ace;w > 0;--w)
    {
        cin >> er[e];
        e = e + 1;
    }
    f(er,ace);
    for(;ew > 0;--ew)
    {
        cout << er[r] << ' ';
        r = r + 1;
    }
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];


}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> s;
    ace = s.size()/2;
    int er = 0;
    int sda = 0;
    string s1;
    string s2;
    if(s.size() % 2 == 0)
        s1 = s.substr(0,ace);
    else if(s.size() % 2 == 1)
        s1 = s.substr(0,ace);
    if(s.size() % 2 == 0)
        s2 = s.substr(ace,ace);
    else if(s.size() % 2 == 1)
        s2 = s.substr(ace + 1,ace);
        reverse(s1.begin(),s1.end());
        for(int d = 0;d < s1.size();++d)
        {
            if(s1[d] != s2[d])
                er = er + 1;
        }
        if(s.size() % 2 == 1 && er == 1 || s.size() % 2 == 1 && er == 0 || s.size() % 2 == 0 && er == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda = ace;
    if(er > ace)
        cout << ace;
    if(er == ace)
        cout << ace + 1;
    if(er < ace)
        for(;;)
        {
            ace = ace + sda/er;
            sda = sda/er;
            if(sda < er)
                {
                    cout << ace;
                    return 0;
                }
        }

}
*/
/*
int main()
{
    int ace;
    string s;
    cin >> ace >> s;
    string s1[ace];
    for(int d = 0;d < ace;++d)
    {
        cin >> s1[d];
    }
    if(ace % 2 == 0)
        cout << "home";
    else
        cout << "contest";
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    cin >> ace >> er >> sda;
    if(er < ace && sda < ace)
        cout << -1;
    else
        cout << er/ace + sda/ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int der = 0;
    cin >> ace;
    int er[ace];
    int d = ace;
    for(int e = 0;e < ace; ++e)
        cin >> er[e];
    for(int f = 0;f < ace/2;++f)
    {
        if(f % 2 == 0)
            {
                der = er[f];
                er[f] = er[d - 1];
                er[d - 1] = der;
            }
            d = d - 1;
    }
    for(int s = 0;s < ace;++s)
    {
        cout << er[s] << ' ';
    }
    return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t sda;
    int64_t d = 0;
    int64_t as = 0;
    int64_t qef = 0;
    cin >> ace >> er >> sda;
    qef = max(ace,max(er,sda));
    as = qef;
    d = qef;
    qef = qef - ace;
    if(qef > 0)
        qef = qef - 1;
    as = as - er;
    if(as > 0)
        as = as - 1;
    d = d - sda;
    if(d > 0)
        d = d - 1;
    qef = qef + as + d;
    cout << qef;
}
*/
/*
int main()
{
    int ace;
    int er = 1;
    cin >> ace;
    for(;ace > 0;)
    {
        ace = ace - er;
        er = er + 1;
    }
    if(ace < 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace/2*3;
    cout << ace;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    ace = ace - 10;
    if(ace > 0 && ace < 10 || ace == 11)
        cout << 4;
    else if(ace == 10)
        cout << 15;
    else
        cout << 0;

}
*/
/*
int main()
{
    int a;
    cin >> a;
    int b[a];
    int dd = 0;
    for(int s = 0;s < a;++s)
        cin >> b[s];
        int sd = 0;
    for(int y = 0;y < a;++y)
        sd = sd + b[y];
    if(sd % 2 == 0)
        for(int df = 0;df < a;++df)
     {
         if(b[df] % 2 == 0)
            dd = dd + 1;
     }
    if(sd % 2 == 1)
        for(int we = 0;we < a;++we)
    {
        if(b[we] % 2 == 1)
            dd = dd + 1;
    }
    cout << dd;
    return 0;
}
*/
/*
int main()
{
    int a;
    int b = 0;
    cin >> a;
    int c[a];
    for(int y = 0;y < a;++y)
        cin >> c[y];
        if(a == 1)
        {
           cout << 1;
           return 0;
        }
    int d = c[0];
    int e = c[1];
    int er = 0;
    int ed = 0;
    er = min(d,e);
    ed = max(d,e);
    for(int r = 2;r < a;++r)
    {
        if(er > c[r])
        {
            swap(er,e);
            er = c[r];
        }
        else if(ed > c[r])
            ed = c[r];
    }
    if(er == ed)
        {
            cout << "Still Rozdil";
            return 0;
        }
    else
        for(;;++b)
        {
            if(c[b] == er)
            {
                cout << b + 1;
                return 0;
            }
        }
}
*/
/*
int main()
{
    int a;
    int c = 0;
    int d = 0;
    int e = 0;
    cin >> a;
    int b[a];
    for(int y = 0;y < a;++y)
        cin >> b[y];
    for(int u = 1;u < a + 1;++u)
    {
        if(u % 3 == 1)
            c += b[u - 1];
        else if(u % 3 == 2)
            d += b[u - 1];
        else if(u % 3 == 0)
            e += b[u - 1];
    }
    if(c > d && c > e)
        cout << "chest";
    else if(d > c && d > e)
        cout << "biceps";
    else
        cout << "back";
    return 0;
}
*/
/*
int main()
{
    int64_t a;
    int64_t b;
    int64_t c;
    int64_t d = 0;
    cin >> a >> b >> c;
    if(a >= c || b >= c)
    {
        cout << 0;
        return 0;
    }
    else if(b <= 0)
    {
        cout << -1;
        return 0;
    }
    else
    {

        a = c - a;
        d = a % b;
        if(d != 0)
            d += 1;
        d = d - a % b;
        d += a/b;
        cout << d;
        return 0;
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda = 0;
    int wef = 0;
    int64_t kol = 0;
    int64_t qev = 0;
    cin >> ace >> er;
int64_t b = 0;
int we = 0;
    int64_t as[ace];
    for(;wef < ace;++wef)
    {
        cin >> as[wef];
    }
    if(er == 0)
    {
        cout << 0;
        return 0;
    }

    for(;ace > 0;--ace)
    {
         qev = qev + 1;
        if(b + as[sda] > 8)
            {
              we = as[sda] - 8;
               kol = kol + 8;
            }
        else if(b + as[sda] < 8)
        {
              kol = kol + b + as[sda];
              b = 0;
        }
            b = b + we;
        if(kol >= er)
        {
            cout << qev;
            return 0;
        }
        ++sda;
        we = 0;
    }
    cout << -1;
    return 0;


}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int b[ace];

    for(int a = 0;a < ace;++a)
        cin >> b[a];
        int ss = b[0];
    for(int s = 1;s < ace;++s)
    {
       ss = max(ss,b[s]);
    }
    ss = ss - 25;
    if(ss > 0)
        cout << ss;
    else
        cout << 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    int dd;
    int kol;
    cin >> ace >> er >> sda >> dd >> kol;
    int sd = ace;
     ace = ace*er + dd*2;
     sda = sda*sd + kol*2;
     if(ace < sda)
        cout << "First";
     if(ace > sda)
        cout << "Second";
     if(ace == sda)
        cout << "Friendship";
     return 0;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    cin >> ace >> er;
    ace = ace/er;
    if(ace % 2 == 1)
        cout << "yes";
    else
        cout << "no";
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int d = 0;d < ace;++d)
        cin >> er[d];
        int f = er[0];
        int s = 0;
    for(int e = 1;e < ace;++e)
        f = max(f,er[e]);
    for(int we = 0;we < ace;++we)
    {
        s = s + f - er[we];
    }
    cout << s;
    return 0;
}
*/
/*
int main()
{
    int B = 0;
    int u = 0;
    int l = 0;
    int b = 0;
    int a = 0;
    int s = 0;
    int r = 0;
    int ace;
    string s1;
    cin >> s1;
    for(int d = 0;d < s1.size();++d)
    {
        if(s1[d] == 66)
            ++B;
        if(s1[d] == 117)
            ++u;
        if(s1[d] == 108)
            ++l;
        if(s1[d] == 98)
            ++b;
        if(s1[d] == 97)
            ++a;
        if(s1[d] == 115)
            ++s;
        if(s1[d] == 114)
            ++r;
    }
    a = a/2;
    u = u/2;
    ace = min(B,min(u,min(l,min(b,min(a,min(s,r))))));
    cout << ace;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    cin >> ace >> er;
    int sda[ace];
    int rr = 0;
    for(int d = 0;d < ace;++d)
        cin >> sda[d];
    for(int r = 1;r < ace;++r)
    {
        rr = rr + 1;
        if(sda[r] - sda[r - 1] > er)
            rr = 0;
    }
    rr = rr + 1;
    cout << rr;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er;
    int sda;
    cin >> ace;
    int f[ace];
    for(int s = 0;s < ace;++s)
        cin >> f[s];
    er = f[0] - f[1];
    for(int ss = 2;ss < ace;++ss)
    {
        if(f[ss - 1] - f[ss] != er && f[ss - 1] - f[ss] != f[ss - 1]*2)
        {
            cout << f[ace - 1];
            return 0;
        }
    }
    if(f[ace - 1] < 0 || er < 0)
    {
        cout << f[ace - 1] - er;
        return 0;
    }
    cout << f[ace - 1] + er;
    return 0;
}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int t[ace];
    for(int e = 0;e < ace;++e)
        cin >> t[e];
    if(ace == 1)
    {
        if(t[0] == 1)
            cout << "YES";
        else
            cout << "NO";
        return 0;
    }
    for(int s = 0;s < ace;++s)
    {
        if(t[s] == 0)
            er = er + 1;
        else if(t[s] == 1)
            sda = sda + 1;
    }
    if(er > 1 || er < 1)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
*/
/*
int main()
{
    int ace;
    int qwe = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    for(int a = 0;a < ace;++a)
        if(er[a]%2 == 1)
            qwe = qwe + 1;
    if(qwe == 1)
    {
        int d = 0;
        for(;d < ace;++d)
        {
             if(er[d]% 2 == 1)
            {
                cout << d + 1;
                return 0;
            }
        }
    }
    if(qwe > 1)
    {
         for(int y = 0;y < ace;++y)
         {
             if(er[y]%2 == 0)
            {
                cout << y + 1;
                return 0;
            }
         }
    }
}
*/
/*
int main()
{
    int ace;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int y = 0;
    cin >> ace;
    int er[ace];
    for(int sda = 0;sda < ace;++sda)
        cin >> er[sda];
    int a = 0;
    for(;a < ace;++a)
        if(er[a] == 1)
            b = b + 1;
        if(er[a] == 2)
            c = c + 1;
        if(er[a] == 3)
            d = d + 1;
    cout << b;
    cout << c;
    cout << d;
    if(b > c && b > d)
        y = 1;
    if(c > b && c > d)
        y = 2;
    if(c == b && c > d)
        y = 1;
    if(d > c && d > b || d == c && d > b || d > c && d == b || d == c && d == b)
        y = 3;
    for(int s = 0;s < ace;++s)
        if(er[s] != d)
            i = i + 1;
    cout << i;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    int sda[ace];
    int qwe[ace];
    int d = 0;
    int e = 0;
    int f = 0;
    for(int aa = 0;aa < ace;++aa)
    {
        cin >> er[aa];
        cin >> sda[aa];
        cin >> qwe[aa];
    }
    for(int vf = 0;vf < ace;++vf)
        d = d + er[vf];
    for(int v = 0;v < ace;++v)
        e = e + er[v];
    for(int vfa = 0;vfa < ace;++vfa)
        f = f + er[vfa];
if(d == 0 && e == 0 && f == 0)
    cout << "YES";
else
    cout << "NO";
return 0;
}
*/
/*
int main()
{
    int64_t ace;
    cin >> ace;
    int r = 0;
    int w = 1;
    for(int a = 0;a < ace;++a)
        w = w*2;
    for(int y = 1;y < w + 1;++y)
        r = r + y;
    cout << r%1000000007;
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace];
    for(int a = 0;a < ace;++a)
    {
        cin >> er[a];
        er[a] = er[a]*4 + 1;
    }
    for(int r = 0;r < ace;++r)
        cout << er[r] << ' ';

}
*/
/*
int main()
{
    int ace;
    int er = 0;
    int sda = 0;
    cin >> ace;
    int e[ace];
    for(int ee = 0;ee < ace;++ee)
    {
        cin >> e[ee];
        er = er + e[ee];
    }
    er = er/2 + er%2;
    for(int s = 0;;++s)
    {
        sda = sda + e[s];
        if(sda >= er)
        {
            cout << s + 1;
            break;
        }
    }
}
*/
/*
int main()
{
    int ace;
    int er;
    int d = 0;
    cin >> ace >> er;
    int sda[ace];
    for(int s = 0;s < ace;++s)
        cin >> sda[s];
    for(int e = 0;e < ace;++e)
    {
        if(er%sda[e] == 0)
            if(sda[e] > d)
                d = sda[e];
    }
    cout << er/d;
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 1;
    cin >> ace >> er;
    for(int r = 0;r < ace;++r)
    {
        rr = rr*2;
        cout << rr;
    }
    cout << rr;
}
*/
/*
int main()
{
    int ace = 2;
    int er = 4;
    for(int a = 0;a < 2018;++a)
    {
        cout << ace << ' ';
        ace = ace + er;
        er = er + 2;
    }
}
*/
/*
int main()
{
	int a;
	int as = 0;
	cin >> a;
    int er[100];
	int r[a];
	for(int y = 0;y < a;++y)
    	cin >> r[y];
	for(int rr = 0;rr < 100;++rr)
    	er[rr] = 0;
	for(int yy = 0;yy < a;++yy)
    {
    	for(int aa = 0;aa < 100;++aa)
        {
        	if(r[yy] == aa + 1)
            		er[aa] = 1;
        }
    }
	for(int ww = 0;ww < 100;++ww)
    	as = as + er[ww];
    cout << as;
}
*/
/*
struct People
{
public:
    string name;
    string family;

    void inputMoney()
    {
        cin >> money;
    }

    void outpuMoney() const
    {
        cout << money;
    }

    void transferMyMoney(People& to, int m)
    {
        if(m < money)
        {
            money -= m;
            to.money += m;
        }
    }

private:
    int money;
};


void sortPeopleData(People pp[])
{
    // ������� i � j �������

    int i = 0, j = 1;


    People tmp = pp[i];
    pp[i] = pp[j];
    pp[j] = tmp;



}



void inputPeople(People& pp)
{
    cin >> pp.name >> pp.family;
    pp.inputMoney();
}

void outputPeople(const People& pp)
{
    cout << "\n" << pp.name << " " << pp.family << " ";
    pp.outpuMoney();
}

void f(int& a)
{
    a = 3;
}

int main()
{
    People pp[100];


    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        inputPeople(pp[i]);
    }

    //sortPeopleData(pp);


    pp[1].transferMyMoney(pp[0], 1);


    for (int i = 0; i < n; ++i)
    {
        outputPeople(pp[i]);
    }


    return 0;
}
*/
/*
int main()
{
    int a;
    int yyy = 0;
    int yr = 0;
    cin >> a;
    int b[a];

    for(int y = 0;y < a;++y)
        cin >> b[y];

    sort(b,b + a);

    int aa = 0;

    if(a%3 == 1)
    {
        aa = aa + b[0];
        yr = 1;
    }
    if(a%3 == 2)
    {
        aa = aa + b[0];
        aa = aa + b[1];
        yr = 2;
    }

    for(int u = 0;u < a/3;++u)
    {
        aa = aa + b[yr + 1 + yyy];
        aa = aa + b[yr + 2 + yyy];
        yyy = yyy + 3;
    }
    cout << aa;
}
*/
/*
int main()
{
    string s;
    getline(cin,s);
    cout << s[0];
    for(int r = 0;r < s.size();++r)
    {
        if(s[r] == ' ')
            cout << s[r + 1];
    }
}
*/
/*
int main()
{
    int ace;
    cin >> ace;
    int er[ace/3 + ace%3*2];
    int a = 0;
    for(int sw = 0;sw < ace/3;++sw)
    {
        er[a] = 3;
        a = a + 1;
    }
    for(int se = 0;se < ace%3;++se)
    {
        er[a] = 3;
        a = a + 1;
        er[a] = -2;
        a = a + 1;
    }
    cout << a << "\n";
    for(int sd = 0;sd < a;++sd)
        cout << er[sd] << ' ';
}
*/
/*
struct otmetki
{
public:
    string name;
    string family;
    int otmetkit[5];
    double cpbal(int otm(5))
    {
        cpp = 0;
        cpp = otm(0) + otm(1) + otm(2) + otm(3) + otm(4);
        cpp = cpp/5;
        return cpp;
    }
}
int main()
{
    int g;
    cout << "input number people";
    cin >> g;
    otmetki rr[g];
}
*/
/*
int main()
{
    int64_t ace;
    int64_t er;
    int64_t rr = 2;
    cin >> ace >> er;
    for(int r = 0;r < ace - 1;++r)
    {
        rr = rr*2;
        if(rr > 100000000)
        {
            cout << er;
            return 0;
        }
    }
    cout << er%rr;
}
*/
/*
int main()
{
    int64_t ace;
    int er = 0;
    cin >> ace;
    for(int y = 1;y < ace;++y)
    {
        if(y%2 == 0 && y%3 == 0 && y%4 == 0 && y%5 == 0 && y%6 == 0 && y%7 == 0 && y%8 == 0 && y%9 == 0 && y%10 == 0)
            er = er + 1;
    }
    cout << er;
}
*/
/*
int main()
{
    int a = 0;
    int b;
    int y = 0;
    cin >> a >> b;
    int f[a];
    cin_massive(f,a);
    for(int hg = 0;hg < a;++hg)
    {
        if(f[hg] > b)
            y = y + 1;
        y = y + 1;
    }
    cout << y;
}
*/
/*
int main()
{
    string s;
    cin >> s;
    int y = 1;
    for(int h = 1;h < s.size();++h)
    {
        if(s[h] == s[h - 1])
            y = y + 1;
        else
            y = 1;
        if(y == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
*/
int main()
{
    int a = 0;
    string s;
    cin >> s;
    int h[s.size()/2 + 1];
    for(int hg = 0;hg < s.size();hg += 2)
    {
        h[a] = s[hg];
        a = a + 1;
    }
    byn_is_massive(h,s.size()/2 + 1,-48);
    sort(h,h + s.size()/2 + 1);
    cout_massive(h,s.size()/2 + 1,"+");
    return 0;
}
//https://codeforces.com/problemset/problem/195/A
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     char arr[100];
//     char app[100];
//     cin >> arr;
//     int t = 0, m = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         t++;
//     }

//     cout << t << endl;
//     for (int i = 0; i < t; i++)
//     {
//         if (arr[i] == arr[t - 1 - i])
//         {
//             m++;
//             continue;
//         }
//     }

//     cout << m << endl;
//     if (t == m)
//     {
//         cout << "its a palindrone number ";
//     }
//     else
//     {
//         cout << "its a not a palindrone number";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int t = 0, m = 0, q;
//     int p = str.size();
//     cout << p << endl;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             t = m;
//             m = 0;
//         }
//         if (str[i] != ' ')
//         {
//             m++;
//             q = max(m, t);
//         }
//     }

//     cout << q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int search(int *a, int p);
// int m = 0;

// int main(int argc, char const *argv[])
// {
//     int a[5] = {4, 3, 3, 3, 8};
//     int p;
//     cin >> p;
//     for (int i = 0; i < 5; i++)
//     {

//         if (p == a[i])
//         {
//             cout<<i<<endl;
//             search(a, p);
//             break;
//         }
//     }

//     return 0;
// }
// int search(int *a, int p)
// {
//     if (a[5 - m] == p)
//     {
//         cout << (5 - m);
//         return 0;
//     }
// m++;
// return (search(a, p));
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> str[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i].size() <= 10)
//         {
//             cout << str[i] << endl;
//         }
//         if (str[i].size() > 10)
//         {
//             int p = str[i].size() - 2;

//             str[i].erase(1, p);
//             string d = to_string(p);
//             str[i].insert(1, d);

//             cout << str[i] << endl;
//         }
//     }
//     return 0;
// }
// nclude<bits/stdc++.h>
// ing namespace std;
// t main(int argc, char const *argv[])
// {
// string str;
// cin>>str;
// str.erase(1,4);
// cout<<str;
// return 0;
// }
//
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int a[n][3];
//     int r = 0, m = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             r = a[i][j] + r;
//             if (r >= 2)
//             {
//                 m++;
//                 r = 0;
//                 break;
//             }
//         }
//         r = 0;
//     }
//     cout << m;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p
//  return 0;
//  }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int r = 0;
//     int n;
//     cin >> n;
//     string str[n];
//     for (int i = 0; i < n; i++)
//     {

//         cin >> str[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == "++X")
//         {
//             ++r;
//         }
//         if (str[i] == "X++")
//         {
//             r++;
//         }
//         if (str[i] == "--X")
//         {

//             --r;
//         }
//         if (str[i] == "X--")
//         {
//             r--;
//         }
//     }

//     cout << r;
//     return 0;
// }

//  #include <bits/stdc++.h>
//  using namespace std;
// int main(int argc, char const *argv[])
// {
//     int a[5][5];
//     int p, q;
//     int r = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (1 == a[i][j])
//             {
//                 p = i;

//                 q = j;

//                 break;
//             }
//         }
//     }
//     while (p != 2)
//     {

//         if (p > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p - 1][q];
//             a[p - 1][q] = t;
//             p = p - 1;
//             ++r;
//         }
//         if (p < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p + 1][q];
//             a[p + 1][q] = t;
//             p = p + 1;
//             ++r;
//         }
//     }
//     while (q != 2)
//     {
//         if (q > 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q - 1];
//             a[p][q - 1] = t;
//             q = q - 1;
//             ++r;
//         }
//         if (q < 2)
//         {
//             int t;
//             t = a[p][q];
//             a[p][q] = a[p][q + 1];
//             a[p][q + 1] = t;
//             q = q + 1;
//             ++r;
//         }
//     }

//     cout << r;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     int p = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] >= i)
//         {
//             p++;
//         }
//     }
//     cout << p;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     long long n, m, a;
//     cin >> n >> m >> a;
//     long long p = 0, q = 0;
//     for (long i = 1; i <= n; i = i + a)
//     {
//         p++;
//     }
//     for (long j = 1; j <= m; j = j + a)
//     {
//         q++;
//     }
//     cout<<p*q;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int m, n;
//     cin >> m >> n;
//     long long p = m * n;
//     int r = 2;
//     long long g = p / r;

//     cout << g;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str1, str2;
//     getline(cin, str1);
//     getline(cin, str2);
//     int i = 0, u = 0;
//     int p = 0, q = 0;
//     for (; i < str1.size(); i++)
//     {
//         if (str1[i] == str2[i] || str1[i] == str2[i] + 32 || str2[i] == str1[i] + 32)
//         {
//             u++;
//             continue;
//         }

//         if (str1[i] > str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//         if (str1[i] < str2[i])
//         {
//             p = p + str1[i];
//             q = q + str2[i];
//         }
//     }
//     if (u == str1.size())
//     {
//         cout << 0;
//     }
//     if (p > q)
//     {
//         cout << 1;
//     }
//     if (q > p)
//     {
//         cout << -1;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     int p = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {

//             if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'y')
//             {
//                 if (str[i] >= 65 && str[i] <= 91)
//                 {
//                     str[i] = str[i] + 32;
//                 }
//             }
//             if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
//             {
//                 str.erase(i, 1);
//             }
//         }
//     }

//     for (int i = 0; i < str.size(); i = i + 2)
//     {
//         str.insert(i, ".");
//     }

//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str[i];
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);

//     for (int i = 0; i < str.size(); i = i + 1)
//     {
//         for (int j = 0; j < str.size() - 1; j = j + 2)
//         {
//             if (str[j] > str[j + 2])
//             {
//                 char c;
//                 c = str[j];
//                 str[j] = str[j + 2];
//                 str[j + 2] = c;
//             }
//         }
//     }
//     cout << str << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);
//     if (str[0] >= 97 && str[0] <= 123)
//     {
//         str[0] = str[0] - 32;
//     }
//     cout<<str;
//     return 0;
// }
// Input
// zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
// Participant's output
// CHAT WITH HER!
// Jury's answer
// IGNORE HIM!
// Checker comment
// wrong answer 1st lines differ - expected: 'IGNORE HIM!', found: 'CHAT WITH HER!'
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     string str;
//     string str1;

//     getline(cin, str);

//     for (int r = 0; r < 4; r++)
//     {
//         for (int i = 0; i < str.size(); i++)
//         {
//             for (int j = i + 1; j < str.size(); j++)
//             {
//                 if (str[i] == str[j])
//                 {
//                     str.erase(j, 1);
//                 }
//             }
//         }
//     }

//     int p = str.size();

//     if (p % 2 == 1)
//     {
//         cout << "IGNORE HIM!";
//     }
//     else
//     {
//         cout << "CHAT WITH HER!";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n, z;
//     cin >> n;
//     int a[n], b[100001], d[100001];
//     long long r = 0, t = 0;
//     int taxi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (a[j] % 2 == 1)
//         {
//             b[r] = a[j];
//             r++;
//         }

//         if (a[j] % 2 == 0)
//         {
//             if (a[j] % 4 == 0)
//             {
//                 taxi++;
//             }
//             if (a[j] % 4 != 0)
//             {
//                 d[t] = a[j];
//                 t++;
//             }
//         }
//     }

//     // for (int i = 0; i < r; i++)
//     // {
//     //     cout << b[i] << endl;
//     // }
//     // for (int i = 0; i < t; i++)
//     // {
//     //     cout << d[i] << endl;
//     // }

//     // cout << taxi << endl;
//     //  for (int i = 0; i < r; i++)
//     //  {
//     //  cout << b[i] << end

//     long long m = 0, u = 0, y = 0;
//     for (int i = 0; i < r; i++)
//     {
//         m = m + b[i];
//     }
//     for (int i = 0; i < t; i++)
//     {
//         u = u + d[i];
//     }
//     for (int i = 0; i < r; i++)
//     {
//         if (b[i] == 3)
//         {
//             y++;
//         }
//     }
//     if (y == r)
//     {
//         cout << r;
//         goto z;
//     }

//     r = m / 4;

//     taxi = taxi + r;

//     r = m % 4;

//     t = u / 4;

//     taxi = taxi + t;

//     t = u % 4;

//     if ((t + r) <= 4 && (t + r) > 0)
//     {
//         taxi = taxi + 1;
//     }
//     if (t == r && (t + r) == 4 && m == 6 && u == 2)
//     {
//         taxi = taxi + 1;
//     }

//     if ((t + r) > 4)
//     {
//         taxi = taxi + 2;
//     }

//     cout << taxi;
// z:
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    char c[20];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[i + 1])
        {
            t++;
        }
    }
    cout << t;

    return 0;
}

//DECIMAL DATA
// const long double eps = 1e-9;
// bool equalTo(double a, double b)
// {
//     if (fabs(a - b) <= eps)
//         return true;
//     else
//         return false;
// }
// bool notEqual(double a, double b)
// {
//     if (fabs(a - b) > eps)
//         return true;
//     else
//         return false;
// }
// bool lessThan(double a, double b)
// {
//     if (a + eps < b)
//         return true;
//     else
//         return false;
// }
// bool lessThanEqual(double a, double b)
// {
//     if (a < b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThan(double a, double b)
// {
//     if (a > b + eps)
//         return true;
//     else
//         return false;
// }
// bool greaterThanEqual(double a, double b)
// {
//     if (a + eps > b)
//         return true;
//     else
//         return false;
// }

//Funtions
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerTwo(ll x)
{
    return (x && !(x & (x - 1)));
};
bool isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return true;
    return false;
}

ll mod = 1;

ll fast_pow(ll a, ll p)
{
    ll res = 1;
    while (p)
    {
        if (p % 2 == 0)
        {
            a = a * 1ll * a;
            p /= 2;
        }
        else
        {
            res = res * 1ll * a;
            p--;
        }
    }
    return res;
}

ll fact(ll n)
{
    ll res = 1;
    for (ll i = 1; i <= n; i++)
    {
        res = res * 1ll * i % mod;
    }
    return res;
}

ll nCr(ll n, ll k)
{
    return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} //pass an arry of size1 3
ll mminv(ll a, ll b)
{
    ll arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} //for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
void google(int t) { cout << "Case #" << t << ": "; }
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} //only for prime m

bool inBetween(int l, int val, int r)
{
    if (l <= val && val <= r)
        return true;
    return false;
}

// sort(s.begin(), s.end());
//distance(s.begin(), unique(s.begin(), s.end()))
//s.resize(distance(s.begin(),  unique(s.begin(), s.end())))
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// int getRand(int l, int r)
// {
//     uniform_int_distribution<int> uid(l, r);
//     return uid(rng);
// }
//Template Completed

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void check(bool b, string y = "YES", string n = "NO")
{
    // b ? cout << "YES\n" : cout << "NO\n";
    b ? cout << y << "\n" : cout << n << "\n";
}

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second < b.second)
        return true;
    if (a.second > b.second)
        return false;
    else
        return a.first < b.first;
}

void sol6()
{
    ll n;
    // cin >> n;
    // string s[n];
    vector<string> s(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> s[x];
    }
}

void sol5()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char ch = s[0];
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == ch)
            ans++;
        else
            ch = s[i];
    }
    p1(ans);
}

void sol4()
{
    ll n, k;
    cin >> n;
    vector<ll> arr(n), brr(n);
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
}

void sol3()
{
    ll n;
    cin >> n;
    vector<ll> arr(n), brr(n);
    pair<ll, ll> p[n];
    for (ll x = 0; x < n; x++)
    {
        cin >> arr[x];
        p[x] = {arr[x], x};
    }
}

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second
#define pll pair<ll, ll>
#define pyramid priority_queue <ll, vector<ll>, greater<ll> >
#define ulta_pyramid priority_queue <ll>

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sort_and_unique(a) sort(all(a));(a).resize(unique(all(a))-(a).begin())
#define outrange(x,min,max) ((x)<(min) || (x)>(max))
 
string DecimalToBinary(ll num);
 
void SieveOfEratosthenes(ll n,set<ll>&v);
 
ll power(ll x, ll y, ll p);
 
unsigned long long modInverse(unsigned long long n, int p);
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p);
 
long long lcm(ll a, ll b);
 
// returns -1 if s1 is not a substring of s2
int isSubstring(string s1, string s2);
 
const ll N=1e9+7;

struct prob{
    int s, t, d;
};

struct pro
{
    // set<pair<ll, ll>, prob> s;
    // set heap, with maxlen -> y-x at top
    bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) const
    {
        ll d_a = a.second - a.first - 1;
        ll d_b = b.second - b.first - 1;
        if (d_a == d_b)
        {
            return a.first < b.first;
        }
        return d_a > d_b;
    }
};

int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    char start = s[0];
    for(int i = 0; i < n-1; i++){
        char next = s[i+1];
        if(start == next){
            cnt++;
            // i++;
        }
        else{
            start = next;
        }
    }
    cout << cnt << endl;
    return 0;
}

bool cmp(prob a, prob b){
    return ((a.t)*(b.d) < (b.t)*(a.d));
}

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    // cin>>t;
    t = 1;
    while(t--){
        solve();
    }
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms"<<endl;

    return 0;
}

ll power(ll x, ll y, ll p)// binaryExponentiation
{
    ll res = 1;
 
    while (y > 0) {
 
        if (y % 2 == 1)
            res = ((res%p) * (x%p))%p;
 
        y = y >> 1;
 
        x = ((x%p) * (x%p))%p;
    }
    return res % p;
}
unsigned long long modInverse(unsigned long long n,int p)
{
    return power(n, p - 2, p);
}
 
unsigned long long nCrModPFermat(unsigned long long n,int r, int p)
{
    if (n < r)
        return 0;
 
    if (r == 0)
        return 1;
 
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

void SieveOfEratosthenes(ll n,set<ll>&v)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
    for (ll p = 2; p <= n; p++){
        if (prime[p]){
            v.insert(p);
        }
    }
        
}
 
string DecimalToBinary(ll num)
{
    string str;
    if(num==0)
        return 0;
    while(num)
    {
        if(num & 1)
            str+='1';
        else
            str+='0';
          num>>=1;
    }   
    string s = str;
    reverse(all(s));
    return s;
}
 
int isSubstring1(char* s1, char* s2)
{
    int M = strlen(s1);
    int N = strlen(s2);
 
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

// function to get the index of s2 in s1
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

long long lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
////////
ll lucky(ll n,ll f,ll s,ll ans){
    if(n<=ans){
        if(f==s){
            return ans;
        }
    }
    if(ans>1e9){
        return 4444477777;
    }
    ll f1 = lucky(n,f+1,s,ans*10+4);
    ll f2 = lucky(n,f,s+1,ans*10+7);
    return min(f1,f2);
}

void right_max(vi&v,int n,int st = 0){
    if(st==n-1){
        return;
    }
    right_max(v,n,st+1);
    v[st] = max(v[st],v[st+1]);
}

//void right_max(vi&v,int n){
//    if(n==0){
//        return ;
//    }
//
//    v[n-1] = max(v[n],v[n-1]);
//    right_max(v,n-1);
//}
// int suffix(vi&v,int n,int N){
//     if(N==0){
//         return 0;
//     }
//     return v[n-1]+ suffix(v,n-1,N-1);
// }
// int prefix(vi&v,int n,int N){
// if(N==0){
//     return 0;
// }
// return v[N-1]+ prefix(v,n,N-1);
// }

// bool is_palindrome(vi&v,int n,int st = 0){
//     if(st==n){
//         return true;
//     }
//   if(v[st]!=v[n]){
//       return false;
//   }
//   if(st<n+1){
//       return is_palindrome(v,n-1,st+1);
//   }
// }
// bool is_pre(string s,string p,int st = 0){
//     if(st == p.size())return true;
//     if(s[st]!=p[st])return false;
//     if(p.size()==0)return true;
//     return is_pre(s,p,st+1);
// }
// bool is_prime(int n,int st = 2){
//     if(n<=2){
//         return true;
//     }
//     if(st>sqrt(n)){
//         return true;
//     }
//     if(n%st == 0)return false;
//     return is_prime(n,st+1);
// }

// int count_prime(int st,int ed){
//     if(st>ed){
//         return 0;
//     }
//     if(is_prime(st)){
//         return 1 + count_prime(st+1,ed);
//     }
//     return count_prime(st+1,ed);
// }

// int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS) {
//     // base case: if robot reaches last row or column, return the value at that cell
//     if (row == ROWS - 1 && col == COLS - 1) {
//         return grid[row][col];
//     }

//     // check if robot can move right
//     int right_sum = -1;
//     if (col < COLS - 1) {
//         right_sum = grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS);
//     }

//     // check if robot can move bottom
//     int bottom_sum = -1;
//     if (row < ROWS - 1) {
//         bottom_sum = grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS);
//     }

//     // check if robot can move diagonal
//     int diagonal_sum = -1;
//     if (row < ROWS - 1 && col < COLS - 1) {
//         diagonal_sum = grid[row][col] + path_sum(grid, row + 1, col + 1, ROWS, COLS);
//     }

//     // choose the maximum direction
//     int max_sum = max(right_sum, max(bottom_sum, diagonal_sum));

//     return max_sum;
// }
#include <list>
// bool is_prime(int n) {
//     if (n <= 1) return false;
//     int sqrtn = sqrt(n);
//     for (int i = 2; i <= sqrtn; i++) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
bool pal(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int p(int n) {
    int cnt = 0;
    if (n <= 1) {
        return false;
    }
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cnt++;
            if (cnt>3) return 0;
        }
    }
    return cnt;
}
vector<int> sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
struct Employee {
    string name;
    int salary;
};

bool compare(Employee e1, Employee e2) {
    if (e1.salary != e2.salary) {
        return e1.salary > e2.salary;
    } else {
        return e1.name < e2.name;
    }
}
//const int MAXN = 1e5+5;
//int freq[MAXN] = {0};


//bool isProperlyNested(string s) {
//    stack<char> st;
//    for (char c : s) {
//        if (c == '(' || c == '[' || c == '{') {
//            st.push(c);
//        } else {
//            if (st.empty()) {
//                return false;
//            }
//            char top = st.top();
//            st.pop();
//            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
//                return false;
//            }
//        }
//    }
//    return st.empty();
//}


//int v[N], cnt[N], n;


#define MAX_N 100001

using namespace std;

//int a[MAX_N];

#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
using namespace std;

//
//int count_zeroes(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 0) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int count_ones(const vector<int>& v) {
//    int count = 0;
//    for(int i = 0; i < v.size(); i++) {
//        if(v[i] == 1) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int solve(const vector<int>& v) {
//    int num_zeroes = count_zeroes(v);
//    int num_ones = count_ones(v);
//
//    if(num_zeroes <= (v.size() + 1) / 2) {
//        return 0;
//    } else if(num_zeroes + num_ones == v.size() && num_ones > 0) {
//        return 2;
//    } else {
//        return 1;
//    }
//}
bool is_palindrome(const string& s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}
struct Test {
    int x,y;
    string num;
};


//const int MAXN = 105;

bool has_four(long long x) {
    while (x > 0) {
        if (x % 10 == 4) {
            return true;
        }
        x /= 10;
    }
    return false;
}

long long count_living(int n) {
    long long count = 1;
    for (int i = 0; i < n; i++) {
        count *= 9;
    }
    return count;
}

long long nth_living(long long k) {
    int n = 1;
    while (true) {
        long long count = count_living(n);
        if (k <= count) {
            break;
        }
        k -= count;
        n++;
    }
    long long x = pow(10, n-1);
    while (k > 1) {
        x++;
        if (!has_four(x)) {
            k--;
        }
    }
    return x;
}


int main() {
int n;cin>>n;
vc v(n);
loop(n){
    cin>>v[i];
}
int cnt = 0 ;
loop(n-1){
    if(v[i]==v[i+1])cnt++;
}
cout<<cnt;

    return 0;
n//////
int main() {
    fastIO();
    fileIO();

//long long int n; cin>>n;
//long long int f=n-1;
//cout<<(f*(f+1)/2)+1<<endl;

//long n; cin>>n;
//int cnt=1;
//long long int a=0,b=0,c=0,d=0;
////vector<pair<ll,char>>res;
//vl arr;
//    loop(n){
//        long tmp; cin>>tmp;
//        switch (cnt) {
//            case 1:
//                a+=tmp;
//                cnt++;
//                break;
//            case 2:
//                b+=tmp;
//                cnt++;
//                break;
//            case 3:
//                c+=tmp;
//                cnt++;
//                break;
//            case 4:
//                d+=tmp;
//                cnt=1;
//                break;
//        }
//    }
//    arr.push_back(a);
//    arr.push_back(b);
//    arr.push_back(c);
//    arr.push_back(d);
//    sort(all(arr));
//    ll check=arr.back();
//        if(a==check)cout<<"A"<<endl;
//        else if(b==check)cout<<"B"<<endl;
//        else if(c==check)cout<<"C"<<endl;
//        else cout<<"D"<<endl;

//int test; cin>>test;
//loop(test){
//    int n; cin>>n;
//    set<int>st;
//    while(n--){
//        int tmp; cin>>tmp;
//        st.insert(tmp);
//    }
//    cout<<*st.begin()<<endl;
//}

//    int test;
//    cin >> test;
//    while (test--) {
//        int n, p, q;
//        cin >> n >> p >> q;
//        vl arr(n);
//        int cnt=0;
//        int cnt2=0;
//        loop(n) {
//            cin >> arr[i];
//            if(arr[i]<0){
//                cnt++;
//            }
//            else{
//                cnt2++;
//            }
//        }
//        vl negative(cnt);
//        vl positive(cnt2);
//        ll sumb=0,suma=0;
//        if(cnt==0){
//            sort(all_r(arr));
//            if(p>0){
//                loop(p){
//                    suma+=arr[i];
//                }
//            }
//            cout<<suma<<endl;
//        }
//        else{
//            sort(all(arr));
//            if(q>0){
//                if(cnt<q){
//                    loop(cnt){
//                        sumb+=arr[i];
//                    }
//                }
//                else{
//                    loop(q){
//                        sumb+=arr[i];
//                    }
//                }
//
//            }
//            sort(all_r(arr));
//            if(p>0){
//                if(cnt2<p){
//                    loop(cnt2){
//                        suma+=arr[i];
//                    }
//                }
//                else{
//                    loop(p){
//                        suma+=arr[i];
//                    }
//                }
//
//            }
//            cout<<suma-sumb<<endl;
//        }
//
//    }

//int m,n; cin>>m>>n;
//    vector<vector<int>>v(n, vector<int>(m,-10));
//    int cnt=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin>>v[i][j];
//            if(v[i][j]==0)cnt++;
//        }
//    }
//    if(cnt==0){
//        cout<<"WIN"<<endl;
//        escanor;
//    }
//    int c=0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if((i>0&&j>0)&&(v[i][j]==1)){
//                if(v[i][j-1]==0)c++;
//                if(v[i][j+1]==0)c++;
//                if(v[i-1][j]==0)c++;
//                if(v[i+1][j]==0)c++;
//                if(v[i+1][j+1]==0)c++;
//                if(v[i-1][j-1]==0)c++;
//                if(v[i-1][j+1]==0)c++;
//                if(v[i+1][j-1]==0)c++;
//                if(c>=cnt){
//                    cout<<"WIN"<<endl;
//                    escanor;
//                }
//                else{
//                    c=0;
//                }
//            }
//        }
//    }
//    cout<<"LOSE"<<endl;

//int n; cin>>n;
//
//    loop(n){
//
//    }

//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    //1 3 4 5 6
//    sort(all(arr));
//    int sum=0;
//    //if(n%2==0){
//        int check=n/2;
//        int ii=n-1;
//        int jj=0;
//        loop(check){
//            //cout<<arr[ii]<<" "<<arr[jj]<<endl;
//            sum+=arr[ii]-arr[jj];
//            ii--;
//            jj++;
//        }
//        cout<<sum<<endl;
//    //}
////    else{
////        //1 3 4 5 6
////        int tmp=arr[(n/2)+1];
////
////    }
//}
//int test; cin>>test;
//while(test--){
//    int n; cin>>n;
//    vl arr(n);
//    int c=0;
//    ll sum=0;
//    stack<ll>st;
//    ll tmp=0;
//    bool t= true;
//    loop(n){
//        cin>>arr[i];
//        if(arr[i]<0){
//            if(t){
//                c++;
//                t= false;
//            }
//            else{
//                //t= false;
//            }
//        }
//        else if(arr[i]>0){
//            t= true;
//        }
//        if(arr[i]<0){
//            sum+=arr[i]*-1;
//        }
//        else{
//            sum+=arr[i];
//        }
//    }
//    cout<<sum<<" "<<c<<endl;
//}
//int test; cin>>test;
//while(test--){
//    long long int n; cin>>n;
//    long long int sum=n;
//    while(n!=0){
//        sum+=n/2;
//        n=n/2;
//    }
//    cout<<sum<<endl;
//}

//int n,h; cin>>n>>h;
//int sum=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(tmp>h)sum+=2;
//        else sum+=1;
//    }
//    cout<<sum<<endl;

//int n;cin>>n;
//string s; cin>>s;
//int a=0,d=0;
//    loop(s.size()){
//        if(s[i]=='A')a++;
//        else if(s[i]=='D')d++;
//    }
//    if(a>d)
//        cout<<"Anton"<<endl;
//    else if(d>a)
//        cout<<"Danik"<<endl;
//    else
//        cout<<"Friendship"<<endl;

//int a,b; cin>>a>>b;
//int c=0;
//while(a<=b){
//    a=a*3;
//    b=b*2;
//    c++;
//}
//cout<<c<<endl;

//int problems; cin>>problems;
//int cnt=0;
//  while(problems--){
//      int a,b,c; cin>>a>>b>>c;
//      if(a+b+c>=2)cnt++;
//  }
//  cout<<cnt<<endl;

//int ii=0,jj=0;
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            int tmp; cin>>tmp;
//            if(tmp==1){
//                ii=i;
//                jj=j;
//                break;
//            }
//        }
//    }
//    cout<<abs(2-ii)+abs(2-jj)<<endl;

//int n;cin>>n;
//vi arr(n);
//    loop(n){
//        cin>>arr[i];
//    }
//    sort(all(arr));
//    loop(n){
//        cout<<arr[i]<<" ";
//    }
//string s; cin>>s;
//string s2; cin>>s2;
//    loop(s.size()){
//        s[i]= ::tolower(s[i]);
//        s2[i]= ::tolower(s2[i]);
//        if((int)s[i]<(int)s2[i]){
//            cout<<-1<<endl;
//            escanor;
//        }
//        else if((int)s2[i]<(int)s[i]){
//            cout<<1<<endl;
//            escanor;
//        }
//    }
//    cout<<0<<endl;

//string s; cin>>s;
//string s2; cin>>s2;
//loop(s.size()){
//    s[i]= ::tolower(s[i]);
//    s2[i]= ::tolower(s2[i]);
//}
//if(s>s2)cout<<1<<endl;
//else if(s2>s)cout<<-1<<endl;
//else cout<<0<<endl;


//string s; cin>>s;
//set<char>st;
//    loop(s.size()){
//        st.insert(s[i]);
//    }
//    if(st.size()%2!=0){
//        cout<<"IGNORE HIM!"<<endl;
//    }
//    else{
//        cout<<"CHAT WITH HER!"<<endl;
//    }

//string s; cin>>s;
//string lower="";
//string upper="";
//int low=0,upp=0;
//loop(s.size()){
//    if((int)s[i]>=97&&(int)s[i]<=122){
//        low++;
//    }
//    else{
//        upp++;
//    }
//    lower+= ::tolower(s[i]);
//    upper+= ::toupper(s[i]);
//}
//if(low>=upp)cout<<lower<<endl;
//else if(upp>low)cout<<upper<<endl;

//int n; cin>>n;
//stack<int>st;
//int cnt=0;
//    loop(n){
//        int tmp; cin>>tmp;
//        if(st.empty()||st.top()==tmp){
//            st.push(tmp);
//        }
//        else{
//            while(!st.empty()){
//                st.pop();
//            }
//            cnt++;
//            st.push(tmp);
//        }
//    }
//    if(!st.empty())cnt++;
//    cout<<cnt<<endl;

//int n; cin>>n;
//deque<int>dq;
//    loop(n){
//        int tmp; cin>>tmp;
//        dq.push_back(tmp);
//    }
//    int a=0,b=0;
//    loop(n){
//        int tmp;
//        if(dq.front()>dq.back()){
//        tmp=dq.front();
//        dq.pop_front();
//        }
//        else { tmp = dq.back();
//            dq.pop_back();
//        }
//        if(i%2==0){
//            a+=tmp;
//        }
//        else{
//            b+=tmp;
//        }
//    }
//cout<<a<<" "<<b<<endl;

int n,cnt=0; cin>>n;
string s; cin>>s;
    loop(s.size()){
        if(i==0)continue;
        else{
            if(s[i]==s[i-1])cnt++;
        }
    }
    cout<<cnt<<endl;
}
 

#include<bits/stdc++.h>
#define abdo ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define tc ll t ; cin>>t; while(t--)
#define pb push_back
#define pob pop_back
#define loopj(j,a,b) for(ll j = a ; j < b-1 ; j++)
#define loopi(i,a,b) for (ll i = a; i < b; i++)
#define vl vector<ll>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define sumv(v) accumalate(v.begin(),v.end(),0)
#define mii map<int,int>
#define umii unordered_map<int,int>
#define order(v) sort(v.begin(),v.end())
#define ed '\n'
#define el "\n"
#define all(v) v.begin(),v.end()
#define YES cout<<"YES"<<ed;
#define NO cout<<"NO"<<ed;
#define Yes cout<<"Yes"<<ed;
#define No cout<<"No"<<ed;
#define yEs cout<<"yEs"<<ed;
#define yeS cout<<"yeS"<<ed;
#define nO cout<<"nO"<<ed;
#define yes cout<<"yes"<<ed;
#define no cout<<"no"<<ed;
#define ans1 ll ans = 0;
#define cnt1 ll cnt = 0;
#define sum(a , b) (a + b)
#define product(a , b) (a * b)
#define squarear(a) (a * a)
#define rectanglear(a , b) (a * b)
#define squarepre(a) (a * 4)
#define rectanglpr(a , b) ((a + b)*2)
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
const int N = 1e7;
ll frq[N];
vector<bool> seive(1e6 + 1, true);
const int maxn = 1e5;
bool isprime[maxn];
const int mod = 998244353;
ll fact[N];
//*-----------------------------------------------------------------------------------------------------------------------------------------*
void code()
{
    abdo;
}

int primeFactors(int n)
{
    int c=0;
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            c++;
            n = n/i;
        }
    }
    if (n > 2)
    {
        c++;
    }
    return c;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
 
    }
    return gcd(b, a % b);
}
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
 
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
 
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool isEven()
{
    int n;
    return (n % 2 == 0);
}
void check_X0r(ll a, ll b)
{
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void sieve()
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
ll exp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
ll modexp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll sqt(ll x)
{
    ll start =1;
    ll end = x;
    while (end>start)
    {
        end = start+(end-start)/2;
        start = x/end;
    }
    return end;
}
ll inv(ll a)
{
    return modexp(a, mod-2);
}
ll C(ll n, ll r)
{
    ll nume = fact[n];
    ll deno = (inv(fact[n-r]) * inv(fact[r])) % mod;
    return (nume * deno) % mod;
}
 // int arr[N],ans[50];
void solve( ll n , string st )
{

}
void testCases()
{
    //tc
    //solve();
}
void quary(ll q , ll ans, ll iseven , ll isodd)
{
         while(q--){
        int num , evenorodd;
        cin >>num >> evenorodd;
        if(num == 0)
        {
          ans+=evenorodd * iseven;
          if(evenorodd % 2 != 0)
            {
                isodd+=iseven;
                iseven=0;
            }
        }
        if(num==1)
        {
          ans += evenorodd * isodd;
          if(evenorodd % 2 != 0){
            iseven += isodd;
            isodd=0;
              
          } 
}
cout<<ans<<endl;
}
}

int main()
{
  //code();
 
  // tc
    {
   int n;
   cin>>n;
  string st ;
  cin>>st;
  ll cnt =0;
  for(ll i = 0 ; i < st.size() ; i++)
  {
    if(st[i] == st[i+1] )
    {
        cnt++;
    }
  }
  cout<<cnt;
}
}
#include<bits/stdc++.h>
#define ll                  long long
#define ld                  long double
#define f(i,n)              for(ll i=0;i<(n);i++)
#define f1(i,n)             for(ll i=1;i<=n;i++)
#define el  	            "\n"
#define sq(a)               (a)*(a)
#define pb                  push_back
#define asort(a,n)            sort(a,a+n)
#define dsort(a,n)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define YES                 cout << "YES\n";
#define Yes                 cout << "Yes"<<el;
#define yes                 cout << "yes"<<el;
#define NO                  cout << "NO\n";
#define No                  cout << "No"<<el;
#define no                  cout << "no"<<el;
#define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double pi=acos(-1);
using namespace std;

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
bool primeFactors(int n, int l, int r, bool notFound)
{
    for (int i = l; i <= r; i++)
    {
        if (i == 1)
            i++;
        if (n % i == 0)
        {
            cout << i << " ";
            notFound = false;
        }
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    return notFound;
}
bool IsInBinarySequence(ll number) {
    ll numbertocheck = 1;
    do {
        if (number == numbertocheck) return true;
        numbertocheck *= 2;
    } while (numbertocheck <= number);
    return false;
}
ll nextPowerOf2(ll n)
{
    if (n && !(n & (n - 1)))
        return n;
    ll cnt = 0;
    while (n != 0)
    {
        n >>= 1;
        cnt++;
    }
    ll x = 1;
    x = x << cnt;
    return x;
}
ll highestPowerof2(ll n)
{
    ll res = 0;
    for (ll i = n; i >= 1; i--)
    {
        // If i is a power of 2
        if ((i & (i - 1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
void first50fib1_1_2()
{
    ll arr[] = { 1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155, 165580141 ,267914296 ,433494437 ,701408733 ,1134903170 ,1836311903 ,2971215073 ,4807526976 ,7778742049,12586269025,20365011074 };
}
void first50fib0_0_1()
{
    ll arr[51]={0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368,75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
}
ll fib(ll n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
ll binets_formula(ll n) {
    double sqrt5 = sqrt(5);

    int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

    return F_n;
}

void firstLuckyto1e9()
{
    vector<ll>v = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447
            , 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477
            , 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744,
                    77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774, 744777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 774444, 774447, 774474, 774477, 774744, 774747, 774774, 774777, 777444, 777447, 777474, 777477, 777744, 777747, 777774, 777777, 4444444, 4444447, 4444474, 4444477, 4444744, 4444747, 4444774, 4444777, 4447444, 4447447, 4447474, 4447477, 4447744, 4447747, 4447774, 4447777, 4474444, 4474447, 4474474, 4474477, 4474744, 4474747, 4474774, 4474777, 4477444, 4477447, 4477474, 4477477, 4477744, 4477747, 4477774, 4477777, 4744444, 4744447,
                    4744474, 4744477, 4744744, 4744747, 4744774, 4744777, 4747444, 4747447, 4747474, 4747477, 4747744, 4747747, 4747774, 4747777, 4774444, 4774447, 4774474, 4774477, 4774744, 4774747, 4774774, 4774777, 4777444, 4777447, 4777474, 4777477, 4777744, 4777747, 4777774, 4777777, 7444444, 7444447, 7444474, 7444477, 7444744, 7444747, 7444774, 7444777, 7447444, 7447447,
                    7447474, 7447477, 7447744, 7447747, 7447774, 7447777, 7474444, 7474447, 7474474, 7474477, 7474744, 7474747, 7474774, 7474777, 7477444, 7477447, 7477474, 7477477, 7477744, 7477747, 7477774, 7477777, 7744444, 7744447, 7744474, 7744477, 7744744, 7744747, 7744774, 7744777, 7747444, 7747447, 7747474, 7747477, 7747744, 7747747, 7747774, 7747777, 7774444, 7774447,
                    7774474, 7774477, 7774744, 7774747, 7774774, 7774777, 7777444, 7777447, 7777474, 7777477, 7777744, 7777747, 7777774, 7777777, 44444444, 44444447, 44444474, 44444477, 44444744, 44444747, 44444774, 44444777, 44447444, 44447447, 44447474, 44447477, 44447744, 44447747, 44447774, 44447777, 44474444, 44474447, 44474474, 44474477, 44474744, 44474747, 44474774, 44474777, 44477444, 44477447, 44477474, 44477477, 44477744, 44477747, 44477774, 44477777, 44744444, 44744447, 44744474, 44744477, 44744744, 44744747, 44744774, 44744777, 44747444, 44747447, 44747474, 44747477, 44747744, 44747747, 44747774, 44747777, 44774444, 44774447, 44774474, 44774477, 44774744, 44774747, 44774774, 44774777, 44777444, 44777447, 44777474, 44777477, 44777744, 44777747, 44777774, 44777777, 47444444, 47444447, 47444474, 47444477, 47444744, 47444747, 47444774, 47444777, 47447444, 47447447, 47447474, 47447477, 47447744, 47447747, 47447774, 47447777, 47474444, 47474447, 47474474, 47474477, 47474744, 47474747, 47474774, 47474777, 47477444, 47477447, 47477474, 47477477, 47477744, 47477747, 47477774, 47477777, 47744444, 47744447, 47744474, 47744477, 47744744, 47744747, 47744774, 47744777, 47747444, 47747447, 47747474, 47747477, 47747744, 47747747, 47747774, 47747777, 47774444, 47774447, 47774474, 47774477, 47774744, 47774747, 47774774, 47774777, 47777444, 47777447, 47777474, 47777477, 47777744, 47777747, 47777774, 47777777, 74444444, 74444447, 74444474, 74444477, 74444744, 74444747, 74444774, 74444777, 74447444, 74447447, 74447474, 74447477, 74447744, 74447747, 74447774, 74447777, 74474444, 74474447, 74474474, 74474477, 74474744, 74474747, 74474774, 74474777, 74477444, 74477447, 74477474, 74477477, 74477744, 74477747, 74477774, 74477777, 74744444, 74744447, 74744474, 74744477, 74744744, 74744747, 74744774, 74744777, 74747444, 74747447, 74747474, 74747477, 74747744, 74747747, 74747774, 74747777, 74774444, 74774447, 74774474, 74774477, 74774744, 74774747, 74774774, 74774777, 74777444, 74777447, 74777474, 74777477, 74777744, 74777747, 74777774, 74777777, 77444444, 77444447, 77444474, 77444477, 77444744, 77444747, 77444774, 77444777, 77447444, 77447447, 77447474, 77447477, 77447744, 77447747, 77447774, 77447777, 77474444, 77474447, 77474474, 77474477, 77474744, 77474747, 77474774, 77474777, 77477444, 77477447, 77477474, 77477477, 77477744, 77477747, 77477774, 77477777, 77744444, 77744447, 77744474, 77744477, 77744744, 77744747, 77744774, 77744777, 77747444, 77747447, 77747474, 77747477, 77747744, 77747747, 77747774, 77747777, 77774444, 77774447, 77774474, 77774477, 77774744, 77774747, 77774774, 77774777, 77777444, 77777447, 77777474, 77777477, 77777744, 77777747, 77777774, 77777777, 444444444, 444444447, 444444474, 444444477, 444444744, 444444747, 444444774, 444444777, 444447444, 444447447, 444447474, 444447477, 444447744, 444447747, 444447774, 444447777, 444474444, 444474447, 444474474, 444474477, 444474744, 444474747, 444474774, 444474777, 444477444, 444477447, 444477474, 444477477, 444477744, 444477747, 444477774, 444477777, 444744444, 444744447, 444744474, 444744477, 444744744, 444744747, 444744774, 444744777, 444747444, 444747447, 444747474, 444747477, 444747744, 444747747, 444747774, 444747777, 444774444, 444774447, 444774474, 444774477, 444774744, 444774747, 444774774, 444774777, 444777444, 444777447, 444777474, 444777477, 444777744, 444777747, 444777774, 444777777, 447444444, 447444447, 447444474, 447444477, 447444744, 447444747, 447444774, 447444777, 447447444, 447447447, 447447474, 447447477, 447447744, 447447747, 447447774, 447447777, 447474444, 447474447, 447474474, 447474477, 447474744, 447474747, 447474774, 447474777, 447477444, 447477447, 447477474, 447477477, 447477744, 447477747,447477774, 447477777, 447744444, 447744447, 447744474, 447744477, 447744744, 447744747, 447744774, 447744777, 447747444,447747447, 447747474, 447747477, 447747744, 447747747, 447747774, 447747777, 447774444, 447774447, 447774474, 447774477
            , 447774744, 447774747, 447774774, 447774777, 447777444, 447777447, 447777474, 447777477, 447777744, 447777747, 447777774, 447777777, 474444444, 474444447, 474444474, 474444477, 474444744, 474444747, 474444774, 474444777, 474447444, 474447447, 474447474, 474447477, 474447744, 474447747, 474447774, 474447777, 474474444, 474474447, 474474474, 474474477, 474474744, 474474747, 474474774, 474474777, 474477444, 474477447, 474477474, 474477477, 474477744, 474477747, 474477774, 474477777, 474744444, 474744447, 474744474, 474744477, 474744744, 474744747, 474744774, 474744777, 474747444, 474747447, 474747474, 474747477, 474747744, 474747747, 474747774, 474747777, 474774444, 474774447, 474774474, 474774477, 474774744, 474774747, 474774774, 474774777, 474777444, 474777447, 474777474, 474777477, 474777744, 474777747, 474777774, 474777777, 477444444, 477444447, 477444474, 477444477, 477444744, 477444747, 477444774, 477444777, 477447444, 477447447, 477447474, 477447477, 477447744, 477447747, 477447774, 477447777, 477474444, 477474447, 477474474, 477474477, 477474744, 477474747,477474774, 477474777, 477477444, 477477447, 477477474, 477477477, 477477744, 477477747, 477477774, 477477777, 477744444,477744447, 477744474, 477744477, 477744744, 477744747, 477744774, 477744777, 477747444, 477747447, 477747474, 477747477
            , 477747744, 477747747, 477747774, 477747777, 477774444, 477774447, 477774474, 477774477, 477774744, 477774747, 477774774, 477774777, 477777444, 477777447, 477777474, 477777477, 477777744, 477777747, 477777774, 477777777, 744444444, 744444447, 744444474, 744444477, 744444744, 744444747, 744444774, 744444777, 744447444, 744447447, 744447474, 744447477, 744447744, 744447747, 744447774, 744447777, 744474444, 744474447, 744474474, 744474477, 744474744, 744474747, 744474774, 744474777, 744477444, 744477447, 744477474, 744477477, 744477744, 744477747, 744477774, 744477777, 744744444, 744744447, 744744474, 744744477, 744744744, 744744747, 744744774, 744744777, 744747444, 744747447, 744747474, 744747477, 744747744, 744747747, 744747774, 744747777, 744774444, 744774447, 744774474, 744774477, 744774744, 744774747, 744774774, 744774777, 744777444, 744777447, 744777474, 744777477, 744777744, 744777747, 744777774, 744777777, 747444444, 747444447, 747444474, 747444477, 747444744, 747444747, 747444774, 747444777, 747447444, 747447447, 747447474, 747447477, 747447744, 747447747,747447774, 747447777, 747474444, 747474447, 747474474, 747474477, 747474744, 747474747, 747474774, 747474777, 747477444,747477447, 747477474, 747477477, 747477744, 747477747, 747477774, 747477777, 747744444, 747744447, 747744474, 747744477
            , 747744744, 747744747, 747744774, 747744777, 747747444, 747747447, 747747474, 747747477, 747747744, 747747747, 747747774, 747747777, 747774444, 747774447, 747774474, 747774477, 747774744, 747774747, 747774774, 747774777, 747777444, 747777447, 747777474, 747777477, 747777744, 747777747, 747777774, 747777777, 774444444, 774444447, 774444474, 774444477, 774444744, 774444747, 774444774, 774444777, 774447444, 774447447, 774447474, 774447477, 774447744, 774447747, 774447774, 774447777, 774474444, 774474447, 774474474, 774474477, 774474744, 774474747, 774474774, 774474777, 774477444, 774477447, 774477474, 774477477, 774477744, 774477747, 774477774, 774477777, 774744444, 774744447, 774744474, 774744477, 774744744, 774744747, 774744774, 774744777, 774747444, 774747447, 774747474, 774747477, 774747744, 774747747, 774747774, 774747777, 774774444, 774774447, 774774474, 774774477, 774774744, 774774747, 774774774, 774774777, 774777444, 774777447, 774777474, 774777477, 774777744, 774777747, 774777774, 774777777, 777444444, 777444447, 777444474, 777444477, 777444744, 777444747,
                    777444774, 777444777, 777447444, 777447447, 777447474, 777447477, 777447744, 777447747, 777447774, 777447777, 777474444,
                    777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477
            , 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774, 777777777, 4444444444 };

}
void  luckyGenerator() {
    vector<ll> lucky;
    lucky.pb(0);
    int idx = 0;
    while (lucky.back() < 1e10) {
        lucky.push_back(((lucky[idx] * 10) + 4));
        lucky.push_back((lucky[idx] * 10) + 7);
        idx++;
    }
}
int binarySearch(int a[], int first, int last, int search_num)
{
    int middle;
    if (last >= first)
    {
        middle = (first + last) / 2;
        //Checking if the element is present at middle loc
        if (a[middle] == search_num)
        {
            return middle + 1;
        }

            //Checking if the search element is present in greater half
        else if (a[middle] < search_num)
        {
            return binarySearch(a, middle + 1, last, search_num);
        }

            //Checking if the search element is present in lower half
        else
        {
            return binarySearch(a, first, middle - 1, search_num);
        }

    }
    return -1;
}
void factorize(long long n) {
    int count = 0;
    while (!(n % 2)) {
        n /= 2;
        count++;
    }
    if (count)
        cout << 2 << "^" << count << endl;
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            cout << i << "^" << count << endl;
    }
    if (n > 2)
        cout << n << "^" << 1 << endl;
}
void primeFactors(ll num) {
    ll fac = 2;
    while (num > 1) {
        if (num % fac == 0) {
            cout << fac << " ";
            num /= fac;
            ll pow = 1;
            while (num % fac == 0) {
                num /= fac;
                pow++;
            }
            cout << pow << el;
        }
        else {
            fac++;
        }
    }
}
bool onePrimeFactor(ll num)
{
    ll fac = 2;
    int cnt = 0;
    while (num > 1)
    {
        if (num % fac == 0)
        {
            cnt++;
            while (num % fac == 0)
                num /= fac;
        }
        else
        {
            fac++;
        }
        if (cnt >= 2)
        {
            return false;
        }
    }
    return true;
}
bool isPerfect(ll d)
{
    double temp = d;
    d = sqrt(d);
    temp = sqrt(temp);
    if (temp == d)
        return true;
    return false;
}
void sort(string s[], int n)//sort string according to length
{
    for (int i = 1; i < n; i++)
    {
        string temp = s[i];
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = temp;
    }
}
bool IsPowerOfTwo(ll x)
{
    return (x & (x - 1)) == 0;
}
int binarySearchCount(ll arr[], int n, ll key)
{
    int left = 0, right = n;

    int mid;
    while (left < right) {
        mid = (right + left) >> 1;

        if (arr[mid] == key) {
            while (mid + 1 < n && arr[mid + 1] == key)
                mid++;
            break;
        }

        else if (arr[mid] > key)
            right = mid;

        else
            left = mid + 1;
    }

    while (mid > -1 && arr[mid] > key)
        mid--;

    return mid + 1;
}
const ll mod = 1e9 + 7;
bool is(int x, int y) {
    set<int> s;
    if (x < 10000) {
        s.insert(0);
    }
    if (y < 10000) {
        s.insert(0);
    }
    while (x > 0)
    {
        int d = x % 10;
        s.insert(d);
        x /= 10;
    }
    while (y > 0)
    {
        int d = y % 10;
        s.insert(d);
        y /= 10;
    }
    return s.size() == 10;
}
int countOnesInBin(ll n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
string convertToBinary(ll x) {
    string s;
    while (x > 0) {
        if (x % 2)
            s += '1';
        else
            s += '0';
        x /= 2;
    }
    return s;
}

int main() {
#ifndef ONLINE_JUDGE
    clock_t start = clock();
#endif

    covid19
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0;
    f(i,s.length()) {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt;

    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken: " << time_taken;
    cout << " sec \n";
#endif
}
#include <iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}






#include <iostream>
#include <stdio.h>
using namespace std;
int score[10001],ax=0,in=110,sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
		ax=max(ax,score[i]);
		in=min(in,score[i]);
		sum+=score[i];
	}
	double ans=sum/(1.0*n);
	cout<<ax<<endl<<in<<endl;
	printf("%.2lf",ans);
	return 0;
}








403


#include <iostream>
using namespace std;


int main()
{
	itt n;
	cin>>n;
	while(n)
	{
		cout<<n<<' ';
		n/=2;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}




class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};



#include <iostream>
#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
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






#include <string.h>
#include <stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i]))
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ����������

#include <bits/stdc++.h>
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



���ű�ʮһ��

#include <bits/stdc++.h>
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


*/
******************************************


#include <bits/stdc++.h>
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



#include <bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);

	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021;
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
		{
			break;
		}
	}
	cout<<ans-1<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*




#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";

		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}








``````````````````````
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````




20312088





#include <iostream>
using namespace std;
const int N = 1010;

int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][t];
	return 0;
}
*
#include <iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{

		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]<0) ans++;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;

	}

	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A';
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';
		}
		cout<<s<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else
				{
					cout<<"no"<<endl;
					break;
				}
				if(c+1==l)
				{
					cout<<"yes"<<endl;
				}
			}
		}
		else cout<<"no"<<endl;
	}
	return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp;
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}





#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				}
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	}
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;

	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;
	sort(edges,edges+m);



	return 0;
}
*

*
#################   a^b


################   64λ�����˷�

*

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> res;
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include <iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*

*

#include <iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn)
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include <iostream>
#include <stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0)
	{
		f=0;
		n=-n;
	}
	string ans="";
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*


*





*

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*

*
#include <iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4)
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6)
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}
	return 0;
}

*

#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
}
*



#include <iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m)
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team

*
#include <iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	string s,t;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		if(s==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool f=true;
			int lastindex;
			int m=t.size();
			lastindex=s.rfind(t[m-1]);
			s[lastindex]='1';
			if(lastindex==-1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int i=m-2;
				while(i>=0)
				{
					int pos=s.rfind(t[i]);
					if(pos==-1)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else if(pos>lastindex)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else
					{
						lastindex=pos;
						s[pos]='1';
					}
					i--;
				}
				if(f) cout<<"YES"<<endl;
			}

		}
	}
	return 0;
}

*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[3];
struct edge
{
	int a,b,c,d;
}edges[5];
int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	return 0;
}
*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[10];

struct PT {
	int x1, y1, x2, y2;
};

int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	PT t[10];
	PT s[10];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	t[0] = {p[0].x, p[0].y, p[0].x, p[1].y};
	t[1] = {p[0].x, p[1].y, p[1].x, p[1].y};
	t[2] = {p[1].x, p[1].y, p[2].x, p[1].y};
	t[3] = {p[2].x, p[1].y, p[2].x, p[2].y};
	int tt = -1;
	for (int i = 0; i < 4; i++) {
		if (tt == -1)
			s[++tt] = t[i];
		else {
			auto q = s[tt];
			tt--;
			if (q.x1 == t[i].x2 || q.y1 == t[i].y2) {
				s[++tt] = {q.x1, q.y1, t[i].x2, t[i].y2};
			} else {
				s[++tt] = q;
				s[++tt] = t[i];
			}
		}
	}
	cout << tt+1 << endl;
	for (int i = 0; i <= tt; i++)
		cout << s[i].x1 << " " << s[i].y1 << " " << s[i].x2 << " " << s[i].y2 << endl;
	return 0;
}


#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s[1] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
	return 0;
}

*

#
*


#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int n, m, x;
int a[110];
int main() {
	while (cin >> n >> m, n + m) {
		unordered_set<int> h;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++) {
			cin >> x;
			h.insert(x);
		}
		sort(a, a + n);
		int num = 0;
		for (int i = 0; i < n; i++) {
			if (!h.count(a[i])) {
				cout << a[i] << " ";
				num++;
			}
		}
		if (!num)
			cout << "NULL";
		cout << endl;
	}
	return 0;
}

*
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

int n,k,x;
queue<int> q;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) q.push(i);
    while(k--)
    {
        cin>>x;
        int t=x%q.size();
        for(int i=0;i<t;i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {
	char a[110], b[110];
	scanf("%s%s", a, b);
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - ('a' - 'A');
		if (b[i] >= 'a' && b[i] <= 'z')
			b[i] = b[i] - ('a' - 'A');
		if (a[i] > b[i]) {
			cout << "1";
			return 0;
		} else if (a[i] < b[i]) {
			cout << "-1";
			return 0;
		}
	}
	cout << "0";
	return 0;
}

*
#include <iostream>
using namespace std;

int main() {
	string s = "475730385258137";
	int k = 13;
	string ans = "";
	while (s.size() > k) {
		int i = 0;
		int n = s.size();
		while (i < n) {
			string str;
			if (i + k <= n)
				str = s.substr(i, k);
			else
				str = s.substr(i, n % k);
			int t;
			t = std::stoi(str);
			int m = 0;
			while (t) {
				m += t % 10;
				t /= 10;
			}
			ans += to_string(m);
			i += k;
			// cout<<i<<endl;
		}
		s = ans;
		ans = "";
	}
}

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	vector<int> ans;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			ans.push_back(s[i] - '0');
	}
	sort(ans.begin(), ans.end());
	cout << ans[0];
	for (int i = 1; i < ans.size(); i++) {
		cout << "+" << ans[i];
	}
	return 0;
}
#include<bits/stdc++.h>
#define abdo ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define tc ll t ; cin>>t; while(t--)
#define pb push_back
#define pob pop_back
#define loopj(j,a,b) for(ll j = a ; j < b-1 ; j++)
#define loopi(i,a,b) for (ll i = a; i < b; i++)
#define vl vector<ll>
#define vi vector<int>
#define lb lower_bound
#define ub upper_bound
#define sumv(v) accumalate(v.begin(),v.end(),0)
#define mii map<int,int>
#define umii unordered_map<int,int>
#define order(v) sort(v.begin(),v.end())
#define ed '\n'
#define el "\n"
#define all(v) v.begin(),v.end()
#define YES cout<<"YES"<<ed;
#define NO cout<<"NO"<<ed;
#define Yes cout<<"Yes"<<ed;
#define No cout<<"No"<<ed;
#define yEs cout<<"yEs"<<ed;
#define yeS cout<<"yeS"<<ed;
#define nO cout<<"nO"<<ed;
#define yes cout<<"yes"<<ed;
#define no cout<<"no"<<ed;
#define ans1 ll ans = 0;
#define cnt1 ll cnt = 0;
#define sum(a , b) (a + b)
#define product(a , b) (a * b)
#define squarear(a) (a * a)
#define rectanglear(a , b) (a * b)
#define squarepre(a) (a * 4)
#define rectanglpr(a , b) ((a + b)*2)
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
const int N = 1e3;
ll frq[N];
vector<bool> seive(1e6 + 1, true);
const int maxn = 1e5;
bool isprime[maxn];
const int mod = 998244353;
ll fact[N];
//*-----------------------------------------------------------------------------------------------------------------------------------------*
void code()
{
    abdo;
}
int primeFactors(int n)
{
    int c=0;
    while (n % 2 == 0)
    {
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            c++;
            n = n/i;
        }
    }
    if (n > 2)
    {
        c++;
    }
    return c;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
 
    }
    return gcd(b, a % b);
}
void extendgcd(ll a, ll b, ll*v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;//pass an arry of size1 3
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
bool isPalindrome(string s)
 
{
 
    int n=s.length();
 
    for(int i=0; i<n/2; i++)
 
    {
 
        if(s[i] != s[n-i-1])
 
            return false;
 
    }
 
    return true;
 
}
void palindrome(int n)
{
    int rev=0,val;
    val = n;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(val==rev)
        cout<<val<<" is a palindrome"<<endl;
    else
        cout<<val<<" is not a palindrome"<<endl;
}
 
bool plin(int index)
{
    ll arr[N];
    int n;
    if(index == n)
    {
        return 1;
    }
    return (arr[index] == arr[n - index -1]) && plin(index + 1);
 
}
 
bool isPrime()
{
    int n;
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool isEven()
{
    int n;
    return (n % 2 == 0);
}
void check_X0r(ll a, ll b)
{
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
 
}
int findSumstr(string str)
{
    string temp = "";
    int sum = 0;
    for (char ch : str)
    {
        if (isdigit(ch))
            temp += ch;
        else
        {
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    return sum + atoi(temp.c_str());
}
void sieve()
{
    for(int i=2; i<maxn; i++) isprime[i]=1;
    for(int i=2; i*i<maxn; i++) if(isprime[i])
        {
            for(int j=i*i; j<maxn; j+=i) isprime[j]=0;
        }
}
ll exp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
ll modexp(ll a, ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll sqt(ll x)
{
    ll start =1;
    ll end = x;
    while (end>start)
    {
        end = start+(end-start)/2;
        start = x/end;
    }
    return end;
}
ll inv(ll a)
{
    return modexp(a, mod-2);
}
ll C(ll n, ll r)
{
    ll nume = fact[n];
    ll deno = (inv(fact[n-r]) * inv(fact[r])) % mod;
    return (nume * deno) % mod;
}

void solve( int n , string red , vector<string> red_or_blue)
{
    for(ll i = 0 ; i < n ; i++)
    {
        if(red_or_blue[i] == red)
        {
            cout << "R" <<ed;
            return;
        }
    }

    cout<< "B" <<ed;
}
void testCases()
{
    //tc
    //solve();
}
int main()
{
  code();
 
  // tc
    {
       string s, m[N] ;
       cin>>s;
       int cnt=0  , cnt2=0  , cnt3=0   ;
       for(int i = 0 ; i <s.size() ; i++)
       {
        if(s[i] == '1')
        {
            cnt++;
        }
        else if(s[i] == '2')
        {
           cnt2++;
        }
        else if(s[i] == '3')
        {
           cnt3++;
        }

       }
       int i =0;
       while (cnt--)
       {
       m[i]='1';
       m[i+1]='+';
       i+=2;
     }
     while(cnt2--){
     m[i]='2';
       m[i+1]='+';
       i+=2;
     }
     while(cnt3--){
        m[i]='3';
       m[i+1]='+';
       i+=2;
     }
     for(int j = 0 ; j <s.size() ; j++)
       cout<<m[j];
     }


}
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#include<string>
//using namespace std;
//void Slove(int k,int n,string s)
//{
//
//}
//int main()
//{
//    int t,n,i;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        cout <<"program sort(input,output);\nvar";
//        string s = "a";
//        for(i = 1; i < n; i++)
//        {
//            s.push_back(',');
//            s.push_back(i + 'a');
//        }
//        cout<<s<<" : integer;\nbegin\n"<<"  readln("<<s<<");";
//        string ch = "a";
//        Slove(1,n,ch);
//        cout << "end."<<endl;
//    }
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N = 1000005;
//char Neck[N << 1],temp[N << 1];
//int sum[N << 1],Q[N << 1];
//int vis[2][N];
//void Solve(int m,int n,int k)
//{
//    int i;
//    sum[0] = 0;
//    for(i = 1; i <= m; i++)
//    {
//        sum[i] = sum[i-1] + (Neck[i] == 'C' ? 1 : -1);
//    }
//    int head = 0,tail = 0;
//    for(i = 1; i <= m; i++)
//    {
//        while(head < tail && sum[Q[tail-1]] >= sum[i])
//            tail--;
//        Q[tail++] = i;
//        if(i >= n)
//        {
//            while(i - Q[head] >= n)
//                head++;
//            vis[k][i-n] = (sum[i-n] <= sum[Q[head]]);
//        }
//    }
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,i,len,Len,ncase = 1;
//    scanf("%d",&n);
//    while(n--)
//    {
//        scanf("%s",temp);
//        len = strlen(temp);
//        strcpy(Neck+1,temp);
//        strcat(Neck+1,temp);
//        Len = strlen(Neck+1);
//        memset(vis,0,sizeof(vis));
//        Solve(Len,len,0);
//        reverse(Neck+1,Neck+Len+1);
//        Solve(Len,len,1);
//        int ans = 0;
//        for(i = 1; i <= len; i++)
//        {
//            if(vis[0][i] || vis[1][len-i])
//                ans++;
//        }
//        printf("Case %d: %d\n",ncase++,ans);
//    }
//    return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//const int N = 100005;
//const long long inf = 1 << 31;
//int sum[N],a[N];
//int L,R,Max;
//void Solve(int n,int k)
//{
//    for(i = 0; i < )
//}
//int main()
//{
//    int t,n,k;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&k);
//        sum[0] = 0;
//        for(i = 1; i <= n; i++)
//        {
//            scanf("%d",&a[i]);
//            sum[i] = sum[i-1] + a[i];
//        }
//        for(i = n+1,j = 1; i < n+1+k; i++)
//        {
//            a[i] = a[i-n];
//            sum[i] = sum[i-1] + a[i];
//        }
//        Solve(n,k);
//        printf("%d %d %d\n",Max,L,R);
//    }
//    return 0;
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<set>
//using namespace std;
//const int N = 1000005;
//set<int> S;
//set<int> ::iterator it;
//int Kill[N];
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m,i,j,k,l,r,x;
//    while(~scanf("%d%d",&n,&m))
//    {
//        S.clear();
//        for(i = 1; i <= n; i++)
//            S.insert(i);
//        memset(Kill,0,sizeof(Kill));
//        for(i = 0; i < m; i++)
//        {
//            scanf("%d%d%d",&l,&r,&k);
//            it = S.lower_bound(l);
//            while(it != S.end() && *it <= r)
//            {
//                x = *it;
//                it++;
//                if(x != k)
//                {
//                    Kill[x] = k;
//                    S.erase(x);
//                }
//            }
//        }
//        for(i = 1; i <= n; i++)
//            printf("%d ",Kill[i]);
//            puts("");
//    }
//}

//
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//char ch[5];
//int main()
//{
//    while(~scanf("%s",ch))
//    {
//        int k = strlen(ch);
//        next_permutation(ch,ch+k);
//        printf("%s\n",ch);
//    }
//    return 0;
//}



//template<class BidirectionalIterator>
//bool next_permutation(
//    BidirectionalIterator first,
//    BidirectionalIterator last
//)
//{
//    if(first == last)
//        return false; //������
//
//    BidirectionalIterator i = first;
//    ++i;
//    if(i == last)
//        return false;  //һ��Ԫ�أ�û����һ��������
//
//    i = last;
//    --i;
//
//    for(;;)
//    {
//        BidirectionalIterator ii = i;
//        --i;
//        if(*i < *ii)
//        {
//            BidirectionalIterator j = lase;
//            while(!(*i < *--j));
//
//            iter_swap(i, j);
//            reverse(ii, last);
//            return true;
//        }
//
//        if(i == first)
//        {
//            reverse(first, last);  //ȫ���򣬼�Ϊ��С�ֵ����У���cba��Ϊabc
//            return false;
//        }
//    }
//
//}





//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//int dp[8][2];
//
//int digit[10];
//
//int dfs(int len , int state, bool fp)
//{
//    if(!len)
//        return 1;
//    if(!fp && dp[len][state] != -1)
//        return dp[len][state];
//    int ret = 0,fpmax = fp ? digit[len] : 9;
//    for(int i = 0; i <= fpmax; i++)
//    {
//        if(i == 4 || state && i == 2)
//            continue;
//        ret += dfs(len-1,i == 6,fp && i == fpmax);
//    }
//    if(!fp)
//    {
//        dp[len][state] = ret;
//    }
//    return ret;
//}
//
//int f(int x)
//{
//    int len = 0;
//    while(x)
//    {
//        digit[++len] = x % 10;
//        x /= 10;
//    }
//    return dfs(len,0,true);
//}
//
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m;
//    memset(dp,-1,sizeof(dp));
//    while(~scanf("%d%d",&n,&m),n+m)
//    {
//        printf("%d\n",f(m)-f(n-1));
//    }
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//long long dp[100][2];
//
//int digit[100];
//
//long long dfs(int len, int state , bool fp)
//{
//    if(!len)
//        return 1;
//    if(!fp && dp[len][state] != -1)
//        return dp[len][state];
//    long long ret = 0;
//    int fmax = fp ? digit[len] : 9;
//    for(int i = 0; i <= fmax; i++)
//    {
//        if(i == 9 && state)
//            continue;
//        ret += dfs(len-1, i == 4, fp && i == fmax);
//    }
//    if(!fp)
//    {
//        dp[len][state] = ret;
//    }
//    return ret;
//}
//long long f(long long m)
//{
//    int len = 0;
//    while(m)
//    {
//        digit[++len] = m % 10;
//        m /= 10;
//    }
//    return dfs(len,0,true);
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,i,j,k;
//    long long m;
//    scanf("%d",&n);
//    memset(dp,-1,sizeof(dp));
//    while(n--)
//    {
//        scanf("%I64d",&m);
//       // printf("~  %d\n",f(m));
//        printf("%I64d\n",m+1-f(m));
//    }
//    return 0;
//}

//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//map<string,int> M;
//struct Node
//{
//    string s;
//    int num;
//}p[10000];
//bool cmp(struct Node p1, struct Node p2)
//{
//    if(p1.num != p2.num)
//        return p1.num > p2.num;
//    else
//    {
//         return p1.s > p2.s;
//    }
//}
//int main()
//{
//    freopen("Input.txt","r",stdin);
//    int t,i,j,n;
//    char a;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d",&n);
//        for(i=0; i<10000; i++)
//        {
//            p[i].num=0;
//            p[i].s="";
//        }
//        getchar();
//        int pos = 0;
//        memset(p,0,sizeof(p));
//        for(i = 0; i < n; i++)
//        {
//            string ch="";
//            while(1)
//            {
//                scanf("%c",&a);
//                printf("~%c\n",a);
//                if(a == '\n')
//                    break;
//                if(a >= 'A' && a <= 'Z')
//                    a = a + 32;
//                if(a >= 'a' && a <= 'z')
//                {
//                   // puts("hi");
//                    ch += a;
//                    cout << ch << endl;
//                }
//                if( a == ' ')
//                {
//                    //cout << ch << endl;
//                   // cout << M[ch] << endl;
//                    if(M[ch] != 0)
//                    {
//
//                        p[M[ch]].num++;
//                    }
//                    else
//                    {
//
//                        M[ch] = ++pos;
//                        //printf("~ %d\n",pos);
//                        cout << ch << endl;
//                        cout<<"I'm here"<<" "<<pos<<endl;
//                        p[pos].s=ch;
//                        puts("hi");
//                        p[pos].num++;
//                    }
//                    ch = "";
//                }
//            }
//           // puts("HI");
//        }
//        sort(p,p+n,cmp);
//        for(i = 0; i < n; i++)
//        {
//            cout << p[i].s<<" " << p[i].num<<endl;
//        }
//    }
//}



//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//
//pair<int,int> P[100];
//
//struct Node
//{
//    int val,num,SumTime,SubTime;
//    Node() {}
//    Node(int v, int c, int t, int k) :val(v),num(c),SumTime(t),SubTime(k){}
//    Node Solve(int c, int w)
//    {
//        return Node(val+w, num+1, SumTime + SubTime + c, SubTime + c);
//    }
//    bool better(const Node& Q)
//    {
//        if(val != Q.val)
//            return val > Q.val;
//        else
//        {
//            if(num != Q.num)
//                return num > Q.num;
//            else
//            {
//                if(SumTime != Q.SumTime)
//                    return SumTime < Q.SumTime;
//                else
//                {
//                    return SubTime < Q.SubTime;
//                }
//            }
//        }
//    }
//}dp[1005];
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int n,m,i,j,V;
//    scanf("%d",&n);
//    while(n--)
//    {
//        memset(dp,0,sizeof(dp));
//        scanf("%d%d",&V,&m);
//        for(i = 0; i < m; i++)
//            scanf("%d",&P[i].first);
//        for(i = 0; i < m; i++)
//            scanf("%d",&P[i].second);
//        sort(P,P+m);
//        for(i = 0; i < m; i++)
//            for(j = V; j >= P[i].first; j--)
//            {
//                Node temp = dp[j - P[i].first].Solve(P[i].first,P[i].second);
//                if(temp.SubTime <= V && temp.better(dp[j]))
//                    dp[j] = temp;
//            }
//        printf("%d %d %d\n",dp[V].val,dp[V].num,dp[V].SumTime);
//    }
//    return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int dp[20][20];
//void Solve()
//{
//    int i,j;
//    dp[0][0] = 1;
//    for(i = 1; i <= 10; i++)
//        for(j = 0; j <= 10; j++)
//        {
//            if(i > j)
//                dp[i][j] = dp[i-1][j];
//            else
//                dp[i][j] = dp[i][j-1] + dp[i-1][j];
//        }
//}
//int main()
//{
//    //freopen("Input.txt","r",stdin);
//    int t,n,m,i,j,V;
//    Solve();
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&m);
//        printf("%d\n",dp[m][n]);
//    }
//    return 0;
//}


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 10000;
char a[N];
char num[N];
int main()
{
    int n,m,i,j,ans;
    while(~scanf("%s",a))
    {
        memset(num,0,sizeof(num));
        int len = strlen(a);
        int pos = 0;
        for(i = 0; i < len; i++)
        {
            if(a[i] >= '0' && a[i] <= '3')
            {
                num[pos++] = a[i];
            }
        }
        sort(num,num+pos);
        printf("%c",num[0]);
        for(i = 1; i < pos;i++)
        {
            printf("+%c",num[i]);
        }
        puts("");
    }
    return 0;
}
 
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
            dfs(i);
        }
    }
    cout<<w;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,w;
int done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=w;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            w++;
             dfs(i);
        }
    }

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        if(done[a]==done[b])
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,sum;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    done[node]=1;
    sum+=v[node].size();
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            cout<<sum/2<<endl;
            sum=0;

        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int x,n,m,ww,w;
bool done[100009];
vector<int>v[100009];
void dfs(int node)
{
    if(!done[node])w++;
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m>>x;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            if(w>=x)
            {
                ww++;
            }
            w=0;
        }
    }
    cout<<ww;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int sum,n,m,mx,arr[100009];
bool done[100009];
vector<int>v[1000009];
void dfs(int node)
{
    if(!done[node])
    {
        mx=max(arr[node],mx);
    }
    done[node]=1;
    for(int i=0;i<v[node].size();i++)
    {
        int u=v[node][i];
        if(!done[u])
        {
            dfs(u);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(!done[i])
        {
            dfs(i);
            sum+=mx;
            mx=0;
        }
    }
    cout<<sum;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
string s[100009];
int X[]={-1,0,0,1},Y[]={0,-1,1,0};
bool done[1009][1009];
void dfs(int x,int y)
{
    done[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+X[i];
        int ny=y+Y[i];
        if(nx>=0&&ny>=0&&nx<n&&ny<m&&s[nx][ny]!='*'&&!done[nx][ny])dfs(nx,ny);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.'&&!done[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> >s;
int n,b,a;
int main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
      int l,r;
      cin>>l>>r;
      for(int j=l;j<=r;j++)
      {
          int X=(j+(j/b))%a;
          int Y=j%b;
          s.insert({X,Y});
      }
    }
    cout<<s.size();
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int q,n,m,w;
vector<pair<int,pair<int,int> > >v[1009];
bool done[1000];
pair<int,int>pr[1009];
void dfs(int node,int wi)
{
    if(done[node])return;
    done[node]=1;
    w++;
    for(int i=0; i<v[node].size(); i++)
    {
        int u=v[node][i].first;
       // cout<<node<<" "<<u<<" "<<we[node][u]<<endl;
        if(v[pr[node].first][i].second.first>=wi)
        {
            dfs(u,wi);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        pr[i]= {a,b};
        v[a].push_back({b,{c,i}});
        v[b].push_back({a,{c,i}});
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t,x;
        cin>>t;
        if(t==1)
        {
            int b,r;
            cin>>b>>r;
            b--;
            for(int j=0;j<v[pr[b].first].size();j++)
            {

                if(v[pr[b].first][j].second.second==b)
                {
                    v[pr[b].first][j].second.first=r;
                }
            }
        }
        else
        {
            int y;
            cin>>x>>y;
            x--;
            dfs(x,y);
            cout<<w<<endl;
            w=0;
            memset(done,0,sizeof(done));
        }
    }
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int n,zz,m;
string s;
vector<int>z;
int main()
{
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            z.push_back(i);
        }
    }
    int w=0,ww=0;
    for(int i=0;i<m;i++)
    {
        string qu;
        cin>>qu;
        if(qu=="query")
        {
            int l,r;
            cin>>l>>r;
            if(w==0)
            {
                for(int j=0;j<z.size();j++)
                {
                    if((l>z[j]&&r>z[j])||(l<z[j]&&r<z[j]))
                    {
                        zz++;
                    }
                    if(zz==z.size())
                    {
                        ww++;
                        zz=0;
                        cout<<ww<<endl;
                    }
                    else cout<<0<<endl;
                }
            }
            else
            {
                ww=0;
                w=0;
            }
        }
        else
        {
            w++;
            int x;
            cin>>x;
            z[x] = 1;
            s[x-1] = 1 - (s[x-1]-'0');
            z.clear();
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    z.push_back(i);
                }
            }
        }
    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s[1009];
string t[1009];
int main(){
    cin>>n>>m;
    cin>>s[0];
    for(int i=0;i<m;i++){
        cin>>t[i];
        if(i != 0)
            s[i] = s[i-1];
        if(t[i] == "query"){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int ans=0;
            for(int j=i;j>=0;j--){
                if(t[j] == "toggle")continue;
                int num = 0;
                for(int k=l;k<r;k++){
                    num += s[j][k]-'0';
                }
                if(num == r-l)ans++;
            }
            cout<<ans<<endl;
        }
        else{
            int x;
            cin>>x;
            x--;
            s[i][x] = '1'- s[i][x] + '0';
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<1000009;i++)
    {
        for(int i=0;i<3;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b&&a==c)
            {
                cout<<'*'<<endl;
                break;
            }
            else if(a==b)
            {
                cout<<'C'<<endl;
                break;
            }
            else if (a==c)
            {
                cout<<'B'<<endl;
                break;
            }
            else cout<<'A'<<endl;;
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int m,n;
int c[100009],a[100009],b[100009];
int x,y,w;
map<int,int>mp;
vector<pair<int,int> >v;
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(mp[a[i]]==0)
        {
            w++;
            c[w]=a[i];
        }
        if(mp[b[i]]==0)
        {
            w++;
            c[w]=b[i];
        }
        mp[a[i]]++;
        mp[b[i]]++;
    }
    for(int i=0;i<w;i++)
    {
        v.push_back({mp[c[i]],c[i]});
    }
    sort(v.begin(),v.end());

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int i1,k1,i2,k2,w;
int b[8][8]={0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0};
int main()
{
    cin>>i1>>k1>>i2>>k2;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            if(i1==i2||k1==k2)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        else if(i==1)
        {
            i1--,i2--,k1--,k2--;
            if(b[i1][k1]!=b[i2][k2])
            {
                cout<<0<<" ";
                w++;
            }
            else if(abs(i1-i2)==abs(k2-k1))
            {
                cout<<1<<" ";
                w++;
            }
                if(w==0)
                {
                    cout<<2<<" ";
                }
        }

        else if(i==2)
        {
            if(abs(i1-i2)==abs(k1-k2))
            {
                cout<<abs(i1-i2);
            }
            else if(i1==i2||k1==k2)
            {
                cout<<abs(i1-i2)+abs(k1-k2);
            }
            else
            {
                cout<<max( abs ( i1 - i2 ), abs ( k1 - k2 ) ) ;
            }
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n*2;
    int b=0;
    int sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=0)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=0)
            cout<<0;
        cout<<endl;
        if(i==0)
        {
            a-=2;
            b+=2;
            sum=1;
        }
        else
        {
            a-=2;
            b+=2;
            sum=1;
        }
    }
    cout<<0<<" ";
    int w=1;
    for(int i=0; i<n; i++)
    {
        cout<<w<<" ";
        w++;
    }
    b=w*2-3;
    w--;
    for(int i=0; i<n-1; i++)
    {
        w--;
        cout<<w<<" ";
    }
    cout<<0<<endl;
    a=2;
    sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=n-1)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=n-1)
            cout<<0;
        cout<<endl;
        if(i<n-1)
        {
            a+=2;
            b-=2;
            sum=1;
        }
        else
        {
            a+=2;
            b--;
            sum=1;
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(s.size()==1)
        {
            cout<<v[i];
            exit(0);
        }
        if(i!=v.size()-1)cout<<v[i]<<'+';
        else cout<<v[i];
    }
}
/*
ID: amirnas1
PROG: cowtour
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <sstream>
using namespace std;

/*
vector<string> prim;
string s;
vector<int> dp;

int main()
{

	ifstream cin;
	cin.open("prefix.in");
	ofstream cout;
	cout.open("prefix.out");
	
	string p;
	s = "";
	cin>>p;
	while (p!= ".")
	{
		prim.push_back(p);
		cin>>p;
	}
	cin.ignore();
	string l;
	while (getline(cin,l)) s += l;
	dp = vector<int> (s.size()+1, -1);
	for (int i = s.size(); i>= 0; i--)
	{
		if (i == s.size()) dp[i] = i;
		else
		{
		int m = i;
			for (int j = 0; j < prim.size(); j++)
			{
				if (i+prim[j].size() <= s.size()) if (s.substr(i,prim[j].size()) == prim[j]) m = max(m, dp[i+prim[j].size()]);
			}
			dp[i] = m;
		}
	}
	cout<<dp[0]<<endl;
}



long long dp[201][101][2];

long long mod(long long a, long long m)
{
	if (a>=0) return a%m;
	else
	{
		return (a+m)%m;
	}
}
long long solve(int n, int k, int f)
{
	if (n==0 && k==0) return 1;
	if (n == 0) return 1;
	if (k <= 0) return 0;
	if (n == 1) return 1;
	if (dp[n][k][f] != -1) return dp[n][k][f];
	int a = n-1;
	long long s = 0;
	long long r;
	for (int i = 1; i < a; i++)
	{
		r = solve(i,k-1, 0) * solve(a-i, k-1, 0);
		if (f) r -= (solve(i,k-2, 0) * solve(a-i, k-2,0));
		s += r;
		s = mod(s,9901);
	}
	return dp[n][k][f] = s;
}

int main()
{
	
	ifstream cin;
	cin.open("nocows.in");
	ofstream cout;
	cout.open("nocows.out");
	
	int n, k;
	cin>>n>>k;
	for (int i=0; i<201; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			
			dp[i][j][0] = dp[i][j][1] = -1;
		}
	}
	cout<<solve(n,k,1)<<endl;
	//system("pause");
}


int main()
{
	int n, m;
	cin>>n>>m;
	vector<int> f(m);
	for (int i = 0; i < m; i++)
	{
		cin>>f[i];
	}
	sort(f.begin(), f.end());
	int r = 10000;
	for (int i = 0; i+n-1 < m; i++ )
	{
		if (f[i+n-1] - f[i] < r) r = f[i+n-1] - f[i];
	}
	cout<<r<<endl;
}


int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b,a%b);
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ab = gcd(a,b);
	int cd = gcd(c,d);
	a /=ab;
	b /= ab;
	c /= cd;
	d /= cd;
	if ((double)a/(double)c < (double)b/(double)d)
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = rb/gab - ra/gab;
		int resb = rb/gab;
		int gres = gcd(resa,resb);

		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
	else
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = ra/gab - rb/gab;
		int resb = ra/gab;
		int gres = gcd(resa,resb);
		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
}


long long pow2(long long n, long long mod)
{
	if (n == 0) return 1;
	if (n%2 ==0)
	{
		long long r = pow2(n/2,mod);
		return (r*r)%mod;
	}
	else
	{
		return (2*pow2(n-1,mod))%mod;
	}
}

long long mod(long long a, long long b)
{
	if (a  > 0)
	{
		return a%b;
	}
	else return (a+b)%b;
}

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	if (n - (n-m)*k > 0)
	{
		long long r = pow2(((n - (n-m)*k)/k)+1,1000000009) - 2;
		r = (r*k)%1000000009;
		long long r2 = (n-m)*(k-1) + ((n - (n-m)*k)%k);
		cout<<mod((r+r2),1000000009)<<endl;
	}
	else
	{
		cout<<m<<endl;
	}
}


vector<int> st;
vector<int> req;
vector<long long> rem;
vector<long long> num;
vector<long long> res;

void pr(long long a, bool p)
{
	if (a ==1) return;
	if (a%2 == 0)
	{
		if (a != 2 || p) res.push_back(2);
		pr(a/2, true);
		return;
	}
	for (long long i = 3; i*i <= a; i+=2)
	{
		if (a%i==0)
		{
			res.push_back(i);
			pr(a/i,true);
			return;
		}
	}
	if (p)
		res.push_back(a);
}

int dfs(int i, bool add)
{
	if (i >= num.size()) return 0;
	res.clear();
	if (rem[i] == num[i])
		pr(rem[i],false);
	else
		pr(rem[i],true);
	int result = res.size()+1;
	int m;
	if (i == num.size()-1)
		m = 0;
	else if (add)
		m = dfs(i+1,true);
	else
		m = dfs(i+1,true) + 1;
	for (int j = i+1; j < num.size(); j++)
	{
		if (rem[j]%num[i] ==0)
		{
			rem[j] /=num[i];
			m = min(dfs(i+1,add),m);
			rem[j] *= num[i];
		}
	}
	return result+m;
}

int main()
{
	int n;
	cin>>n;
	st = vector<int> (n,0);
	req = vector<int> (n,1);
	rem = vector<long long> (n,1);
	num = vector<long long> (n);
	for (int i =0 ; i < n; i++)
	{
		cin>>num[i];
		rem[i] = num[i];
	}
	sort(num.begin(), num.end());
	sort(rem.begin(), rem.end());
	int result = 0;
	
	result = dfs(0,false);
	cout<<result<<endl;
}


vector<int> d1;
vector<pair<int,int> > d3;
vector<int> d2;
vector<vector<int> > g;
vector<bool> mark;
vector<bool> tk;
int dis1(int i,int p)
{
	tk[i] = true;
	int r = -1000000;
	
	int m1 = 0,m2 = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (!tk[g[i][j]])
		if (r < dis1(g[i][j],i))
		{
			r = d1[(g[i][j])];
			m1 = g[i][j];
		}
	}
	int v = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (v < d1[(g[i][j])] && (g[i][j]) != m1 && g[i][j] != p)
		{
			v = d1[(g[i][j])];
			m2 = g[i][j];
		}
	}
	d3[i].first = m1;
	d3[i].second = m2;
	if (r < 0)
	{
		if (mark[i]) return d1[i] = 0;
		else return d1[i] = r;
	}
	return d1[i] = r+1;
}

void dis2(int i,int p)
{
	tk[i] = true;
	if (p == -1)
	{
		if (mark[0])
		{
			d2[0] = 0;
		}
		else
			d2[0] = -10000000;
	}
	else
	{
		int r = d2[p]+1;
		if (d3[p].first == i)
		{
			if (d3[p].second >= 0)
				r = max(d1[d3[p].second]+2,r);
		}
		else
		{
			r = max(d1[d3[p].first]+2,r);
		}
		d2[i] = r;
		if (r < 0)
		{
			if (mark[i])
				d2[i] = 0;
			else
				d2[i] = r;
		}
	}
	for (int j=0; j < g[i].size(); j++)
	{
		if(!tk[g[i][j]])
			dis2(g[i][j],i);
	}
}



int bfs(int i, int d)
{
	int res = 0;
	queue<pair<int,int> > q;
	q.push(make_pair(i,0));
	vector<bool> tk(g.size(),false);
	while (!q.empty())
	{
		pair<int,int> c = q.front();
		q.pop();
		if (tk[c.first])
			continue;
		res++;
		tk[c.first] = true;
		if (c.second < d)
		{
			for (int j=0; j < g[c.first].size(); j++)
			{
				//cout<<t[c.first].second[j]<<"    ";
				q.push(make_pair(g[c.first][j],c.second+1));
			}
		}
	}
	return res;
}


void bTree(int c)
{
	if (tk[c]) return;
	tk[c] = true;
	for (int j = 0; j < g[c].size(); j++)
	{
		if (g[c][j] != t[c].first)
		{
			t[g[c][j]].first = c;
			t[c].second.push_back(g[c][j]);
			bTree(g[c][j]);
		}
	}
}


int main()
{
	int n,m,d;
	cin>>n>>m>>d;
	
	d1 = vector<int> (n,-1000000);
	d2 = vector<int> (n,-1000000);
	d3 = vector<pair<int,int> > (n, make_pair(-1000000,-1000000));
	mark = vector<bool> (n,false);
	tk = vector<bool> (n,false);
	g = vector<vector<int> > (n);
	int a;
	for (int i=0; i < m; i++)
	{
		cin>>a;
		mark[a-1] = true;
	}
	int b;
	for (int i = 0; i < n-1; i++)
	{
		cin>>a>>b;
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	if (m > 1)
	{
tk = vector<bool> (n,false);
	dis1(0,-1);
tk = vector<bool> (n,false);
	dis2(0,-1);
	}
	int res = 0;
	if (m == 1)
	{
	for (int i=0; i < n; i++)
	{
		if (mark[i])
		{
			res = bfs(i,d);
			break;
		}
	}
	}
	else
	{
	for (int i=0; i < n; i++)
	{
	//	cout<<d1[i]<<" "<<d2[i]<<"          ";
		if (d1[i] <= d && d2[i] <= d) res++;
	}
	}
	cout<<res<<endl;

	//	system("pause");
}


string op;
int n;
ifstream fin;
ofstream fout;
void solve(int i)
{

	if (i == n-1)
	{
//		cout<<op<<endl;
		int r = 0;
		vector<char> s1;
		vector<int> s2;
		int c = 1;
		for (int j =0 ; j < n-1; j++)
		{
			if (op[j] == ' ')
			{
				c *= 10;
				c += j+2;
			}
			else
			{
				s2.push_back(c);
				s1.push_back(op[j]);
				c= j+2;
			}
		}
		s2.push_back(c);
		int a,b;
		r = s2[0];
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == '+')
			{
				r += s2[j+1];
			}
			else
				r -= s2[j+1];
		}
		if (r == 0)
		{
			fout<<1;
			for (int j = 0; j < n-1; j++)
			{
				fout<<op[j]<<j+2;
			}
			fout<<endl;
		}
	}
	else
	{
		op[i] = ' ';
		solve(i+1);
		op[i] = '+';
		solve(i+1);
		op[i] = '-';
		solve(i+1);
	}
}

int main()
{
	fin.open("zerosum.in");
	fout.open("zerosum.out");
	fin>>n;
	for (int i = 0; i < n-1; i++)
	{
		op += '.';
	}
	solve(0);

}


vector<int> c;
vector<vector<long long> > dp;
long long solve(int n,int i)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (i >= c.size()) return 0;
	if (dp[n][i] != -1) return dp[n][i];
	if (i == c.size()-1)
	{
		if (n%c[i] == 0) return dp[n][i] = 1;
		else return dp[n][i] = 0;
	}
	long long r = 0;
	for (int j = 0; j <= n/c[i]; j++)
	{
		r += solve(n - j*c[i], i+1);
	}
	return dp[n][i] = r;
}

int main()
{
	
	ifstream cin;
	cin.open("money.in");
	ofstream cout;
	cout.open("money.out");
	
	int v,n;
	cin>>v>>n;
	dp = vector<vector<long long> >(n+1,vector<long long>(v,-1));
	c = vector<int>(v);
	for (int i=0; i < v; i++)
	{
		cin>>c[i];
	}
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	long long r = solve(n,0);
	cout<<r<<endl;
	system("pause");
}


int main() {
    long long int N, V, v[26] = { 0 }, dp[10001] = { 0 }, i;
    freopen("money.in", "r", stdin), freopen("money.out", "w", stdout);
    scanf("%lld %lld", &V, &N);
    for (i = 0, dp[0] = 1; i < V; i++)
        scanf("%lld", v + i);
 
    for (int m = 0; m < V; m++)
        for (int n = 0; n <= N; n++)
            dp[n] += (n - v[m] >= 0 ? dp[n - v[m]] : 0);
 
    printf("%lld\n", dp[N]);
    return 0;
}


int g[100][100];

vector<int> res;

void solve(int i)
{
	bool ok = true;
	int s =0;
	vector<bool> tk(100,false);
	tk[i] = true;
	res.clear();
	while (ok)
	{
		ok = false;
		for (int j = 0; j < 100; j++)
		{
			if (tk[j]) continue;
			s = 0;
			s += g[i][j];
			for (int k = 0; k < res.size(); k++)
			{
				s += g[res[k]][j];
			}
			if (s > 50)
			{
				res.push_back(j);
				tk[j] = true;
				ok = true;
			}
		}
	}
}

int main()
{
		ifstream cin;
	cin.open("concom.in");
	ofstream cout;
	cout.open("concom.out");
	int n;
	cin>>n;
	int a,b,c;
	while (n--)
	{
		cin>>a>>b>>c;
		g[a-1][b-1] = c;
	}
	for (int i=0; i < 100; i++)
	{
		solve(i);
		sort(res.begin(),res.end());
		for (int j = 0; j < res.size(); j++)
		{
			cout<<i+1<<" "<<res[j]+1<<endl;
		}
	}
}


char pl[10][10];
int c1x,c1y,d1;
int c2x,c2y,d2;
bool valid(int a, int b)
{
	if (a < 0 || b < 0 || a >=10 || b >= 10) return false;
	if (pl[a][b] != '*') return true;
	return false;
}
void move()
{
	if (d1 == 1)
	{
		if (valid(c1x-1,c1y))
		{
			c1x--;
		}
		else
		{
			d1 = 2;
		}
	}
	else if (d1 == 2)
	{
		if (valid(c1x,c1y+1))
		{
			c1y++;
		}
		else
		{
			d1 = 3;
		}
	}
	else if (d1 == 3)
	{
		if (valid(c1x+1,c1y))
		{
			c1x++;
		}
		else
		{
			d1 = 4;
		}
	}
	else if (d1 == 4)
	{
		if (valid(c1x,c1y-1))
		{
			c1y--;
		}
		else
		{
			d1 = 1;
		}
	}

	if (d2 == 1)
	{
		if (valid(c2x-1,c2y))
		{
			c2x--;
		}
		else
		{
			d2 = 2;
		}
	}
	else if (d2 == 2)
	{
		if (valid(c2x,c2y+1))
		{
			c2y++;
		}
		else
		{
			d2 = 3;
		}
	}
	else if (d2 == 3)
	{
		if (valid(c2x+1,c2y))
		{
			c2x++;
		}
		else
		{
			d2 = 4;
		}
	}
	else if (d2 == 4)
	{
		if (valid(c2x,c2y-1))
		{
			c2y--;
		}
		else
		{
			d2 = 1;
		}
	}
}

int sol()
{
	d1 = d2 = 1;
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pl[i][j] == 'F')
			{
				c2x = i;
				c2y = j;
			}
			if (pl[i][j] == 'C')
			{
				c1x = i;
				c1y = j;
			}
		}
	}
	while (!(c1x == c2x && c1y == c2y))
	{
		move();
		r++;
		if (r == 10000) return 0;
	}
	return r;
}

int main()
{
			ifstream cin;
	cin.open("ttwo.in");
	ofstream cout;
	cout.open("ttwo.out");
	for (int i=0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin>>pl[i][j];
		}
	}
	cout<<sol()<<endl;
}


vector<vector<int> > dis[2];
vector<string> mp;
pair<int,int> a[2];

bool valid(int i, int j)
{
	if (i < 0 || j < 0 || i>= mp.size() || j >= mp[0].size()) return false;
	if (mp[i][j] == '|' || mp[i][j] == '-') return false;
	return true;
}

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void bfs(int i)
{
	pair<pair<int,int> , int> st;
	st.second = 1;
	st.first = a[i];

	queue<pair<pair<int,int> , int> > q;
	q.push(st);
	while (!q.empty())
	{
		st = q.front();
		q.pop();
		if (!valid(st.first.first,st.first.second)) continue;
		if (st.second >= dis[i][st.first.first][st.first.second]) continue;
		dis[i][st.first.first][st.first.second] = st.second;
		for (int j = 0; j < 4; j++)
		{
			if (valid(st.first.first+dr[j],st.first.second+dc[j]))
			{
				q.push(make_pair(make_pair(st.first.first+2*dr[j],st.first.second+2*dc[j]),st.second+1));
			}
		}
	}
}

int main()
{
	ifstream cin;
	cin.open("maze1.in");
	ofstream cout;
	cout.open("maze1.out");
	int r,c;
	cin>>r>>c;
	mp = vector<string>(2*c+1);
	dis[0] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	dis[1] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	cin.ignore();
	for (int i = 0; i < 2*c+1; i++)
	{
		getline(cin,mp[i]);
	}
	int d = 0;
	for (int j = 1; j < 2*r+1; j+=2) if (mp[0][j] == ' ')
	{
		a[d].first = 1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*r+1; j+=2) if (mp[2*c][j] == ' ')
	{
		a[d].first = 2*c-1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][0] == ' ')
	{
		a[d].first = j;
		a[d].second = 1;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][2*r] == ' ')
	{
		a[d].first = j;
		a[d].second = 2*r-1;
		d++;
	}
	bfs(0);
	bfs(1);
	int res = 0;
	for (int i = 1; i < 2*c+1; i+=2)
	{
		for (int j = 1; j < 2*r+1; j+=2)
		{
			res = max(res,min(dis[0][i][j],dis[1][i][j]));
		}
	}
	cout<<res<<endl;

}


int main()
{
		ifstream cin;
	cin.open("cowtour.in");
	ofstream cout;
	cout.open("cowtour.out");
	int n;
	cin>>n;
	char a;
	vector<vector<double> >sp(n, vector<double>(n,10000000000));
	vector<pair<double,double> > p(n);
	for (int i = 0; i < n; i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a;
			if (a == '1')
			{
				sp[i][j] = sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first));
			}
		}
	}

	for (int k = 0; k < n; k++) for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j) sp[i][j] = min(sp[i][j],sp[i][k]+sp[k][j]);
	double res = 0;
	double r2 = 10000000000;
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sp[i][j] < 10000000000) res = max(res,sp[i][j]);
			else
			{
				double di=0,dj=0;
				for (int k = 0; k < n; k++)
				{
					di = (sp[i][k] < 10000000000) ? max(di,sp[i][k]) : di;
					dj = (sp[j][k] < 10000000000) ? max(dj,sp[j][k]) : dj;
				}
				r2 = min(r2,di+dj+sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first)));
			}
		}
	}
	cout<<fixed<<setprecision(6)<<max(r2,res)<<endl;
}
*/

int main()
{
	int a[3] = {0};
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') a[0]++;
		else if (s[i] == '2') a[1]++;
		else if (s[i] == '3') a[2]++;
	}
	for (int i = 0; i < a[0]; i++)
	{
		cout<<1;
		if (i < a[0]-1) cout<<"+";
	}
	for (int i = 0; i < a[1]; i++)
	{
		if (i == 0 && a[0] > 0) cout<<"+";
		cout<<2;
		if (i < a[1]-1) cout<<"+";
	}
	for (int i = 0; i < a[2]; i++)
	{
		if (i == 0 && a[1]+a[0] > 0) cout<<"+";
		cout<<3;
		if (i < a[2]-1) cout<<"+";
	}
	cout<<endl;
}
 /* int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }*/
//--------------------------------------------------
     /*string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";*/
//--------------------------------------------------------
     /*int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }*/
//------------------------------------------------------------
    /*string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;*/
//---------------------------------------------------------
     /*string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;*/
//-----------------------------------------------------
    /* string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";*/
//------------------------------------------
     /*int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];*/
//-------------------------------------------------
      /*string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];*/
//-----------------------------------------------------
      /*int a,b,c,x=0,y=0,d,z=0;
      double f=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
    	  if(a%10!=0) x+=((a%10)*pow(10,f++));
    	  a/=10;
      }
      f=0;
      while(b>0)
            {
          	  if(b%10!=0) y+=((b%10)*pow(10,f++));
          	  b/=10;
            }
      f=0;
           while(c>0)
                 {
               	  if(c%10!=0) z+=((c%10)*pow(10,f++));
               	  c/=10;
                 }
      d=x+y;
      if(z==d) cout<<"YES";
      else cout<<"NO";*/
//----------------------------------------------------------
     /* int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;*/
//----------------------------------------------------------------
     /*string s,y;
     int i=0;
     char c=' ';
     cin>>s;
     int d=0;
     while(i<s.size())
     {
    	 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    	 { i+=3; d++;}
    	 else {
    		 if(y.size()!=0&&d!=0){
    		 y+=c;
    		 y+=s[i];}
    		 else y+=s[i];
    		 i++;
    		 d=0;
    	 }
     }
     cout<<y;*/
//--------------------------------------------------------------------
     /*int n;
     cin>>n;
     string s;
     cin>>s;
     char cc;
     int i=0,f=s.size()-1;
     int b=0,e=s.size()-1;
     for(int j=0;j<n;j++)
                         {
                             int min=j;
                             for(int i=j+1;i<n;i++)
                                 if(s[i]<s[min]) min=i;
                             cc=s[min];
                             s[min]=s[j];
                             s[j]=cc;
                         }
     for(int j=n;j<s.size();j++)
                              {
                                  int min=j;
                                  for(int i=j+1;i<s.size();i++)
                                      if(s[i]<s[min]) min=i;
                                  cc=s[min];
                                  s[min]=s[j];
                                  s[j]=cc;
                              }
     i=0;
      if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f--])
    		 {
    			goto x;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
      else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f--])
    	     		 {
    	     			goto x;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
   //  if(s[b]==s[e]){
   // 		 goto x;
   //  }
     x: i=0,b=0,e=n,f=n;
     if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f++])
    		 {
    			 cout<<"NO";
    			     	 return 0;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
     else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f++])
    	     		 {
    	     			 cout<<"NO";
    	     	     	 return 0;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
    // if(s[b]==s[e]){
    	//	 cout<<"NO";
    	//	 return 0;}

//---------------------------------------------------------------------
     /*string s,s2;
     cin>>s;
     int i=0,f=s.size()-1,c=0,count=0;
     char d;
     while(true)
     {
    	 c=0,f=s.size()-1,i=0;
    	 while(i<s.size()/2)
    		 if(s[i++]!=s[f--])
    		 {
    			 c++;
    			 break;
    		 }
    	 if(c==0) break;
    	 s2=s;
    	 i=0,f=s.size()-1;
    	 while(i<s.size()/2)
    	 {
    		 d=s[i];
    		 s[i]=s[f];
    		 s[f]=d;
    	 }
    	 i=0;
    	 while(i<s.size()){
    		 d=(s[i]-48)+(s2[i++]-48);
    		 s[i]=d;

    	 }

    	 count++;
     }
     cout<<count<<" "<<s;*/
//--------------------------------------------------------------------------
// 4A
    /* int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";*/
//-------------------------------------------------------------------------
    //231A
    /*int x=0,c=0,i=0,d=0,y=0,z=0;
    cin>>x;
    while(z++<x)
    {
    	i=0,c=0;
    	while(i++<3)
    	{
    		cin>>y;
    		if(y==1) c++;
    	}
    	if(c>1) d++;
    }
    cout<<d;*/
//---------------------------------------------------------------------------
   /*char y[3][3];
   int i,j,x=0,o=0,no=0;
   for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
		   cin>>y[i][j];
		   if(y[i][j]=='X') x++;
		   if(y[i][j]=='O') o++;
		   if(y[i][j]=='.') no++;
	   }
   if((x==o||x-1==o))
   {
	   for(i=0;i<3;i++)
	   {

		   if(y[i][0]==y[i][1]&&y[i][0]==y[i][2])
			   {if(y[i][0]=='X')
			   {
				   if(x-1==o){
				   cout<<"the first player won";
				   return 0;}
				   goto ff;
			   }
			   if(y[i][0]=='O')
			  			   {
				               if(x==o){
			  				   cout<<"the second player won";
			  				   return 0;}
				               goto ff;
			  			   }}
		   if(y[0][i]==y[1][i]&&y[0][i]==y[2][i]){
			   if(y[0][i]=='X')
			   			   {
				   if(x-1==o){
				  				   cout<<"the first player won";
				  				   return 0;}
				  				   goto ff;
			   			   }
			   			   if(y[0][i]=='O')
			   			  			   {
			   				 if(x==o){
			   							  				   cout<<"the second player won";
			   							  				   return 0;}
			   								               goto ff;
			   			  			   }}
			   }
       if((y[0][0]==y[1][1]&&y[0][0]==y[2][2])||(y[0][2]==y[1][1]&&y[0][2]==y[2][0]))
       {if(y[1][1]=='X')
       			   { if(x-1==o){
	  				   cout<<"the first player won";
	  				   return 0;}
	  				   goto ff;
       			   }
       			   if(y[1][1]=='O')
       			  			   {
       				 if(x==o){
       							  				   cout<<"the second player won";
       							  				   return 0;}
       								               goto ff;
       			  			   }}
	   if(no==0)
	   {
		   cout<<"draw";
		   return 0;
	   }
	   if(x==o)
	   {
		   cout<<"first";
		   return 0;
	   }
	   if(x-1==o)
	   	   {
	   		   cout<<"second";
	   		   return 0;
	   	   }
   }
   ff:cout<<"illegal";*/
//--------------------------------------------------------------------------
   //69A
   /*int x,z=0,i=0,a=0,b=0,c=0,suma=0,sumb=0,sumc=0;
   cin>>x;
   while(z++<x)
	   {
	    cin>>a>>b>>c;
	    suma+=a;
	    sumb+=b;
	    sumc+=c;
	   }
   if(suma==0&&sumb==0&&sumc==0) cout<<"YES";
   else cout<<"NO";*/
//-----------------------------------------------------------------------
   /*long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;*/
//------------------------------------------------------------------------
  /* int x;
   cin>>x;
   int y[x][x];
   for(int i=0;i<x;i++)
   {
	   int f=i,d=1;
	   for(int k=0;k<=i;k++)
	   {
		   y[f][x-d]=i+1;
		   if(i+1!=x) y[x-d][f]=i+1;
		   d++,f--;
	   }
   }
   for(int i=0;i<x;i++)
   { for(int k=0;k<x;k++)
   {  cout<<y[i][k];
      if(k!=x-1) cout<<" ";
   }
   if(i!=x-1) cout<<endl;}*/
//------------------------------------------------------------
   /*string x,y="heavy",z="metal";
   cin>>x;
   long long h=-5,m,c=0;
   for(int i=0;;i++)
   {
	   h=x.find(y,h+5);
	   if(h>-1)
	   {
		   m=x.length();
		   for(int j=0;;j++)
		   {
			   m=x.rfind(z,m-1);
			   if(m>-1&&m>h+4) c++;
			   else break;
		   }
	   }
	   else break;
   }
   cout<<c;*/
   //------------------------------------------------------------------
    /*string s;
	cin>>s;
	int z=0,c=0;
	while(z++<s.size())
	{
		if(s[z-1]=='h'&&c==0)
		{
			c++;
			continue;
		}
		if(s[z-1]=='e'&&c==1)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==2)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==3)
		{
			c++;
			continue;
		}
		if(s[z-1]=='o'&&c==4)
		{
			c++;
			break;
		}
	}
	if(c==5) cout<<"YES";
	else cout<<"NO";*/
//---------------------------------------------------------------
    /*string s,d,r;
    int z=0;
    cin>>s>>d;
    while(z++<s.size())
    {
    	if(s[z-1]==d[z-1]) r+='0';
    	else r+='1';
    }
    cout<<r;*/
//------------------------------------------------------------
   /*int x,z=0;
   cin>>x;
   int y[x];
   while(cin>>y[z++]);
   int l=0,k=x;
   for(int i=0;i<x;i++)
   {
	   if(y[i]){
		   int m=0;
		   for(int j=i+1;j<x;j++)
		   {
			   if(y[i]==y[j])
			   {
				   m++;
				   y[j]=0;
			   }
		   }
		   if(m>0) k-=m;
		   if(m>l) l=m;
	   }
   }
   cout<<l+1<<" "<<k;*/
//---------------------------------------------------------------
    /*int x,z=0,even=0,odd=0,eve=0,od=0;
    cin>>x;
    int y[x];
    while(z<x) cin>>y[z++];
    z=0;
    while(z++<x)
    {
    	if(y[z-1]%2==0) {even++; eve=z-1;}
    	else {odd++; od=z-1;}
    }
    if(even==1) cout<<eve+1;
    else cout<<od+1;*/
//---------------------------------------------------------
    /*string s;
    int z=0,c=0;
    cin>>s;
    while(z<s.size())
    {
    	if(s[z]==s[z+1]) c++;
    	else c=0;
    	if(c>=6){
    		cout<<"YES";
    		return 0;
    	}
    	z++;
    }
    cout<<"NO";*/
    //----------------------------------------------------------
   /* int z=1;
    string s;
   cin>>s;
   if(s[0]>=97&&s[0]<=122)
   {
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   else{
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   cout<<s;*/
//---------------------------------------------------------------
   /*int n,k,z=0,c=0;
   cin>>n>>k;
   int y[n];
   while(cin>>y[z++]);
   z=0;
   while(z++<n)
   {
	   if(y[z-1]>=y[k-1])
		   {if(y[z-1]>0)
			   c++;}
	   else break;
   }
   cout<<c;*/
//-------------------------------------------------------------
   /*int x,k,y,f,z=0,i=0,c=0;
   cin>>x>>k;
   int s[x];
   while(z++<x)
   {
	   cin>>y;
	   int d=0,m=0;
	   while(d++<y)
	   {
		   cin>>f;
		   if(k>f&&m==0)
		   {
			   c++;
			   m++;
			   s[i++]=z;
		   }
	   }
   }
   z=1;
   if(c==0) cout<<c;
   else{
	   cout<<c<<endl<<s[0];
	   while(z++<i) cout<<" "<<s[z-1];
   }*/
//------------------------------------------------------------
   /*int a,b,c,d,m,v;
   cin>>a>>b>>c>>d;
   m=(3*a)/10;
   if(a-((a*c)/250)>m) m=a-((a*c)/250);
   v=(3*b)/10;
   if(b-((b*d)/250)>v) v=b-((b*d)/250);
   if(m>v) cout<<"Misha";
   if(v>m) cout<<"Vasya";
   if(v==m) cout<<"Tie";*/
//------------------------------------------------------------
   /*int z=0,c=0,y[26];
   string s;
   cin>>s;
   while(z++<s.size()) y[s[z-1]-97]=1;
   z=0;
   while(z++<26) if(y[z-1]==1) c++;
   if(c%2) cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";*/
//--------------------------------------------------------------
   /*long x;
   int z=0,c=0,y[4]={0,0,0,0},i=0;
   while(z++<4)
   {
	   cin>>x;
	   if(y[0]!=x&&y[1]!=x&&y[2]!=x&&y[3]!=x) {y[i++]=x; c++;}
   }
   cout<<4-c;*/
//------------------------------------------------------------
   /*long long x;
   cin>>x;
   if(x%2) cout<<-1*((x+1)/2);
   else cout<<x/2;*/
//-------------------------------------------------------
   /*string s;
   cin>>s;
   int z=0;
   while(z++<s.size()) if(s[z-1]=='H'||s[z-1]=='Q'||s[z-1]=='9') {cout<<"YES"; return 0;}
   cout<<"NO";*/
//----------------------------------------------------------
   /*int x,a,b,in=0,max=0,z=0;
   cin>>x;
   while(z++<x)
   {
	   cin>>a>>b;
	   in=(in-a)+b;
	   if(in>max) max=in;
   }
   cout<<max;*/
//-------------------------------------------------------------
   /*int x=0,y,n=0;
   cin>>y;
   while(++n)
   {
	   x+=(n*(n+1))/2;
	   if(x>y)
	   {
		   cout<<n-1;
		   return 0;
	   }
   }*/
//------------------------------------------------------------
  /*int m,n,c=0;
  cin>>n>>m;
  for(;n*m>0;n--,m--,c++);
  if(c%2) cout<<"Akshat";
  else cout<<"Malvika";*/
//---------------------------------------------------
  /*int x,z=0,y,c=0,d[5]={0,0,0,0,0};
  cin>>x;
  while(z++<x)
  {
	  cin>>y;
	  d[y]++;
  }
  c=c+d[4]+d[3]+(d[2]/2);
  d[1]-=d[3];
  if(d[2]%2) {c++; d[1]-=2;}
  if(d[1]>0) c+=(d[1]/4);
  if(d[1]%4&&d[1]>0) c++;
  cout<<c;*/
//-------------------------------------------------------
  /*int n,i=0;
  cin>>n;
  int x[n];
  while(i++<n) cin>>x[i-1];
  for(i=1;i<=n;i++)
	  for(int j=0;j<n;j++)
		  if(x[j]==i)
		  {
			  if(i==1) cout<<j+1;
			  else cout<<" "<<j+1;
		  }*/
//---------------------------------------------------------
  /*int n,z=1,y=1,m=2;
  cin>>n;
  int x[n]={1,1};
  n--;
  for(int i=2;i<=n;i+=2)
  {
	  x[i]=z+y;
	  x[i+1]=y;
	  z=y;
	  y=x[m++];
  }
  cout<<x[n];*/
//-----------------------------------------------------------------
  /*int x;
  cin>>x;
  int y[x];
  int z=0;
  while(z++<x) cin>>y[z-1];
  for(int i=0;i<x;i++)
  {
	  int max=i;
	  for(int k=i+1;k<x;k++)
		  if(y[k]>y[max])
			  max=k;
	  swap(y[i],y[max]);
  }
  int sum=0,sumarr=0,c=0;
  for(int i=0;i<x;i++)
  {
	  sumarr=0;
	  sum+=y[i];
	  c++;
	  for(int k=i+1;k<x;k++)
		  sumarr+=y[k];
	  if(sum>sumarr) break;
  }
  cout<<c;*/
  //----------------------------------------------------------------
   string s;
   cin>>s;
   int x=(s.size()+1)/2;
   int y[x],z=0,f=0,min=0;
   while(z<s.size())
	   {y[f++]=s[z];
	   z+=2;
	   }
   for(int i=0;i<x;i++)
   {
	   min=i;
	   for(int k=i+1;k<x;k++)
		   if(y[k]<y[min])
			   min=k;
	   swap(y[min],y[i]);
   }
   z=0,f=0;
   while(z<s.size())
	   {
	   s[z]=y[f++];
	   z+=2;
	   }
   cout<<s;
        return 0;
}
 
#include<bits/stdc++.h>
#include<cmath>
#include<string>
using namespace std;

const int N=0;
// The array Problem codechef
// int main(){  
// 	int t;
// 	long long n;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 		cin>>n;
// 		int arr[n]={};
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		int ar[n]={};
// 		int s=0;
// 		for(int i=0;i<n;i++){
// 			for (int j=0;j<n;j++){
// 				if(i!=j){
// 					s+=arr[j];
// 				}
				
// 			}
// 			ar[i]=s;
// 				s=0;
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<ar[i]<<" ";
// 		}
// 		cout<<endl;
		
// 	}
// }


//https://codeforces.com/contest/1453/problem/A


// int main(){
// 	int t,c;
// 	long long n,m;
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>n>>m;
// 		long long bottom[n],left[m];
// 		for(int i=0;i<n;i++){
// 			cin>>bottom[i];
// 		}
// 		for(int i=0;i<m;i++){
// 			cin>>left[i];
// 		}
		
// 		for(int i=0;i<n;i++){
// 			for (int j=0;j<m;j++){
// 				if(bottom[i]==left[j])
// 					c++;
// 			}
// 		}
		
		
		
// 	cout<<c<<endl;
	
//     }
// 	return 0;
// }

//https://codeforces.com/contest/1450/problem/B	
// int main(){
// 	long long t,n,k,x[n],y[n],d;
// 	int c=0,cc;
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>k;
// 		for(int i=0;i<n;i++){
// 			cin>>x[i]>>y[i];
// 		}
// 		for(int i=0;i<n;i++){
// 			for (int j=i+1;j<n;j++){
// 				d=abs(x[i]-x[j])+abs(y[i]-y[j]); 
// 				if(d<=k){
// 					c++;
// 				}
// 				else{
// 					c=0;
// 					break;
// 				}
				
// 			}
// 			if(c!=0)
// 			{
// 				cc=1;
// 				break;
// 			}
// 			else{
// 				cc=-1;
// 			}
// 		}
// 	 cout<<cc<<endl;
		
// 	}
// 	return 0;
	
// }

//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
// unfinished
// bool sortbysecond(const pair<string,int> &a,
//               const pair<string,int> &b)
// {
//     if (a.second != b.second){
//     	return (a.second > b.second);
//     }
//     if((a.first.compare(0, b.first.size(), b.first) == 0
//         || b.first.compare(0, a.first.size(), a.first) == 0))
//     {
    	 
 
//         return a.first.size() > b.first.size();
//     }
 
    
//     else{
//         return a.first < b.first;
//     }

    	
    
    
// }
// int main(){
// 	long long n;
	
// 	cin>>n;
// 	// vector<string> name;
// 	// vector<int> marks;
// 	vector<pair<string, int>> v;
// 	for(int i=0;i<n;i++){
// 		cin>>v[i].first>>v[i].second;
		
// 	}
	
// 	sort(v.begin(),v.end(),sortbysecond);
// 	for(int i=0;i<n;i++){
// 		cout<<v[i].first<<v[i].second;
		
// 	}
// 	return 0;
	
// 	}

//https://codeforces.com/problemset/problem/1325/B
// int main(){
// 	long long t,n,k,d,c,el=0;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
	
// 	   long long arr[n],narr[n*n];
// 	   for(int i=0;i<n;i++){
// 		  cin>>arr[i];
		  
// 	      }
// 	   //   for(int i=0;i<n;i++){
// 		  // cout<<arr[i]<<" ";
		  
		  
// 	   //    }
// 	   //    cout<<endl;
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	if(i<n){
// 	    // 		narr[i]=arr[i];
// 	    // 	}
// 	    // 	else{
// 	    // 		narr[i]=narr[i-n];
// 	    // 	}
// 	    // }
// 	    // for(int i=0;i<n*n;i++){
// 	    // 	cout<<narr[i]<<" ";
// 	    // }
// 	    sort(arr,arr+n);
// 	    c=n;
// 	   //  for(int i=0;i<n;i++){
// 		  // cout<<arr[i];
		  
// 	   //    }
// 	    for(int i=0;i<n-1;i++){
	    	
// 	    	if(arr[i]==arr[i+1]){
// 	    		c--;
// 	    	}     
	    
// 	    }
	    
// 	   cout<<c<<endl; 
// 	}
// }

//https://codeforces.com/contest/977/problem/C
//unfinished

// int main(){
// 	long long t,n,k,d,c;
	
	
	
//      cin>>n>>k;
     
     
//      int arr[n];
//      for(int i=0;i<n;i++){
//      	cin>>arr[i];
//      }
//      sort(arr,arr+n);
     
//       if(n==1 && k!=0){
//      	cout<<arr[0]+1<<endl;
//      }
//     else if(k<n && n!=1){
    	
//     	if(k==0){
//         	int l=arr[k]-1;
//         	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//         }
    	
//        else if(arr[k-1]==arr[k]){
//     	cout<<-1<<endl;
//            }
        
//     	else{
//     		cout<<arr[k-1]<<endl;
//     	}
    	
//     }
//     else if(n==1 && k==0){
//     	int l=arr[k]-1;
//     	if(l>0){
//         		cout<<l<<endl;
//         	}
//         	else{
//         		cout<<-1<<endl;
//         	}
//     }
// 	else if(n==k){
// 	    cout<<arr[k-1]<<endl;
//       }  
//   return 0; 
// }
      
// int main(){
// 	string s1="Hello";
// 	s1[0]='Y';
// 	cout<<s1;
// }


//https://codeforces.com/contest/352/problem/B
 //unfinisheaaad

// int main(){
// 	long long t,n,k,d,c,i=0;
// 	pair<int,int> p;
// 	cin>>n;
// 	long long arr[n];
// 	for (int i =0;i<n;i++){
// 		cin>>arr[i];
// 	}
	 
//     while(i<n-1){
// 		for (int j =i+1;j<n;j++){
// 		if(arr[i]==arr[j]){
// 			d=j-i;
// 			i=j;
// 		}
// 	}
// 	}

// }

//https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=true

// unfinished

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

// string superReducedString(string s) {
//     int l,i; string r;
//     l=s.size();
//     for( i=0;i<l-1;i++){
//         if(s[i]==s[i+1]){
//             if(i+2<l){
//                 s.erase(s.begin()+i,s.begin()+i+2);
//                 l=s.size();
//                 i=0;
            
//             }
//             if(i+2==l){
//                 // s.erase(i);
//                 // s.erase(i+1);
//                 // l=s.size();
//                 // i=0;
//                 s="Empty String";
//             }
            
            
            
//         }
//     }
//     if (s.empty()){
//         s="Empty String";
//     }
    
//     return s;

// }

// int main()
// {
//     // ofstream fout(getenv("OUTPUT_PATH"));

//      string s;
//     // getline(cin, s);
    
//     cin>>s;

//     string result = superReducedString(s);

//     // fout << result << "\n";
    
//     cout<<result<<" ";

//     // fout.close();

//     return 0;
// }


//https://codeforces.com/contest/1659/problem/A

//Wrong answer on test case 3

// int main(){
// 	long long t,n,r,b,bb,c,q;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n>>r>>b;
// 		char s[n];
// 		for(int i=0;i<n;i++){
// 			s[i]='R';
// 			// cout<<s[i];
// 		}
// 		// cout<<endl;
// 		bb=b;
// 		for (int j=0;j<n;j++){
// 			q=r/(bb+1);
// 			q=floor(q);
// 			s[j+q]='B';
// 			r-=q;
// 			bb-=1;
// 			j+=q;
			
// 		}
// 		for(int i=0;i<n;i++){
// 			cout<<s[i];
// 		}
// 		cout<<endl;
		
//     }
//     return 0;
// }

//pointers and 2D arrays

// int main(){
// 	int B[2][3];
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			B[i][j]=i+j;
// 		}
// 	}
// 	for (int i=0;i<2;i++){
// 		for(int j=0;j<3;j++){
// 			cout<<B[i][j];
// 		}
// 		cout<<endl;
	
// 	}
// 	int (*p)[3]=B;
// 	cout<<B<<endl;
// 	cout<<B[0]<<endl;
// 	cout<<&B[0][0]<<endl;
// 	cout<<**B<<endl;
// }





// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string rate;
	
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		if(n<3){
// 			cout<<-1<<endl;
// 			continue;
// 		}
// 		sort(arr,arr+n);
		
// 		for(int i=0;i<n-1;i++){
// 			c=1;
// 			for(int j=i+1;j<n;j++){
// 				if(arr[i]==arr[j]){
// 					c++;
				
// 				}
				
// 				if(c==3){
// 					break;
// 				}
				
// 				if(arr[j]>arr[i]){
// 					break;
// 				}
				
// 			}
// 			if(c>=3){
// 				cout<<arr[i]<<endl;
// 				break;
// 			}
// 		}
// 		if(c<3){
// 			cout<<-1<<endl;
// 		}
// 	}
// }

// int main(){
// 	long long t,l,n,r,b,bb,c,q;
// 	string s,ss;
// 	n=0;
// 	c=0;
	
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>s;
// 		l=s.size();
// 		if(l==1){
// 			cout<<"NO"<<endl;
// 			continue;
// 		}
		
// 		for(int i=0;i<l;i++){
			
		
// 			if(i==0){
// 				if(s[i]==s[i+1]){
// 					c=1;
// 				}
// 				else{
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(i==l-1){
// 				if(s[i]==s[i-1]){
// 					c=1;
// 				}
// 				else{
// 					c=0;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			else if(s[i-1]==s[i]||s[i+1]==s[i]){
// 				c=1;
// 			}
// 			else{
// 				c=0;
// 				cout<<"NO"<<endl;
// 				break;
// 			}
			
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}
// 	}
// }




// int main(){
// 	long long t,n,r,b,bb,c,q;
// 	string s;
// 	c=1;
	
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		long long arr[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 		}
// 		c=1;
// 		if(arr[0]%2==0){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
// 			if(c==-1){
// 			continue;
// 		}	
			
// 		}
// 		else if(arr[0]%2==1){
// 			for(int i=0;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 		if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(arr[1]%2==0){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=0){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		else if(arr[1]%2==1){
// 			for(int i=1;i<n;i+=2){
// 				if(arr[i]%2!=1){
// 					c=-1;
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 			}
			
// 			if(c==-1){
// 			continue;
// 		}	
// 		}
// 		if(c==1){
// 			cout<<"YES"<<endl;
// 		}


// 	}
// }


// int main(){
// 	long long t,n,r,b,bb,c,q,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		cin>>s;
// 		bool flag=true;
// 		for(int i=0;i<n;i++){
// 			while(i<n && s[i]=='W') i++;
// 			if(i==n) break;
// 			int blue =0, red=0;
// 			while(i<n && s[i]!='W'){
// 				if(s[i]=='B') blue++;
// 				else red++; 
// 				i++;
// 			}
			 
// 			if(red==0 || blue==0){
// 				flag=false;
// 				break;
// 			}
			
// 		}
// 		if(flag){cout<<"YES"<<endl;}
// 		else cout<<"NO"<<endl; 
// 	}
// }
	
	// c=1;
	
	// cin>>t;
	// while(t--){
	// 	cin>>n;
	// 	cin>>s;
	// 	if(n==1){
	// 		if(s=="W"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
	// 	}
	// 	if(n==2){
	// 		if(s=="WW" || s=="RB" || s=="BR"){
	// 			cout<<"YES"<<endl;
	// 			continue;
	// 		}
	// 		else{
	// 			cout<<"NO"<<endl;
	// 			continue;
	// 		}
			
	// 	}
		
		
	// 	l=s.size();
	// 	char c='W';
	// 	bool flag=true;
	// 	for(int i=0;i<l;i++){
	// 		while(i<n && s[i]=='W') i++;
	// 		if(i==n) break;
	// 		int blue =0, red=0;
	// 		while(i<n && s[i]!='W'){
	// 			if(s[i]=='B') blue++;
	// 			else red++; 
	// 			i++;
	// 		}
			 
	// 		if(red==0 || blue==0){
	// 			flag=false;
	// 			break;
	// 		}
			
	// 	}
	// 	if(flag){cout<<"YES"<<endl;}
	// 	else cout<<"NO"<<endl;
	// 	}
		
		
			
		
			// if(i==0){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i+1]=='R' || s[i+1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
				
		// 	}
		// 	else if(i==l-1){
		// 		if(s[i]=='R' || s[i]=='B'){
		// 			if(s[i-1]=='R' || s[i-1]== 'B'){
		// 			 c=1;
		// 		      }
		// 		   else{
		// 		   	 c=0;
		// 			 cout<<"NO"<<endl;
		// 			 break;
		// 		     }
		// 		}
		// 	}
		// 	else if(s[i]=='R'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(s[i-1]=='W'){
		// 				if(s[i+1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(s[i+1]=='W'){
		// 				if(s[i-1]=='B'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
		// 	else if(s[i]=='B'){
		// 		if(s[i+1]=='R' || s[i+1]=='B'|| s[i-1]=='R'|| s[i-1]=='B'){
		// 			if(i!=0 && s[i-1]=='W'){
		// 				if(s[i+1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 				}
		// 			}
		// 			if(i!=(n-1) && s[i+1]=='W'){
		// 				if(s[i-1]=='R'){
		// 					c=1;
		// 				}
		// 				else{
		// 					c=0;
		// 					cout<<"NO"<<endl;
		// 		            break;
		// 				}
		// 			}
					
					
		// 		}
		// 		else{
		// 		    c=0;
		// 		    cout<<"NO"<<endl;
		// 		    break;
		// 	    }
				
		// 	}
			
			
	
		// }
		// if(c==1){
		// 	cout<<"YES"<<endl;
		
// TLE on test case 3
// int main(){
// 	long long t, n,c,l;
// 	string s;
// 	cin>>t;
// 	while(t--){
// 		c=0;
// 		cin>>n;
// 		l=n*(n-1)/2;
// 		string arr[n];
// 		vector<pair<string, string>> v;
// 		for (int i=0;i<n;i++){
// 			cin>>arr[i];
// 			v[i].first=arr[i];
// 		}
		
		
// 		for(int i=0;i<l;i++){
// 			if(j==n)
// 				j=
// 			v[i].first=arr[j];
// 			v[i].second=arr[j+1];
			
			
			
// 		}
// 		cout<<c<<endl;
// 	}
// }

// if((arr[i][0]==arr[j][0] && arr[i][1]!=arr[j][1]) ||  (arr[i][0]!=arr[j][0] && arr[i][1]==arr[j][1])){
// 					c++;
// 				}

int main(){
	long long t, n,c,l,r,ans;
	string s;
	long long arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
				r=i;
				c=j;
			}
		}
	
	}
	ans=abs(2-r)+abs(2-c);
	cout<<ans<<endl;
}
	
	
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctype.h>

using namespace std;
int multiply(int res[],int res_size);
/*void remove_element ( int index ){
    for (int i = 0;i<v.size();i++){
        if (i == index){
            swap(v[i],v[i+1]);
            index++;
        }
    }
    v.pop_back();
}*/
void power2 (int n){
    int res[500],res_size = 1,s = 0;
    res[0] = 1;
    for (int i = 1;i<=n;i++){
        res_size =  multiply(res,res_size);
    }
    for (int i = res_size-1;i>=0;i--){
        cout<<res[i];
        s += res[i];
    }
    cout<<endl<<s;
}
int multiply(int res[],int res_size){
    int carry = 0;
    for (int i = 0;i<res_size;i++){
        int prod = res[i]*2 + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}
int sum (int fn_1[],int fn_2[],int res_size){
}
int d1[10]={0,3,3,5,4,4,3,5,5,4};
int d2[10]={3,6,6,8,8,7,7,9,8,8};
int d3[10]={0,3,6,6,6,5,5,7,6,6};
int d4[10]={0,10,10,12,11,11,10,12,12,11};
int letter_count(int n){
    if (n%100==10&&n>100)
        return (d4[n/100]+3+3);
    if (n<=9)
        return d1[n%10];
    if (n>9&&n<=19)
        return d2[n%10];
    if (n>19&&n<=99)
        return (d1[n%10]+d3[n/10]);
    if (n%100==0)
        return d4[n/100];
    if (n%100>10&&n%100<20)
        return (d4[n/100]+3+d2[n%10]);
    if (n>100 && n%100>0&&n%100<10)
        return (d4[n/100]+3+ d1[n%10]);
    if (n%100>19&& n%100<=99)
        return (d4[n/100]+3+d3[(n%100)/10] + d1[n%10]);

}
int main() {

    int m[5][5],I=0,J = 0;
    for (int i =0;i<5;i++){
        for (int j = 0;j<5;j++){
            cin>>m[i][j];
            if (m[i][j] == 1){
                //cout<<i<<"**"<<j<<endl;
                 I = i-2;
                 J = j-2;
                 I = abs(I);
                 J = abs(J);

            }

        }
    }
    cout<<I+J;
}

    /*string s;
    cin>>s;
    char S = toupper(s[0]);
    cout<<S;
    for (int i = 1;i<s.size();i++)
        cout<<s[i];

}
    /*string s;
    cin>>s;
    int h = s.size()+1/2;
    //cout<<h;
    int a[h];
    a[0] = s[0] - '0';
    a[1] = s[2] - '0';
    for (int i =4;i<s.size();i+=2)
        a[(i/2)] = s[i] - '0';
    for (int i =((s.size()+1)/2)-1;i>=0;i--){
        for (int j = 0;j<=i;j++){
            if (a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }

    }
    cout<<a[0];
    for (int i =1;i<((s.size()+1)/2);i++)
        cout<<"+"<<a[i];

}
    /*string s;
    cin>>s;
    int a[s.size()],t = 1;
    for (int i =0 ;i<s.size();i++)
        a[i] = s[i] - '0';
    for (int i =1;i<s.size();i++){
        if (a[i] == a[i-1]){
            t++;
        }else {t = 1;}
        //cout<<t<<endl;
        if (t>6){
            cout<<"YES";
            t = 500;
            break;
        }
    }
    if (t!=500)
        cout<<"NO";

}
    /*string s ,t;
    cin>>s;
    cin>>t;
    char S[s.size()],T[t.size()];
    int ans = 0;
    for (int i=0;i<s.size();i++){
        S[i]=(tolower(s[i]));
        T[i] = tolower(t[i]);
    }
    for (int i =0 ;i<s.size();i++){
        if ((int)S[i]>(int)T[i]){
            ans = 1;
            break;
        }
        if ((int)S[i]<(int)T[i]){
            ans = -1;
            break;
        }

    }
    cout<<ans;


}
    /*string s;
    cin>>s;
    char a[100];
	//cout<<tolower(s[2]);
    for (int i=0;i<s.size();i++)
        a[i]=(tolower(s[i]));
    for (int i =0;i<s.size();i++)
        if (a[i] == 'o' || a[i]=='u' || a[i] == 'i' || a[i] == 'e' || a[i] == 'a' || a[i] == 'y')
            a[i] = '0';
    for (int i = 0;i<s.size();i++){
        if(a[i] != '0')
            cout<<"."<<a[i];
    }

}
    /*int n,k,a[50],t = 0;
    cin>>n>>k;
    for (int i =0 ;i<n;i++)
        cin>>a[i];
    for (int i = 0;i<n;i++){
        if (a[i]>=1 && a[i]>=a[k-1])
            t++;
    }
    cout<<t;
}
    /*int n;
    string word;
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>word;
        if (word.size()>10){
            cout<<word[0]<<word.size()-2<<word[word.size()-1]<<endl;
        }else{cout<<word<<endl;}
    }

}
    /*unsigned long long int m,n,a,N,M;
    cin>>m>>n>>a;
    M = m/a;
    N = n/a;
    if (m%a!=0)
        M++;
    if (n%a!=0)
        N++;
    unsigned long long int ans = M*N;
    cout<<ans;


}
    /*int n;
    cin>>n;
    if (n%2==0 && n!=2)
        cout<<"YES";
    if (n%2==1 || n==2)
        cout<<"NO";
}
    /*bool mark[1000000];
    int primes[100000],t=1;
    mark [0] = 0,mark[1] = 0;
    for (int i = 2;i<1000000;i++){
        mark[i] = 1;
    }
    for (int i =0;i<1000000;i++){
        if (mark[i] == 1){
            primes[t] = i;
            t++;
            for (int j = i;j<=1000000;j+=i)
                mark[j] = 0;

        }
    }
    int s = 0;
    for (int i = 1;i<=24;i++){
        cout<<primes[i]<<endl;
        s+=primes[i];
    }
    cout<<s;

}
/*int a[15][15];
    for (int i =0;i<15;i++){
        for (int j= 0;j<15;j++){
                cin>>a[i][j];
        }
    }
   /* for (int i =0;i<15;i++){
        for (int j = 0;j<15;j++){
                if (a[i][j]!=0)
                    cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
/*    unsigned long long int s = a[0][0],maxi = 1,z=0;
    for (int i = 0;i<=1;i++){
            //cout<<i<<" ";
        for (int j = i;j<=2;j++){

             //cout<<j<<" ";
             if (j>i+1)
                j = 3;
            for (int k = j;k<=3;k++){

                 //cout<<k<<" ";
                 if (k>j+1)
                    k = 4;
                for (int l = k;l<=4;l++){

                     //cout<<l<<" ";
                    if (l>k+1)
                        l = 5;
                    for (int m =  l;m<=5;m++){

                       // cout<<m<<" ";
                        if (m>l+1)
                            m = 6;
                        for (int n=m;n<=6;n++){

                            //cout<<n<<" ";
                            if (n>m+1)
                                n=7;
                            for (int o = n;o<=7;o++){

                               // cout<<o<<" ";
                               if (o>n+1)
                                o = 8;
                                for (int p = o;p<=8;p++){

                                    //cout<<p<<" ";
                                    if (p>o+1)
                                        p = 9;
                                    for (int q = p;q<=9;q++){

                                        //cout<<q<<" ";
                                        if (q>p+1)
                                            q = 10;
                                        for (int r = q;r<=10;r++){

                                            //cout<<r<<" ";
                                            if (r>q+1)
                                                r=11;
                                            for (int s = r;s<=11;s++){

                                                //cout<<s<<" ";
                                                if (s>r+1)
                                                    s = 12;
                                                for (int t = s;t<=12;t++){
                                                    if (t>s+1)
                                                        t=13;
                                                    //cout<<t<<" ";
                                                    for (int u = t;u<=13;u++){
                                                        //cout<<u<<" ";
                                                        if (u>t+1)
                                                            u=14;

                                                        for (int v = u;v<=14;v++){
                                                            //cout<<v<<" ";
                                                            if (v>u+1)
                                                                v=15;

                                                            s =a[0][0]+a[1][i]+a[2][j]+a[3][k]+a[4][l]+a[5][m]+a[6][n]+a[7][o]+a[8][p]+a[9][q]+a[10][r]+a[11][s]+a[12][t]+a[13][u]+a[14][v];
                                                            if (s>maxi)
                                                                maxi = s;
                                                            z++;
                                                            if (z>40000){
                                                                cout<<maxi<<endl;
                                                                break;
                                                            }
                                                            //cout<<t<<endl;
                                                            cout<<z<<"-"<<s<<endl;
                                                            s = 0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<maxi;

}
    /*long int s=11;
    cout<<letter_count(911);
    for (int i = 1;i<=999;i++)
        s+= letter_count(i);
    cout<<endl<<s;

}
    /*power2(1000);


}
    /*string s[100];
    unsigned int a[100][50];
    for (int i = 0;i<100;i++){
        cin>>s[i];
    }
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            a[i][j] = s[i][j] - '0';
        }
    }

    cout<<endl<<endl;
    for (int i = 0;i<100;i++){
        for (int j = 0;j<50;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int t = 1;
    int ans[50];
    int prod = 0,carry = 0;;
    for (int i = 49;i>=0;i--){
            prod = 0;
        for (int j = 0;j<100;j++){
            prod += a[j][i];
        }
        prod += carry;
        ans[i] = prod%10;
        carry = prod/10;

        cout<<t<<"-"<<prod<<"-"<<carry<<endl;
        t++;
    }
    cout<<carry;
    for(int i = 0;i<50;i++){
        cout<<ans[i];
    }


}
  /*const unsigned int Size = 20;
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

  /*int H, W;
  cin >> W >> H;
  int a[20][20];
  std::vector< std::vector<int> > map;
  map.resize(H); // H rows
  for(int i = 0; i < H; ++i)
    map[i].resize(W); // in every row, create W columns
  // thus this is equivalent to a HxD array

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> map[i][j];
    }

  }

  cout << endl;
  //Print
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << map[i][j] << " ";
      a[i][j] == map[i][j];
    }
    cout<<endl;
  }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
        cout << a[i][j] << " ";
        //a[i][j] == map[i][j];
    }
    cout<<endl;
  }
  long long int num1 = 1,num2 = 1,num3 = 1,maxim = 1;
  for (int i = 0;i<H;i++){
    for (int j = 0; j< W;j++){
        num1 = map[i][j] * map[i+1][j+1] * map[i+2][j+2] * map[i+3][j+3];
        num2 = map[i][j] * map[i][j+1] * map[i][j+2] * map[i][j+3];
        num3 = map[i][j] * map[i+1][j] * map[i+2][j] * map[i+3][j];
        if (num1>maxim)
            maxim = num1;
        if (num2>maxim)
            maxim = num2;
        if (num3>maxim)
            maxim = num3;
    }
  }
  cout << endl;
  cout<<maxim;

}
    /*int b[19][19];
    std::vector < std::vector<int> > a;
    a.resize(19);
    for (int i = 0;i<=19;++i)
        a[i].resize(19);
    for(int j = 0;j<=19;j++){
        for(int i = 0;i<=19;i++){
            cin>>a[j][i];
        }
    }
    /*a[0][19]= 8;
    a[1][19]= 0;
    a[2][19]= 65;
    a[3][19]= 91;
    a[4][19]= 80;
    a[5][19]= 50;
    a[6][19]= 70;
    a[7][19]= 21;
    a[8][19]= 72;
    a[9][19]= 95;
    a[10][19]= 92;
    a[11][19]= 57;
    a[12][19]= 58;
    a[13][19]= 40;
    a[14][19]= 66;
    a[15][19]= 69;
    a[16][19]= 36;
    a[17][19]= 16;
    a[18][19]= 54;
    a[19][18] = 67;
    a[19][19] = 48;*/
    //for (int i = 0;i<=18;i++)
      //  cin>>a[i][19];
    /*cout<<endl;
    for(int i = 0;i<=19;i++){
        for(int j = 0;j<=19;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<a[19][18]<<endl;*/
    /*long long int num = 1,num1 = 1,num2 = 1,num3 = 1,num4 = 1,maxi = 1;
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
    cout<<maxi;*/


/*string s;
cin>>s;
//cout<<s;
int a[1000];
for (int i = 0;i<=999;i++){
   a[i] = s[i] - '0';
}
long long int maxi = 1,num = 1;
for (int i = 0;i<=987;i++){
    num = 1;
    for(int j = i;j<=i+12;j++)
        num *= a[j];
    if (num>maxi)
        maxi = num;
}
cout<<maxi;
//cout<<a[0];


}*/

/*************&&&******/
cout << "Possible" << endl;
  if (r == 1 || c == 1)
  {
   for (int i = 0; i < r; i++)
   {
    cout << vec[i] << endl;
   }
  }
  else
  {
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
     cout << '^';
    }
    cout << endl;
   }
  }
 }
 else
 {
  cout << "Impossible" << endl;
 }
}
 
void getIndex(vector<int> v, int K)
{
 auto it = find(v.begin(), v.end(), K);
 
 if (it != v.end())
 {
  int index = it - v.begin();
  cout << index << endl;
 }
 else
 {
  cout << "-1" << endl;
 }
}
 
bool isvowel(char ch)
{
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
  return true;
 return false;
}
#define vll vector<ll>
bool isupper(char ch)
{
 return ch >= 'A' && ch <= 'Z';
}
void palta(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
}
ll countwayssplit3equalsum(vector<ll> a, ll n)
{
 ll cnt[n] = {0}, s = 0;
 
 for (ll i = 0; i < n; i++)
 {
  s += a[i];
 }
 
 if (s % 3 != 0)
  return 0;
 
 s /= 3;
 
 ll ss = 0;
 
 // If the sum of elements from i-th to n-th
 // equals to sum of part putting 1 in cnt
 // array otherwise 0.
 for (ll i = n - 1; i >= 0; i--)
 {
  ss += a[i];
  if (ss == s)
   cnt[i] = 1;
 }
 
 // Calculating the cumulative sum
 // of the array cnt from the last index.
 for (ll i = n - 2; i >= 0; i--)
  cnt[i] += cnt[i + 1];
 
 ll ans = 0;
 ss = 0;
 
 // Calculating answer using original
 // and cnt array.
 for (ll i = 0; i + 2 < n; i++)
 {
  ss += a[i];
  if (ss == s)
   ans += cnt[i + 2];
 }
 return ans;
}
 
bool isPalindrome(string s) {
    return equal(begin(s), end(s), rbegin(s));
}
 
 
void binarybeast880(){
	string s;
	cin>>s;
	vector<char>str;
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] != '+') str.push_back(s[i]);
	}
	sort(str.begin(), str.end());
//	for(auto it : str) cout<<it<<" ";
    for(int i = 0 ; i < str.size() ; i++)
    {
    	cout<<str[i];
    	if(i != str.size()-1)cout<<'+';
	}
}
 
 
main()
{
 ll t = 1;
// cin >> t;
 for (int i = 1; i <= t; i++)
 {
          //cout << "Case #" << i << ": ";
  binarybeast880();
 }
}
/*
ID: amirnas1
PROG: cowtour
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <set>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <sstream>
using namespace std;

/*
vector<string> prim;
string s;
vector<int> dp;

int main()
{

	ifstream cin;
	cin.open("prefix.in");
	ofstream cout;
	cout.open("prefix.out");
	
	string p;
	s = "";
	cin>>p;
	while (p!= ".")
	{
		prim.push_back(p);
		cin>>p;
	}
	cin.ignore();
	string l;
	while (getline(cin,l)) s += l;
	dp = vector<int> (s.size()+1, -1);
	for (int i = s.size(); i>= 0; i--)
	{
		if (i == s.size()) dp[i] = i;
		else
		{
		int m = i;
			for (int j = 0; j < prim.size(); j++)
			{
				if (i+prim[j].size() <= s.size()) if (s.substr(i,prim[j].size()) == prim[j]) m = max(m, dp[i+prim[j].size()]);
			}
			dp[i] = m;
		}
	}
	cout<<dp[0]<<endl;
}



long long dp[201][101][2];

long long mod(long long a, long long m)
{
	if (a>=0) return a%m;
	else
	{
		return (a+m)%m;
	}
}
long long solve(int n, int k, int f)
{
	if (n==0 && k==0) return 1;
	if (n == 0) return 1;
	if (k <= 0) return 0;
	if (n == 1) return 1;
	if (dp[n][k][f] != -1) return dp[n][k][f];
	int a = n-1;
	long long s = 0;
	long long r;
	for (int i = 1; i < a; i++)
	{
		r = solve(i,k-1, 0) * solve(a-i, k-1, 0);
		if (f) r -= (solve(i,k-2, 0) * solve(a-i, k-2,0));
		s += r;
		s = mod(s,9901);
	}
	return dp[n][k][f] = s;
}

int main()
{
	
	ifstream cin;
	cin.open("nocows.in");
	ofstream cout;
	cout.open("nocows.out");
	
	int n, k;
	cin>>n>>k;
	for (int i=0; i<201; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			
			dp[i][j][0] = dp[i][j][1] = -1;
		}
	}
	cout<<solve(n,k,1)<<endl;
	//system("pause");
}


int main()
{
	int n, m;
	cin>>n>>m;
	vector<int> f(m);
	for (int i = 0; i < m; i++)
	{
		cin>>f[i];
	}
	sort(f.begin(), f.end());
	int r = 10000;
	for (int i = 0; i+n-1 < m; i++ )
	{
		if (f[i+n-1] - f[i] < r) r = f[i+n-1] - f[i];
	}
	cout<<r<<endl;
}


int gcd(int a, int b)
{
	if (b == 0) return a;
	else return gcd(b,a%b);
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int ab = gcd(a,b);
	int cd = gcd(c,d);
	a /=ab;
	b /= ab;
	c /= cd;
	d /= cd;
	if ((double)a/(double)c < (double)b/(double)d)
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = rb/gab - ra/gab;
		int resb = rb/gab;
		int gres = gcd(resa,resb);

		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
	else
	{
		int ra = d*a;
		int rb = b*c;
		int gab = gcd(ra,rb);
		int resa = ra/gab - rb/gab;
		int resb = ra/gab;
		int gres = gcd(resa,resb);
		cout<<resa/gres<<"/"<<resb/gres<<endl;
	}
}


long long pow2(long long n, long long mod)
{
	if (n == 0) return 1;
	if (n%2 ==0)
	{
		long long r = pow2(n/2,mod);
		return (r*r)%mod;
	}
	else
	{
		return (2*pow2(n-1,mod))%mod;
	}
}

long long mod(long long a, long long b)
{
	if (a  > 0)
	{
		return a%b;
	}
	else return (a+b)%b;
}

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	if (n - (n-m)*k > 0)
	{
		long long r = pow2(((n - (n-m)*k)/k)+1,1000000009) - 2;
		r = (r*k)%1000000009;
		long long r2 = (n-m)*(k-1) + ((n - (n-m)*k)%k);
		cout<<mod((r+r2),1000000009)<<endl;
	}
	else
	{
		cout<<m<<endl;
	}
}


vector<int> st;
vector<int> req;
vector<long long> rem;
vector<long long> num;
vector<long long> res;

void pr(long long a, bool p)
{
	if (a ==1) return;
	if (a%2 == 0)
	{
		if (a != 2 || p) res.push_back(2);
		pr(a/2, true);
		return;
	}
	for (long long i = 3; i*i <= a; i+=2)
	{
		if (a%i==0)
		{
			res.push_back(i);
			pr(a/i,true);
			return;
		}
	}
	if (p)
		res.push_back(a);
}

int dfs(int i, bool add)
{
	if (i >= num.size()) return 0;
	res.clear();
	if (rem[i] == num[i])
		pr(rem[i],false);
	else
		pr(rem[i],true);
	int result = res.size()+1;
	int m;
	if (i == num.size()-1)
		m = 0;
	else if (add)
		m = dfs(i+1,true);
	else
		m = dfs(i+1,true) + 1;
	for (int j = i+1; j < num.size(); j++)
	{
		if (rem[j]%num[i] ==0)
		{
			rem[j] /=num[i];
			m = min(dfs(i+1,add),m);
			rem[j] *= num[i];
		}
	}
	return result+m;
}

int main()
{
	int n;
	cin>>n;
	st = vector<int> (n,0);
	req = vector<int> (n,1);
	rem = vector<long long> (n,1);
	num = vector<long long> (n);
	for (int i =0 ; i < n; i++)
	{
		cin>>num[i];
		rem[i] = num[i];
	}
	sort(num.begin(), num.end());
	sort(rem.begin(), rem.end());
	int result = 0;
	
	result = dfs(0,false);
	cout<<result<<endl;
}


vector<int> d1;
vector<pair<int,int> > d3;
vector<int> d2;
vector<vector<int> > g;
vector<bool> mark;
vector<bool> tk;
int dis1(int i,int p)
{
	tk[i] = true;
	int r = -1000000;
	
	int m1 = 0,m2 = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (!tk[g[i][j]])
		if (r < dis1(g[i][j],i))
		{
			r = d1[(g[i][j])];
			m1 = g[i][j];
		}
	}
	int v = -1000000;
	for (int j=0; j < g[i].size(); j++)
	{
		if (v < d1[(g[i][j])] && (g[i][j]) != m1 && g[i][j] != p)
		{
			v = d1[(g[i][j])];
			m2 = g[i][j];
		}
	}
	d3[i].first = m1;
	d3[i].second = m2;
	if (r < 0)
	{
		if (mark[i]) return d1[i] = 0;
		else return d1[i] = r;
	}
	return d1[i] = r+1;
}

void dis2(int i,int p)
{
	tk[i] = true;
	if (p == -1)
	{
		if (mark[0])
		{
			d2[0] = 0;
		}
		else
			d2[0] = -10000000;
	}
	else
	{
		int r = d2[p]+1;
		if (d3[p].first == i)
		{
			if (d3[p].second >= 0)
				r = max(d1[d3[p].second]+2,r);
		}
		else
		{
			r = max(d1[d3[p].first]+2,r);
		}
		d2[i] = r;
		if (r < 0)
		{
			if (mark[i])
				d2[i] = 0;
			else
				d2[i] = r;
		}
	}
	for (int j=0; j < g[i].size(); j++)
	{
		if(!tk[g[i][j]])
			dis2(g[i][j],i);
	}
}



int bfs(int i, int d)
{
	int res = 0;
	queue<pair<int,int> > q;
	q.push(make_pair(i,0));
	vector<bool> tk(g.size(),false);
	while (!q.empty())
	{
		pair<int,int> c = q.front();
		q.pop();
		if (tk[c.first])
			continue;
		res++;
		tk[c.first] = true;
		if (c.second < d)
		{
			for (int j=0; j < g[c.first].size(); j++)
			{
				//cout<<t[c.first].second[j]<<"    ";
				q.push(make_pair(g[c.first][j],c.second+1));
			}
		}
	}
	return res;
}


void bTree(int c)
{
	if (tk[c]) return;
	tk[c] = true;
	for (int j = 0; j < g[c].size(); j++)
	{
		if (g[c][j] != t[c].first)
		{
			t[g[c][j]].first = c;
			t[c].second.push_back(g[c][j]);
			bTree(g[c][j]);
		}
	}
}


int main()
{
	int n,m,d;
	cin>>n>>m>>d;
	
	d1 = vector<int> (n,-1000000);
	d2 = vector<int> (n,-1000000);
	d3 = vector<pair<int,int> > (n, make_pair(-1000000,-1000000));
	mark = vector<bool> (n,false);
	tk = vector<bool> (n,false);
	g = vector<vector<int> > (n);
	int a;
	for (int i=0; i < m; i++)
	{
		cin>>a;
		mark[a-1] = true;
	}
	int b;
	for (int i = 0; i < n-1; i++)
	{
		cin>>a>>b;
		g[a-1].push_back(b-1);
		g[b-1].push_back(a-1);
	}
	if (m > 1)
	{
tk = vector<bool> (n,false);
	dis1(0,-1);
tk = vector<bool> (n,false);
	dis2(0,-1);
	}
	int res = 0;
	if (m == 1)
	{
	for (int i=0; i < n; i++)
	{
		if (mark[i])
		{
			res = bfs(i,d);
			break;
		}
	}
	}
	else
	{
	for (int i=0; i < n; i++)
	{
	//	cout<<d1[i]<<" "<<d2[i]<<"          ";
		if (d1[i] <= d && d2[i] <= d) res++;
	}
	}
	cout<<res<<endl;

	//	system("pause");
}


string op;
int n;
ifstream fin;
ofstream fout;
void solve(int i)
{

	if (i == n-1)
	{
//		cout<<op<<endl;
		int r = 0;
		vector<char> s1;
		vector<int> s2;
		int c = 1;
		for (int j =0 ; j < n-1; j++)
		{
			if (op[j] == ' ')
			{
				c *= 10;
				c += j+2;
			}
			else
			{
				s2.push_back(c);
				s1.push_back(op[j]);
				c= j+2;
			}
		}
		s2.push_back(c);
		int a,b;
		r = s2[0];
		for (int j = 0; j < s1.size(); j++)
		{
			if (s1[j] == '+')
			{
				r += s2[j+1];
			}
			else
				r -= s2[j+1];
		}
		if (r == 0)
		{
			fout<<1;
			for (int j = 0; j < n-1; j++)
			{
				fout<<op[j]<<j+2;
			}
			fout<<endl;
		}
	}
	else
	{
		op[i] = ' ';
		solve(i+1);
		op[i] = '+';
		solve(i+1);
		op[i] = '-';
		solve(i+1);
	}
}

int main()
{
	fin.open("zerosum.in");
	fout.open("zerosum.out");
	fin>>n;
	for (int i = 0; i < n-1; i++)
	{
		op += '.';
	}
	solve(0);

}


vector<int> c;
vector<vector<long long> > dp;
long long solve(int n,int i)
{
	if (n < 0) return 0;
	if (n == 0) return 1;
	if (i >= c.size()) return 0;
	if (dp[n][i] != -1) return dp[n][i];
	if (i == c.size()-1)
	{
		if (n%c[i] == 0) return dp[n][i] = 1;
		else return dp[n][i] = 0;
	}
	long long r = 0;
	for (int j = 0; j <= n/c[i]; j++)
	{
		r += solve(n - j*c[i], i+1);
	}
	return dp[n][i] = r;
}

int main()
{
	
	ifstream cin;
	cin.open("money.in");
	ofstream cout;
	cout.open("money.out");
	
	int v,n;
	cin>>v>>n;
	dp = vector<vector<long long> >(n+1,vector<long long>(v,-1));
	c = vector<int>(v);
	for (int i=0; i < v; i++)
	{
		cin>>c[i];
	}
	sort(c.begin(), c.end());
	reverse(c.begin(), c.end());
	long long r = solve(n,0);
	cout<<r<<endl;
	system("pause");
}


int main() {
    long long int N, V, v[26] = { 0 }, dp[10001] = { 0 }, i;
    freopen("money.in", "r", stdin), freopen("money.out", "w", stdout);
    scanf("%lld %lld", &V, &N);
    for (i = 0, dp[0] = 1; i < V; i++)
        scanf("%lld", v + i);
 
    for (int m = 0; m < V; m++)
        for (int n = 0; n <= N; n++)
            dp[n] += (n - v[m] >= 0 ? dp[n - v[m]] : 0);
 
    printf("%lld\n", dp[N]);
    return 0;
}


int g[100][100];

vector<int> res;

void solve(int i)
{
	bool ok = true;
	int s =0;
	vector<bool> tk(100,false);
	tk[i] = true;
	res.clear();
	while (ok)
	{
		ok = false;
		for (int j = 0; j < 100; j++)
		{
			if (tk[j]) continue;
			s = 0;
			s += g[i][j];
			for (int k = 0; k < res.size(); k++)
			{
				s += g[res[k]][j];
			}
			if (s > 50)
			{
				res.push_back(j);
				tk[j] = true;
				ok = true;
			}
		}
	}
}

int main()
{
		ifstream cin;
	cin.open("concom.in");
	ofstream cout;
	cout.open("concom.out");
	int n;
	cin>>n;
	int a,b,c;
	while (n--)
	{
		cin>>a>>b>>c;
		g[a-1][b-1] = c;
	}
	for (int i=0; i < 100; i++)
	{
		solve(i);
		sort(res.begin(),res.end());
		for (int j = 0; j < res.size(); j++)
		{
			cout<<i+1<<" "<<res[j]+1<<endl;
		}
	}
}


char pl[10][10];
int c1x,c1y,d1;
int c2x,c2y,d2;
bool valid(int a, int b)
{
	if (a < 0 || b < 0 || a >=10 || b >= 10) return false;
	if (pl[a][b] != '*') return true;
	return false;
}
void move()
{
	if (d1 == 1)
	{
		if (valid(c1x-1,c1y))
		{
			c1x--;
		}
		else
		{
			d1 = 2;
		}
	}
	else if (d1 == 2)
	{
		if (valid(c1x,c1y+1))
		{
			c1y++;
		}
		else
		{
			d1 = 3;
		}
	}
	else if (d1 == 3)
	{
		if (valid(c1x+1,c1y))
		{
			c1x++;
		}
		else
		{
			d1 = 4;
		}
	}
	else if (d1 == 4)
	{
		if (valid(c1x,c1y-1))
		{
			c1y--;
		}
		else
		{
			d1 = 1;
		}
	}

	if (d2 == 1)
	{
		if (valid(c2x-1,c2y))
		{
			c2x--;
		}
		else
		{
			d2 = 2;
		}
	}
	else if (d2 == 2)
	{
		if (valid(c2x,c2y+1))
		{
			c2y++;
		}
		else
		{
			d2 = 3;
		}
	}
	else if (d2 == 3)
	{
		if (valid(c2x+1,c2y))
		{
			c2x++;
		}
		else
		{
			d2 = 4;
		}
	}
	else if (d2 == 4)
	{
		if (valid(c2x,c2y-1))
		{
			c2y--;
		}
		else
		{
			d2 = 1;
		}
	}
}

int sol()
{
	d1 = d2 = 1;
	int r = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (pl[i][j] == 'F')
			{
				c2x = i;
				c2y = j;
			}
			if (pl[i][j] == 'C')
			{
				c1x = i;
				c1y = j;
			}
		}
	}
	while (!(c1x == c2x && c1y == c2y))
	{
		move();
		r++;
		if (r == 10000) return 0;
	}
	return r;
}

int main()
{
			ifstream cin;
	cin.open("ttwo.in");
	ofstream cout;
	cout.open("ttwo.out");
	for (int i=0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin>>pl[i][j];
		}
	}
	cout<<sol()<<endl;
}


vector<vector<int> > dis[2];
vector<string> mp;
pair<int,int> a[2];

bool valid(int i, int j)
{
	if (i < 0 || j < 0 || i>= mp.size() || j >= mp[0].size()) return false;
	if (mp[i][j] == '|' || mp[i][j] == '-') return false;
	return true;
}

int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};

void bfs(int i)
{
	pair<pair<int,int> , int> st;
	st.second = 1;
	st.first = a[i];

	queue<pair<pair<int,int> , int> > q;
	q.push(st);
	while (!q.empty())
	{
		st = q.front();
		q.pop();
		if (!valid(st.first.first,st.first.second)) continue;
		if (st.second >= dis[i][st.first.first][st.first.second]) continue;
		dis[i][st.first.first][st.first.second] = st.second;
		for (int j = 0; j < 4; j++)
		{
			if (valid(st.first.first+dr[j],st.first.second+dc[j]))
			{
				q.push(make_pair(make_pair(st.first.first+2*dr[j],st.first.second+2*dc[j]),st.second+1));
			}
		}
	}
}

int main()
{
	ifstream cin;
	cin.open("maze1.in");
	ofstream cout;
	cout.open("maze1.out");
	int r,c;
	cin>>r>>c;
	mp = vector<string>(2*c+1);
	dis[0] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	dis[1] = vector<vector<int> >(2*c+1,vector<int>(2*r+1,10000000));
	cin.ignore();
	for (int i = 0; i < 2*c+1; i++)
	{
		getline(cin,mp[i]);
	}
	int d = 0;
	for (int j = 1; j < 2*r+1; j+=2) if (mp[0][j] == ' ')
	{
		a[d].first = 1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*r+1; j+=2) if (mp[2*c][j] == ' ')
	{
		a[d].first = 2*c-1;
		a[d].second = j;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][0] == ' ')
	{
		a[d].first = j;
		a[d].second = 1;
		d++;
	}

	for (int j = 1; j < 2*c+1; j+=2) if (mp[j][2*r] == ' ')
	{
		a[d].first = j;
		a[d].second = 2*r-1;
		d++;
	}
	bfs(0);
	bfs(1);
	int res = 0;
	for (int i = 1; i < 2*c+1; i+=2)
	{
		for (int j = 1; j < 2*r+1; j+=2)
		{
			res = max(res,min(dis[0][i][j],dis[1][i][j]));
		}
	}
	cout<<res<<endl;

}


int main()
{
		ifstream cin;
	cin.open("cowtour.in");
	ofstream cout;
	cout.open("cowtour.out");
	int n;
	cin>>n;
	char a;
	vector<vector<double> >sp(n, vector<double>(n,10000000000));
	vector<pair<double,double> > p(n);
	for (int i = 0; i < n; i++)
	{
		cin>>p[i].first>>p[i].second;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a;
			if (a == '1')
			{
				sp[i][j] = sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first));
			}
		}
	}

	for (int k = 0; k < n; k++) for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j) sp[i][j] = min(sp[i][j],sp[i][k]+sp[k][j]);
	double res = 0;
	double r2 = 10000000000;
	for (int i =0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (sp[i][j] < 10000000000) res = max(res,sp[i][j]);
			else
			{
				double di=0,dj=0;
				for (int k = 0; k < n; k++)
				{
					di = (sp[i][k] < 10000000000) ? max(di,sp[i][k]) : di;
					dj = (sp[j][k] < 10000000000) ? max(dj,sp[j][k]) : dj;
				}
				r2 = min(r2,di+dj+sqrt((p[i].second-p[j].second)*(p[i].second-p[j].second) + (p[i].first-p[j].first)*(p[i].first-p[j].first)));
			}
		}
	}
	cout<<fixed<<setprecision(6)<<max(r2,res)<<endl;
}
*/

int main()
{
	int a[3] = {0};
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') a[0]++;
		else if (s[i] == '2') a[1]++;
		else if (s[i] == '3') a[2]++;
	}
	for (int i = 0; i < a[0]; i++)
	{
		cout<<1;
		if (i < a[0]-1) cout<<"+";
	}
	for (int i = 0; i < a[1]; i++)
	{
		if (i == 0 && a[0] > 0) cout<<"+";
		cout<<2;
		if (i < a[1]-1) cout<<"+";
	}
	for (int i = 0; i < a[2]; i++)
	{
		if (i == 0 && a[1]+a[0] > 0) cout<<"+";
		cout<<3;
		if (i < a[2]-1) cout<<"+";
	}
	cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
string s[100009];
int X[]={-1,0,0,1},Y[]={0,-1,1,0};
bool done[1009][1009];
void dfs(int x,int y)
{
    done[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int nx=x+X[i];
        int ny=y+Y[i];
        if(nx>=0&&ny>=0&&nx<n&&ny<m&&s[nx][ny]!='*'&&!done[nx][ny])dfs(nx,ny);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='.'&&!done[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
set<pair<int,int> >s;
int n,b,a;
int main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
      int l,r;
      cin>>l>>r;
      for(int j=l;j<=r;j++)
      {
          int X=(j+(j/b))%a;
          int Y=j%b;
          s.insert({X,Y});
      }
    }
    cout<<s.size();
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int q,n,m,w;
vector<pair<int,pair<int,int> > >v[1009];
bool done[1000];
pair<int,int>pr[1009];
void dfs(int node,int wi)
{
    if(done[node])return;
    done[node]=1;
    w++;
    for(int i=0; i<v[node].size(); i++)
    {
        int u=v[node][i].first;
       // cout<<node<<" "<<u<<" "<<we[node][u]<<endl;
        if(v[pr[node].first][i].second.first>=wi)
        {
            dfs(u,wi);
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        pr[i]= {a,b};
        v[a].push_back({b,{c,i}});
        v[b].push_back({a,{c,i}});
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int t,x;
        cin>>t;
        if(t==1)
        {
            int b,r;
            cin>>b>>r;
            b--;
            for(int j=0;j<v[pr[b].first].size();j++)
            {

                if(v[pr[b].first][j].second.second==b)
                {
                    v[pr[b].first][j].second.first=r;
                }
            }
        }
        else
        {
            int y;
            cin>>x>>y;
            x--;
            dfs(x,y);
            cout<<w<<endl;
            w=0;
            memset(done,0,sizeof(done));
        }
    }
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int n,zz,m;
string s;
vector<int>z;
int main()
{
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            z.push_back(i);
        }
    }
    int w=0,ww=0;
    for(int i=0;i<m;i++)
    {
        string qu;
        cin>>qu;
        if(qu=="query")
        {
            int l,r;
            cin>>l>>r;
            if(w==0)
            {
                for(int j=0;j<z.size();j++)
                {
                    if((l>z[j]&&r>z[j])||(l<z[j]&&r<z[j]))
                    {
                        zz++;
                    }
                    if(zz==z.size())
                    {
                        ww++;
                        zz=0;
                        cout<<ww<<endl;
                    }
                    else cout<<0<<endl;
                }
            }
            else
            {
                ww=0;
                w=0;
            }
        }
        else
        {
            w++;
            int x;
            cin>>x;
            z[x] = 1;
            s[x-1] = 1 - (s[x-1]-'0');
            z.clear();
            for(int i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    z.push_back(i);
                }
            }
        }
    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int n,m;
string s[1009];
string t[1009];
int main(){
    cin>>n>>m;
    cin>>s[0];
    for(int i=0;i<m;i++){
        cin>>t[i];
        if(i != 0)
            s[i] = s[i-1];
        if(t[i] == "query"){
            int l,r;
            cin>>l>>r;
            l--;r--;
            int ans=0;
            for(int j=i;j>=0;j--){
                if(t[j] == "toggle")continue;
                int num = 0;
                for(int k=l;k<r;k++){
                    num += s[j][k]-'0';
                }
                if(num == r-l)ans++;
            }
            cout<<ans<<endl;
        }
        else{
            int x;
            cin>>x;
            x--;
            s[i][x] = '1'- s[i][x] + '0';
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<1000009;i++)
    {
        for(int i=0;i<3;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b&&a==c)
            {
                cout<<'*'<<endl;
                break;
            }
            else if(a==b)
            {
                cout<<'C'<<endl;
                break;
            }
            else if (a==c)
            {
                cout<<'B'<<endl;
                break;
            }
            else cout<<'A'<<endl;;
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int m,n;
int c[100009],a[100009],b[100009];
int x,y,w;
map<int,int>mp;
vector<pair<int,int> >v;
int main()
{
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(mp[a[i]]==0)
        {
            w++;
            c[w]=a[i];
        }
        if(mp[b[i]]==0)
        {
            w++;
            c[w]=b[i];
        }
        mp[a[i]]++;
        mp[b[i]]++;
    }
    for(int i=0;i<w;i++)
    {
        v.push_back({mp[c[i]],c[i]});
    }
    sort(v.begin(),v.end());

}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
vector<int>v1,v2;
int main()
{
    cin>>n>>a>>x>>b>>y;
        if(x>a)
        {
            for(int j=a;j<=x;j++)
            {
                v1.push_back(j);
            }
        }
        else if(x<a)
        {
            for(int j=a;j<=n;j++)
            {
                v1.push_back(j);
                if(j==n)
                {
                    for(int k=1;k<=x;k++)
                    {
                        v1.push_back(k);
                    }
                }
            }
        }
        if(y<b)
        {
            for(int j=b;j>=y;j--)
            {
                v2.push_back(j);
            }
        }
        else if(b<y)
        {
            for(int j=b;j>0;j--)
            {
                v2.push_back(j);
                if(j==1)
                {
                    for(int k=n;k>=x;k--)
                    {
                        v2.push_back(k);
                    }
                }
            }
        }

    for(int i=0;i<min(v1.size(),v2.size());i++)
    {
    //    cout<<v1[i]<<" "<<v2[i]<<endl;
        if(v1[i]==v2[i])
        {

            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int i1,k1,i2,k2,w;
int b[8][8]={0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0};
int main()
{
    cin>>i1>>k1>>i2>>k2;
    for(int i=0;i<3;i++)
    {
        if(i==0)
        {
            if(i1==i2||k1==k2)
            {
                cout<<1<<" ";
            }
            else cout<<2<<" ";
        }
        else if(i==1)
        {
            i1--,i2--,k1--,k2--;
            if(b[i1][k1]!=b[i2][k2])
            {
                cout<<0<<" ";
                w++;
            }
            else if(abs(i1-i2)==abs(k2-k1))
            {
                cout<<1<<" ";
                w++;
            }
                if(w==0)
                {
                    cout<<2<<" ";
                }
        }

        else if(i==2)
        {
            if(abs(i1-i2)==abs(k1-k2))
            {
                cout<<abs(i1-i2);
            }
            else if(i1==i2||k1==k2)
            {
                cout<<abs(i1-i2)+abs(k1-k2);
            }
            else
            {
                cout<<max( abs ( i1 - i2 ), abs ( k1 - k2 ) ) ;
            }
        }
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n*2;
    int b=0;
    int sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=0)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=0)
            cout<<0;
        cout<<endl;
        if(i==0)
        {
            a-=2;
            b+=2;
            sum=1;
        }
        else
        {
            a-=2;
            b+=2;
            sum=1;
        }
    }
    cout<<0<<" ";
    int w=1;
    for(int i=0; i<n; i++)
    {
        cout<<w<<" ";
        w++;
    }
    b=w*2-3;
    w--;
    for(int i=0; i<n-1; i++)
    {
        w--;
        cout<<w<<" ";
    }
    cout<<0<<endl;
    a=2;
    sum=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a; j++)
        {
            cout<<" ";
        }
        if(i!=n-1)
            cout<<0<<" ";
        else
            cout<<0;
        for(int j=0; j<b/2; j++)
        {
            cout<<sum<<" ";
            sum++;
        }
        sum--;
        for(int j=0; j<b/2-1; j++)
        {
            sum--;
            cout<<sum<<" ";
        }
        if (i!=n-1)
            cout<<0;
        cout<<endl;
        if(i<n-1)
        {
            a+=2;
            b-=2;
            sum=1;
        }
        else
        {
            a+=2;
            b--;
            sum=1;
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
vector<char>v;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(s.size()==1)
        {
            cout<<v[i];
            exit(0);
        }
        if(i!=v.size()-1)cout<<v[i]<<'+';
        else cout<<v[i];
    }
}
/--------------------------------------------------------They call him ARIF-----------------------------------------------------*/

#pragma GCC optimize ("Ofast")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pair<ll,ll>> vpll;
typedef map<pll,ll> mpll;
typedef map<ll,ll> mll;
typedef map<char,ll> mcll;
typedef map<pair<char,ll>,ll> mpcll;
typedef map<pair<char,char>,ll> mpccl;
typedef pair<char,char> pcc;
typedef pair<string,string> pss;
typedef map<string,ll> msll;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max4(a,b,c,d) max(d,max3(a,b,c))
#define min4(a,b,c,d) min(d,min3(a,b,c))
#define all(x) x.begin(),x.end()
#define endl "\n"
const ll M=1e9+7;
// tu hamesha ceil aur floor me 1.0* daalna bhulta hai
// ll x=max4(a,b,c,d); save value in some variables & dont 
// ll y=min4(a,b,c,d); print it directly it will give an error
// if(find(nums.begin()+fp+1,nums.begin()+ep,temp)!=nums.begin()+ep)

ll gcd(ll a,ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

ll power(ll a,ll n)
{
  if(n==0) return 1;
  ll subprob=power(a,n/2);
  ll subprobq=subprob*subprob;
  if(n&1) return a*subprobq;
  return subprobq;
}

ll lcm3(ll x,ll y,ll z)
{
    ll ans=(x*y*z)*gcd(x,gcd(y,z));
    ans/=gcd(x,y);ans/=gcd(y,z);ans/=gcd(x,z);

    return ans;
}

mll primefact(ll n)
{
    mll f;
    while(n%2==0)
    {
        f[2]++;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            f[i]++;
            n/=i;
        }
    }
    if(n>2) f[n]++;

    return f;
}

void addk(vll &v,ll q=0)
{
    // in case of seg fault try to make n+1 size vect
    if(q==0) cin>>q;
    ll l,r,k;
    while(q--)
    {
        cin>>l>>r>>k;
        v[l]+=k;
        // may be seg fault due to r+1.
        // so make vect of n+1
        v[r+1]-=k;
    }
    for(int i=1;i<v.size();i++)//v.size()=n+1
    {
        v[i]+=v[i-1];
    }
}

ll sumofdigits(ll n)
{
    ll ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}


void solve()
{ 
    ll n,m;cin>>n>>m;
    cout<<(n*m)/2<<endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    t=1;  
    //cin>>t;
    while(t--){
        solve();
    }
}
/*
#include <iostream>
using namespace std;
int fun(int n)
{
	int ans=0;
	while(n)
	{
		if(n%10==2) ans++;
		n/=10;
	}
	return ans;
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		ans+=fun(i);
	}
	cout<<ans<<endl;
	return 0;
}          //   ans:624
*/
/*
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main()
{
	int ans=0;
	for(int i=1;i<=2020;i++)
	{
		for(int j=1;j<=2020;j++)
		{
			if(gcd(i,j)==1) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}    //     ans:2481215

#include <iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,jg=0,yx=0;
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x>=85) yx++,jg++;
		else if(x>=60&&x<85) jg++;
	}
	double j,y;
	j=jg/(n*1.0)*100;
	y=yx/(n*1.0)*100;
	//cout<<j<<endl<<y<<endl;
	j-int(j)>=0.5?jg=int(j)+1:jg=int(j);
	y-int(y)>=0.5?yx=int(y)+1:yx=int(y);
	cout<<jg<<"%"<<endl<<yx<<"%"<<endl;
	return 0;
}
�ܲ�ѵ��
#include <iostream>
using namespace std;


int main()
{
	int n=10000;
	int s=600/60;
	int t=0;
	while(n)
	{
		if(n-600<0)
		{
			t+=n/s;
			break;
		}
		n-=300;
		t+=120;
	}
	cout<<t<<endl;
	return 0;
}

#include <iostream>
using namespace std;

int year(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
	return 366;
	return 365;
}

int main()
{
	int n=0;
	for(int i=1922;i<=2020;i++)
		n+=year(i);
	n-=22;
	cout<<n*24*60<<endl;
	return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int score[10001],ax=0,in=110,sum=0;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>score[i];
		ax=max(ax,score[i]);
		in=min(in,score[i]);
		sum+=score[i];
	}
	double ans=sum/(1.0*n);
	cout<<ax<<endl<<in<<endl;
	printf("%.2lf",ans);
	return 0;
}



#include <iostream>

using namespace std;

int main()
{
	int ans=0;
	int sum=0x3f3f3f3f;
	for(int i=1;i<=100;i++)
	{
		if(100%i==0)
		{
			if(100/i+i<sum)
			{
				sum=100/i+i;
				ans=i;
			}
		}
		else
		{
			if(100/i+i+1<sum)
			{
				sum=100/i+i+1;
				ans=i;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int ans=0;
	for(int i=0;i<2;i++)
	{
		ans+=4;
		for(int j=0;j<5;j++)
		{
			for(int k=0;k<6;k++)
			ans+=5;
			ans+=7;
		}
		ans+=8;
	}
	ans+=9;
	cout<<ans<<endl;
	return 0;
}

403


#include <iostream>
using namespace std;


int main()
{
	itt n;
	cin>>n;
	while(n)
	{
		cout<<n<<' ';
		n/=2;
	}
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))&&(s[i+1]>'1'&&s[i+1]<='9'))
		{
			int n=s[i+1]-'0';
			for(int j=0;j<n;j++) cout<<s[i];
			i++;
		}
		else if(((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) cout<<s[i];
	}
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(sqrt(x*x+y*y)==int(sqrt(x*x+y*y))) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{

	return 0;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};



#include <iostream>
#include <bits/stdc++.h>
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
#include <bits/stdc++.h>
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


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}



#include <string.h>
#include <stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i]))
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ����������

#include <bits/stdc++.h>
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



���ű�ʮһ��

#include <bits/stdc++.h>
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


*/
/**************************************

#include <bits/stdc++.h>
using namespace std;
const int N =



int main()
{

	return 0;
}

******************************************


#include <bits/stdc++.h>
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



#include <bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);

	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021;
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
		{
			break;
		}
	}
	cout<<ans-1<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";

		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

bool is_prime(int x)
{
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	int x,y;
	while(cin>>x>>y,x+y)
	{
		bool f=true;
		for(int i=x;i<=y;i++)
		{
			if(!is_prime(i*i+i+41))
			{
				f=false;
				cout<<"Sorry"<<endl;
				break;
			}
		}
		if(f) cout<<"OK"<<endl;
	}
	return 0;
}


``````````````````````
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````



#include <bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
20312088


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int w;
	cin>>w;
	for(int i=2;i<w;i+=2)
	{
		if((w-i)%2==0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}


#include <iostream>
using namespace std;
const int N = 1010;

int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][t];
	return 0;
}
*
#include <iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{

		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]<0) ans++;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;

	}

	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A';
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';
		}
		cout<<s<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else
				{
					cout<<"no"<<endl;
					break;
				}
				if(c+1==l)
				{
					cout<<"yes"<<endl;
				}
			}
		}
		else cout<<"no"<<endl;
	}
	return 0;
}


#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp;
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
}



#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				}
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	}
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;

	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;
	sort(edges,edges+m);



	return 0;
}
*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}

################   64λ�����˷�
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;

}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}
*

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> res;
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include <iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*
#include <iostream>

using namespace std;

int n;
int a,b;
int is_ans(int x)
{
	int ans=1;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			ans+=i;
			ans+=x/i;
		}
	}
	return ans;
}
int main()
{
	//cout<<is_ans(200);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(is_ans(a)==b&&is_ans(b)==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
*

#include <iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn)
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include <iostream>
#include <stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0)
	{
		f=0;
		n=-n;
	}
	string ans="";
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*

#include <iostream>

using namespace std;

int a,b,c,d,e,f;
int n;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		c+=f;
		if(c>=60)
		{
			b+=c/60;
			c=c%60;
		}
		//cout<<b<<" "<<c<<endl;
		b+=e;
		if(b>=60)
		{
			a+=b/60;
			b%=60;
		}
		cout<<a+d<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int n,k;
double a[101];
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+k);
		printf("%.2lf\n",a[k-1]);
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n<=1) return n;
	ll a=0,b=1;
	for(int i=1;i<n;i++)
	{
		ll c=a+b;
		a=b;
		b=c;
	}
	return b;
}

int main()
{
	int n;
	while(scanf("%d",&n),n!=-1)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}

*

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int a,b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4)
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6)
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}
	return 0;
}

*

#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
}
*
#include <iostream>

using namespace std;
int t;
int a,b;

int solve(int a,int b)
{
	a=a%100;
	b=b%100;
	a+=b;
	return a%100;
}

int main(){
	cin>>t;
	while(t--)
	{
		cin>>a>>b;

		cout<<solve(a,b)<<endl;
	}
	return 0;
}


#include <iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m)
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team
#include <iostream>

using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
*
#include <iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	string s,t;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		if(s==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool f=true;
			int lastindex;
			int m=t.size();
			lastindex=s.rfind(t[m-1]);
			s[lastindex]='1';
			if(lastindex==-1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int i=m-2;
				while(i>=0)
				{
					int pos=s.rfind(t[i]);
					if(pos==-1)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else if(pos>lastindex)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else
					{
						lastindex=pos;
						s[pos]='1';
					}
					i--;
				}
				if(f) cout<<"YES"<<endl;
			}

		}
	}
	return 0;
}

*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[3];
struct edge
{
	int a,b,c,d;
}edges[5];
int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	return 0;
}
*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[10];

struct PT {
	int x1, y1, x2, y2;
};

int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	PT t[10];
	PT s[10];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	t[0] = {p[0].x, p[0].y, p[0].x, p[1].y};
	t[1] = {p[0].x, p[1].y, p[1].x, p[1].y};
	t[2] = {p[1].x, p[1].y, p[2].x, p[1].y};
	t[3] = {p[2].x, p[1].y, p[2].x, p[2].y};
	int tt = -1;
	for (int i = 0; i < 4; i++) {
		if (tt == -1)
			s[++tt] = t[i];
		else {
			auto q = s[tt];
			tt--;
			if (q.x1 == t[i].x2 || q.y1 == t[i].y2) {
				s[++tt] = {q.x1, q.y1, t[i].x2, t[i].y2};
			} else {
				s[++tt] = q;
				s[++tt] = t[i];
			}
		}
	}
	cout << tt+1 << endl;
	for (int i = 0; i <= tt; i++)
		cout << s[i].x1 << " " << s[i].y1 << " " << s[i].x2 << " " << s[i].y2 << endl;
	return 0;
}
*


#include <iostream>
using namespace std;
int n, m;
int main() {
	cin >> n >> m;
	cout << (n * m) / 2;
	return 0;
}
*

#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s[1] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
	return 0;
}

*/

#include <iostream>
#include <cmath>
using namespace std;
int a[6][6];       //����a�±��1��ʼ
int main() {
	int x, y;
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
			if (a[i][j]) {
				x = i;
				y = j;
			}
		}
	cout << abs(3 - x) + abs(3 - y);
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL); // FAST

	// *****************************************************
	             // 40: (A) Beautiful Matrix
	int arr[5][5], i, j;
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 5; c++)
		{
			cin >> arr[r][c];
			if (arr[r][c] == 1)
			{
				i = r;
				j = c;	
			}
		}
	}
	cout << abs(i - 2) + abs(j - 2) << endl;
	// *****************************************************





/*	// *****************************************************
	             // 39: (A) Marathon
	int t, arr[4];
	cin >> t;
	while (t--)
	{
		int counter = 0;
		int max = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
			max = arr[0];
			if (arr[i] >= max && i != 0)
			{
				counter++;
			}
		}
		cout << counter << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	           // 38: (A) Dubstep
	          // "WUB"
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
		{
			i += 2;
			cout << " ";
		}
		else
		{
			cout << s[i];
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	            // 37: (A) Polycarp and Coins
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int c1 = n / 3, c2 = n / 3;
		if (c1 + (2 * c2) == n)
		{
			cout << c1 << " " << c2 << endl;
		}
		else if ((c1 + 1) + (2 * c2) == n)
		{
			cout << c1 + 1 << " " << c2 << endl;
		}
		else
		{
			cout << c1 << " " << c2 + 1 << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
                     // 36: (A) Square String?
	int t;
	cin >> t;
	bool flag = false;
	while (t--)
	{
		string s;
		cin >> s;
		if (s.size() % 2 != 0)
		{
			cout << "NO" << endl;
			flag = false;
		}
		else
		{
			int j = s.size() / 2;
			flag = false;
			for (int i = 0; i < s.size() / 2; i++)
			{
				if (s[i] == s[j])
				{
					flag = true;
					j++;
				}
				else
				{
					cout << "NO" << endl;
					flag = false;
					break;
				}
			}
		}
		if (flag)
		{
			cout << "YES" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 35: (A) Gravity Flip
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
	// ***************************************************** */





/*	// *****************************************************
	          // 34: (A) Divisibility Problem
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c = 0;
		cin >> a >> b;
		if (a % b == 0)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << b - (a % b) << endl;
		}
	}  
	// ***************************************************** */





/*	// *****************************************************
	              // 33: (A) Lucky?
	int t;
	cin >> t;
	while (t--)
	{
		long long sum1 = 0, sum2 = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size() / 2; i++)
		{
			sum1 += s[i] - '0';
			sum2 += s[s.size() - i - 1] - '0';
		}

		//*********************(or)******************************   
		
		for (int j = s.size() - 1; j >= s.size() / 2; j--)
		{
			sum2 += s[j] - '0';
		}
		
		//******************************************************* 
		if (sum1 == sum2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	                   // 32: (B) Coins
	int n;
	cin >> n;
	int temp = n;
	for (int i = n; i > 0; i--)
	{
		if (temp % i == 0)
		{
			cout << i << " ";
			temp = i;
		}
	}
	// ***************************************************** */






/*	// *****************************************************
	            // 31: (A) Laptops
	int n;
	cin >> n;
	bool flag = false;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (b > a)
		{
			flag = true;
		}
	}
	if (flag == true)
	{
		cout << "Happy Alex" << endl;
	}
	else
	{
		cout << "Poor Alex" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 30: (A) Pangram
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n < 26)
	{
		cout << "NO" << endl;
		return 0;
	}
	else
	{
		int c = 0;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		sort(s.begin(), s.end());
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != s[i + 1])
			{
				c++;
			}
		}
		if (c == 26)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	                // 29: (A) Anton and Letters
	string s1,s2;
	getline(cin, s1);
	int x = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			char t = s1[i];
			s2[x] = t;
			x++;
		}
	}
	sort(s2.begin(), s2.end());
	int c = 0;
	for (int i = 0; i < s2.size() - 1; i++)
	{
		if (s2[i] != s2[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
	// ***************************************************** */ 







/*	// *****************************************************
	          // 28: (A) Die Roll
	int y, w;
	cin >> y >> w;
	if (w == y)
	{
		cout << "1/1" << endl;
	}
	else if (w == 0 || y == 0)
	{
		cout << "0/1" << endl;
	}
	else if (y % w == 0)
	{
		cout << w / w << "/" << y / w << endl;
	}
	else
	{
		cout << (6 - y) << "/" << 6 << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	                 // 27: (A) Football
	int n;
	cin >> n;
	string s;
	string team[2] = { "","" };
	int goal[2] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (i == 0)
		{
			team[0] = s;
			goal[0]++;
		}
		else if (team[0] == s)
		{
			goal[0]++;
		}
		else
		{
			team[1] = s;
			goal[1]++;
		}
	}
	if (goal[1] > goal[0])
	{
		cout << team[1] << endl;
	}
	else
	{
		cout << team[0] << endl;
	}


	/*
	int n;
	cin >> n;
	string s[110];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, s + n);
	cout << s[n / 2] << endl;*/


	// ***************************************************** */





/*	// *****************************************************
	             // 26: (A) Lucky Division
	int n;
	cin >> n;
	if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0 || n % 744 == 0)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	         // 25: (A) Nearly Lucky Number
	string s;
	cin >> s;
	long long luck = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
		{
			luck++;
		}
		if (luck > 7)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if (luck == 4 || luck == 7)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 24: (B) Grab the Candies
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long m = 0, b = 0;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0)
			{
				m += arr[i];
			}
			else
			{
				b += arr[i];
			}
		}
		if (m > b)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
                 	// 23: (A) Plus or Minus
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b == c)
		{
			cout << "+" << endl;
		}
		else
		{
			cout << "-" << endl;
		}
	}
	// ***************************************************** */





/*	// *****************************************************
	            // 22: (B) Atilla's Favorite Problem
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		char c = s[n - 1];
		int x = 0;
		for (int i = 'a'; i <= c; i++)
		{
			x++;
		}
		cout << x << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	               // 21: (A) Medium Number
	int n;
	cin >> n;
	int arr[3];
	while (n--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + 3);
		cout << arr[1] << endl;
	}
	// ***************************************************** */
	




/*	// *****************************************************
	               // 20: (A) Soft Drinking
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int liters = k * l;
	liters /= nl;
	int limes = c * d;
	int grams = p / np;
	int min1 = min(liters, min(limes, grams));
	cout << min1 / n << endl;
	// ***************************************************** */





/*	// *****************************************************
	             // 19: (A) George and Accommodation
	int n, p, q, c = 0;
	cin >> n;
	while (n--)
	{
		cin >> p >> q;
		if (p != q)
		{
			if (q > p)
			{
				if (p + 1 != q)
				{
					c++;
				}
			}
			else
			{
				if (q + 1 != p)
				{
					c++;
				}
			}	
		}
	}
	cout << c << endl;
	// ***************************************************** */





/*	// *****************************************************
	                // 18: (A) Anton and Danik
	int n, a = 0, d = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			a++;
		}
		else
		{
			d++;
		}
	}
	if (a > d)
	{
		cout << "Anton" << endl;
	}
	else if (d > a)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout << "Friendship" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	             // 17: (A) Hulk
	int n;
	cin >> n;
	string s1 = "I hate ";
	string s2 = "I love ";
	if (n == 1)
	{
		cout << "I hate it" << endl;
		return 0;
	}
	else
	{
		int c = 0;
		for (int i = 0; i < n - 1; i++)
		{
			cout << s1;
			c++;
			if (c == n)
			{
				break;
			}
			cout << "that ";
			cout << s2;
			c++;
			if (c == n)
			{
				break;
			}
			cout << "that ";
		}
	}
	cout << "it" << endl;
	// ***************************************************** */



	
	
/*	// *****************************************************
	              // 16: (A) Word
	char s[101];
	cin >> s;
	int l = 0, u = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			l++;
		}
		else
		{
			u++;
		}
	}
	if (l >= u)
	{
		cout << strlwr(s) << endl;
	}
	else
	{
		cout << strupr(s) << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	              // 15: (A) Petya and Strings
	char s1[101], s2[101];
	 cin >> s1 >> s2;
	 cout << strcmp(strlwr(s1), strlwr(s2)) << endl;
	// ***************************************************** */





/*	// *****************************************************
	                // 14: (A) Boy or Girl
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	int c = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[i + 1])
		{
			c++;
		}
	}
	if (c % 2 != 0)
	{
		cout << "IGNORE HIM!" << endl;
	}
	else
	{
		cout << "CHAT WITH HER!" << endl;
	}
	// ***************************************************** */





/*	// *****************************************************
	                       // 13: (B) Drinks
	cout << fixed << setprecision(12);
	int n;
	cin >> n;
	long double p;
	long double sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		sum += p;
	}
	cout << sum / n << endl;
	// ***************************************************** */




/*  // *****************************************************
	                     // 12: (A) Football
	string s;
	cin >> s; // 1000000001
	int z = 1, o = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			z++;
			if (z >= 7)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
		else
		{
			z = 1;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
		{
			o++;
			if (o >= 7)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
		else
		{
			o = 1;
		}
	}
	cout << "NO" << endl;
	// ***************************************************** */




/*	// ***************************************************** 
                 // A. String Task
	            // "A", "O", "Y", "E", "U", "I"
	string s;
	cin >> s;
	bool flag = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'E' || s[i] == 'e' || s[i] == 'U' || s[i] == 'u' || s[i] == 'I' || s[i] == 'i')
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			cout << ".";
			if ('A' <= s[i] && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
				cout << s[i];
			}
			else
			{
				cout << s[i];
			}
		}
	}
	// ***************************************************** */





/*  // *****************************************************
	               // 11:  (A) Translation
	string s, t;
	cin >> s >> t;
	   // code
	   // edoc
	int v = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == t[s.size() - 1 - i])
		{
			v = 1;
		}
		else
		{
			v = 0;
			break;
		}
	}
	if (v == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	                 // 10: (A) Soldier and Bananas
	long long k, n, w, amount = 0, price = 0;
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
	{
		price += i * k;
	}
	amount = price - n;
	if (price > n)
	{
		cout << amount << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	             // 9: (A) Elephant  
	int x;
	cin >> x;
	if (x % 5 == 0)
	{
		cout << x / 5 << endl;
	}
	else
	{
		cout << (x / 5) + 1 << endl;
	}
	// ***************************************************** */




/*  // *****************************************************
	               // 8: (A) In Search of an Easy Problem
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			cout << "HARD" << endl;
			return 0;
		}
	}
	cout << "EASY" << endl;
	// ***************************************************** */




/*  // *****************************************************
	                 // 7: (A) HQ9+
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	// ***************************************************** */




 /* // *****************************************************
	              // 6: (A) Odd Divisor
	long long t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 3; i <= 9; i += 2)
		{
			if (s[s.size() - 1] % i == 0)
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
	}
	// ***************************************************** */




/*  // *****************************************************
	                       //  5: (A) Sum
	int t, a, b, c, sum = 0;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if ((a + b == c) || (a + c == b) || (b + c == a))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	// ***************************************************** */




	/*
	long long x, y, m, counter = 0;
	cin >> x >> y >> m;
	long long sum = x;
	long long t = m;
	while (t--)
	{
		sum = sum + y;
		counter++;
		if (sum == m)
		{
			break;
		}
	}
	
	Input
0 1 8
Output
8
Answer
5
Checker Log
wrong answer expected '5', found '8'
	if (sum == m)
	{
		cout << counter << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	*/





/*  // *****************************************************
	                //  4: (A) Even Odds,
	long long n, k;
	cin >> n >> k;
	int* arr = new int[n];
	int x = 0;
	for (int i = 1; i <= n; i += 2)
	{
		arr[x] = i;
		x++;
	}
	int y = x;
	for (int i = 2; i <= n; i += 2)
	{
		
		arr[y] = i;
		y++;
	}
	cout << arr[k - 1] << endl;
	// ***************************************************** */




/*  // *****************************************************
                 	  //  3: (A) Required Remainder
	int t, x, y, n;
	cin >> t;
	while (t--)
	{
		cin >> x >> y >> n;
		while (n % x != y)
		{
			n--;
		}
		cout << n << endl;
	}
	// ***************************************************** */




/* //  *****************************************************
	                //  2: (A) Bit++ 
	int n, x = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string op;
		cin >> op;
		if (op == "++X")
		{
			++x;
		}
		else if (op == "--X")
		{
			--x;
		}
		else if (op == "X++")
		{
			x++;
		}
		else if (op == "X--")
		{
			x--;
		}
	}
	cout << x << endl;
	// ***************************************************** */




/*  // *****************************************************
                 // 1: (A) Watermelon
    int n;
	cin >> n;
	if (n > 2)
	{
		if (n % 2 == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	else
	{
		cout << "NO" << endl;
	}
    // ***************************************************** */
	return 0;
}
/*
#include<iostream>

using namespace std;

int main(){


    string str;
    cin>>str;
    int temp=0;
    //cout<<str[0];

    for(int i=0;str[i]!='\0';i++){


        for(int j=i+2;str[j]!='\0';j+=2){

            if(str[i]>str[j]){

               temp=str[i];

               str[i]=str[j];

               str[j]=temp;

            }

        }

    }


    cout<<str;

}
*/

/*
#include<iostream>

using namespace std;

int main(){

int size;

cin>>size;



int arr[size];

int *ptr;

ptr = new int[size];

for(int i=0;i<size+1;i++){


    scanf("%d",(ptr+i));


}

for(int i=0;i<size+1;i++){


    printf("%d",*(ptr+i));


}


}
*/

/*
#include<iostream>

using namespace std;


int main(){

    int occurence[4];
    long long int arr[4];
    int count=1;
    int max=0;

    for(int i=0;i<4;i++){

        cin>>arr[i];

    }

    for(int i=0;i<3;i++){

      //  count=0;

        for(int j=i+1;j<4;j++){


            if(arr[i]==arr[j]){

                count++;

            }

        }

        // if(count>=1){

        //     occurence[i]=count;

        // }

        cout<<count<<endl;

    }

    // max = occurence[0];

    // for(int i=1;i<4;i++){

    //     if(max<occurence[i]){

    //         max=occurence[i];
    //     }

    // }


    cout<<count;

}
*/


/*
//Program to check all the numbers in the array

#include<iostream>


using namespace std;

int main(){


int totalLevels = 0;

cin>>totalLevels;

int arr[totalLevels]={};

int num = 1;

int X_levels=0;

int Y_levels=0;

//This will create an array of number from 1 to totallevels

for(int i=0;i<totalLevels;i++){


    arr[i] = num;

    num++;



}

//This will create an array for player X size

cin>>X_levels;

int xArr[X_levels];


for(int i=0;i<X_levels;i++){

    cin>>xArr[i];

}

cin>>Y_levels;


int yArr[Y_levels];

//This will create an array for player Y size

for(int i=0;i<Y_levels;i++){

    cin>>yArr[i];

}

//This will create an array of total size X + Y size

int dup_arr[X_levels + Y_levels];


for(int i=0,k=0;i<(X_levels+Y_levels);i++){


    if(i<X_levels){

        dup_arr[i] = xArr[i];

    }
    else if(i>=X_levels){

        dup_arr[i] = yArr[k];
        k++;
    }
}

int flag=1;

int count=0;

//Checking that all the required levels exits or not

for(int i=0;i<totalLevels && flag==1;i++){


count=0;

    for(int j=0;j<(X_levels + Y_levels);j++){

  //  cout<<arr[i]<<endl;

        if(arr[i]==dup_arr[j]){

            count++;


        }


    }

    //cout<<count<<endl;

    if(count>=1){

        flag=1;

    }
    else{

        flag=0;

    }
}

//When the flag variable gets 0 it means that all the levels are not passed

if(flag==0){

 cout<<"Oh, my keyboard!";

}
else{


    cout<<"I become the guy.";


}

}

*/
/*

#include <iostream>


#include<string>


using namespace std;


int main() {

    string arr1;

    string arr2;

    char result[101];

    cin>>arr1;

    cin>>arr2;

//This will loop throught the entire rays and check wheather their characters are same then "0" and different then stores "1".

    for(int i=0;arr1[i]!='\0';i++){



        if(arr1[i]!=arr2[i]){

            result[i] = '1';


        }
        else{

            result[i] = '0';

        }

    }


for(int i=0;result[i]=='1' || result[i]=='0';i++){

cout<<result[i];

}
}

*/
// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {

//     string arr1;
//     string arr2;
//     string result;
//     cin>>arr1;
//     cin>>arr2;

//     for(int i=0;arr1[i]!=0;i++){

//         if(arr1[i]!=arr2[i]){

//             result[i] = '1';

//         }
//         else{

//             result[i] = '0';

//         }

//     }


//     cout<<result;

// }


/*

#include<bits/stdc++.h>

//#include<iostream>

#include<string>

using namespace std;

int main(){

string set;



getline(cin,set);

int lenght = 0;

int count=0;

int flag=0;

for(int i=0;set[i]!=0;i++){

    lenght++;

}



if(lenght == 2){

    flag=1;

}

int count_var=0;

if(flag!=1){

for(int i=1;i<lenght;i+=3){

        flag=0;

        count_var=0;


if(set[i]!='0'){

//    cout<<set<<endl;

    for(int j=i+3;j<lenght;j+=3){


        if(set[i]!=set[j]){



        }
        else{

            set[j] = '0';

           // flag=1;

           count_var++;

        }
    }
if(count_var>=1){

    flag=1;
    count++;

}


    if(flag==0){

        count++;

    }


}



}

}

cout<<count;

}
*/

/*

#include <iostream>

#include<algorithm>

using namespace std;

int main() {

int size;

cin>>size;

char str[size+1];

int arr[26];           //This array contains the a 26 element array of count 1;

int arr2[26];

int count  = 0;

for(int i=0;i<26;i++){

    arr[i] = 1;

}

cin>>str;

char ch[27];

char *ptr = ch;

char ch2[27];

char *ptr2 = ch2;


//Two pointer points towards an array of upper and lower case alphabets;

for(int i=0;i<26;i++){

    *ptr = 'A' + i;

    *ptr2 = 'a' + i;        //It will check that wheather every element in string is equal to A or a and then so on.

    for(int j=0;str[j]!=0;j++){

    if(str[j]==*ptr || str[j]==*ptr2)
    {
        arr2[i] = 1;

    }

    }


    ptr++;

    ptr2++;


}

int flag=0;

for(int i=0;i<26 && flag==0;i++){

   if(arr[i]==arr2[i]){

       flag=0;

   }
   else{

       flag=1;

   }
}

if(flag==1){

    cout<<"NO";

}
else{

    cout<<"YES";

}

}
*/
/*

#include<iostream>

using namespace std;


class Student{

private:

    string name;
    int roll_num;
    int marks;

public:

    void setname(string n){

    name = n;


    }
    void setroll(int roll){

    roll_num = roll;


    }

    string getname(){

    return name;


    }
    int getroll(){

    return roll_num;


    }

    void setmarks(int m){

    marks = m;


    }


    int getmarks(){

      return marks;


    }

    //Passing the object by reference

    //It will add it on the memory of object which is being passed in the function

    Student add(Student *d){

    d->setmarks(d->getmarks() + marks);

   // return d;

    }

    //Pass by value

    Student add2(Student d){

    d.setmarks(d.getmarks() + marks);

    return d;

    }

};

int main(){


Student d1;

Student d2;

d1.setmarks(30);

d2.setmarks(20);

Student d3;
//This will add the d2 to d1
//passing by reference
//d2.add(&d1);
//now storing the result on the different object
d3 = d2.add2(d1);

cout<<d3.getmarks();

cout<<d3.getmarks();




//cout<<d1.g;





}
*/
/*

#include<iostream>

using namespace std;

int main(){


    int num;

    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++){


        scanf("%d",&arr[i]);

    }

    int value=0;
    int ways=0;
    int initValue=0;
    int finalValue=0;


    for(int i=0;i<num;i++){

        ways=0;

        value = arr[i];

        initValue = 1;

        finalValue = value-1;


        //for(int j=0;j<(arr[i]/2) && initValue<finalValue;j++){

        while(finalValue>initValue){


        if(initValue+finalValue==arr[i]){

                ways++;

            }

            initValue++;

            finalValue--;

        }

        printf("%d\n",ways);
    }



}
*/

/*
#include<iostream>

using namespace std;

int main(){


    int num;
    int value=0;
    int ways=0;
    int initValue=0;
    int finalValue=0;

    cin>>num;

    int arr[num];

    for(int i=0;i<num;i++){


        scanf("%d",&arr[i]);

         ways=0;

        value = arr[i];

        initValue = 1;

        finalValue = value-1;

        while(finalValue>initValue){


        if(initValue+finalValue==arr[i]){

                ways++;

            }

            initValue++;

            finalValue--;

        }

        printf("%d\n",ways);



    }




}
*/

/*
#include<iostream>

using namespace std;

int main(){

    int n,m;
    int max=0;
    cin>>n>>m;
    int flag=0;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){

            if(i%2!=0){

                printf("#");

            }
            else{


            }



        }
        printf("\n");

    }



}
*/
/*
//Program to check the available or non available of police officers

#include<iostream>


using namespace std;

int main(){

int size;

cin>>size;

int arr[size];

int count=0;

int avail_officiers=0;            //available officers

int untrea_crimes=0;                //untreated crimes


for(int i=0;i<size;i++){

    cin>>arr[i];


}

for(int i=0;i<size;i++){

        //when the entry is 1 or greater than 1
    if(arr[i]>=1){

        avail_officiers+=arr[i];

    }
    //when the entry is -1 or greater than 1 this will execute when there are available officers
    else if(arr[i]==-1 && avail_officiers>=1){


        avail_officiers--;

    }

    //when the entry is -1 or greater than 1 this will execute when there are no available officers making the untreated crimes
    else if(arr[i]==-1 && avail_officiers==0){


        untrea_crimes++;

    }

}


cout<<untrea_crimes;

}
*/
/*
#include<iostream>

using namespace std;

int main(){

int arr[3];

for(int i=0;i<3;i++){

    cin>>arr[i];

}

int temp=0;


//This will sort the array in accending order so that the max or min coordinates are at the end of the array
for(int i=0;i<2;i++){

        for(int j=i;j<3;j++){

    if(arr[i]>arr[j]){

        temp=arr[j];
        arr[j] = arr[i];
        arr[i]=temp;

    }

        }
}


int value=0;
int count=0;
//This will check the first and last element and increase or decrease them respectively to try to match the 2nd one. In this way we get the total minimum steps both friends needs to take to meet at one point.
for(int i=0;(arr[0]&&arr[2]!=arr[1]);i++){

    if(arr[0]<arr[1]){

        arr[0]+=1;

        count++;

    }
    else if(arr[2]>arr[1]){

        arr[2]-=1;
        count++;

    }

}

printf("%d",count);

}

*/
/*




#include<iostream>
using namespace std;

int main(){


int test_cases=0;

cin>>test_cases;

for(int i=0;i<test_cases;i++){

  int size;

  cin>>size;

  int arr[size];

  for(int j=0;j<size;j++){

    cin>>arr[j];


  }

   int flag=0;

    for(int j=0;j<size-1 && flag==0;j++){

        if((arr[j]==arr[j+1]) || (arr[j]-arr[j+1])==-1 || (arr[j]-arr[j+1])==1){

            flag=0;

        }
        else {flag=1;

        }
    }

    if(flag==0){


        printf("YES\n");

    }
    else{

        printf("NO\n");

    }
}
}
//*/

/*
#include<iostream>

using namespace std;

int main(){

int size;

cin>>size;

char arr[size+1];

cin>>arr;

int count=0;


for(int i=0;i<size-1;i++){


    if(arr[i]==arr[i+1]){

        count++;

    }

}

cout<<count;

}


*/
/*
#include<iostream>


using namespace std;


int  main(){


int size;
int max;
cin>>size;

int arr[size];

for(int i=0;i<size;i++){


    cin>>arr[i];

}

max = arr[0];

for(int i=1;i<size;i++){


    if(max<arr[i]){

        max = arr[i];

    }

}

int count=0;

//check if they are not equal then it increases the index i to become equal to the max

for(int i=0;i<size;i++){


    if(arr[i]!=max){

        for(int j=0;arr[i]!=max;j++){


            arr[i]+=1;

            count++;

        }

    }

}



cout<<count;

}
*/




/*
#include<iostream>

using namespace std;


int main(){


    long int a,b;

    int num;

    cin>>num;

    int flag=0;

    int count=0;


for(int j=0;j<num;j++){

        cin>>a>>b;

    if(a%b==0){


    cout<<count<<endl;

    }
    else{
     /*
    for(int i=0;i<num;i++){

        count=0;

        cin>>a>>b;

        if(a%b==0){

            cout<<"0"<<endl;

        }
        else{


            for(int j=0;(a%b!=0);j++){

                a++;
                count++;

            }
            cout<<count<<endl;

        }

    }


//
for(int i=0;a>b;i++){

    a=a-b;

}


   b = b-a;

   cout<<b<<endl;
}
    }

}

*/


#include <algorithm>
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr[5][5];

    int x;
    int y;
    int count=0;
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            cin>>arr[i][j];

        }


    }
    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            if(arr[i][j]==1){

                x=i;
                y=j;

            }

        }


    }

    for(int i=0;x!=2 || y!=2;i++){

    if(x<2){

        x+=1;
        count++;

    }
    else if(x>2){

        x-=1;
        count++;

    }
    else if(y<2){

        y+=1;
        count++;

    }
    else if(y>2){

        y-=1;
        count++;

    }
    }
    cout<<count;
}


 
//////#include<iostream>
//////int main()
//////{
//////system
//////}
//#include <cmath>
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//const double PI = acos(-1.0);
//
//struct Complex {
//	double x, y;
//
//	Complex(double _x = 0.0, double _y = 0.0) {
//		x = _x;
//		y = _y;
//	}
//
//	Complex operator-(const Complex &b) const {
//		return Complex(x - b.x, y - b.y);
//	}
//
//	Complex operator+(const Complex &b) const {
//		return Complex(x + b.x, y + b.y);
//	}
//
//	Complex operator*(const Complex &b) const {
//		return Complex(x * b.x - y * b.y, x * b.y + y * b.x);
//	}
//};
//
///*

//const int MAXN = 200020;
//Complex x1[MAXN], x2[MAXN];
//int sum[MAXN];
//
//int main() {
//	ifstream cin("1.in");
//	string str1,str2;
//	while (cin>>str1) {
//		str2=str1;
//		int len1 = str1.size();
//		int len2 = str2.size();
//		int len = 1;
//		while (len < len1 * 2 || len < len2 * 2) len <<= 1;
//		for (int i = 0; i < len1; i++) x1[i] = Complex(str1[len1 - 1 - i] - '0', 0);
//		for (int i = len1; i < len; i++) x1[i] = Complex(0, 0);
//		for (int i = 0; i < len2; i++) x2[i] = Complex(str2[len2 - 1 - i] - '0', 0);
//		for (int i = len2; i < len; i++) x2[i] = Complex(0, 0);
//		fft(x1, len, 1);
//		fft(x2, len, 1);
//		for (int i = 0; i < len; i++) x1[i] = x1[i] * x2[i];
//		fft(x1, len, -1);
//		for (int i = 0; i < len; i++) sum[i] = int(x1[i].x + 0.5);
//		for (int i = 0; i < len; i++) {
//			sum[i + 1] += sum[i] / 10;
//			sum[i] %= 10;
//		}
//		len = len1 + len2 - 1;
//		while (sum[len] == 0 && len > 0) len--;
//		for (int i = len; i >= 0; i--)cout<<sum[i];
//		cout<<endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n,sh,sm,eh,em;
//	char cc;
//	cin>>sh>>cc>>sm>>eh>>cc>>em>>n;
//	int m=60*(eh-sh)+em-sm,x,y,z;
//	vector<vector<int>> a(1);
//	for(int i=0;i<n;i++)
//	{
//		cin>>x>>y>>z;
//		if(z!=0)
//		{
//			for(int i=1;z>0;i*=2)
//			{
//				vector<int> c(3);
//				c[0]=min(i,z)*x,c[1]=min(i,z)*y,c[2]=1;
//				a.push_back(c);
//				z-=i;
//			}
//		}
//		else
//		{
//			vector<int> c(3);
//			c[0]=x,c[1]=y,c[2]=0;
//			a.push_back(c);
//		}
//	}
//	vector<int> c(m+1);
//	for(int i=1;i<a.size();i++)
//	{
//		//cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
//		if(a[i][2]==0)
//			for(int j=a[i][0];j<=m;j++)
//				c[j]=max(c[j],c[j-a[i][0]]+a[i][1]);
//		else
//			for(int j=m;j>=a[i][0];j--)
//				c[j]=max(c[j],c[j-a[i][0]]+a[i][1]);
//	}
//	cout<<c[m]<<endl;
//}
//#include<iostream>
//#include<vector>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout<<fixed<<setprecision(20)<<acos(-1.0)<<endl;
//	int n,m;
//	cin>>n;
//	vector<int>a(n),c(30);
//	for(int i=0;i<n;i++)cin>>a[i];
//	for(int i=0;i<n;i++)
//	{
//
//	}
//	cout<<(m<2?0:m)<<endl;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//void dfs(string s,int i,int x)
//{
//	if(i==10){
//		cout<<s<<"="<<x<<endl;
//		return ;
//	}
//	dfs(s+(i==1?"":"+")+to_string(i*1LL),i+1,x+i);
//	if(i!=1)
//	dfs(s+(i==1?"":"-")+to_string(i*1LL),i+1,x-i);
//}
//int main()
//{
//	dfs("",1,0);
//}
//#include<iostream>
//using namespace std;
//class tree{
//public:
//	int val;
//	tree *left,*right;
//	static tree* create()
//	{
//		int x;
//		cin>>x;
//		if(x==0)return NULL;
//		tree *p=new tree(x);
//		p->left=create();
//		p->right=create();
//		return p;
//	}
//	void first(tree*p)
//	{
//		if(!p)return ;
//		cout<<p->val<<" ";
//		first(p->left);
//		first(p->right);
//	}
//	void middle(tree*p)
//	{
//		if(!p)return ;
//		first(p->left);
//		cout<<p->val<<" ";
//		first(p->right);
//	}
//	void last(tree*p)
//	{
//		if(!p)return ;
//		first(p->left);
//		first(p->right);
//		cout<<p->val<<" ";
//	}
//	tree(int x)
//	{
//		cout<<"���ǹ��캯��"<<endl;
//		val=x;
//		left=NULL;
//		right=NULL;
//	}
//	~tree()
//	{
//		cout<<"������������"<<endl;
//	}
//};
//int main()
//{
//	tree *p,a(0);
//	p=a.create();
//	//p->first(p);
//	//cout<<endl;
//	//p->middle(p);
//	//cout<<endl;
//	p->last(p);
//}
//#include<iostream>
//#include<string>
//#include<vector>
//#include<stack>
//#include<map>
//using namespace std;
//string sp[1005];
//int ss=0;
//void sss()
//{
//	for(int i=0;i<ss;i++)
//		cout<<sp[i]<<endl;
//}
//class fraction{
//public:
//	long long x,y;
//	long long gcd(long long x,long long y){
//		return y==0?x:gcd(y,x%y);
//	}
//	fraction(long long x)
//	{
//		this->x=x;
//		y=1;
//	}
//	fraction(long long x,long long y)
//	{
//		this->x=x;
//		this->y=y;
//	}
//	void f()
//	{
//		long long c=gcd(x,y);
//		x/=c,y/=c;
//	}
//	void operator -=(fraction a)//x/y-a/b=xb-ay/by
//	{
//		long long c=x,d=y;
//		x=c*a.y-a.x*d;
//		y=d*a.y;
//		f();
//	}
//	void operator +=(fraction a)//x/y-a/b=xb-ay/by
//	{
//		long long c=x,d=y;
//		x=c*a.y+a.x*d;
//		y=d*a.y;
//		f();
//	}
//	void operator *=(fraction a)//x/y-a/b=xb-ay/by
//	{
//		x*=a.x;
//		y*=a.y;
//		f();
//	}
//	fraction operator *(fraction a)//x/y-a/b=xb-ay/by
//	{
//		fraction c(*this);
//		c.x*=a.x;
//		c.y*=a.y;
//		c.f();
//		return c;
//	}
//	fraction operator^(fraction a)
//	{
//		fraction c(*this), e(1,2);
//		if(a.x==0)
//		{
//			fraction c(1);
//			return c;
//		}
//		if(a.x%2==0){
//			a.x/=2;
//			return (c*c)^(a);
//		}
//		else {
//			a.x/=2;
//			return c*((c*c)^(a));
//		}
//	}
//	void operator^=(fraction a)
//	{
//		*this=(*this)^a;
//	}
//	void operator /=(fraction a)//x/y-a/b=xb-ay/by
//	{
//		x*=a.y;
//		y*=a.x;
//		f();
//	}
//	string tostring()
//	{
//		return y!=1?to_string(x)+"/"+to_string(y):to_string(x);
//	}
//};
//void print(vector<fraction>&a)
//{
//	for(int i=0;i<a.size();i++)cout<<a[i].tostring()<<" ";
//	cout<<endl;
//}
//void print(vector<int>&a)
//{
//	for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//	cout<<endl;
//}
//void print(vector<string>&a)
//{
//	for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
//	cout<<endl;
//}
//int main()//((1+5)*6)+5*9+7/2;
//{
//	map<string,int> m;
//	m["("]=4,m[")"]=0,m["+"]=1,m["-"]=1,m["*"]=2,m["/"]=2,m["#"]=0,m["^"]=3;//m["%"]=2;
//	string s;
//	while(cin>>s){
//		s+="#";
//		vector<fraction> a;
//		vector<string> f,c;
//		for(int i=0,j;i<s.size();i++)
//			if(s[i]>'9'||s[i]<'0')c.push_back(s.substr(i,1));
//			else {
//				for(j=i;j<s.size()&&s[j]>='0'&&s[j]<='9';j++);
//				c.push_back(s.substr(i,j-i));
//				i=j-1;}
//			for(int i=0;i<c.size();i++){
//				if(c[i][0]>='0'&&c[i][0]<='9'){
//					fraction t(stoll(c[i]));
//					a.push_back(t);
//				}
//				else {
//					while(!f.empty()&&m[c[i]]<=m[f.back()]){
//						if(f.back()=="+")a[a.size()-2]+=a.back(),a.pop_back();
//						if(f.back()=="-")a[a.size()-2]-=a.back(),a.pop_back();
//						if(f.back()=="*")a[a.size()-2]*=a.back(),a.pop_back();
//						if(f.back()=="/")a[a.size()-2]/=a.back(),a.pop_back();
//						if(f.back()=="^")a[a.size()-2]^=a.back(),a.pop_back();
//						//if(f.back()=="%")a[a.size()-2]^=a.back(),a.pop_back();
//						if(f.back()=="("){
//							if(c[i]==")")
//								f.pop_back();
//							break;}
//						f.pop_back();
//					}
//					if(c[i]!=")")f.push_back(c[i]);
//				//	print(a);
//				//	print(f);
//				}
//			}
//		sp[ss++]=s.substr(0,s.size()-1)+" = "+a[0].tostring();
//		system("cls");
//		sss();
//	}
//}
//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include<iomanip>
//#include<string>
//#include<queue>
//using namespace std;
//int a[10][10]={};
//int main()
//{
//	queue<pair<int,int>> q;
//	q.push(make_pair(0,0));
//	int k=0;
//	while(!q.empty())
//	{
//		int s=q.size();
//		for(int i=0;i<s;i++)
//		{
//			int x=q.front().first,y=q.front().second;
//			q.pop();
//			if(x<0||y<0||x>=10||y>=10||a[x][y])continue;
//			a[x][y]=k;
//			q.push(make_pair(x+1,y));
//			q.push(make_pair(x-1,y));
//			q.push(make_pair(x,y+1));
//			q.push(make_pair(x,y-1));
//		}
//		k++;
//	}
//	for(int i=0;i<10;i++,cout<<endl)
//		for(int j=0;j<10;j++)
//			cout<<a[i][j]<<" ";
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//bool a[10000007];
//int main()
//{
//	fill(&a[0],&a[0]+10000007,1);
//	double start=clock();
//	for(int i=2;i*i<10000007;i++)//3 2*3
//		if(a[i])
//			for(int j=i*i;j<10000007;j+=i)
//				a[j]=0;
//	cout<<0.001*(clock()-start)<<endl;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a[]={1,2,2,2,2,4,5};
//	cout<<lower_bound(a,a+8,3)-a<<endl;
//}
//const int N = 300100, P = 1e9+7;
//inline int qpow(int x, int y) {
//	int res(1);
//	while (y) {
//		if (y & 1) res = 1ll * res * x % P;
//		x = 1ll * x * x % P;
//		y >>= 1;
//	}
//	return res;
//}
//void ntt(ll n)
//{
//	ll lim=1;
//	while(lim<(n<<1))lim<<=1;
//	for (int i = 0; i < lim; ++i) r[i] = (i & 1) * (lim >> 1) + (r[i >> 1] >> 1);
//	ntt(a,lim,1);
//	ntt(b,lim,1);
//	for(int i=0;i<lim;i++)c[i]=1LL*a[i]*b[i]%P;
//	ntt(c,lim,-1);
//	int l=1;
//	for(int i=0;i<N;i++)c[i+1]+=c[i]/10,c[i]%=10;
//}
//void slove()//ntt�����˷�
//{
//	ofstream out("1.in"),cout("1.out");
//	ifstream cin("1.in");
//	out<<1;
//	for(int i=1;i<100000;i++)out<<rand()%10;
//	string s,t;
//	while(cin>>s)
//	{
//		fill(a,a+N,0),fill(b,b+N,0),fill(c,c+N,0);
//		for(int i=0;i<s.size();i++)a[i]=s[s.size()-i-1]-'0',b[i]=s[s.size()-i-1]-'0';
//		//for(int i=0;i<t.size();i++)b[i]=t[t.size()-i-1]-'0';
//		ntt(s.size());
//		int tt=0;
//		for(int i=N-1;i>=0;i--)
//		{
//			if(c[i])tt=1;
//			if(tt)cout<<c[i];
//		}
//	}
//}
//void slove()
//{
//	/*ifstream in("C:/Users/86130/Desktop/model.txt");
//	ofstream out("C:/Users/86130/Desktop/�½��ļ���/emmmmm/emmmmm/model.cpp",ios::app);
//	while(!in.eof())
//	{
//		string s;
//		getline(in,s);
//		if(s.find("//")==-1)out<<s<<endl;
//	}*/
//	init();
//	for(int i=1;i<100;i++)cout<<i<<" "<<phi[i]<<endl;
//}
//#include<iostream>
//#include<fstream>
//#include<algorithm>
//#include<vector>
//#include<ctime>
//#include<cstdlib>
//#include<string>
//#include<Windows.h>
//using namespace std;
//class str{
//public:
//	ofstream out;
//	str(string filename){
//		Sleep(1000);
//		out.open(filename);
//		out<<"";
//		out.close();
//		out.open(filename,ios::app);
//		srand(time(0));
//	}
//	string getstr(int x){
//		string c="";
//		for(int i=0;i<x;i++)c+=char('a'+rand()%26);
//		return c;
//	}
//	string tostring(int x){
//		return to_string(1LL*x)+" ";
//	}
//	string tostring(vector<int> a){
//		string c="";
//		for(int i=0;i<a.size();i++)c+=tostring(a[i]);
//	}
//	string tostring(vector<string> a){
//		string c="";
//		for(int i=0;i<a.size();i++)c+=a[i]+'\n';
//		return c;
//	}
//	~str(){
//		out.close();
//	}
//};
//class Solution {
//public:
//    bool is(string s,string t){
//        int i=0,j=0;
//        for(;i<s.size()&&j<t.size();i++)
//            if(j<t.size()&&s[i]==t[j])
//                j++;
//        return j==t.size();
//    }
//    int findLUSlength(vector<string>& strs) {
//        int s=-1;
//        for(int i=0;i<strs.size();i++){
//            int t=1;
//            for(int j=0;j<strs.size();j++){
//                if(j==i)continue;
//                if(is(strs[j],strs[i])){
//                    t=0;
//                    break;
//                }
//            }
//            if(t)s=max(s,int(strs[i].size()));
//        }
//        return s;
//    }
//};
//int main()
//{
//    for (long long int i = 1;i <= 4;i++)
//    {
//        string c = to_string(i) + ".in";
//		string cc=to_string(i)+".out";
//		ifstream cin(c);
//		ofstream cout(cc);
//		int n;
//		cin>>n;
//
//    }
//}

//55 106171380 477771210 955542420 53085690 53085690 566247360 11796820 637028280 8847615 318514140 2949205 159257070 106171380 106171380 637028280 2949205 53085690 11796820 955542420 35390460 35390460 212342760 35390460 53085690 637028280 2949205 2949205 26542845 106171380 106171380 5898410 8847615 424685520 5898410 8847615 283123680 159257070 424685520 2949205 212342760 53085690 35390448 318514140 5898410 141561840 106171380 141561840 17695230 2949205 8847615 106171380 17695230 53085690 17695230 35390460
#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
ll nCr(ll n, ll k) 
{ 
    ll C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;  // nC0 is 1 
  
    for (ll i = 1; i <= n; i++) 
    { 
        // Compute next row of pascal triangle using 
        // the previous row 
        for (ll j = min(i, k); j > 0; j--) 
            C[j] = C[j] + C[j-1]; 
    } 
    return C[k]; 
} 
struct node
{
	int x;
	int r;
	int iq;
};
bool sorte(struct node a,struct node b)
{
	return a.x<b.x;
}
vector<ll> mark(ll p, vector<ll> a,  ll n)
{
    for(ll i=2;i*p<n;i++)
    {
        a[i*p]=1;
    }
    return a;
}
vector<ll> sieve(vector<ll> a, ll n)
{
	a[0]=1;
	a[1]=1;
    for(ll i=2;i<sqrt(n);i++)
    {
        if(a[i]==0)
        {
            a=mark(i,a,n);
        }
    }
    return a;
}
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
ll findGCD(vector<ll> a, ll n) //used to find gcd of array or gcd of array added by constant
{
    ll result = a[1]-a[0]; 
    for (ll i = 1; i+1 < n; i++) 
    {
    	if(a[i+1]-a[0]>result)
    	{
    		result = gcd(a[i+1]-a[0], result);
		}
		else
		{
			result = gcd(result ,a[i+1]-a[0]);
		}
    	
	}  
    return result; 
} 
ll ribbonCut(ll n, ll b, ll c, ll a)
{
	vector<ll> dp(n+1);
	dp[0]=0;
	for(ll i=1;i<=n;i++)
	{
		ll x,y,z;
		x=y=z=-1;
		if(i>=a)
		{
			x=dp[i-a];
		}
		if(i>=b)
		{
			y=dp[i-b];
		}
		if(i>=c)
		{
			z=dp[i-c];
		}
		if(x==-1 &&y==-1 && z==-1)
		{
			dp[i]=-1;
		}
		else
		{
			dp[i]=max(max(x,y),z)+1;
		}
	}
	return dp[n];
}
ll fact(ll n)
{
	ll p=1;
	for(ll i=2;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}
ll modInverse(ll A,ll M)
{
    A=A%M;
    for(ll B=1;B<M;B++)
        if(((A*B)%M)==1)
            return B;
}
//cout<<fixed;
//cout<<setprecision(9);
//n8m vector: vector< vector<ll> > a(n, vector<ll>(m,0));
//while using ceil, use decimal in denominator
//to declare 32 bit int : int32_t n;
//fflush(stdin);
//ios::sync_with_stdio(0);
//    cin.tie(0);
//LCM INBUILT FUNCTION:
//#include<boost/math/common_factor.hpp>
//boost::math::lcm(10,20);
ll ifok(ll x)
{
	while(x % 2 == 0)
	{
		x /= 2;
	}
	while(x % 3 == 0)
	{
		x /= 3;
	}
	return x;
}

bool equal(stack<ll> a, vector<ll> b)
{
	if(a.size() != b.size())
	{
		return 0;
	}
	ll n = a.size();
	for(ll i = 0 ; i < n ; i++)
	{
		ll t = a.top();
		a.pop();
		if(t != b[i])
		{
			return 0;
		}
	}
	return 1;
}

void operate(stack<ll>& a, stack<ll>& b)
{
	ll ad = a.top();
	ll bd = b.top();
	a.pop();
	b.pop();
	stack<ll> temp;
	if(ad > bd)
	{
		while(!a.empty())
		{
			temp.push(a.top());
			a.pop();
		}
		a.push(ad);
		a.push(bd);
		while(!temp.empty())
		{
			a.push(temp.top());
			temp.pop();
		}
	}
	else //bd > ad
	{
		while(!b.empty())
		{
			temp.push(b.top());
			b.pop();
		}
		b.push(bd);
		b.push(ad);
		while(!temp.empty())
		{
			b.push(temp.top());
			temp.pop();
		}
	}
	return;
}
bool finf(ll p,vector<ll> a ,ll n)
{
	vector<ll> dp(n+1, 0);
	for(ll i = 0 ; i < n ; i++)
	{
		dp[a[i]]++;
	}
	bool ans = false;
	ll ansi = 0;
	ll maxi = p;
	for(ll i = 1 ; i <= n ; i++)
	{
		if(dp[i] >= p)
		{
			if(dp[i] >= maxi)
			{
				maxi = dp[i];
				ans = true;
				ansi = i;
			}
		}
	}
	if(ans == false)
	{
		return ans;
	}
	ll f = 0;
	ll pc = p;
	for(ll i = 1 ; i <= n ; i++)
	{
		if(p > 0)
		{
			if(i != ansi && dp[i] != 0 || dp[i] > pc)
			{
				p--;
			}
		}
		else
		{
			f = 1;
			break;
		}
	}
	if(f == 1 || p <= 0)
	{
		return true;
	}
	return false;
}
//1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
//16 8 17 7 8 21 13 5 1 25 12 14 12 6 4 24 6 9 18 3 22 19 3 24 7 7 2 23 11 6 14 17 4 21 24 23 6 14 6 15 26 22 19 18 20 11 10 16 18 5 16 7 7 24 18 16 14 18 22 25 19 20 13 23 3 25 19 25 25 3 17 16 5 22 9 11 5 6 6 13 26 14 9 13 11 11 1 19 22 23 19 18 5 14 26 11 25 3 24 6 24 20 12 19 7 25 16 19 6 1 4 16 15 15 5 6 24 26 2 3 15 5 10 21 22 16 22 1 2 15 25 7 16 15 5 25 12 6 16 2 14 16 12 10 22 18 22 9 16 25 1 13 25 5 8 23 17 14 17 18 17 16 13 24 21 10 10 12 15 15 22 1 15 23 21 24 23 8 13 19 14 3 2 24 3 15 11 19 6 26 11 22 1 20 24 4 11 14 12 25 10 25 8 6 9 24 10 19 23 14 11 11 21 6 14 21 24 24 26 18 26 2 13 14 13 7 17 15 15 11 5 20 12 25 8 14 11 15 1 21 7 26 17 18 3 4 4 9 21 20 5 9 15 10 23 1 25 25 26 16 22 19 3 13 16 19 1 10 12 6 22 7 21 2 6 1 1 15 22 12 26 25 12 14 20 18 11 4 3 16 23 19 18 20 5 19 10 23 8 4 9 26 3 15 2 26 3 14 6 23 12 17 9 10 20 22 4 23 22 24 8 18 3 2 12 4 22 7 25 12 23 7 2 21 19 2 13 2 15 18 24 20 12 8 3 19 13 16 24 15 8 7 13 7 14 11 5 21 6 4 24 15 20 15 7 2 7 24 16 5 25 1 14 6 5 20 3 21 11 5 16 26 19 8 11 12 10 21 7 7 7 5 11 10 4 17 26 10 5 14 16 5 22 17 7 24 9 5 16 10 19 18 4 26 10 1 26 21 10 12 12 3 8 8 2 6 17 13 11 9 13 23 26 15 2 9 23 25 2 24 4 21 21 14 6 19 11 19 18 19 18 20 5 11 13 17 4 3 25 26 10 5 5 21 8 13 19 18 17 3 15 26 9 10 9 16 6 9 15 14 5 5 4 4 16 19 26 18 14 1 22 25 13 13 20 1 20 2 4 26 17 19 15 5 13 21 22 14 16 16 16 19 21 1 3 2 1 26 21 24 13 8 5 3 20 8 12 5 7 18 16 21 14 11 4 13 2 16 16 23 5 17 20 7 10 15 16 1 18 13 15 23 26 4 17 25 15 24 25 20 10 2 2 8 1 23 4 25 4 3 16 18 10 2 24 16 8 15 15 8 16 11 23 17 25 21 8 18 17 26 8 14 2 14 6 21 22 17 14 17 17 12 18 26 10 16 24 9 15 7 22 12 9 5 24 4 26 21 26 15 19 18 11 18 21 19 22 15 10 2 18 26 13 23 26 16 15 23 11 10 9 12 5 6 18 1 1 13 4 9 7 16 14 16 21 21 8 7 24 16 17 14 10 23 10 13 23 1 24 24 13 14 19 14 8 8 12 17 17 18 26 21 4 12 20 6 26 15 20 3 10 20 14 26 24 21 7 12 19 4 19 13 26 3 14 15 3 11 22 6 1 10 6 18 13 24 15 20 8 15 23 11 2 10 26 23 21 3 23 12 10 6 18 9 13 16 13 25 8 3 8 26 18 9 23 11 2 1 18 24 2 7 6 3 2 3 5 25 8 10 21 7 9 24 23 20 2 22 20 18 5 8 2 2 3 16 24 9 6 2 24 22 6 2 3 7 11 3 6 17 3 11 3 15 20 26 7 11 21 2 13 10 18 13 2 19 26 20 19 19 8 6 18 15 5 6 23 19 10 18 24 10 8 7 21 26 25 21 16 26 23 23 5 9 17 21 18 16 9 24 9 17 6 12 4 21 21 22 5 15 15 23 17 3 21 4 8 14 5 6 14 10 8 1 9 13 21 3 26 6 19 11 21 9 4 21 2 21 18 9 19 23 20 2 18 5 3 21 25 11 1 2 6 3 22 11 4 26 5 26 20 15 9 4 21 11 21 8 10 26 5 6 3 26 26 26 2 6 11 17 4 16 17 26 9 11 6 15 2 21 3 4 8 20 8 24 4 10 7 11 10 5 12 18 12 16 1 24 1 13 3 5 18 15 19 23 9 20 4 16 20 16 3 3 12 9 6 11 5 12 10 25 20 9 8 18 3 17 1 25 2 14 5 6 24 14 24 22 7 26 5 4 25 25 8 14 7 25 3 4 18 21 4 13 16 8 13 5 3 11 15 20 18 23 15 19 16 15 6 7 8 6 15 26 17 22 12 17 6 24 23 23 11 13 6 24 4 25 25 7 13 4 3 1 19 26 19 7 15 22 19 15 4 11 10 7 8 3 23 13 2 13 24 18 13 8 21 25 6 25 17 7 1 10 17 11 3 11 12 26 14 1 25 24 17 11 17 15 25 26 23 13 25 21 2 26 1 26 3 16 11 8 11 20 11 25 4 26 9 22 3 21 25 16 21 18 6 13 2 9 19 7 5 11 25 18 7 26 22 24 4 8 16 15 1 13 22 1 6 25 18 1 18 24 19 22 11 8 20 17 4 9 8 5 18 19 9 7 2 8 26 10 26 21 10 24 13 13 25 19 16 14 1 18 1 5 23 11 5 7 10 3 3 22 8 8 18 10 22 2 10 20 19 17 4 10 15 15 20 7 16 11 14 6 16 6 25 3 7 6 9 5 15 23 17 18 23 23 23 16 26 19 17 13 5 20 15 7 5 16 19 16 24 14 22 10 9 21 16 1 12 25 25 14 13 11 13 14 21 22 11 12 8 19 5 3 4 23 18 1 3 7 6 13 26 11 7 9 16 4 6 15 4 11 10 13 10 17 23 9 17 16 21 15 17 8 9 13 22 6 22 21 26 23 25 22 9 10 7 6 21 12 12 11 10 4 21 8 19 10 1 6 2 20 12 11 13 6 17 18 13 25 10 6 10 14 8 8 19 19 17 3 20 25 4 20 5 1 13 4 3 10 2 16 18 8 20 14 5 7 25 9 23 24 7 3 10 23 12 7 18 19 13 5 1 5 1 18 23 20 22 10 19 10 2 1 15 9 15 10 12 23 8 25 16 14 22 18 21 9 8 15 19 23 11 9 6 25 7 20 25 4 8 1 3 23 25 8 19 7 5 23 26 13 20 7 15 14 26 12 20 10 8 7 1 21 8 14 9 8 18 5 17 7 10 6 23 11 10 19 13 20 16 10 8 1 5 6 17 26 1 1 21 12 4 18 3 8 10 3 3 4 25 18 6 22 22 18 9 22 21 25 5 5 7 6 9 22 4 18 3 25 7 21 18 17 4 18 5 4 1 11 21 2 14 6 7 21 16 18 15 17 25 12 15 2 3 23 17 24 11 26 13 1 21 19 10 7 13 8 3 13 8 7 4 14 13 16 8 14 17 11 1 13 8 21 18 11 20 18 6 6 1 3 12 22 7 18 26 11 11 12 4 1 3 12 12 20 5 15 10 15 13 15 14 24 18 17 25 10 26 7 9 14 18 14 14 26 23 1 3 24 24 1 5 4 18 23 21 4 24 26 18 6 21 19 5 23 10 20 2 15 24 22 25 14 6 8 11 19 20 3 5 14 1 21 13 14 4 4 24 6 4 13 22 26 3 1 21 20 4 3 3 11 24 1 1 25 4 26 19 24 20 20 15 2 2 7 17 14 7 22 22 16 10 7 15 10 15 7 12 13 11 24 7 2 6 3 16 25 16 3 11 17 3 8 2 4 4 26 23 18 24 2 26 13 17 18 12 24 22 15 2 20 23 8 24 7 9 14 6 7 6 18 3 3 12 13 26 14 13 10 21 7 23 23 2 19 17 6 3 9 8 21 2 19 10 15 12 12 13 19 17 19 7 8 13 3 16 8 5 12 19 15 20 6 12 2 7 19 6 14 16 3 21 26 19 18 21 16 3 8 25 14 22 26 8 3 16 17 21 7 18 9 23 14 9 17 24 4 6 10 16 23 16 24 6 2 12 11 16 14 16 5 5 12 6 10 13 20 11 21 17 16 26 15 13 23 14 12 13 2 21 16 13 11 20 12 16 20 14 4 13 16 4 19 25 4 19 7 22 6 16 5 14 5 13 23 2 15 18 9 6 19 21 17 8 3 5 19 11 13 11 8 19 19 13 22 14 15 14 23 1 6 24 23 8 7 2 9 2 1 2 22 17 15 16 17 6 15 22 9 21 19 19 17 6 17 23 5 8 20 24 4 26 21 10 20 12 14 20 24 13 18 10 24 24 23 20 12 7 7 11 25 20 2 9 15 12 25 4 14 9 12 17 1 4 15 10 19 11 11 22 6 24 1 8 8 10 13 2 15 3 12 10 1 18 9 14 20 4 23 3 12 4 22 4 24 18 15 16 2 25 10 26 23 25 25 15 10 21 15 20 8 23 13 12 22 18 7 12 6 26 4 26 4 2 20 21 2 24 21 15 6 6 22 14 3 18 19

vector<bool> dectobin(ll n)
{
	vector<bool> ans;
	while(n != 0)
	{
		ans.push_back(n % 2);
		n /= 2;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

ll bintodec(vector<bool> a)
{
	ll ans = 0;
	for(ll i = 0 ; i < a.size() ; i++)
	{
		ans = ans * 2 + (ll)a[i];	
	}
	return ans;
}

vector<bool> process(vector<bool> a, ll d)
{
	vector<bool> ans;
	if(d == 1)
	{
		for(ll i = 0 ; i < a.size() - 1 ; i += 2)
		{
			if(a[i] == 0 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(0);
			}
			else if(a[i] == 0 && a[i+1] == 1)
			{
				ans.push_back(1);
				ans.push_back(0);
			}
			else if(a[i] == 1 && a[i+1] == 0)
			{
				ans.push_back(1);
				ans.push_back(1);
			}
			else
			{
				ans.push_back(0);
				ans.push_back(1);
			}
		}
		return ans;
	}
	else if(d == 2)
	{
		for(ll i = 0 ; i < a.size() - 1 ; i += 2)
		{
			if(a[i] == 0 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(0);
			}
			else if(a[i] == 0 && a[i+1] == 1)
			{
				ans.push_back(1);
				ans.push_back(1);
			}
			else if(a[i] == 1 && a[i+1] == 0)
			{
				ans.push_back(0);
				ans.push_back(1);
			}
			else
			{
				ans.push_back(1);
				ans.push_back(0);
			}
		}
		return ans;
	}
	return a;
}

string str(ll a)
{
	string t;
	while(a != 0)
	{
		string e;
		if(a%2 == 0)
		{
			e = "0";
		}
		else
		{
			e = "1";
		}
		t = t + e;
		a /= 2;
	}
	return t;
}

ll possible(string a, string b)//a into b
{
	ll c = 0;
	for(ll i = 0 ; i < 7 ; i++)
	{
		if(a[i] == '1' && b[i] == '1')
		{
			return -1;
		}
		else if(a[i] == '0' && b[i] == '1')
		{
			c++;
		}
	}
	return c;
}


vector<vector<ll> > findpos(string a)
{
	vector<vector<ll> > p;
	for(ll i = 1 ; i <= 9 ; i++)
	{
		//if(possible(i, a) != -1)
		{
		//	p.push_back(make_pair(i, possible(a, str(i))));
		}
	}
	return p;
}

int main()
{
	ll n;
	cin>>n;
	ll c = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		string a;
		cin>>a;
		ll f = 0;
		for(ll j = 0; j < a.size() ; j++)
		{
			if(a[j] == '+')
			{
				f = 1;
			}
		}
		if(f == 0)
		{
			c--;
		}
		else
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}/*ll n;
	cin>>n;
	vector<ll> a(n);
	vector<ll> dp(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
		if(i == 0)
		{
			dp[i] = a[i];
		}
		else
		{
			dp[i] = dp[i-1] + a[i];
		}
	}
	ll m;
	cin>>m;
	for(ll i = 0 ; i < m ; i++)
	{
		ll p;
		cin>>p;
		ll l = 0;
		ll h = n;
		ll m = (l + h) / 2;
		ll q = 0;
		ll f = 0;
		while(l < h)
		{
			if(p == dp[m])
			{
				q = m;
				f = 1;
				break;
			}
			else if(p < dp[m])
			{
				h = m;
			}
			else
			{
				l = m + 1;
			}
			m = (l + h)/2;
		}
		if(f == 0)
		{
			q = l;
		}
		cout<<q+1<<endl;
	}, m, a, b;
	cin>>n>>m>>a>>b;
	if( ((double)b) / ((double)m) < (double)a )
	{
		cout << (n/m) * b + min(b, a * (n % m));
	}
	else
	{
		cout<<n * a;
	} n, l;
	cin>>n>>l;
	vector<ll> a(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	long double maxa = (long double)max(a[0], l - a[n-1]);
	for(ll i = 0 ; i < n - 1 ; i++)
	{
		maxa = max(maxa, (long double)((a[i+1] - a[i])/2.0));
	}
	cout<<fixed;
	cout<<setprecision(9);
	cout<<maxa;	map<string, ll> m;
	for(ll i = 0 ; i < n ; i++)
	{
		string s;
		cin>>s;
		if(m[s] == 0)
		{
			m[s]++;
			cout<<"OK"<<endl;
		}
		else
		{
			cout<<s<<m[s]<<endl;
			m[s]++;
		}
	}ll n;
	cin>>n;
	vector<ll> a(n);
	for(ll i = 0 ; i < n; i++)
	{
		cin>>a[i];
	}
	ll on = a[0] % 2;
	ll tw = a[1] % 2;
	ll th = a[2] % 2;
	if(on == tw && tw == th)
	{
		for(ll i = 3; i < n ; i++)
		{
			if(a[i] % 2 == (1 - on))
			{
				cout<<i+1;
				break;
			}
		}
	}
	else
	{
		if(on == tw)
		{
			cout<<3;
		}
		else if(on == th)
		{
			cout<<2;
		}
		else
		{
			cout<<1;
		}
	}// TASK : Do checking for a maximum for a 2000 digit number - not ( * 10 + )
	ll n, k;
	cin>>n>>k;
	vector<string> a(n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>a[i];
	}
	vector<vector<ll> > dp(n, vector<ll> (k+1));
	vector<pair<ll, ll> > t = findpos(a[0]);//val, k req
	for(ll j = 0 ; j <= k ; j++)
	{
		dp[0][j] = 0;
		for(ll m = 0 ; m < t.size() ; m++)
		{
			dp[0][j] = max(dp[0][j], t[m].ff);
		}
	}
	for(ll i = 1 ; i < n ; i++)
	{
		vector<pair<ll, ll> > t = findpos(a[i]);//val, k req
		for(ll j = 0 ; j <= k ; j++)
		{
			dp[i][j] = 0;
			for(ll m = 0 ; m < t.size() ; m++)
			{
				if(j - t[m].ss >= 0)
				{
					dp[i][j] = max(dp[i][j], dp[i-1][j - t[m].ss] * 10 + t[m].ff);			
				}
			}
		}
	}
	if(dp[n-1][k] < 1e2000-1)///invalid
	{
		cout<<0;
	}
	else
	{
		cout<<dp[n-1][k];		
	}t;
	cin>>t;
	for(int xyz = 0 ; xyz < t ; xyz ++)
	{
		ll n;
		cin>>n;
		vector<ll> a(n);
		for(ll i = 0 ; i < n ; i++)
		{
			cin>>a[i];
		}
		ll ne = 1;
		ll f = 0;
		for(ll i = n - 1 ; i >= 0 ; i-- )
		{
			if(a[i] == ne)
			{
				ne++;
			}
			else
			{
				ll net = a[i] + 1;
				while(i >= 1 && a[i] != ne)
				{
					if(a[i] != a[i-1] + 1)
					{
						f = 1;
						break;
					}
					i--;
				}
				ne = net;
			}
		}
		if(f == 0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}queue<ll> peaks;
		ll p = 0;
		ll q = k - 1;
		for(ll i = p + 1 ; i <= q - 1 ; i++)
		{
			if(a[i] >= a[i-1] && a[i] >= a[i+1])
			{
				peaks.push(i);
			}
		}
		ll maxa = peaks.size();
		ll maxi = p;
		p++;
		q++;
		while(q < n)
		{
			if(!peaks.empty() && peaks.front() == p)
			{
				peaks.pop();
			}
			if(a[q-1] >= a[q-2] && a[q-1] >= a[q])
			{
				peaks.push(q-1);
			}
			if(!peaks.empty() && peaks.size() > maxa)
			{
				maxa = peaks.size();
				maxi = p;
			}
			p++;
			q++;
		}
		cout<<maxa+1<<" "<<maxi+1<<endl;if(n <= 3)
		{
			cout<<n<<endl;
			continue;
		}
		//cout<<"log2(n+1) "<<ceil(log2l(n+1))<<endl;
		ll b = ceil(log2l(n+1));
		if(b % 2 == 1)
		{
			b++;
		}
		ll nd = n - (ll)pow(4, (b-4)/2 + 1) + 1;
		ll d = (nd - 1) % 3;
		//cout<<"b "<<b<<endl;
		//cout<<"nd "<<nd<<endl;
		vector<bool> ans(b, 0);
		ans[1] = 1;
		vector<bool> rem;
		rem = dectobin((nd-1)/3); //MSB = 0 ; LSB = n - 1
		reverse(rem.begin(), rem.end());
		while(rem.size() < b - 2)
		{
			rem.push_back(0);
		}
		reverse(rem.begin(), rem.end());
		/*for(ll i = 0 ; i < rem.size() ; i++)
		{
			cout<<rem[i]<<" ";
		}
		cout<<endl;
		ll ansi = 2;
		for(ll i = 0 ; i < rem.size() ; i++)
		{
			ans[ansi] = rem[i];
			ansi ++;
		}
		ans = process(ans, d);
		ll ansn = bintodec(ans);
		cout<<ansn<<endl;int n;
		cin>>n;
		vector<int> a(n+1);
		for(int i = 1 ; i <= n ; i++)
		{
			cin>>a[i];
		}
		vector<vector<int> > dp(201, vector<int> (n+1));
		for(int p = 1 ; p <= 200 ; p++)
		{
			for(int i = 0 ; i <= n ; i++)
			{
				if(i == 0)
				{
					dp[p][i] = 0;
				}
				else
				{
					dp[p][i] = dp[p][i-1] + (a[i] == p ? 1 : 0);
				}
			}
		}
		vector<vector<int> > c(201);
		for(int i = 1 ; i <= n ; i++)
		{
			c[a[i]].push_back(i);
		}
		int ans = 1;
		for(int i = 1 ; i <= 200 ; i++)
		{
			int len = c[i].size();
			for(int j = 0 ; j < len / 2 ; j++)
			{
				int l = c[i][j];
				int r = c[i][len - j - 1] - 1;
				int maxi = 0;
				for(int k = 1 ; k <= 200 ; k++)
				{
					maxi = max(maxi, dp[k][r] - dp[k][l]);
				}
				ans = max(ans, 2 * (j + 1) + maxi);
			}
		}
		cout<<ans<<endl;fn = 9;
		for(ll i = 1 ; i <= n ; i++)
		{
			string a;
			cin>>a;
			for(ll j = 1 ; j <= n ; j++)
			{
				ll p;
				p = a[j-1] - '0';
				if(i == 1 && j == 1 || i == 2 && j == 4 || i == 3 && j == 7 || i == 4 && j == 2 || i == 5 && j == 5 || i == 6 && j == 8 || i == 7 && j == 3 || i == 8 && j == 6 || i == 9 && j == 9 )
				{
					p %= 9;
					p += 1;
				}
				cout<<p;
			}
			cout<<endl;
		}or(ll i = 0 ; i < n ;i++)
		{
			cin>>a[i];
		}
		if(n == 1)
		{
			cout<<0<<endl;
			continue;
		}
		ll l = 1;
		ll h = n - 1;
		while(l < h)
		{
			ll m = (l + h + 1) / 2;
			if(finf(m, a, n))
			{
				//cout<<"Yes"<<endl;
				l = m;
			}
			else
			{
				//cout<<"No"<<endl;
				h = m - 1;
			}
		}
		cout<<l<<endl;//	ll n=1000001;
//	vector<ll> a(n);
//	a=sieve(a,n);
	ll n;
	cin>>n;
	ll n1;
	cin>>n1;
	ll t;
	vector<ll> ad;
	for(ll i = 0; i < n1 ; i++)
	{
		cin>>t;
		ad.push_back(t);
	}
	ll n2;
	cin>>n2;
	vector<ll> bd;
	for(ll i = 0 ; i < n2 ; i++)
	{
		cin>>t;
		bd.push_back(t);
	}
	//
	stack<ll> a;
	for(ll i = ad.size()-1; i >= 0 ; i--)
	{
		a.push(ad[i]);
	}
	stack<ll> b;
	for(ll i = bd.size()-1; i >= 0 ; i--)
	{
		b.push(bd[i]);
	}
	//
	ll f = 0;
	ll c = 0;
	while(1)
	{
		operate(a, b);//d
		/
		stack<ll> temp;
		while(!a.empty())
		{
			temp.push(a.top());
			cout<<"a : "<<a.top()<<endl;
			a.pop();
		}
		while(!temp.empty())
		{
			a.push(temp.top());
			temp.pop();
		}
		
		while(!b.empty())
		{
			temp.push(b.top());
			cout<<"b : "<<b.top()<<endl;
			b.pop();
		}
		while(!temp.empty())
		{
			b.push(temp.top());
			temp.pop();
		}
		c++;
		//
		if(equal(a, ad) && equal(b, bd)  || equal(a, bd) && equal(b, ad) ||  c > 100000)
		{
			f = 2;
			break;
		}
		if(a.size() == 0 || b.size() == 0)
		{
			f = 1;
			break;
		}
	}
	if(f == 2)
	{
		cout<<-1;
	}
	else
	{
		cout<<c<<" "<<(a.size() == 0 ? 2 : 1);
	}
/*	ll n;
	cin>>n;
	vector<ll> a;
	vector<ll> ans;
	while(n != 0)
	{
		a.push_back(n % 10);
		n /= 10;
	}
	reverse(a.begin(), a.end());
	for(ll j = 0 ; j <= 9 ; j++)
	{
		ll t = 0;
		for(ll i = 0 ; i < a.size() ; i++)
		{
			if(a[i] > 0)
			{
				t = t * 10 + 1;
				a[i]--;
			}
			else
			{
				t = t * 10;
			}
		}
		if(t != 0)
		{
			ans.push_back(t);
		}
	}
	cout<<ans.size()<<endl;
	for(ll i = 0 ; i  <  ans.size() ; i++)
	{
		cout<<ans[i]<<" ";
	}
/*if(n <= 1)
	{
		cout<<"Yes";
		return 0;
	}
	sort(a.begin(), a.end());
	ll p;
	for(ll i = 0 ; i < n ; i++)
	{
		if(i == 0)
		{
			p = ifok(a[i]);
		}
		else
		{
			if(ifok(a[i]) != p)
			{
				cout<<"No";
				return 0;
			}
		}
		//cout<<"LCM : "<<lcm<<endl;
	}
	cout<<"Yes";*/

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
#include <complex>
using namespace std;
const long double PI = 3.1415926535897932384626;
typedef long long ll;
typedef vector<ll> vli;
typedef pair<ll, ll> pii;
#define f first
//#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (long long int i = a; i < b; i++)
//#define fill(a, b) memset(a, b, sizeof(a))
#define mod 1000000007

#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


//void fuck()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//}

/*
------>do anything but don't stop..don't procastinate...
------>make test cases for n=1,n=0...baoundary cases..
*/

////bool get_ans(ll aux)
////{
////
////}
bool collinear(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (y1 - y2) * (x1 - x3) != (y1 - y3) * (x1 - x2);
}
bool isInt(double num)
{
    return (num == (int)num);
}
//returns the minimum of two numbers
//ll min(ll x, ll y)
//{
//    return y ^ ((x ^ y) & -(x < y));
//}
////returns the maximum of two numbers
//ll max(ll x, ll y)
//{
//    return x ^ ((x ^ y) & -(x < y));
//}
//addition of two integers
//int add(int a, int b)
//{
//    if (b == 0)
//        return a;
//    int sum = a ^ b;
//    int carry = (a & b) << 1;
//    return add(sum, carry);
//}
//iterative addition of two integers
//int Add(int a, int b)
//{
//    while (b != 0)
//    {
//        int sum = a ^ b;
//        int carry = (a & b) << 1;
//        a = sum;
//        b = carry;
//    }
//    return a;
//}
//recursive subtraction of two integers
//int subtract(int a, int b)
//{
//    if (b == 0)
//        return a;
//    return subtract((a ^ b), ((~a) & b) << 1);
//}
//iterative subtraction of two integers
//int Subtract(int x, int y)
//{
//    while (y != 0)
//    {
//        int borrow = (~x) & y;
//        x = x ^ y;
//        y = borrow << 1;
//    }
//    return x;
//}
// Russian Peasant using bitwise operator
//multiplication function without using "*"
//int multiply(int a, int b)
//{
//    int res = 0;
//    while (b)
//    {
//        if (b & 1)
//        {
//            res = res + a;
//        }
//        a = a << 1;
//        b = b >> 1;
//    }
//    return res;
//}
//divide
//int divide(int a, int b)
//{
//    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
//    a = abs(a);
//    b = abs(b);
//    int q = 0, tmp = 0;
//    for (int i = 31; i >= 0; --i)
//    {
//        if (tmp + (b << i) <= a)
//        {
//            tmp += (b << i);
//            q |= (1LL << i);
//        }
//    }
//    return sign * q;
//}
//O(sqrt(n)) for below
//ll phi(ll n)
//{
//    ll res = n;
//    for (ll i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0)
//        {
//            res = res / i;
//            res = res * (i - 1);
//        }
//        while (n % i == 0)
//        {
//            n = n / i;
//        }
//    }
//
//    if (n > 1)
//    {
//        res = res * (n - 1);
//        res = res / n;
//    }
//    return res;
//}

//o(nlog(logn)) for below
//ll phi[1000006];
//void PHI()
//{
//    rep(i, 0, 1000006)
//    {
//        phi[i] = i;
//    }
//    rep(i, 2, 1000006)
//    {
//        if (phi[i] == i)
//        {
//            for (int j = i; j < 1000006; j = j + i)
//            {
//                phi[j] = phi[j] * (i - 1);
//                phi[j] = phi[j] / i;
//            }
//        }
//    }
//}
// prefix function in better way
//vector<int> prefix_func(string s)
//{
//    ll n=s.length();
//    vector<int> prefix(n,0);
//    prefix[0]=0;
//    int j=0;
//    for(int i=1;i<n;i++)
//    {
//        j=prefix[i-1];
//        while(j>0 && s[i]!=s[j])
//        {
//            j--;
//        }
//        if(s[i]==s[j])
//        {
//            j++;
//        }
//        prefix[i]=j;
//    }
//
//return prefix;
//}
//int kmp(string s,string pat)
//{
//    //string s="abaaba";
//    vector<int> prefix=prefix_func(s);
//    //for(auto i:prefix)
//    //{
//    //    cout<<i<<"   ";
//    //}
//    //cout<<endl;
//    //string pat="aa";
//    ll n=s.size();
//    ll j=0;
//    ll pos=0;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]==pat[j])
//        {
//            i+=1;
//            j+=1;
//        }
//        else
//        {
//            if(j>0)
//            {
//                j=prefix[j-1];
//            }
//            else
//            {
//                i++;
//            }
//        }
//        if(j==pat.size())
//        {
//            //cout<<i<<endl;
//            pos=i-pat.size();
//            break;
//        }
//    }
//    //cout<<pos<<endl;
//    return pos;
//}
//vector<int> get_z(string s)
//{
//    /*
//    isme kya hota h ki z array k kisi v index pr jo value hoti h wo ye btati h ki
//    uss index se utne length(uss index ki value) ki prefix exist krti h string me...
//    example-
//            string str=" a b c d s j v j a b c h j"
//                     Z=                  3
//                     yha jo 3 h wo bta rha h ki abc 3 length ki as a prefix exist krti h...
//    */
///*
//        jo isme [l,r] hai wo ye bta rha h ki "l" to "r" ki jo substring hai prefix k
//        barabar ho chuki h...
//
//        */
//    int n=s.length();
//    //int z[n];
//    vector<int> z(n,0);
//    //for(int i=0;i<n;i++)
//    //{
//    //    cout<<z[i]<<"  ";
//    //}
//    //memset(z,0,n);
//    int l=0,r=0;
//    for(int i=0;i<n;i++)
//    {
//        if(i>r)
//        {
//            l=r=i;
//            while(r<n && s[r-l]==s[r])
//            {
//                r=r+1;
//            }
//            z[i]=r-l;
//            r--;
//        }
//        else
//        {
//            int idx=i-l;
//            if(z[idx]+i<=r)
//            {
//                z[i]=z[idx];
//            }
//            else
//            {
//                l=i;
//                while(r<n && s[r-l]==s[r])
//                {
//                    r++;
//                }
//                z[i]=r-l;
//                r--;
//            }
//        }
//    }
//    return z;
//}
//to get better results in decimal places..
//use double for better precision in decimal places
//cout<<fixed<<setprecision(10)<<ans<<endl;
//we get double/float as return in sqrt(blah_blah) function
// find euclidean distance
double euclid_dist(ll x1, ll y1, ll x2, ll y2)
{
    return sqrt(abs(x1 - x2) * abs(x1 - x2) * 1.000 + abs(y1 - y2) * abs(y1 - y2) * 1.000);
}

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

ll binpow_mod(ll a, ll b, ll MOD)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = ((res % MOD) * (a % MOD)) % MOD;
        }
        b = b >> 1;
        a = ((a % MOD) * (a % MOD)) % MOD;
    }
    return res;
}

//***function to check whether a str2 is a substring of str1 or not.....
//bool check_substring(string str1,string str2)
//{
//    ll pos=0;
//    for(ll i=0;i<str1.size();i++)
//    {
//        if(str1[i]==str2[pos])
//        {
//            pos++;
//        }
//        if(pos==str2.size())
//        {
//            break;
//        }
//    }
//    if(pos==str2.size())
//    {
//        return true;
//    }
//    return false;
//}
//function to count the occurence of a character in string
//ll count_occurence(string str,char search)
//{
//    ll ans=0;
//    for(int i=0;i<str.size();i++)
//    {
//        if(search==str[i])
//        {
//            ans=ans+1;
//        }
//    }
//    return ans;
//}
//vector<ll> get_factors(ll n)
//{
//    vector<ll> v;
//    for (int i = 1; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            if (n / i == i)
//            {
//                v.push_back(i);
//            }
//            else
//            {
//                v.push_back(i);
//                v.push_back((n / i));
//            }
//        }
//    }
//    return v;
//}
//----convert a number(as string) to any base
//int convert(string s,int base)
//{
//    int pw=1;
//    int n=0;
//    for(int i=n-1;i>=0;i--)
//    {
//        if(val(s[i])>base)
//        {
//            return INT_MAX;
//        }
//        n=n+(val[s[i]])*base;
//        pw=pw*base;
//    }
//    return n;
//}

//GRAPH DFS---------------GRAPH ALGOS BELOW THIS-------
//vector<int> graph[(int)102];
//bool visited[105];
//bool flag = false;
//void dfs(int start, int finish)
//{
//    visited[start] = true;
//    if (start == finish)
//    {
//        flag = true;
//        return;
//    }
//    for (auto i : graph[start])
//    {
//        if (!(visited[i]))
//        {
//            dfs(i, finish);
//        }
//    }
//}
//class DisjSet
//{
//    //complexity 4*alpha...most optimised version
//    int *rank, *parent, n;
//
//public:
//    DisjSet(int n)
//    {
//        size = new int[n];
//        parent = new int[n];
//        this->n = n;
//        makeSet();
//    }
//
//    void makeSet()
//    {
//        for (int i = 0; i < n; i++)
//        {
//            parent[i] = i;
//            size[i] = 1;
//        }
//    }
//
//    int find(int i)
//    {
//        if (i == parent[i])
//        {
//            return parent[i];
//        }
//        return parent[i] = find(parent[i])
//    }
//
//    void Union(int u, int v)
//    {
//        int paru = find(x);
//        int parv = find(y);
//
//        if (paru ^ parv)
//        {
//            if (size[parv] > size[paru])
//            {
//                //bade me chote ko add krenge
//                size[parv] += size[paru];
//                parent[paru] = parv;
//            }
//            else
//            {
//                size[paru] += size[parv];
//                parent[parv] = paru;
//            }
//        }
//    }
//};
//ll binary_search(vector<ll> &vec, ll val)
//{
//    ll left = 0, right = vec.size() - 1;
//    while (left <= right)
//    {
//        ll mid = (left + right) / 2;
//        if (vec[mid] == val)
//        {
//            return mid;
//        }
//        else if (vec[mid] < val)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    return right; //this will return a number jus less than 'val'
//}

string convert_binary(ll n)
{
    string str = "";
    while (n)
    {
        if (n & 1)
        {
            str.push_back('1');
        }
        else
        {
            str.push_back('0');
        }
        n = n / 2;
    }
    reverse(str.begin(), str.end());
    return str;
}
//vector<ll> ans, bag(2, 0);

//2-d dfs waha tk chlana h jb tk feasible hp movement mtlb hm return tb hi honge jb out
// of bound ki condition aayegi
//int cnates[1000][2];
//bool visi[1000];
//vector<ll> adj[105];
//void dfs(ll src)
//{
//    visi[src] = true;
//    for (auto i : adj[src])
//    {
//        if (!visi[i])
//        {
//            dfs(i);
//        }
//    }
//}
//----------------------------------------------
//const int N = 1e6 + 3;
//bool prime[N];
//vector<ll> det(N, 0);
//void seive(int n)
//{
//    memset(prime, true, sizeof(prime));
//    prime[0] = false;
//    prime[1] = false;
//    for (int i = 2; i <= n; i++)
//    {
//        if (prime[i])
//        {
//            for (int j = 2 * i; j <= n; j += i)
//            {
//                prime[j] = false;
//            }
//        }
//    }
//    for (int i = 1; i < N; i++)
//    {
//        if (prime[i])
//        {
//            det[i] = det[i - 1];
//        }
//        else
//        {
//            det[i] = 1 + det[i - 1];
//        }
//    }
//}
/////////=-------------------------TARJAN's algorithm=-------------------O(V+E)////////
//vector<int> adj[100010];
//ll mini = INT_MAX;
//ll cnt, tot,ans;
//ll cst[100005];
//void dfs_for_tarjan(int u, vector<int> &disc, vector<int> &low, vector<bool> &instack, stack<int> &mystk)
//{
//    static int time = 0;
//    disc[u] = low[u] = time;
//   // cout<<time<<endl;
//    time = time + 1;
//    mystk.push(u);
//    instack[u] = true;
//    for (auto v : adj[u])
//    {
//        if (disc[v] == -1) //If nodes are not discovered yet
//        {
//            dfs_for_tarjan(v, disc, low, instack, mystk);
//            low[u] = min(low[u], low[v]);
//        }
//        else if (instack[v]) //it will be true when there will be a case of back edge
//        {
//            low[u] = min(low[u], disc[v]);
//        }
//    }
//    mini=INT_MAX;
//    if (disc[u] == low[u]) //IF u is head node of SCC
//    {
//        cnt=0;
//        //cout << "THE SCC IS:\n";
//        while (mystk.top() != u)
//        {
//            //  cout << mystk.top() << "  ";
//            if (cst[mystk.top()] < mini)
//            {
//                mini = cst[mystk.top()];
//                cnt = 0;
//            }
//            if (mini == cst[mystk.top()])
//            {
//                cnt = cnt + 1;
//            }
//            instack[mystk.top()] = false;
//            mystk.pop();
//        }
//        //cout << mystk.top() << "\n";
//        //cout<<ans<<" "<<tot<<endl;
//        if (cst[mystk.top()] < mini)
//        {
//            mini = cst[mystk.top()];
//            cnt = 0;
//        }
//        if (mini == cst[mystk.top()])
//        {
//            cnt = cnt + 1;
//        }
//        //cout<<cnt<<endl;
//        instack[mystk.top()] = false;
//        mystk.pop();
//        ans=ans+mini;
//        tot=((tot%mod)*(cnt%mod))%mod;
//        //cout<<ans<<" "<<tot<<endl;
//    }
//}
//void get_SCC_tarjan(int V)
//{
//    vector<int> disc(V+1, -1), low(V+1, -1);
//    vector<bool> instack(V+1, false);
//    stack<int> mystk;
//    for (int i = 1; i <= V; i++)
//    {
//        if (disc[i] == -1)
//        {
//            dfs_for_tarjan(i, disc, low, instack, mystk);
//        }
//    }
//}
//-----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------
//-----------------------------DFS FOR TREE------------------------------------------
//-----------------------------------------------------------------------------------
//const int maxn = 100005;
//vector<ll> adj[maxn];
//vector<bool> visited(maxn, 0);
//ll dp[maxn];
//ll ok;  //
//ll ans; //
//ll a[maxn];
//void dfs(int curr, int par, int cnt)
//{
//    if (visited[curr])
//    {
//        return;
//    }
//    visited[curr] = true;
//
//    //if (par != -1)
//    //{
//    //    dp[curr] = dp[par] + 1;
//    //}
//    for (ll i = 0; i < adj[curr].size(); i++)
//    {
//        ll next = adj[curr][i];
//        if (par != next)
//        {
//            if (a[next] == 1 && a[curr] == 1)
//            {
//                dfs(next, curr, cnt + 1);
//            }
//            else
//            {
//                dfs(next, curr,a[next]);
//            }
//        }
//    }
//}
//----------------------------------------------------------------------------------
//------------------------------------BFS----------------------------------------------
//const int maxn = 20000;
//vector<ll> adj[maxn];
//ll ans[100000];
//vector<bool> visited(100000, 0);
//bool flag=false;
//void bfs(int i, int j)
//{
//    queue<ll> q;
//    q.push(i);
//    ans[i]=0;
//    while (!(q.empty()))
//    {
//        ll src = q.front();
//        q.pop();
//       //cout<<src<<" ";
//        for (auto ii : adj[src])
//        {
//            if (!(visited[ii]))
//            {
//                visited[ii]=true;
//                ans[ii]=ans[src]+1;
//                q.push(ii);
//                if (ii == j)
//                {
//                    flag = true;
//                    break;
//                }
//            }
//        }
//        if(flag)
//        {
//            break;
//        }
//    }
//    //cout<<"\n";
//    return;
//}
//-----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------
//--------------------------------LCS------------------------------------------------
//ll dp[5005][5005];
//ll lcs(string s1,string s2)
//{
//    for(int i=0;i<s1.size();i++)
//    {
//        dp[0][i]=0;
//    }
//    for(int i=0;i<s2.size();i++)
//    {
//        dp[i][0]=0;
//    }
//    for(int i=1;i<=s1.size();i++)
//    {
//        for(int j=1;j<=s2.size();j++)
//        {
//            if(s1[i-1]==s2[j-1])
//            {
//                dp[i][j]=dp[i-1][j-1]+1;
//            }
//            else
//            {
//                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//            }
//        }
//    }
//
//    //printing of lcs
//    string ans;
//    int i=s1.size();
//    int j=s2.size();
//    while(i>0 && j>0)
//    {
//        if(s1[i-1]==s2[j-1])
//        {
//            ans.push_back(s1[i-1]);
//            i--,j--;
//        }
//        else if(dp[i-1][j]>dp[i][j-1])
//        {
//            i--;
//        }
//        else
//        {
//            j--;
//        }
//    }
//    reverse(ans.begin(),ans.end());
//    cout<<ans<<"\n";
//    return dp[s1.size()][s2.size()];
//}
//vector<pair<int, int>> adj[100005];
//vector<int> v[100005];
//ll findshortest(int src, int n)
//{
//    ll dist[n + 1];
//    for (int i = 0; i <= n; i++)
//    {
//        dist[i] = INT_MAX;
//    }
//    dist[src] = 0;
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    pq.push({0, src});
//    while (!pq.empty())
//    {
//        auto node = pq.top().second;
//        auto dis = pq.top().first;
//        pq.pop();
//        //cout<<node<<"\n";
//        if(v[node].size())
//        {
//            while(binary_search(v[node].begin(),v[node].end(),dis))
//            {
//                dis++;
//            }
//        }
//        //cout<<"11\n";
//        for (auto it : adj[node])
//        {
//         //   cout<<it.first<<"  "<<it.second<<"\n";
//            if ((dis + it.second) < dist[it.first])
//            {
//                dist[it.first] = dis + it.second;
//                pq.push({dist[it.first], it.first});
//            }
//        }
//       // cout<<"123\n";
//    }
//    return dist[n];
//}
//vector<int> adj[200009];
//vector<int> height(200009, 0);
//vector<int> det_lev[200009];
//vector<int> out_degree(200009, -1);
//vector<int> parent(200009, 0);
//void dfs(int curr, int par, int level)
//{
//    parent[curr] = par;
//    height[curr] = level;
//    det_lev[level].push_back(curr);
//    out_degree[curr] = adj[curr].size() - 1;
//    for (auto it : adj[curr])
//    {
//        if (it != par)
//        {
//            dfs(it, curr, level + 1);
//        }
//    }
//    return;
//}
//bool mycomp(const pair<ll, ll> &a, const pair<ll, ll> &a)
//{
//    return a.first < b.second;
//}
//int reflec[10]={0,1,5,-1,-1,2,-1,-1,8,-1};//reflection of numbers in mirror
//const int INF = 1e9 + 7;
//const int maxn = 5e6 + 1;
//vector<int> prime_divisors_till(maxn, 0);
//void get_no_of_prime_divisors(vector<int> &prime_divisors_till, int maxn)
//{
//    vector<int> seive(maxn, 0);
//    vector<int> no_of_prime_divisors(maxn, 0);
//    for (int i = 2; i < maxn; i++)
//    {
//        if (seive[i] == 0)
//        {
//            for (int j = i; j < maxn; j = j + i)
//            {
//                seive[j] = i;
//            }
//        }
//        int p = seive[i];
//        no_of_prime_divisors[i] = 1 + no_of_prime_divisors[i / p];
//        prime_divisors_till[i] += no_of_prime_divisors[i] + prime_divisors_till[i - 1];
//    }
//}
//ll n;
//ll dp[2005][2005];
//bool fun(vector<ll> &subset,ll i,ll sum)
//{
//    if(i==0)
//    {
//        if(sum==0)
//        {
//            return true;
//        }
//        return false;
//    }
//    if(dp[i][sum]!=-1)
//    {
//        return dp[i][sum];
//    }
//    bool ans=false;
//    if(sum-subset[i-1]>=0)
//    {
//        ans|=fun(subset,i-1,sum-subset[i-1]);
//    }
//    ans|=fun(subset,i-1,sum);
//    return dp[i][sum]=ans;
//}
ll check(string str1, string str2)
{
    if (str2.find(str1) != string::npos)
    {
        return 1;
    }
    return 0;
}
ll findMex(vli arr, ll n)
{
    sort(arr.begin(), arr.end());
    if (arr[0] != 0)
        return 0;
    rep(i, 1, n - 1)
    {
        if (arr[i] - arr[i - 1] <= 1)
            continue;
        return arr[i - 1] + 1;
    }
    return arr[n - 1] + 1;
}
const int maxn = 2e5 + 5;

vector<int> convert_string(ll a)
{
    vector<int> ans;
    ll b = a;
    while (b)
    {
        ans.push_back(b % 10);
        b /= 10;
    }
    return ans;
}

//vector<int> level(200005, 0);
//ll parent[200005][22];
//ll n, q;
//void dfs(int curr, int par, int h)
//{
//    level[curr] = h;
//    if (par != -1)
//    {
//        parent[curr][0] = par;
//    }
//    for (auto it : adj[curr])
//    {
//        if (it != par)
//        {
//            dfs(it, curr, h + 1);
//        }
//    }
//}
//void preprocess_lca()
//{
//    dfs(1, -1, 1);
//
//    for (int j = 1; j <= 21; j++)
//    {
//        //cout<<parent[i][0]<<" ";
//        for (int i = 1; i <= n; i++)
//        {
//            parent[i][j] = parent[parent[i][j - 1]][j - 1];
//            //  cout<<parent[i][j]<<" ";
//        }
//        //cout<<"\n";
//    }
//}
//
//void query(ll x, ll k)
//{
//    int cnt = 0;
//    while (k)
//    {
//        if (k & 1)
//        {
//            x = parent[x][cnt];
//        }
//        cnt += 1;
//        k = k >> 1;
//    }
//    if (x != 0)
//    {
//        cout << x << "\n";
//    }
//    else
////    {
////        cout << "-1\n";
////    }
////    return;
////}
vector<bool> prime;
void seive(int n)
{
    prime[0] = false;
    prime[1] = false;
    prime[2] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

//int diameter = 0;
//vector<int> adj[200005];
//vector<int> dp1(200005, 0); //stores the value of max of l,r
//vector<int> dp2(200005, 0); //stores the value of 1+l+r
//void dfs_for_diameter(int curr, int par)
//{
//    vector<int> fvalues;
//    bool leaf = true;
//    for (auto it : adj[curr])
//    {
//        if (it == par)
//        {
//            continue;
//        }
//        leaf = false;
//        dfs_for_diameter(it, curr);
//        fvalues.push_back(dp1[it]);
//    }
//    if (leaf)
//    {
//        dp1[curr] = 0;
//        return;
//    }
//    sort(fvalues.begin(), fvalues.end());
//    dp1[curr] = 1;
//    if (!fvalues.empty())
//    {
//        dp1[curr] += fvalues.back();
//    }
//    if (fvalues.size() >= 2)
//    {
//        dp2[curr] = 2 + fvalues.back() + fvalues[fvalues.size() - 2];
//    }
//    diameter = max(diameter, max(dp1[curr], dp2[curr]));
//}
/*
int freq[26] = {0};
ll n, k;
string str;
ll even, odd;
bool check_bsa(int mid)
{
    ll ev = even, od = odd;
    for (int i = 0; i < k; i++)
    {
        if ((mid % 2) == 1)
        {
            if (od > 0)
            {
                od--;
                ev -= (mid - 1);
            }
            else
            {
                ev -= (mid + 1);
                od++;
            }
        }
        else
        {
            ev -= mid;
        }
    }
    if (ev < 0)
    {
        return false;
    }
    return true;
}
vector<int> convert_to_vec(string str)
{
    vector<int> v;
    for (auto it : str)
    {
        v.push_back(it - '0');
    }
    return v;
}


int vis[100005];
int dist[100005];
vector<pair<int,int>> adj[100005];
struct node
{
    int zero;
    int one;
};
*/
//ll sm;
//ll n,m,k;
//ll recur(ll i,ll k_aux,vector<ll> &weight)
//{
//    if(k_aux==k)
//    {
//        if(i==m)
//        {
//            return 1;
//        }
//        return 0;
//    }
//    ll pick=0,unpick=0;
//    for(int idx=i+1;i<n;i++)
//    {
//        pick+=((weight[idx]/sum)%mod)*(recur(idx+1,k_aux+1,weight))%mod)%mod;
//    }
//    pick+=((weight[idx]/sum)%mod)*(recur(idx,k_aux+1,weight))%mod)%mod;
//}
ll n,m,k;
vector<vector<vector<ll>>> dp;
vector<vector<ll>> r,d;
ll recur(int i,int j,int k)
{
    if(k==0)
    {
        return 0;
    }

    if(dp[i][j][k]!=-1)
    {
        return dp[i][j][k];
    }
    ll ans=LLONG_MAX;

    if(i-1>=0)
    {
        ans=min(ans,d[i-1][j]+recur(i-1,j,k-1));
    }
    if(i+1<n)
    {
        ans=min(ans,d[i][j]+recur(i+1,j,k-1));
    }
    if(j-1>=0)
    {
        ans=min(ans,r[i][j-1]+recur(i,j-1,k-1));
    }
    if(j+1<m)
    {
        ans=min(ans,r[i][j]+recur(i,j+1,k-1));
    }

    return dp[i][j][k]=ans;
}

void update(vector<ll> &fenwick,ll i,ll val)
{
    while(i<(int)fenwick.size())
    {
        fenwick[i]+=val;
        i+=(i&(-i));
    }
}
ll sum(vector<ll> &fenwick,ll i)
{
    ll sm=0;
    while(i>0)
    {
        sm+=(fenwick[i]);
        i-=(i&(-i));
    }
    return sm;
}
void solve()
{  
    ll n;
    cin>>n;
    ll res=0;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="++X"||str=="X++")
        {
            res+=1;
        }
        else
        {
            res-=1;
        }
    }
    cout<<res<<"\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    //FIO
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //get_no_of_prime_divisors(prime_divisors_till, maxn);
    //ios::sync_with_stdio(false);
    //cin.tie(NULL); // Remove in problems with online queries!
    ll t;
    //scanf("%lld", &t);
    t = 1;
    //cin >> t;
    //vector<ll> val((int)1e6+7,0);
    //prime.resize(1000005,true);
    //seive(1000005);
    
    for (int i = 1; i <= t; i++)
    {
        
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
//std::fill(vec.begin(),vec.end(),1)
//dp me chote se bda leke jana h..
//An array d is a subarray of an array c if d can be obtained from c by deletion of
//several (possibly, zero or all)
//elements from the beginning and several (possibly, zero or all) elements from the end.

#include <iostream>
#include<iomanip>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<iomanip>
#include<unordered_set>
#include<unordered_map>
#include<stack>
using namespace std;

#include <bits/stdc++.h>



/*
PROBLEM :- Given the time in numerals  convert it into words :
eg: - time/words :-
             5:00 --> five o' clock
             5:01 --> one minute past five 
             5:10 --> ten minute past five 
             5:15 --> quarter past five
             5:30 --> half past five 
             5:40 --> twenty minutes to six
             5:45 --> quarter to six
             5:47 --> thirteen minutes to six
             5:28 --> twenty eight minute past five
 */







// void f(int h,int m){
//     unordered_map<int,string> um;

//     // Creating a big map
//     if(true){
//     um[1] = "one";
//     um[2] = "two";
//     um[3] = "three";
//     um[4] = "four";
//     um[5] = "five";
//     um[6] = "six";
//     um[7] = "seven";
//     um[8] = "eight";
//     um[9] = "nine";
//     um[10] = "ten";
//     um[11] = "eleven";
//     um[12] = "twelve";
//     um[13] = "thirteen";
//     um[14] = "fourteen";
//     um[15] = "quarter";
//     um[16] = "sixteen";
//     um[17] = "seventeen";
//     um[18] = "eighteen";
//     um[19] = "nineteen";
//     um[20] = "twenty";
//     um[21] = "twenty one";
//     um[22] = "twenty two";
//     um[23] = "twenty three";
//     um[24] = "twenty four";
//     um[25] = "twenty five";
//     um[26] = "twenty six";
//     um[27] = "twenty seven";
//     um[28] = "twenty eight";
//     um[29] = "twenty nine";
//     um[30] = "half";
//     }

//     if (m==0){
//         string ans = um[h]+" o' clock";
//         cout<<ans;
//         return;
//     }

//     if (m>0 && m<=30){
//         if (m==15){
//             string ans = "quarter past "+um[h];
//         cout<<ans;
//         return;
//         }
//         else if (m==30){
//             string ans = "half past "+um[h];
//         cout<<ans;
//         return;
//         }
//         else{
//             string ans = um[m]+" minutes past "+um[h];
//         cout<<ans;
//         return;
//         }
//     }
//     else{
//         m=60-m;
//         if (m==15){
//             string ans = "quarter to "+um[h+1];
//         cout<<ans;
//         return;
//         }
//         else{
//             string ans = um[m]+" minutes to "+um[h+1];
//         cout<<ans;
//         return;
//         }
//     }

// }

// int main()
// {
//     int h=1;
//     int m=1;
//     f(h,m);
//     return 0;
// // }
// void f(int n){
//     int c=0;
//     for (int i=1;;i+=2){
//         if (c==n){
//             break;
//         }
//         if(c%2!=0){
//         cout<<i+1<<" ";
            
//         }
//         else{
//             cout<<i<<" ";
//         }
//         c++;
//     }
//     cout<<endl;
// }

// void workbook(int n,int k,int arr[]){
//     int page =1 ;
//     int sp=0;
//     for (int i=0;i<n;i++){
//         bool f = false;
//         for(int j=1;j<=arr[i];j++){
//             cout<<"Chapter : "<<i+1<<" , Problem "<<j<<" on page no. "<<page<<endl; 
//             if (page==j){
//                 sp++;
//                 cout<<"yeahhhh"<<endl;
//             }
//             //c++;
//            if (j%k==0){
//                page++;
//                if (j==arr[i]){
//                    f=true;
//                }
//            }
//         }
//         if (!f){page++;}
       
//         cout<<endl; 
//     }
//     cout<<sp;
// }

// int main() {
//     int n =5;
//     int k=3;
//     int arr[]={4,2,6,1,10};
//     workbook(n,k,arr);
//     return 0;
// }



// int lis(int arr[],int n){
//     cout<<"This is called for an array "<<endl;
//     int ans = INT16_MIN;
//     int c= 1;
//     for (int i=1;i<n;i++){
//         if (arr[i]>=arr[i-1]){
//             c++;
//             cout<<c<<endl;
//             ans  = max(ans,c);
//         }
//         else{
//             c=1;
//         }
//     }
//     return ans;
// }

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m;
// 	    cin>>n>>m;
// 	    int arr1[n],arr2[m];
//         cout<<"enter for array 1 "<<endl;
// 	    for (int i=0;i<n;i++){
// 	        cin>>arr1[i];
// 	    }
//         cout<<"enter for array 2 "<<endl;

// 	    for (int i=0;i<m;i++){
// 	        cin>>arr2[i];
// 	    }
// 	    // longest non-decreasing subsequence in both the arrays combined (elements order same)
// 	    cout<<lis(arr1,n)+lis(arr2,m)<<endl;
// 	}
// 	return 0;
// }


// void flatlandSpaceStations(int n, vector<int> c) {
//     unordered_set <int> s(c.begin(),c.end());
//     int m;
//     int ans = INT16_MIN;
//     for (int i=0;i<n;i++){
//         cout<<"for city "<<i;
//         if (s.find(i)!=s.end()){
//             m=0;
//              if (m>ans){
//             ans = m+1;
//         }
//         continue;
//         }
//         int l,r,j;
//         for ( j=i+1;j<n;j++){
//             if (s.find(j)!=s.end()){
//                 break;
//             }
//             //r++;
            
//         }
//         r = j-i;
        
//         cout<<" , right closest space station is at "<<r<<" distance";
//         for ( j=i-1;j>=0;j--){
//             if (s.find(j)!=s.end()){
//                 break;
//             }
//             //l++;
//         } 
//         l =  i-j;
//         cout<<" , left closest space station is at "<<l+1<<" distance";

//         if (r<l){
//             m=r;
//         }
//         else{
//             m=l;
//         }
//         cout<<"So nearest is at distance : "<<m<<endl;
//         if (m>ans){
//             ans = m+1;
//         }    
//     }
    
//     cout<<"final answer is --> "<<ans;

// }

// int maxvac_before_removing(char arr[],int n,int x){
//     int c=0;
//     int z=0;
//     for (int i=0;i<n;i++){
//         if (arr[i]=='0'){
//             z++;
//             if (z%x==0){
//                 c++;
//                 cout<<"abhi c is : "<<c<<endl;
//             }
//         }
//         else{
//             z=0;
//         }
//     }
//     return c;
// }

// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int ans = INT16_MIN;
// //         int n,x;
// //         cin>>n>>x;
// //         int arr[n];
// //         vector <int> ones;
// //         for (int i=0;i<n;i++){
// //             // 0 or 1 only
// //            cin>>arr[i];
// //            if (arr[i]==1){
// //                ones.push_back(i);
// //            }
// //         }
// //         // now removing ones one-by-one.
// //         for (auto x:ones){
// //             arr[x]=0;
// //             ans = max(ans,maxvac(arr,n,x));
// //             arr[x]=1;
// //         }
// //         cout<<"my answer is : ";
// //         cout<<ans;
// //         //cout<<x-1<<" "<<x<<" "<<x+1<<endl;
// //     }
// //     return 0;
// // }

// int main(){
//     string a;
//     int x;
//     cout<<"Enter the binary string : "<<endl;
//     cin>>a;
//     cout<<"Enter x : "<<endl;
//     cin>>x;  
//     char arr[a.size()];
//     for (int i=0;i<a.size();i++){
//         arr[i] = (a[i]);
//     }
//     int ans=0;
//     vector <string> st;
//     ans+=maxvac_before_removing(arr,a.size(),x);
//     cout<<"abhi answer is : "<<ans<<endl;

//     if ((a.size() - ans*x)>=x)
//     {
//     string s="";
//     for (int i=0;i<x;i++){
//         s+="0";
//     }
//     for(int i=0;i<s.size();i++){
//         s[i]='1';
//         st.push_back(s);
//         s[i]='0';
//     }
//     for (int i=0;i<st.size();i++){
//         if (a.find(st[i])){
//             cout<<"mila sala"<<endl;
//             ans++;
//             break;
//         }
//     }
//     }

// cout<<"final answer is  : "<<ans;
//     }

// vector <int> next_city(vector <int> ce,int n){
//     //int arr[n];
//     unordered_set <int> c(ce.begin(),ce.end());
//     vector <int> vec;
//     stack <int> s;
//     // I am doing some preprocessing for the first element i have in my hand
//     vec.push_back(-1);
//      if (c.find(n-1)!=c.end()){
//             s.push(n-1);
//         }

    
//     //s.push(-1);
//     for (int i=n-2;i>=0;i--){
//         if (s.empty()){
//             vec.push_back(-1);
//         }
//         else{
//             vec.push_back(s.top());
//         }
//         if (c.find(i)!=c.end()){
//             s.push(i);
//         }
//     }
//     // printing the answer vector 
//     reverse(vec.begin(),vec.end());
//    //return vec;
//   return vec;

// }
 
// vector <int> prev_city(vector <int> ce,int n){
//     //int arr[n];
//     unordered_set <int> c(ce.begin(),ce.end());
//     vector <int> vec;
// stack <int> s;
//     // I am doing some preprocessing for the first element i have in my hand
//     vec.push_back(-1);
//      if (c.find(0)!=c.end()){
//             s.push(0);
//         }

    
//     //s.push(-1);
//     for (int i=1;i<n;i++){
//         if (s.empty()){
//             vec.push_back(-1);
//         }
//         else{
//             vec.push_back(s.top());
//         }
//         if (c.find(i)!=c.end()){
//             s.push(i);
//         }
//     }
//     // printing the answer vector 
//    return vec;

// }



//  int f(vector <int> c,int n){
//      vector  <int> prevs = prev_city(c,n);
//      vector  <int> nexts = next_city(c,n);
//      unordered_set <int> s(c.begin(),c.end());
//      int ans = INT16_MIN;
//      for (int i=0;i<n;i++){
//         int p = ((prevs[i]==-1)?0:i-prevs[i]);
//         int q = ((nexts[i]==-1)?0:nexts[i]-i);
//         if (s.find(i)!=s.end()){
//             p=0;
//         }

//          ans = max(ans,min(p,q));
//          cout<<"answer is currently : "<<ans<<endl;
//     }
//     cout<<endl;
//     return ans;
//  }



// int main(){

//     // // taking inputs 
//     // int n;
//     // cin>>n;
//     // // how many cities have space stations
//     // int no_c;
//     // cin>>no_c;
//     // vector <int> c;
//     // for (int i=0;i<no_c;i++){
//     //     int x;
//     //     cin>>x;
//     //     c.push_back(x);
//     // }

//     // // calling the solution function 
//     // f(c,n);



//     vector <int> c;
//     c.push_back(1);
//     c.push_back(6);
//     c.push_back(10);
//     c.push_back(11);
//     c.push_back(13);
    


//     cout<<f(c,20);

//     return 0;
// }

// 6
// 3 5
// 380
// 3 9
// 380
// 4 2
// 0123
// 5 13
// 78712
// 6 10
// 051827
// 8 25
// 37159725


// void f(string s,int n,int k){
//     int arr[n];
//     for (int i=0;i<n;i++){
//        // int curr_num = stoi(s[i]);
//         char x = s[i];    
//         int curr_num = (int)x  - 48;    
//         int curr_diff = (10 - curr_num)%10;
//         arr[i] = curr_diff;
//     }

//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int max_z = 0;
//     // if (arr[0]>k){
//     //     cout<<0
//     // }
//     for (int i=0;i<n;i++){
//          k=k-arr[i];
//          cout<<"k is : "<<k<<endl;
//         if (k<0){
//              break;
//         }
//         else{
//            // k=k-arr[i];
//             //cout<<"k is "<<k<<endl;
//             max_z++;
//             //cout<<"max_z is  "<<max_z<<endl;
//         }
//     }
//     cout<<max_z<<endl;
    
// }


// int main() {
//     //  int t;
//     //  cin>>t;
//     //  while(t--){
//     //      int n,k;
//     //      cin>>n>>k;
//     //      string s;
//     //      cin>>s;
//     //      f(s,n,k);
//     //  }   


//     // string s="184601";
//     // char x = s[4];
//     // cout<<(int)s[3] - 48;



//     return 0;

// // }
// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

//  void activitySelection(vector<int> start, vector<int> end, int n)
//     {
//         vector  <pair <int,int> > v;
//         for (int i=0;i<n;i++){
//             v.insert(make_pair(start[i],end[i]));
//         }
//         sort(v.begin(), v.end(), sortbysec);
//         int ans =1;
//         //start[i]>=end[i-1]
//         for (int i =1 ;i<n;i++){
//             if (v[i].first>=v[i-1].second){
//                 ans++;
//             }
//         }
//         cout<<ans;
//         // Your code here
//     }


// void ispar(string x)
//     {
//         stack <char> s;
//         for (int i=0;i<x.size();i++){
//             char c=x[i];
//             cout<<"abhi "<<c<<" pkda h :"<<endl;
//             if (c=='(' || c=='{' || c=='['){
//                 cout<<"adding "<<c<<" to the stack"<<endl;
//                 s.push(c);
//             }
//             else {
//                 cout<<"upar vala abhi "<<s.top()<<endl;
//                 if (c!=s.top()){
//                     cout<<"ni h bhai ";
//                     break;
//                 }
//                 else{
//                     s.pop();
//                 }
//             }
//         }
//         cout<<"Congrats";
//         // Your code here
//     }
//     int main(){
//     // string a ="adv";
//     // cout<<reverse(a.begin(),a.end());
//     string a = "{([])}";
//     ispar(a);
//         return 0;
//     }

// stack <int> aux;

// void _getMinAtPop(stack<int>s)
// {
//     while(!s.empty())
// {    if (s.top()==aux.top()){
//         int res = s.top();
//         //s.pop();
//         aux.pop();
//         cout<<res<<" ";
//     }
//     else{
//         cout<<aux.top()<<" ";
//         //s.pop();
//     }
//     s.pop();
// }
//     // your code here
// }

// int main(){
//     stack <int> s;
//     aux.push(1);
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     _getMinAtPop(s);
//     return 0;
// // }

// bool f(int arr[],int k,int n,int H){
//     int hr=0;
//     for (int i=0;i<n;i++){
//        if (arr[i]<=k){
//             hr++;}
//             else{
//                 int x = arr[i]/k;
//                 int m = arr[i]%k;
//                 hr+=(x+m);
//             }
//     }
//     return hr<=H;
// }

// int main(){
//     int t;
//     while(t--){
//         int n,h;
//         cin>>n>>h;
//         for (int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         int l=1,h=1e9;
//         while(l<h){
//             int mid = (l+h)/2;
//             if (f(arr,mid,n,h)){
//                 h=mid;
//             }
//             else{
//                 l=mid+1;
//             }
//         }
//         // either my answer is h banana/hr or l banana/hr
//         if (f(h)){
//             cout<<h<<endl;
//         }
//         else{
//             cout<<l<<endl;
//         }
//     }
//     return 0;
// }






// BINARY SEARCH PROBLEM: 
//   int preced(char x){
//         if (x=='+'|| x=='-'){
//             return 1;
//         }
//         else if(x=='*' || x=='/'){
//             return 2;
//         }
//         else if (x=='^'){
//             return 3;
//         }
//         else if (x=='('){
//             return 0;
//         }
//     }
    
//     void infixToPostfix(string s)
//     {
//         stack <char> st;
//         string ans="";
//         for (auto c:s){
//             cout<<"Evaluating for "<<c<<" : "<<endl;
//             if (((int)c>=(int)'a' && (int)c<=(int)'z') || ((int)c>=(int)'A' && (int)c<=(int)'Z')){
//                 ans+=c;
//                 cout<<ans<<endl;
//             }
//             else{
//                 // operator found 
//                 if (st.empty()){
//                     cout<<"pushing "<<c<<" to the stack"<<endl;
//                     st.push(c);
//                    continue;
//                 }
                
//                 if (c=='('){
//                     cout<<"pushing "<<c<<" to the stack"<<endl;
//                     st.push(c);
//                     continue;
//                 }
//                 else if (c==')'){
//                     while(st.top()!='('){
//                         cout<<"ise nikalde" <<endl;
//                         ans+=st.top();
//                         cout<<"curr answer : "<<ans<<endl;
//                         st.pop();
//                     }
//                     st.pop();
//                     continue;
//                 }
                
//                 while( (st.empty()==false) && (preced(c)<=preced(st.top()))){
//                     ans+=st.top();
//                     cout<<"curr answer : "<<ans<<endl;
//                     st.pop();
//                 }

//                 cout<<"pushing "<<c<<" to the stack"<<endl;
//                 st.push(c);
//             }
//         }
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         cout<<"final answer :"<<ans;
//         // Your code here
//     }


//     int main(){
//         // string a = "A*(B+C)/D";
//         // infixToPostfix(a);
//         int i =657;
//         cout<<static_cast<char>(i); 
//         return 0;
//     }








// int main(){
    
//     //cin>>x;
// int x=128;
//     // for (int x= 2;x<100000000;x++);
//     long long co=0;
//     long long a=0;
//     long long b=0;
//     long long c=0;

//     for (int i=0;i<29;i++){
//         long long j = pow(2,i);
//         if (x&j){
//             if (co==0){
//                 //cout<<"c is "<<co<<endl;
//             a+=j;
//             c+=j;
//             }
//             if (co==1){
//                 //cout<<"c is "<<co<<endl;
//             //a+=j;
//             b+=j;
//             c+=j;}
//             if (co==2){
//                 //cout<<"c is "<<co<<endl;

//             b+=j;
//             a+=j;
//             }
//         }
//         else{
//             if (co==2 && i<x && x<100){
//                 //cout<<"c is "<<co<<endl;
//             a+=j;
//             //c+=j;
//             }
//             if (co==1 && i<x && x<100){
//                 //cout<<"c is "<<co<<endl;
//             //a+=j;
//             b+=j;}
//            // c+=j;}
//             if (co==0&& i<x && x<100){
//                 //cout<<"c is "<<co<<endl;

//             c+=j;}
//            // a+=j;}
//         }
//         co=(co+1)%3;
//         }
    

//     cout<<" my answer is :"<<a<<" , "<<b<<" , "<<c<<endl;
//     cout<<"a|b|c : "<<(a|b|c)<<endl;
//     cout<<" proper answer : "<<((a|b)&(b|c)&(c|a))<<endl;
    
   

//  return 0;
//     }






//  static f(Item a,Item b){
//         return (a.weight/a.value) > = (b.weight/b.value)
//     }
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         sort(arr,arr+n,f);
//         // Your code here
//     }

// int main(){

//     int n = 5;
//     int sum= 12;
//     if (sum>9*n){
//             cout<< "-1";
//             return 0;
//         }
//         int arr[5];
//         for (int i=0;i<n;i++){
//             arr[i]=9;
//         }
//          for (int i=0;i<n;i++){
//             cout<<arr[i];
//         }
//         cout<<endl;
//         int hatane = (9*n - sum)/9;
//         cout<<"itne hatane h :"<<hatane<<endl;
//         int lim = n-hatane;
//         int i;
//         for (i=n-1;i>=lim;i--){
//             arr[i]=0;
//         }
//         cout<<" 0 bnane k bad "<<endl;
//         for (int i=0;i<n;i++){
//             cout<<arr[i];
//         }
//         cout<<endl;
//         cout<<"last change to i on : "<<i<<endl;
        
//         int diff = (9*lim - sum);
//         cout<<"diff is  : "<<diff<<endl;

//         arr[i] = 9-diff;
        
//         string ans="";
//         for (int i=0;i<n;i++)
//         {
//             ans+=to_string(arr[i]);
//             cout<<ans<<endl;
//         }
//             cout<<"final anser : "<<ans<<endl;

//     return 0;
// }




int main(){
    int n;
    cin>>n;
    vector <string> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int x=0;
    for (int i=0;i<n;i++){
        if (v[i][0]=='+' || v[i][1]=='+' || v[i][2]=='+'){
            x++;
        }
        else{
            x--;
        }
    }

    cout<<x;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define __test ll _tc;cin>>_tc;while(_tc--)
#define an "\n"
#define nl cout<<an
#define yes cout<<"YES"<<an
#define no cout<<"NO"<<an
#define ms1 cout<<-1<<an
#define zr0 cout<<0<<an
#define FULL_THROTTLE ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define mod7 1000000007
#define modlu 998244353
#define pb push_back
#define srtf(x_) sort(x_.begin(),x_.end())
#define srtb(x_) sort(x_.begin(),x_.end(),greater<int>())
#define print(__v) for(int __i=0;__i<__v.size();++__i){ cout<<__v[__i]<<" ";}

const int mod=1e9+7;





int getDifferentNumber2(vector<int>&arr) {
      
    int n=arr.size();
    vector<int> b;
    for(int i=0;i<n;i++){
    	b.push_back(arr[i]);
	}
	sort(b.begin(),b.end());
    for (int i=0;i<n;i++) {
      if(b[i]!=i){
        return i;
      }
    }
    return n;
  }


bool is_prime(int num_){
    
     if (num_<=1){
        return false;
    }
    if(num_<=3){
        return true;
    }
    else if(num_%2==0||num_%3==0){
        return false;
    }
    else{
        for(int i=5;i*i<=num_;i+=6){
            if(num_%i==0||num_%(i+2)==0){
                return false;
            }
        }
    }
    return true;
}

bool palin(int arr[],int n){
   
    int flag = 0;
 
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        
        if (arr[i] != arr[n - i - 1]) {
           return false;
        }
        return true;
}
}

bool ispow(int y, int x){
    
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); 
    return (res1 == res2);
}

static bool srtb2(const pair<int,int> &a,const pair<int,int> &b)
{
    if (a.first < b.first)return false;
    else if (a.first > b.first)return true;
    return a.second < b.second;
}




ll fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll ncr(ll nn,ll mm){
        return (fact(nn)/(fact(nn-mm)*fact(mm)));
}

void prt(ll val,vector<ll>&mul)
{
    
    for (ll i=1; i<=sqrt(val); i++)
    {
        if (val%i == 0)
        {
        
            if (val/i == i)
                mul.push_back(i);
 
            else{
                   mul.push_back(i);
                   mul.push_back(val/i);
            } 
               
        }
    }
}


int cntsubstr(string& str, string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
     offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}
ll cntdiv(ll n)
{
   ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}


int rev(int x)
{
	int y=0;
	for(int i=0;i<8;i++)
		if((x>>i)&1)y^=(1<<(7-i));
	return y;
}
#define ull unsigned long long
 
ull facto(int N)
{
 
   
    ull f = 1; 
 
    
    for (ull i = 2; i <= N; i++)
        f = (1LL*f*i)%1000000007;
 
    return f;
}
bool cp(unsigned long long n)
{
    unsigned long long reverse = 0;
    unsigned long long temp = n;
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == n); 
}

bool cmp(const std::string& a, const std::string& b)
{
    return (a.size() > b.size()); 
}
ll mo(string num, ll aa)
{
    // Initialize result
    ll res = 0;
 
    // One by one process all digits of 'num'
    for (ll i = 0; i < num.length(); i++)
        res = (res * 10 + num[i] - '0') % aa;
 
    return res;
}

bool cmp2(const pair<ll,string>&a, const pair<ll,string>&b)
{
    if(a.first==b.first) return (b.second < a.second);
}
string addStrings(string x, string y) {
        string ans="";
        int flag=0;
        int i;
        string str1="";
        int j=0;
        while(x[j]=='0'){
            j++;
        }
        while(j<x.size()){
            str1+=x[j];
            j++;
        }
        string str2="";
        j=0;
        while(y[j]=='0'){
            j++;
        }
        while(j<y.size()){
            str2+=y[j];
            j++;
        }
        i=str1.size()-1,j=str2.size()-1;
        if(str1.size()==0 and str2.size()==0){
            return "0";
        }
        while(i>=0 or j>=0){
            if(i>=0 and j>=0){
                int r=(str1[i]-'0')+(str2[j]-'0');
                r+=flag;
                flag=r/10;
                string res=to_string(r%10);
                ans+=res;
                i--;
                j--;
            }
            else if(j>=0){
                int r=(str2[j]-'0')+flag;
                flag=r/10;
                ans+=to_string(r%10);
                j--;
            }
            else if(i>=0){
                int r=(str1[i]-'0')+flag;
                flag=r/10;
                ans+=to_string(r%10);
                i--;
            }
        }
        if(flag>0){
            ans+=to_string(flag);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

bool is_sbsq(string child,string parent,int m,int n)
{
 
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
  
    if (child[m - 1] == parent[n - 1])
        return is_sbsq(child, parent, m - 1, n - 1);
 
    
    return is_sbsq(child, parent, m, n - 1);
}

ll f(string &s,char ch){
	if(s.size()==1){
		if(s[0]!=ch) return 1;
		return 0;
	}
	ll mid=s.size()/2;
	string str1=s.substr(0,mid);
	string str2=s.substr(mid);
	ll cnt1=f(str1,ch+1)+(mid-count(s.begin()+mid,s.end(),ch));
	ll cnt2=f(str2,ch+1)+(mid-count(s.begin(),s.begin()+mid,ch));
	return min(cnt1,cnt2);
}

bool isValid(string s) {
       stack<char>st;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            
            else
            {
                if(st.empty())
                   return 0;
                    char x=st.top();
                    st.pop();
                    if(s[i]==')'&& x=='('||s[i]=='}' && x=='{' || s[i]==']' && x=='['){
                       continue;
                }
                else
                    return 0;        
            
        }
            }
        
        if(st.empty())
            return true;
        
        else return 0;
        
    }
    
bool palin(string arr){
   
    int n = arr.size();
    int flag = 0;
 
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        
        if (arr[i] != arr[n - i - 1]) {
           return false;
        }
        return true;
}
}

void mr_kamran(){
    
ll n;
cin>>n;
ll x = 0;
for(int i = 0;i<n;++i)
{
    string s;
    cin>>s;
    if(s[0]=='+'||s[s.size()-1]=='+') x++;
    else x--;
}
cout<<x<<an;

}
int main(){
    
FULL_THROTTLE
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

//__test{
   
  mr_kamran();   
//}

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> v;
#define loop(i,n) for(int i =0;i<n;i++);
typedef deque<int> de;

void mediumNum(int num[]){
    for(int i=0;i<3;i++){
        int max=*max_element(num,num+3);
        int min=*min_element(num,num+3);
        if (max!=num[i]&& min!=num[i]){
            cout<<num[i]<<endl;

        }
    }
}

void atilla () {
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                      't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int si=sizeof (letters)/sizeof (letters[0]);


        int size;
        cin >> size;
        int const s = size;
        string word;
        cin >> word;
        int j;
        int i;
        int temp;
        int arr[s];
        int t;

        for ( i = 0; i < s; i++) {
            for ( j = 0; j < si; j++) {
                if (word[i] == letters[j] ) {
                    temp = j;
                }
            }
            t=temp + 1 ;
        }

        for(int k=0;k<s;k++) {
            arr[k] = t;
        }
        int max = *max_element(arr, arr + s);
        cout<<max<<endl;
    }

void atilla2(string word){
    int max1 = INT64_MIN;
    for(char x : word)
    {
        int temp = x - 96;
        max1 = max(max1, temp);
    }
    cout << max1 << endl;
}

void watermelon(int w) {

    if(w%2==0 && w!=2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}

void VanyaAndFence(int const n,int h,const int friends[]){
    int const w=2; //width of the road
    int const v=1;
    int x=0;
    int y=0;
    int r=0;
    for(int i=0; i<n;i++){
        if(friends[i]>h){
            x+= w;
        }
        else if (friends[i]<=h){
          y+=  v;
        }

         r= x+y;

    }
    cout<<r;



}

void beautifulMatrix(int matrix[5][5]){
    int I;
    int J;
    int r;
    //searching for the 1 in the matrix
    for (int i = 0; i <5; i++) {
        for(int j=0;j<5;j++) {
            if (matrix[i][j]==1){
                I=abs(2-i);
                J=abs(2-j);
                r=I+J;
            }
        }
    }
    cout<<r;
}

void gravitySwitch(int box[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(box[i]>box[j]){
                swap(box[i],box[j]);
            }
        }
    }
}

void printing(int v[], int size) {
    for (int i = 0; i < size; i++) { //printing the array
        cout << v[i] << " ";

    }
}  //important

void bitIncrement( string x,int n ){
    //it has to be in the main in the same for loop of the cin>>string
    int X=0;
for(int i=0;i<n;i++){
    if (x == "X++" || x == "++X") {
        X++;
    } else {
        X--;
    }
}
cout<<X;

}

void boyOrGirl(string username) {
    unordered_set<char>s;
    for (int i = 0; i < username.size(); i++) {
        s.insert(username[i]);
    }
    int size = s.size();
        if (size % 2 == 0 ) {
            cout << "CHAT WITH HER!";

        } else {
            cout << "IGNORE HIM!";
        }
    }

void assignments(){
     int n;
     cin>> n;
     string level;
     int count=0;
     for(int i=0;i<n;i++) {
         cin >> level;
         if (level[1]=='1'){
             count+=1;
         }
         else if (level[1]=='2'){
             count+=2;
         }
         else if(level[1]=='3'){
             count+=3;
         }

     }
     cout<<count;
}

void sushi(){
    int harsha[10];
    int hiba[10];
    int alain[10];
    int sizeHarsha= sizeof(harsha)/sizeof(harsha[0]);
    int sizeHiba= sizeof(hiba)/sizeof(hiba[0]);
    int sizeAlain= sizeof(alain)/sizeof(alain[0]);
    for(int i=0;i<sizeHarsha;i++) {
        cin >> harsha[i];
    }
    for(int i=0;i<sizeHiba;i++){
        cin>>hiba[i];
    }
    for(int i=0;i<sizeAlain;i++){
        cin>>alain[i];
    }
    int i;
    int j;
    int k;

    for(i=0; i<sizeHarsha;i++){
    for(j=0; j<sizeHiba;j++) {
        for (k = 0; k < sizeAlain; k++) {
            if (harsha[i] == hiba[j] == alain[k]) {
                cout << harsha[i];
            } else {
                cout << "Nothing in common";
            }
        }
    }}


}

void weight(){
    int test;
    cin>>test;

    int weight;
    int height;
    while(test--) {
        cin >> weight;
        cin >> height;

        double heightm = (double) height / 100;
        double BMI = weight / (heightm * heightm);
        if (BMI < 18.5) {
            cout << "Underweight" << endl;
        }  if (18.5 <= BMI <= 24.9) {
            cout << "Healthy Weight" << endl;
        }  if (25 <= BMI <= 29.9) {
            cout << "Overweight" << endl;
        }  if (BMI >= 30) {
            cout << "Obese" << endl;
        }
    }

}

int GCD(int x,int y){   //important
    int result= min(x,y);
    for(int i=result;i>0;i--){
        if(x%result == 0 && y%result==0){
            break;
        }
    }
    return result;
} //important

void bestie(vector <int> a, int n) {

    int test;
    cin >> test;

    while (test--) {
        //code here
        //5 10 15 20
        //1  2  3  4
        int n;
        cin >> n;

        vector <int> a(n);
        int gcd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            gcd = __gcd(gcd, a[i]);

        }
        if (gcd == 1) {
            cout << 0 << endl;
        } else {
            int count1;
            int gcd2;
            for (int i = n - 1; i >= 0; i--) {
                gcd2 = __gcd(a[i], i + 1);
                if (__gcd(gcd, gcd2) == 1) {
                    count1 = n - i;
                    break;
                }
            }


            //150 90 180 120 60 30
            int count = 0;
            int gcd3 = gcd;
            for (int i = n - 1; i >= 0; i--) {
                a[i] = __gcd(a[i], i + 1);
                gcd3 = __gcd(gcd3, a[i]);
                count += n - i;
                if (gcd3 == 1) {
                    break;
                }
            }
            cout << min(count, count1) << endl;

        }
    }

}

void expo(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x>>y;
        int income = pow(2,y);
        while(x--){
            income/=2;

        }
        cout<<income<<endl;

    }
}

void makeAP(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x>>y;
        bool a=false;
        for(int i=x;i<=y;i++){
            if(i-x==y-i){
                a=true;
                cout<<i<<endl;

            }

        }
        for(int i=x;i<=y;i++){
            if(i-x!=y-1 && !a){
                cout<<"-1"<<endl;
                break;
            }
        }

    }
}

void third(){
    int test;
    cin>>test;
    while(test--){
        int n,x,c;
        cin>>n>>x>>c;
        int* a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        int count = 0;
        int sum=0;
        for(int i=0;i<n;i++) {
            int avg = x - a[i];
            if (avg > c) {
                sum= sum+ x;
                count++;
            }
            else{
                sum+=a[i];
            }
        }

        cout<<sum-(c*count)<<endl;
    }

}

void ReachFast(){
    int test;
    cin>>test;
    while(test--) {
        int x, y, z;
        cin >> x >> y >> z;
        int diff = max(x, y) - min(x, y);
    int n = (diff / z);
    int m = diff % z;
    if(diff<z &&diff!=0){
        cout<<1<<endl;
    }
    else {
        cout << n<<m  << endl;
    }
}
}

 int deleteElement(int arr[], int n, int x){ //important
// Search x in array
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
            break;

// If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
    }

    return n;
} //important

void hossamCombination(){
    ll n;
    cin>>n;
    auto* a= new ll[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll count = 0;
    ll count2=0;
    ll max = *max_element(a, a+n);
    ll min = *min_element(a, a+n);

    for(ll i=0;i<n;i++){
        if(max==a[i]){
            count =count+1;
        }
        if(min==a[i]){
            count2=count2+1;
        }
    }


    if(max==min){
        ll x= n*(n-1);
        cout<<(ll)x<<endl;
    }

    else{
        cout<<(ll)count2*count*2<<endl;
    }


}

int check (int x){
    int count=1;
    while(((x/2)&1)==(x&1)){
        count++;
        x/=2;
    }
    return count;
} //important

void devideconquer(){
    int sum=0;
    int count;
    int ans= 2e9;
//    for(int i =1;i<=n;i++){
//        cin>>a[i];
//        sum+=a[i];
//    }
//    if(sum&1){
//        for(int i =1;i<=n;i++){
//            ans=min(ans,check(a[i]));
//        }
//        cout<<ans<<endl;
//
//    }
//    else {
//        puts("0");
//    }
}

void incinerate(){
    int n,k;
    cin >> n>>k;
    vector <pair<int,int>> ms (n);
    int h;
    int p;

    for(int i=0;i<n;i++){
        cin>>ms[i].second;
    }

    for(int i=0;i<n;i++){
        cin>>ms[i].first;}

    sort(ms.begin(),ms.end());
    int dmg =k;

    for (int i = 0; i < n && k > 0; i++) {
        h= ms[i].second;
        p=ms[i].first;
        while(k>0 && h>dmg){
            k-=p;
            dmg+=k;
        }
    }
    if(k<=0){
        cout <<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

void absmaxi(){
    int n;
    cin>>n;
    vector <int> dic(n);
    for(int i=0;i<n;i++){
        cin>>dic[i];

    }
    int max = dic[0];
    int min = dic[0];
    for(int i=0;i<n;i++) {
        max|= dic[i];
        min&=dic[i];
    }
    int tl = max-min;

    cout<<tl<<endl;


}

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void strangerThings(){
    ll n;
    cin>>n;
    const ll x = n;
    const ll y = n;
    ll a [x][y];
    ll ans;
    ll result=0;
    ll temp [x][y];
    for(int i=0;i<=x;i++){
        for(int j=0;j<=x;j++){
            ans = i*j;
            a[i][j]=ans;

            if(a[i][j+1]>a[i+1][j]){
                result+=a[i][j+1];
            }
            else{
                result+=a[i+1][j];
            }
            cout<<(result)<<endl;
        }
    }
}

void AddMinusSign(int n, int x){
}


    int main() {
    //freopen("Weightbonus.in","r",stdin);
//int t;
//cin>>t;
//while(t--){
int n;
cin>>n;
string x;
    int X=0;
    for(int i=0;i<n;i++) {
cin>>x;
        if (x[1] == '+') {
            X ++;
        } else
            X --;

    }
    cout<<X;


  return 0;
    }

#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
void row(int x[][10],int m,int n,int size)
{

	for(int i=0;i<size;i++)
	{	int t=x[m-1][i];
	    x[m-1][i]=x[n-1][i];
	    x[n-1][i]=t;
	 }

}
void col(int x[][10],int m,int n,int size)
{

	for(int i=0;i<size;i++)
	{int t=x[i][m-1];
	    x[i][m-1]=x[i][n-1];
	    x[i][n-1]=t;

	}

}
void inc(int x[][10], int size) {

	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			x[i][k] = (x[i][k] + 1) % 10;
		}
	}

}
void dec(int x[][10], int size) {
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			x[i][k] = x[i][k] - 1;
			if (x[i][k] == -1)
				x[i][k] = 9;
		}
	}
}
void tra(int x[][10], int size) {
	int y[10][10];
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			y[i][k] = x[i][k];
		}
	}
	for (int i = 0; i < size; i++) {
		for (int k = 0; k < size; k++) {
			x[k][i] = y[i][k];
		}
	}
}
void clock(long long y[][35],long long n,long long t)
{
	long long z[35][35],zz[35][35],zzz[35][35],i,k,j;
	for(i=0,j=t-1;i<t,j>=0;i++,j--)
		  for(k=0;k<t;k++)
			  z[k][j]=y[i][k];
	for(i=0,j=t-1;i<t,j>=0;i++,j--)
			  for(k=0;k<t;k++)
				  zz[k][j]=z[i][k];
	for(i=0,j=t-1;i<t,j>=0;i++,j--)
			  for(k=0;k<t;k++)
				  zzz[k][j]=zz[i][k];
	if(n==1){
		for(i=0;i<t;i++)
				{	for(k=0;k<t;k++)
							{cout<<z[i][k];
							if(k!=t-1) cout<<" ";
							}
				cout<<endl;}
	}
	if(n==2){
			for(i=0;i<t;i++)
					{	for(k=0;k<t;k++)
								{cout<<zz[i][k];
								if(k!=t-1) cout<<" ";
								}
					cout<<endl;}
		}
	if(n==3){
			for(i=0;i<t;i++)
					{	for(k=0;k<t;k++)
								{cout<<zzz[i][k];
								if(k!=t-1) cout<<" ";
								}
					cout<<endl;}
		}

}
void nonclock(long long y[][35],long long n,long long t)
{
	long long z[35][35],zz[35][35],zzz[35][35],i,k,j;
	for(i=0;i<t;i++)
		  for(k=0,j=t-1;k<t,j>=0;k++,j--)
			  z[j][i]=y[i][k];
	for(i=0;i<t;i++)
			  for(k=0,j=t-1;k<t,j>=0;k++,j--)
				  zz[j][i]=z[i][k];
	for(i=0;i<t;i++)
			  for(k=0,j=t-1;k<t,j>=0;k++,j--)
				  zzz[j][i]=zz[i][k];
	if(n==1){
		for(i=0;i<t;i++)
				{	for(k=0;k<t;k++)
							{cout<<z[i][k];
							if(k!=t-1) cout<<" ";
							}
				cout<<endl;}
	}
	if(n==2){
			for(i=0;i<t;i++)
					{	for(k=0;k<t;k++)
								{cout<<zz[i][k];
								if(k!=t-1) cout<<" ";
								}
					cout<<endl;}
		}
	if(n==3){
			for(i=0;i<t;i++)
					{	for(k=0;k<t;k++)
								{cout<<zzz[i][k];
								if(k!=t-1) cout<<" ";
								}
					cout<<endl;}
		}

}
int main()

    //----------------------------------------------
    /*int x,z,c=0,f=0;
    cin>>x;
    int *y=new int [x];
    z=x;
    while(z-->0) cin>>y[f++];
    z=x;
    f=0;
    while(z-->1)
    {
        if(y[f]<y[f+++1]) continue;
        else {c=-1; break;}
    }
    if(c==0) cout<<"Ordered\n0\n";
    else{
        c=0;
        for(int i=0;i<x-1;i++)
            for(int j=0;j<(x-1)-i;j++)
                if(y[j]>y[j+1]){swap(y[j+1],y[j]); c++;}
        f=1;
        cout<<y[0];
        while(x-->1) cout<<" "<<y[f++];
        cout<<endl<<c<<endl;
    }*/
    //--------------------------------------------
    /*int x=0,z=0,m=0,c=0;
    cin>>x;
    z=x;
    char *y=new char[x];
    while(z-->0&&++m)
    {
        int f=0,s=x;
        while(s-->0) {cin>>y[f++]; if(y[f-1]=='#') {cout<<m<<" "<<f<<endl; c++;}}
    }
    if(c==0) cout<<"No hiding places"<<endl;
    else cout<<c<<endl;*/
    //-----------------------------------------------
    /*unsigned long long z,x,y,c,m,s;
    cin>>x;
    while(x-->0)
    {
        cin>>y;
        c=0;
        m=1;
        s=y;
        while(y-->0)
        {
            cin>>z;
            if(z%2==0&&m%2==0) c++;
            if(z%2!=0&&m%2!=0) c++;
            m++;
        }
        if(c==s) cout<<"YES\n";
        else cout<<"NO\n";
    }*/
    //------------------------------------------
    /*int n,m,z,c,f,po;
    while(cin>>n>>m&&n>0&&m>0)
    {
        c=0,f=0;
        while(n-->0)
        {
            cin>>z;
            if(z==m)
            {
                if(c==0) po=f;
                c++;
            }
            f++;
        }
        if(c==0) cout<<"-1"<<endl;
        else cout<<c<<" "<<po<<endl;
        //----------------------------------------------------
    }*/
     
//-------------------------------------------------------------
//------------------------------------------------------------
      /* int x,z,f,c=0,h=100001;
       cin>>x;
       int y[h];
       z=0;
       while(z++<h) y[z-1]=-1;
       z=0;
       while(z++<x)
       {
    	   cin>>f;
    	   y[f]=f;
       }
       z=0;
              while(z++<h)
              {
           	   if(y[z-1]==-1) continue;
           	   else{
           		   c++;
           	   }
              }
       z=0;
       cout<<c<<endl;
       while(z++<h)
       {
    	   if(y[z-1]==-1) continue;
    	   else{
    		   cout<<y[z-1];
    		   f=z-1;
    		   break;
    	   }
       }
       z=0;
       while(z++<h)
       {
    	   if(y[z-1]==-1||z-1==f) continue;
    	   else cout<<" "<<y[z-1];
       }
       cout<<endl;*/
//---------------------------------------------------
    /*  int x,y,z;
      cin>>x;
      while(x-->0){
          cin>>y>>z;
          int *a=new int [z];
          int f=0,s=0,c=0;
          while(s++<z) cin>>a[s-1];
          for(int j=0;j<z;j++)
                    {
                        int min=j;
                        for(int i=j+1;i<z;i++)
                            if(a[i]<a[min]) min=i;
                        swap(a[min],a[j]);
                    }
         // cout<<a[0]<<" "<<a[z-1]<<endl;
          s=0;
          while(s++<z)
          {
              if(f+a[s-1]<=y)
              {
                  f+=a[s-1];
                  c++;
              }
              else break;
          }
          cout<<c<<" "<<f<<endl;
      }
//------------------------------------------------------------------
    /* int n=0,x=0,c=0,s=0;
     char y[3];
     cin>>n;
     while(c++<n)
     {
    	 cin>>y;
    	 s=0;
    	 while(s++<2)
    	 {
    		 if(y[s-1]=='+'){
    			 x++;
    			 break;
    		 }
    		 if(y[s-1]=='-'||y[s-1]=='�'){
    		     			 x--;
    		     			 break;
    		     		 }
    	 }
     }
     cout<<x<<endl;
//--------------------------------------------------------------
/* long long n,y,max=1,c=0;
    cin>>n>>y;
    long long x=n;
    while(x<=y)
    {
    	n=x;
    	c=1;
    	 while(n>1)
    	    {

    	    	if(n%2!=0) n=3*n+1;
    	    	else n=n/2;
    	    	c++;
    	    }
    	 if(c>max) max=c;
    	 x++;
    }
    cout<<max;*/
//----------------------------------------------------------------
   /* int x,z=1,h=0,l=0,y,f;
    cin>>x;
    cin>>y;
    while(z++<x)
    {
    	cin>>f;
    	if(f>y) h++;
    	if(f<y) l++;
    	y=f;
    }
    cout<<h<<" "<<l;*/
//-------------------------------------------------------------------
     /*float y=0,z[3],sum=0;
     int x=0;
     while(x++<4)
     {
    	 cin>>y;
    	 sum=sum+y;
     }
     int min=0;
     x=0;
     while(x++<3)
     {
    	 cin>>z[x-1];
    	 if(z[min]>z[x-1]) min=x-1;
     }
     x=0;
     float f=0;
     while(x++<3)
     {
    	 if(x-1==min) continue;
    	 f+=z[x-1];
     }
     sum+=f/2;
     if(sum>=90) {cout<<"A"; return 0;}
     if(sum>=80&&y<90) {cout<<"B"; return 0;}
     if(sum>=70&&y<80) {cout<<"C"; return 0;}
     if(sum>=60&&y<70) {cout<<"D"; return 0;}
     if(sum<60) {cout<<"F"; return 0;}*/
//-------------------------------------------------------------------------
    /*int x;
while( cin>>x){

     int l[x],r[x];
     int z=0,c=0;
     while(z++<x) cin>>l[z-1];
     z=0;
     while(z++<x) cin>>r[z-1];
     for(z=0;z<x;z++)
     {
    	 int m=0;
    	 for(int f=0;f<x;f++)
    	 {
    		 if(l[z]==r[f])
    		 {
    			 r[f]=0;
    			 m++;
    			 break;
    		 }
    	 }
    	 if(m==0) c++;
     }
     cout<<c;}*/
//---------------------------------------------------------------------------------------
     /*int n,b;
     cin>>n>>b;
     int res=n/b;
     int x[3]={abs(res-1)*b,res*b,(res+1)*b};
     int y[3]={abs(n-(abs(res-1)*b)),abs(n-(res*b)),((res+1)*b)-n};
     int z=0,min=0;
     while(z++<2)
     {
    	 if(y[z]<y[min]) min=z;
    	 if(y[z]==y[min])
    	 {
    		 if(x[z]>x[min]) min=z;
    	 }
     }
     cout<<x[min];*/
//---------------------------------------------------------------------------------------------
     /*int n,v,x,m;
     cin>>n>>v;
     int yy[n],d=0;
     while(d++<n) yy[d-1]=1;
     for(int i=0;i<n;i++)
     {
    	 cin>>x;
    	 for(int j=0;j<x;j++)
    	 {
    		 cin>>m;
    		 if(v>m) yy[i]=0;
    	 }
     }

     int z=0,c=0,r=-1;
     while(z++<n)
     {
    	 if(yy[z-1]==0) c++;
    	 if(c==1&&r==-1) r=z-1;
     }
     cout<<c<<endl;
     if(c>0) cout<<r+1;
     z=0;
     while(z++<n)
     {
    	 if(z-1==r) continue;
    	 if(yy[z-1]==0) cout<<" "<<z;
     }*/
//------------------------------------------------------------------------------------------------------------
    /* int t,k,n,z=0;
     cin>>n>>k>>t;
     while(z++<n)
     {
    	 if(t>=k)
    	 {
    		 if(z==n) {cout<<k;
    		 t=t-k;}
    		 else{cout<<k<<" ";
    		 t=t-k;
    		 }
    	 }
    	 else{
    		 if(t>0)
    		 {
    			 if(z==n) {cout<<t;
    			     		 t=t-t;}
    			     		 else{cout<<t<<" ";
    			     		 t=t-t;
    			     		 }
    		 }
    		 else{
    			 if(z==n) {cout<<"0";
    			     		}
    			     		 else{cout<<"0"<<" ";

    			     		 }
    		 }
    	 }
     }*/
//--------------------------------------------------------------
   /*  int x,y,z,g,f=0;
     char c;
     cin>>x;
     while(f++<x)
     {
    	 cin>>y>>c>>z;
    	 if(y%z==0) { if(f==x) cout<<y/z;
		 else cout<<y/z<<endl;}
    	 else{
    	 if(z==1)
    	 {
    		 if(f==x) cout<<y;
    		 else cout<<y<<endl;
    	 }
    	 else{
    		 if(y==1)
    		 {
        		 if(f==x) cout<<y<<c<<z;
        		 else cout<<y<<c<<z<<endl;
    		 }
    		 else{
    			 if(y<z)  g=gcd(z,y);
    			 else g=gcd(y,z);
        		 if(f==x) cout<<y/g<<c<<z/g;
        		 else cout<<y/g<<c<<z/g<<endl;
    		 }
    	 }
     }}*/
//-----------------------------------
     /* long long n,p=0,z=0,f=0,k=0;
     cin>>n;
     char *c=new char[n];
     cin>>c;
     while(z++<n)
    	 if(c[z-1]!='*') p++;
     z=0,f=1,k=20-p;
     while(z++<n-p) f=f*k--;
     cout<<f;*/
//----------------
     /*unsigned long long m,n,x;
     cin>>n>>m;
     x=m%n;
     if(x==0) cout<<"Yes";
     else cout<<"No";*/
//------------------------
    /* int x,y;
     cin>>x>>y;
     cout<<x+y;*/
//------------
    /* unsigned long long x,y;
     cin>>x;
     y=x*x;
     cout<<y;*/
//------------
/* int x,z=0,y;
  cin>>x;
  while(z++<x)
  {
      cin>>y;
      if(check(y)==1)
      {
          if(z==x) cout<<"Intelligent";
          else cout<<"Intelligent"<<endl;
      }
      else{
          if(z==x) cout<<"Stupid";
           else cout<<"Stupid"<<endl;
      }
  }*/
  //--------------------------------------
 /* long long z,f=0;
sd: while( cin>>z)
{
  for(long long  y=2;y<35;y++)
  {
   f=0;
   for(long long  x=2;x<=y&&f<z;x++)
   {
       f=pow(x,y)+pow(y,x);
       if(f==z){
           cout<<"YES"<<endl<<x<<" "<<y<<endl;
          goto sd;
       }
   }
  }
  cout<<"NO"<<endl;}*/
  //----------------------------------------
  /* int x;
   cin>>x;
   int z[x];
   int d=0,f=0,m=0,n=0,first=0,last=0,i=0,sum=0;
   while(d++<x) cin>>z[d-1];
   cin>>f;
   d=0;
   while(d++<f)
   {
	   sum=0;
	   cin>>m>>n;
	   if(m>n) swap(&m,&n);
	   first=m-1,last=n-1;
	   int max=first,min=first;
	   for(i=first;i<=last;i++)
	   {
		   sum=sum+z[i];
		   if(z[i]>z[max]) max=i;
		   if(z[i]<z[min]) min=i;
	   }
	   if(d==f) cout<<z[max]<<" "<<z[min]<<" "<<sum;
	   else cout<<z[max]<<" "<<z[min]<<" "<<sum<<endl;
   }*/
//--------------------------------------------
      /* int x,y;
       cin>>x>>y;
       if(x>y) cout<<lcm(y,x);
       else cout<<lcm(x,y);*/
//-----------------------------------
     /* int x,i=0,sum=0;
      cin>>x;
      while(x>0)
      {
    	  sum+=((x%10)*pow(2,i++));
    	  x/=10;
      }
      cout<<sum;*/
//--------------------------------
   /* int x;
    cin>>x;
    if(luck(x)==1) cout<<"YES";
    else cout<<"NO";*/
//----------------------------
    /* int x=0;
     cin>>x;
     cout<<binary(x)<<" "<<hex(x);*/
//-----------------------------------
     /*int x;
     cin>>x;
     char y[x];
     cin>>y;
     int z=0,f=x-1,c=0;
     while(z++<x/2)
     {
    	 if(y[z-1]==y[f]);
    	 else{
    		 c++;
    		 if(y[z-1]<y[f]) y[f]=y[z-1];
    		 else y[z-1]=y[f];
    	 }
    	 f--;
     }
     cout<<c<<endl<<y;*/
//-------------------------------------
     /*int n,m,x,y;
     cin>>n>>m;
     char z[n+1][m+1],f;
     for(x=0;x<n;x++)
    	 for(y=0;y<m;y++)
    	 {
    		 cin>>f;
    		 if(f=='.') z[x][y]='0';
    		 else z[x][y]=f;
    	 }
     for(x=0;x<n;x++)
        	 for(y=0;y<m;y++)
        	 {if(z[x][y]=='*')
        	 {
        		 if(z[x+1][y]!='*'&&x+1>-1&&y>-1) z[x+1][y]++;
        		 if(z[x+1][y+1]!='*'&&x+1>-1&&y+1>-1) z[x+1][y+1]++;
        		 if(z[x+1][y-1]!='*'&&x+1>-1&&y-1>-1) z[x+1][y-1]++;
        		 if(z[x-1][y]!='*'&&x-1>-1&&y>-1) z[x-1][y]++;
        		 if(z[x-1][y-1]!='*'&&x-1>-1&&y-1>-1) z[x-1][y-1]++;
        		 if(z[x-1][y+1]!='*'&&x-1>-1&&y+1>-1) z[x-1][y+1]++;
        		 if(z[x][y-1]!='*'&&x>-1&&y-1>-1) z[x][y-1]++;
        		 if(z[x][y+1]!='*'&&x>-1&&y+1>-1) z[x][y+1]++;
        	 }
        	 }
     for(x=0;x<n;x++)
     { for(y=0;y<m;y++)
         	 {
         		 cout<<z[x][y];
         	 }
     if(x!=n-1) cout<<endl;
     }*/
//-------------------------------------------
     /*int a,b,n;
     cin>>a>>b>>n;
     while(true)
     {
    	 if(a>n) n-=gcd(a,n);
    	 else n-=gcd(n,a);
    	 if(n==0){
    		 cout<<"0";
    		 break;
    	 }
    	 if(n<0){
    		 cout<<"1";
    		    		 break;
    	 }
    	 if(b>n) n-=gcd(b,n);
    	    	 else n-=gcd(n,b);
    	 if(n==0){
    	     		 cout<<"1";
    	     		 break;
    	     	 }
    	     	 if(n<0){
    	     		 cout<<"0";
    	     		    		 break;
    	     	 }
     }*/
//---------------------------------------------------------
     /*unsigned long long x;
     cin>>x;
     x=pow(x,2)+x+41;
     cout<<x;*/
//--------------------------------------------------------
	/*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		int z=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
		}
		cout<<"Enter 1 for FCFS or 2 for SJF-non primitive\n";
		int ff=0;
		cin>>ff;
		if(ff==1){
		float j=0,t=0,w=0;
		z=0;
		float suma=0,sumw=0;
		while(z++<x)
		{
			j+=bur[z-1];
			t=j-arr[z-1];
			w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
			cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }
	    if(ff==2){
	    int c=0,s=0,min=0;
	    float *fin=new float [x];
	    z=0;
	    while(z++<x)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&arr[s-1]>=0&&bur[s-1]<bur[min])   	min=s-1;
	    	arr[min]*=-1;
	    	c+=bur[min];
	    	fin[min]=c;
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-(arr[z-1]*-1);
			float w=t-bur[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	    }*/
	    //--------------------------------------------------------------------
       /*int x;
		cout<<"enter no. of programs\n";
		cin>>x;
		float *arr=new float [x];
		float *bur=new float [x];
		float *bur2=new float [x];
		float *prr=new float [x];
		float *end=new float [x];
		int z=0,prrr=0;
		while(z++<x)
		{
			cout<<"enter the arrival time of p"<<z<<endl;
			cin>>arr[z-1];
			cout<<"and its burst time\n";
			cin>>bur[z-1];
			bur2[z-1]=bur[z-1];
						prrr+=bur[z-1];
			cout<<"and its priority\n";
			cin>>prr[z-1];
		}
arr[x]=1000000;
	int c=0,s=0,min=0,miny=0;
	    float *fin=new float [x];
	    z=0;
	    int max=0;
	    while(s++<x)
	    {
	    	end[s-1]=0;
	    }
	    s=0;
	    while(c<prrr)
	    {
	    	s=0,min=0;
	    	while(s++<x)
	    	if(arr[s-1]<=c&&end[s-1]==0&&prr[s-1]<prr[min]&&bur[s-1]>0)   	min=s-1;
	    	s=0;
	    //	if(c>=arr[max]) miny=arr[x];
	    //	else miny=min+1;
	    //	while(s++<x)
	    //	if(arr[miny]>=arr[s-1]&&arr[s-1]>=0&&s-1!=min) miny=s-1;

	    	bur[min]--;
	    		c++;

	    	if(bur[min]==0) {
	    	end[min]=1;
	    	fin[min]=c;
	    	prr[min]=100000;
			}
	    }
	    z=0;
	    while(z++<x) cout<<fin[z-1]<<endl;
	    z=0;
	    float suma=0,sumw=0;
	    while(z++<x)
		{
			float t=fin[z-1]-arr[z-1];
			float w=t-bur2[z-1];
			cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
			suma+=t;
			sumw+=w;
		}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
	//-----------------------------------------------------------------------------------
		/*int x;
		cout<<"enter no of process";
		cin>>x;
		int all[x][3],max[x][3],ava[1][3];
		int i,j;
		for(i=0;i<x;i++)
		{
			cout<<"enter the allocation of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>all[i][j];
		}
		for(i=0;i<x;i++)
		{
			cout<<"enter the max. of P"<<i+1<<" sperated each digit with a space\n";
			for(j=0;j<3;j++)
			cin>>max[i][j];
		}
		cout<<"enter the available sperated each digit with a space\n";
		cin>>ava[0][0]>>ava[0][1]>>ava[0][2];
		for(i=0;i<x;i++){
		for(j=0;j<3;j++)
		max[i][j]-=all[i][j];}
		int z=0,c=0,min=0;
		while(z++<x)
		{
			for(i=0;i<x;i++)
			{
				c=0;
				for(j=0;j<3;j++)
				{
					if(max[i][j]<=ava[0][j]&&max[i][0]!=-1)
					c++;
					if(c==3)
					{
						min=i;
						goto dd;
					}
				}
			}
		dd:	if(c<3)
			{
				cout<<"The system is not in safe-state\n";
				return 0;
			}
			for(i=0;i<3;i++)
			ava[0][i]+=all[min][i];
			max[min][0]=-1;
			cout<<"P"<<min+1<<" &new work="<<ava[0][0]<<" "<<ava[0][1]<<" "<<ava[0][2];
			if(z!=x) cout<<" --->";
		}
		cout<<"\nThe system is in safe-state";*/
//-----------------------------------------------------------
       /*string s;
       int x;
       cin>>s;
       cin>>x;
       int z=0;
       string k="Final";
       while(z++<x)
       {
    	   if(z==1){
    		   cout<<s<<endl;
    		  s+='-';
    		   continue;
    	   }
    	   s+=k;
    	   if(z==x){
    		   s+="Wallahy";
    	      	   }
    	  if(z==x) cout<<s;
    	  else cout<<s<<endl;*/
//-------------------------------------------
       /* string x;
        string v="vaporeon",j="jolteon",f="flareon",e="espeon",u="umbreon",l="leafeon",g="glaceon",s="sylveon";
       cin>>x;
       int z=0,count[8]={0,0,0,0,0,0,0,0};
       while(z++<8)
       {
    	   if(x[0]!='.')
    	   {
    		                if(x[0]==v[0]) count[0]++;
    		                if(x[0]==j[0]) count[1]++;
    		                if(x[0]==f[0]) count[2]++;
    		                if(x[0]==e[0]) count[3]++;
    		                if(x[0]==u[0]) count[4]++;
    		                if(x[0]==l[0]) count[5]++;
    		                if(x[0]==g[0]) count[6]++;
    		                if(x[0]==s[0]) count[7]++;
    		                break;
    	   }
    	   if(x[z-1]!='.')
    	   {
    		   if(x[z-1]==v[z-1]) count[0]++;
    		   if(x[z-1]==j[z-1]) count[1]++;
    		   if(x[z-1]==f[z-1]) count[2]++;
    		   if(x[z-1]==e[z-1]) count[3]++;
    		   if(x[z-1]==u[z-1]) count[4]++;
    		   if(x[z-1]==l[z-1]) count[5]++;
    		   if(x[z-1]==g[z-1]) count[6]++;
    		   if(x[z-1]==s[z-1]) count[7]++;

    	   }
       }
       z=0;
       int max=0;
       while(z++<8)
    	   if(count[z-1]>count[max]) max=z-1;
       switch(max){
       case(0): {cout<<"vaporeon"; break;}
       case(1): {cout<<"jolteon"; break;}
       case(2): {cout<<"flareon"; break;}
       case(3): {cout<<"espeon"; break;}
       case(4): {cout<<"umbreon"; break;}
       case(5): {cout<<"leafeon"; break;}
       case(6): {cout<<"glaceon"; break;}
       case(7): {cout<<"sylveon"; break;}
       }*/
//----------------------------------------------------
     /* int x,z=0;
      cin>>x;
      string y[x];
      while(z++<x) cin>>y[z-1];
      int f,m;
      cin>>f;
      string name[f],d;
      int scr[f];
      z=0;
      while(z++<f) scr[z-1]=0;
      z=0;
      while(z++<f)
      {
    	  cin>>name[z-1];
    	  cin>>m;
    	  int dd=0;
    	  while(dd++<m)
    	  {
    		  cin>>d;
    		  int r=0;
    		  while(r++<x)
    			  if(d==y[r-1])
    				  scr[z-1]++;
    	  }
      }
      int max=0;
      z=1;
      while(z++<f)
      {
    	  if(scr[z-1]>scr[max]) max=z-1;
    	  if(scr[z-1]==scr[max])
    		  if(name[z-1]<name[max])
    			  max=z-1;
      }
      cout<<name[max];*/
//-----------------------------------------------
    /* int m,n,d=0;
     cin>>m>>n;
     string x,y,z,s,res[m*n];
     while(d++<m*n)
     {
    	 cin>>x>>y>>z;
    	 if(y=="0000000000"&&z=="0000000000") {
    		 if(d==1) cout<<x;
    		 else cout<<endl<<x;
    	 }
    	 else {if(z==s) cout<<x;
    	 if(z=="0000000000") cout<<endl<<x;
    	 }
    	 s=x;
     }*/
//--------------------------------------------------
     /*string s;
     getline(cin,s);
     unsigned int i;
     for(i=0;i<s.size();i++)
        	 s[i]=tolower(s[i]);
     for(i=0;i<s.size();i++)
     {
    	 if(s[i]<97||s[i]>122)
    	 {
    		 s.erase(i,1);
    		 i--;
    	 }
     }
     unsigned int z=0,c=0,f=s.size()-1;
     z=0;
     while(z++<s.size()/2)
     {
    	 if(s[z-1]!=s[f--])
    	 {
    		 c++;
    		 break;
    	 }
     }
     if(c==0) cout<<"I'll make the saddle";
     else cout<<"Alas, Jon, You failed my test";*/
//--------------------------------------------------------
     /*int x;
     string s;
     cin>>x>>s;

     if(s.size()<=x) cout<<s;
     else{
    	 cout<<s[0];
    	 if(s[0]==s[s.size()-1]&&s.size()-1>0)
    	 {
    		 cout<<s.size()-1;
    		 return 0;
    	 }
    	 else{
    		 if(s.size()-2>0) cout<<s.size()-2<<s[s.size()-1];
    		 else cout<<s[s.size()-1];
    	 }
     }*/
//------------------------------------------------------------
    /*string s;
    cin>>s;
    unsigned long long sum=0,sumn=0,z=0;
    while(z++<s.size())
    	sum+=(s[z-1]-48);
    while(true){
    	if(sum<10) break;
    	else{
    		sumn=0;
    		while(sum>0)
    		{
    			sumn+=sum%10;
    			sum/=10;
    		}
    		sum=sumn;
    	}
    }
    cout<<sum;*/
//---------------------------------------------------------
     /*string x,y;
     cin>>x>>y;
     int z=0,c=0;
     while(z++<x.size())
    	 if(x[z-1]!=y[z-1])
    		 c++;
     cout<<c;*/
//-----------------------------------------------------
    /* string s;
     int c=0,d=0,z=0;
     cin>>s;
    while(true)
    {
    	if(s[z]==s[++z]) c++;
    	else break;
    }
    while(z<s.size())
    {
    	d=0;
    	while(z<s.size())
    	{
    		if(s[z]==s[++z]) d++;
    		else break;
    	}
    	if(c!=d) {
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";*/
//------------------------------------------
     /*int x,z=0,maxl=0,maxch=0,maxchi=0;
     cin>>x;
     string s[x];
     while(z++<x)
    	 cin>>s[z-1];
     z=0;
     while(z++<x)
     {
    	 if(s[z-1].size()>=s[maxl].size()) maxl=z-1;
    	 int y=0;
    	 long long sum=0;
    	 while(y++<s[z-1].size())
    		 sum+=(s[z-1][y-1]-64);
    	 if(sum>=maxch)
    	 {
    		 maxch=sum;
    		 maxchi=z-1;
    	 }
     }
     cout<<s[maxchi]<<endl<<s[maxl];*/
//-------------------------------------------------
      /*string s,d;
      cin>>s;
      for(int i=0;i<s.size();i++)
    	  s[i]=tolower(s[i]);
      int z=0,f=0;

      while(z++<s.size())
      {
    	  if(s[z-1]!='a'&&s[z-1]!='u'&&s[z-1]!='o'&&s[z-1]!='i'&&s[z-1]!='e'&&s[z-1]!='y')
    	  {
    		  d[f]='.';
    		  d[f+1]=s[z-1];
    		  f+=2;
    	  }
      }
      z=0;
      while(z++<f) cout<<d[z-1];*/
//-----------------------------------------------------
      /*int a,b,c,x=0,y=0,d,z=0;
      double f=0;
      cin>>a>>b;
      c=a+b;
      while(a>0)
      {
    	  if(a%10!=0) x+=((a%10)*pow(10,f++));
    	  a/=10;
      }
      f=0;
      while(b>0)
            {
          	  if(b%10!=0) y+=((b%10)*pow(10,f++));
          	  b/=10;
            }
      f=0;
           while(c>0)
                 {
               	  if(c%10!=0) z+=((c%10)*pow(10,f++));
               	  c/=10;
                 }
      d=x+y;
      if(z==d) cout<<"YES";
      else cout<<"NO";*/
//----------------------------------------------------------
     /* int y[102],z[102],i,j,f=0,d=0;
      while(cin>>y[d++]);
      d--;
      if(d==1) {cout<<-1; return 0;}
      for(i=0;i<d;i++)
    	  for(j=i+1;j<d;j++)
    		  z[f++]=gcd(y[i],y[j]);
      i=0,j=0;
      while(i++<f)
    	  if(z[i-1]>j) j=z[i-1];
      cout<<j;*/
//----------------------------------------------------------------
     /*string s,y;
     int i=0;
     char c=' ';
     cin>>s;
     int d=0;
     while(i<s.size())
     {
    	 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    	 { i+=3; d++;}
    	 else {
    		 if(y.size()!=0&&d!=0){
    		 y+=c;
    		 y+=s[i];}
    		 else y+=s[i];
    		 i++;
    		 d=0;
    	 }
     }
     cout<<y;*/
//--------------------------------------------------------------------
     /*int n;
     cin>>n;
     string s;
     cin>>s;
     char cc;
     int i=0,f=s.size()-1;
     int b=0,e=s.size()-1;
     for(int j=0;j<n;j++)
                         {
                             int min=j;
                             for(int i=j+1;i<n;i++)
                                 if(s[i]<s[min]) min=i;
                             cc=s[min];
                             s[min]=s[j];
                             s[j]=cc;
                         }
     for(int j=n;j<s.size();j++)
                              {
                                  int min=j;
                                  for(int i=j+1;i<s.size();i++)
                                      if(s[i]<s[min]) min=i;
                                  cc=s[min];
                                  s[min]=s[j];
                                  s[j]=cc;
                              }
     i=0;
      if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f--])
    		 {
    			goto x;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
      else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f--])
    	     		 {
    	     			goto x;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
   //  if(s[b]==s[e]){
   // 		 goto x;
   //  }
     x: i=0,b=0,e=n,f=n;
     if(s[b]>s[e])
     {
    	 while(i<s.size()/2)
    	 {
    		 if(s[i++]<=s[f++])
    		 {
    			 cout<<"NO";
    			     	 return 0;
    		 }
    	 }
    	 cout<<"YES";
    	 return 0;
     }
     else{
    	 while(i<s.size()/2)
    	     	 {
    	     		 if(s[i++]>=s[f++])
    	     		 {
    	     			 cout<<"NO";
    	     	     	 return 0;
    	     		 }
    	     	 }
    	     	 cout<<"YES";
    	     	return 0;
     }
    // if(s[b]==s[e]){
    	//	 cout<<"NO";
    	//	 return 0;}

//---------------------------------------------------------------------
     /*string s,s2;
     cin>>s;
     int i=0,f=s.size()-1,c=0,count=0;
     char d;
     while(true)
     {
    	 c=0,f=s.size()-1,i=0;
    	 while(i<s.size()/2)
    		 if(s[i++]!=s[f--])
    		 {
    			 c++;
    			 break;
    		 }
    	 if(c==0) break;
    	 s2=s;
    	 i=0,f=s.size()-1;
    	 while(i<s.size()/2)
    	 {
    		 d=s[i];
    		 s[i]=s[f];
    		 s[f]=d;
    	 }
    	 i=0;
    	 while(i<s.size()){
    		 d=(s[i]-48)+(s2[i++]-48);
    		 s[i]=d;

    	 }

    	 count++;
     }
     cout<<count<<" "<<s;*/
//--------------------------------------------------------------------------
// 4A
    /* int x;
     cin>>x;
     for(int i=2;i<x;i+=2)
    	 if((x-i)%2==0)
    	 {
    		 cout<<"YES";
    		 return 0;
    	 }
     cout<<"NO";*/
//-------------------------------------------------------------------------
    //231A
    /*int x=0,c=0,i=0,d=0,y=0,z=0;
    cin>>x;
    while(z++<x)
    {
    	i=0,c=0;
    	while(i++<3)
    	{
    		cin>>y;
    		if(y==1) c++;
    	}
    	if(c>1) d++;
    }
    cout<<d;*/
//---------------------------------------------------------------------------
   /*char y[3][3];
   int i,j,x=0,o=0,no=0;
   for(i=0;i<3;i++)
	   for(j=0;j<3;j++)
	   {
		   cin>>y[i][j];
		   if(y[i][j]=='X') x++;
		   if(y[i][j]=='O') o++;
		   if(y[i][j]=='.') no++;
	   }
   if((x==o||x-1==o))
   {
	   for(i=0;i<3;i++)
	   {

		   if(y[i][0]==y[i][1]&&y[i][0]==y[i][2])
			   {if(y[i][0]=='X')
			   {
				   if(x-1==o){
				   cout<<"the first player won";
				   return 0;}
				   goto ff;
			   }
			   if(y[i][0]=='O')
			  			   {
				               if(x==o){
			  				   cout<<"the second player won";
			  				   return 0;}
				               goto ff;
			  			   }}
		   if(y[0][i]==y[1][i]&&y[0][i]==y[2][i]){
			   if(y[0][i]=='X')
			   			   {
				   if(x-1==o){
				  				   cout<<"the first player won";
				  				   return 0;}
				  				   goto ff;
			   			   }
			   			   if(y[0][i]=='O')
			   			  			   {
			   				 if(x==o){
			   							  				   cout<<"the second player won";
			   							  				   return 0;}
			   								               goto ff;
			   			  			   }}
			   }
       if((y[0][0]==y[1][1]&&y[0][0]==y[2][2])||(y[0][2]==y[1][1]&&y[0][2]==y[2][0]))
       {if(y[1][1]=='X')
       			   { if(x-1==o){
	  				   cout<<"the first player won";
	  				   return 0;}
	  				   goto ff;
       			   }
       			   if(y[1][1]=='O')
       			  			   {
       				 if(x==o){
       							  				   cout<<"the second player won";
       							  				   return 0;}
       								               goto ff;
       			  			   }}
	   if(no==0)
	   {
		   cout<<"draw";
		   return 0;
	   }
	   if(x==o)
	   {
		   cout<<"first";
		   return 0;
	   }
	   if(x-1==o)
	   	   {
	   		   cout<<"second";
	   		   return 0;
	   	   }
   }
   ff:cout<<"illegal";*/
//--------------------------------------------------------------------------
   //69A
   /*int x,z=0,i=0,a=0,b=0,c=0,suma=0,sumb=0,sumc=0;
   cin>>x;
   while(z++<x)
	   {
	    cin>>a>>b>>c;
	    suma+=a;
	    sumb+=b;
	    sumc+=c;
	   }
   if(suma==0&&sumb==0&&sumc==0) cout<<"YES";
   else cout<<"NO";*/
//-----------------------------------------------------------------------
   /*long long x,y,z,x2,y2,z2,c;
   cin>>x>>y>>z;
   x2=x/z,y2=y/z,c=x2*y2;
   if(x%z) c+=y2;
   if(y%z) c+=x2;
   if(x%z&&y%z) c++;
   cout<<c;*/
//------------------------------------------------------------------------
  /* int x;
   cin>>x;
   int y[x][x];
   for(int i=0;i<x;i++)
   {
	   int f=i,d=1;
	   for(int k=0;k<=i;k++)
	   {
		   y[f][x-d]=i+1;
		   if(i+1!=x) y[x-d][f]=i+1;
		   d++,f--;
	   }
   }
   for(int i=0;i<x;i++)
   { for(int k=0;k<x;k++)
   {  cout<<y[i][k];
      if(k!=x-1) cout<<" ";
   }
   if(i!=x-1) cout<<endl;}*/
//------------------------------------------------------------
   /*string x,y="heavy",z="metal";
   cin>>x;
   long long h=-5,m,c=0;
   for(int i=0;;i++)
   {
	   h=x.find(y,h+5);
	   if(h>-1)
	   {
		   m=x.length();
		   for(int j=0;;j++)
		   {
			   m=x.rfind(z,m-1);
			   if(m>-1&&m>h+4) c++;
			   else break;
		   }
	   }
	   else break;
   }
   cout<<c;*/
   //------------------------------------------------------------------
    /*string s;
	cin>>s;
	int z=0,c=0;
	while(z++<s.size())
	{
		if(s[z-1]=='h'&&c==0)
		{
			c++;
			continue;
		}
		if(s[z-1]=='e'&&c==1)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==2)
		{
			c++;
			continue;
		}
		if(s[z-1]=='l'&&c==3)
		{
			c++;
			continue;
		}
		if(s[z-1]=='o'&&c==4)
		{
			c++;
			break;
		}
	}
	if(c==5) cout<<"YES";
	else cout<<"NO";*/
//---------------------------------------------------------------
    /*string s,d,r;
    int z=0;
    cin>>s>>d;
    while(z++<s.size())
    {
    	if(s[z-1]==d[z-1]) r+='0';
    	else r+='1';
    }
    cout<<r;*/
//------------------------------------------------------------
   /*int x,z=0;
   cin>>x;
   int y[x];
   while(cin>>y[z++]);
   int l=0,k=x;
   for(int i=0;i<x;i++)
   {
	   if(y[i]){
		   int m=0;
		   for(int j=i+1;j<x;j++)
		   {
			   if(y[i]==y[j])
			   {
				   m++;
				   y[j]=0;
			   }
		   }
		   if(m>0) k-=m;
		   if(m>l) l=m;
	   }
   }
   cout<<l+1<<" "<<k;*/
//---------------------------------------------------------------
    /*int x,z=0,even=0,odd=0,eve=0,od=0;
    cin>>x;
    int y[x];
    while(z<x) cin>>y[z++];
    z=0;
    while(z++<x)
    {
    	if(y[z-1]%2==0) {even++; eve=z-1;}
    	else {odd++; od=z-1;}
    }
    if(even==1) cout<<eve+1;
    else cout<<od+1;*/
//---------------------------------------------------------
    /*string s;
    int z=0,c=0;
    cin>>s;
    while(z<s.size())
    {
    	if(s[z]==s[z+1]) c++;
    	else c=0;
    	if(c>=6){
    		cout<<"YES";
    		return 0;
    	}
    	z++;
    }
    cout<<"NO";*/
    //----------------------------------------------------------
   /* int z=1;
    string s;
   cin>>s;
   if(s[0]>=97&&s[0]<=122)
   {
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   else{
	   while(z++<s.size())
		   if(s[z-1]>=97&&s[z-1]<=122)
		   {
			   cout<<s;
			   return 0;
		   }
	   s=caps(s);
   }
   cout<<s;*/
//---------------------------------------------------------------
   /*int n,k,z=0,c=0;
   cin>>n>>k;
   int y[n];
   while(cin>>y[z++]);
   z=0;
   while(z++<n)
   {
	   if(y[z-1]>=y[k-1])
		   {if(y[z-1]>0)
			   c++;}
	   else break;
   }
   cout<<c;*/
//-------------------------------------------------------------
   /*int x,k,y,f,z=0,i=0,c=0;
   cin>>x>>k;
   int s[x];
   while(z++<x)
   {
	   cin>>y;
	   int d=0,m=0;
	   while(d++<y)
	   {
		   cin>>f;
		   if(k>f&&m==0)
		   {
			   c++;
			   m++;
			   s[i++]=z;
		   }
	   }
   }
   z=1;
   if(c==0) cout<<c;
   else{
	   cout<<c<<endl<<s[0];
	   while(z++<i) cout<<" "<<s[z-1];
   }*/
//------------------------------------------------------------
   /*int a,b,c,d,m,v;
   cin>>a>>b>>c>>d;
   m=(3*a)/10;
   if(a-((a*c)/250)>m) m=a-((a*c)/250);
   v=(3*b)/10;
   if(b-((b*d)/250)>v) v=b-((b*d)/250);
   if(m>v) cout<<"Misha";
   if(v>m) cout<<"Vasya";
   if(v==m) cout<<"Tie";*/
//------------------------------------------------------------
   /*int z=0,c=0,y[26];
   string s;
   cin>>s;
   while(z++<s.size()) y[s[z-1]-97]=1;
   z=0;
   while(z++<26) if(y[z-1]==1) c++;
   if(c%2) cout<<"IGNORE HIM!";
   else cout<<"CHAT WITH HER!";*/
//--------------------------------------------------------------
   /*long x;
   int z=0,c=0,y[4]={0,0,0,0},i=0;
   while(z++<4)
   {
	   cin>>x;
	   if(y[0]!=x&&y[1]!=x&&y[2]!=x&&y[3]!=x) {y[i++]=x; c++;}
   }
   cout<<4-c;*/
//------------------------------------------------------------
   /*long long x;
   cin>>x;
   if(x%2) cout<<-1*((x+1)/2);
   else cout<<x/2;*/
//-------------------------------------------------------
   /*string s;
   cin>>s;
   int z=0;
   while(z++<s.size()) if(s[z-1]=='H'||s[z-1]=='Q'||s[z-1]=='9') {cout<<"YES"; return 0;}
   cout<<"NO";*/
//----------------------------------------------------------
   /*int x,a,b,in=0,max=0,z=0;
   cin>>x;
   while(z++<x)
   {
	   cin>>a>>b;
	   in=(in-a)+b;
	   if(in>max) max=in;
   }
   cout<<max;*/
//-------------------------------------------------------------
   /*int x=0,y,n=0;
   cin>>y;
   while(++n)
   {
	   x+=(n*(n+1))/2;
	   if(x>y)
	   {
		   cout<<n-1;
		   return 0;
	   }
   }*/
//------------------------------------------------------------
  /*int m,n,c=0;
  cin>>n>>m;
  for(;n*m>0;n--,m--,c++);
  if(c%2) cout<<"Akshat";
  else cout<<"Malvika";*/
//---------------------------------------------------
  /*int x,z=0,y,c=0,d[5]={0,0,0,0,0};
  cin>>x;
  while(z++<x)
  {
	  cin>>y;
	  d[y]++;
  }
  c=c+d[4]+d[3]+(d[2]/2);
  d[1]-=d[3];
  if(d[2]%2) {c++; d[1]-=2;}
  if(d[1]>0) c+=(d[1]/4);
  if(d[1]%4&&d[1]>0) c++;
  cout<<c;*/
//-------------------------------------------------------
  /*int n,i=0;
  cin>>n;
  int x[n];
  while(i++<n) cin>>x[i-1];
  for(i=1;i<=n;i++)
	  for(int j=0;j<n;j++)
		  if(x[j]==i)
		  {
			  if(i==1) cout<<j+1;
			  else cout<<" "<<j+1;
		  }*/
//---------------------------------------------------------
  /*int n,z=1,y=1,m=2;
  cin>>n;
  int x[n]={1,1};
  n--;
  for(int i=2;i<=n;i+=2)
  {
	  x[i]=z+y;
	  x[i+1]=y;
	  z=y;
	  y=x[m++];
  }
  cout<<x[n];*/
//-----------------------------------------------------------------
  /*int x;
  cin>>x;
  int y[x];
  int z=0;
  while(z++<x) cin>>y[z-1];
  for(int i=0;i<x;i++)
  {
	  int max=i;
	  for(int k=i+1;k<x;k++)
		  if(y[k]>y[max])
			  max=k;
	  swap(y[i],y[max]);
  }
  int sum=0,sumarr=0,c=0;
  for(int i=0;i<x;i++)
  {
	  sumarr=0;
	  sum+=y[i];
	  c++;
	  for(int k=i+1;k<x;k++)
		  sumarr+=y[k];
	  if(sum>sumarr) break;
  }
  cout<<c;*/
  //----------------------------------------------------------------
   /*string s;
   cin>>s;
   int x=(s.size()+1)/2;
   int y[x],z=0,f=0,min=0;
   while(z<s.size())
	   {y[f++]=s[z];
	   z+=2;
	   }
   for(int i=0;i<x;i++)
   {
	   min=i;
	   for(int k=i+1;k<x;k++)
		   if(y[k]<y[min])
			   min=k;
	   swap(y[min],y[i]);
   }
   z=0,f=0;
   while(z<s.size())
	   {
	   s[z]=y[f++];
	   z+=2;
	   }
   cout<<s;*/
//---------------------------------------------------------------------
   /*string x,y;
   cin>>x;
   cin>>y;
   x+=y;
   cin>>y;
   if(x.size()!=y.size()) {cout<<"NO"; return 0;}
   for(int i=0;i<x.size();i++)
   {
	   int c=1;
	   for(int k=0;k<y.size();k++)
		   if(x[i]==y[k])
		   {
			   c=0;
			   y[k]='0';
			   break;
		   }
	   if(c) {cout<<"NO"; return 0;}
   }
   cout<<"YES";*/
//------------------------------------------------------------------------
   /*int x[3],f=0,res=0;
   while(f++<3) cin>>x[f-1];
   res=x[0]+x[1]+x[2];
   if(((x[0]+x[1])*x[2])>res) res=(x[0]+x[1])*x[2];
   if((x[0]*x[1]*x[2])>res) res=x[0]*x[1]*x[2];
   if(x[0]+(x[1]*x[2])>res) res=x[0]+(x[1]*x[2]);
   if(x[0]*(x[1]+x[2])>res) res=x[0]*(x[1]+x[2]);
   cout<<res;*/
//-------------------------------------------------------------------------

/*int n,x[10][10],size,z=0;
long long m;
   string s;
   cin>>n;
   while(z++<n)
   {
	   cin>>size;
	   for(int i=0;i<size;i++)
	   {
		   cin>>m;
		   for(int k=size-1;k>=0;k--)
		   {
			   x[i][k]=(m%10);
			   m/=10;
		   }
	   }
	   int f=0,ff,dd;
	   cin>>m;
	   while(f++<m)
	   {
		   cin>>s;
		   char r=s[0];
		   switch(r)
		   {
		   case('r') :{cin>>dd>>ff; row(x,dd,ff,size); break;}
		   case('c') :{cin>>dd>>ff; col(x,dd,ff,size); break;}
		   case('i') :{inc(x,size); break;}
		   case('d') :{dec(x,size); break;}
		   case('t') :{tra(x,size); break;}
		   }
	   }
	   cout<<"Case #"<<z<<endl;

	      for(int i=0;i<size;i++)
	      	   {
	      		   for(int k=0;k<size;k++)
	      		   {
	      			   cout<<x[i][k];
	      		   }
	      		   cout<<endl;
	      	   }
	      if(z!=n) cout<<endl;
   }*/
//----------------------------------------------------------------------
 /* int n;
  cin>>n;
  int sum=n;
  for(int i=0;i<n;i++)
  {
	  sum+=i*(n-i);
  }
  cout<<sum;*/
//---------------------------------------------------------------------
  /*int n;
  cin>>n;
  int d=2*n+1,f=-1,c=0,m=0,s=-1;
  for(int i=1;i<=2*n+1;i++)
  {
	  if(i<=((2*n+1)/2)+1){
		  f+=2;
		  s+=2;
		  for(int k=s;k<=2*n;k++) cout<<" ";
		  c=0;
		  for(int k=1;k<=f;k++)
		  {
			  if(k!=f) cout<<c<<" ";
			  else cout<<c;
			  if(k>=(f/2)+1) c--;
			  else c++;
		  }
		  m=f-2;
	  }
	  else{
		  for(int k=(d-=2);k<2*n+1;k++) cout<<" ";
		  c=0;
		  for(int k=m;k>0;k--)
		  {
			  if(k!=1) cout<<c<<" ";
			  else cout<<c;
 			  if(k<=(m/2)+1) c--;
 			  else c++;
		  }
		  m-=2;
	  }
	  cout<<endl;
  }*/
//-------------------------------------------------------------------------
 /*  int n,d,m=0,c=0;
   cin>>n;
   int x[n],z[n],y[3]={0,0,0};
   for(int i=0;i<n;i++) cin>>x[i];
   for(int i=0;i<n;i++)
   {
	   if(x[i]){
		   y[0]=i,y[1]=0,y[2]=0,d=1;
		   for(int k=i+1;k<n;k++)
			   if(x[k]!=x[y[0]]&&x[k]!=x[y[1]]&&x[k]!=x[y[2]])
			     y[d++]=k;
		   if(d!=3) break;
		   for(int k=0;k<3;k++)
		   {
			   z[m+k]=y[k];
			   x[y[k]]=0;
		   }
		   m+=3,c++;
	   }
   }
   cout<<c<<endl;
   if(c){
	   for(int k=0;k<3*c;k++)
	   {
		   if(k%3==0&&k) cout<<endl;
		   if((k+1)%3==0) cout<<z[k]+1;
		   else cout<<z[k]+1<<" ";
	   }
   }*/
//--------------------------------------------------------------------------
   /*string s,d=" ";
   int c=0;
   cin>>s;
   for(int i=0;i<s.size();i++)
    {if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
	   {
		   s.erase(i,1);
		   s.erase(i,1);
		   s.erase(i,1);
		   if(c&&s[i-1]!=' '&&i<s.size()) s.insert(i,d);
		   i--;
	   }
    else{
    	c++;
    }
    }
 cout<<s;*/
//----------------------------------------------------------------------------
  /*string s,d[10],f[8];
  cin>>s;
  int z=0;
  while(z++<10){
	  cin>>d[z-1];
	 if(z<9) f[z-1].insert(0,s,(z-1)*10,10);
  }
  s.erase(0,s.size());
  for(z=0;z<8;z++)
	  for(int k=0;k<10;k++)
		  if(f[z]==d[k])
			  s+=(k+48);
  cout<<s;*/
//-----------------------------------------------------------------------------
  /*int x[4],d=0,z=0,i;
  while(z++<4) cin>>x[z-1];
  cin>>d;
  int y[d+1];
  z=0;
  while(z++<d+1) y[z-1]=0;
  z=0;
  while(z++<4)
	  for(i=0;i<d+1;i+=x[z-1]) y[i]++;
  z=1,i=0;
  while(z++<d+1)
	  if(y[z-1]) i++;
  cout<<i;*/
//-----------------------------------------------------------
 /* string s,u,l;
  int z=0,n;
  cin>>n;
  while(z++<n)
  {
	  s.erase(0,s.size());
	  u.erase(0,u.size());
	  l.erase(0,l.size());
	  cin>>s;
	  for(int i=0;i<s.size();i++)
	  {
		  if(s[i]>=97&&s[i]<=122) l+=s[i];
		  else u+=s[i];
	  }
	  cout<<l<<" "<<u<<endl;
  }*/
//------------------------------------------
 /*long long n,x,f,d,z=0,y;
 cin>>n;
 while(z++<n)
 {
	 cin>>x>>y;
	 d=x;
	 f=d%10+((d/10)%10)*10;
	 if(f<y) x-=f;
	 else x+=(100-f);
	 cout<<x<<endl;
 }*/
//----------------------------------------------
 /* long long x,z=0,m,n,k,l;
  cin>>x;
  while(z++<x)
  {
	  cin>>m>>n>>k>>l;
	  cout<<(m*n)-(k*l)<<endl;
  }*/

//---------------------------------------------------------
/*long long n,x[10000],y[10000],size,z=0,d=0;
   cin>>n;
   while(z++<n)
   {
       d=0;
       cin>>size;
       while(d++<size) cin>>x[d-1];
       d=0;
       while(d++<size) cin>>y[d-1];
       d=y[0];
       for(int i=1;i<size;i++)
           d=d*x[i]+y[i];
       cout<<d<<endl;
   }*/
//---------------------------------------------------------
/*long long t,x[100001],z=0;
 cin>>t;
 while(z++<t)
 {
	  long long max=0,d=0,n,sum=0,pos=0,i=0;
	  cin>>n;
	  while(d++<n){
		  cin>>x[d-1];
		  if(x[d-1]>x[max]) max=d-1;
		  if(x[d-1]>0) pos++;
	  }
	  if(pos==0)
	  {
		  cout<<x[max]<<endl;
		  continue;
	  }
	  d=0;
	  for( i=0;i<n;i++)
	  {
		 if(x[i]+sum>0) sum+=x[i];
		 else sum=0;
		 if(sum>d) d=sum;
	  }
	  cout<<d<<endl;
 }*/
//----------------------------------------------------
  /*int n,z=0;
  string s;
  cin>>n;
  while(n--)
  {
	s.erase(0,s.size());
	cin>>s;
	long long c=0;
	for(int i=0;i<s.size();i++)
		if(s[i]=='*') c++;
	long long d=20-(s.size()-c),res=1;
	for(int i=0;i<c;i++)
		res*=d--;

	cout<<"Case #"<<++z<<": "<<res;
	if(n>0) cout<<endl;
  }*/
//-----------------------------------------------------------------
  /*long long x,d=0;
  cin>>x;
  char y[x][x];
  for(int i=0;i<x;i++)
	  for(int k=0;k<x;k++)
		  cin>>y[i][k];
  for(int i=0;i<x;i++)
	  for(int k=0;k<x;k++)
	  {
		  long long c=0;
		  if(y[i-1][k]=='O'&&i-1>-1) c++;
		  if(y[i+1][k]=='O'&&i+1<x) c++;
		  if(y[i][k-1]=='O'&&k-1>-1) c++;
		  if(y[i][k+1]=='O'&&k+1<x) c++;
		  if(c%2==0&&c){cout<<i+1<<" "<<k+1<<endl; d++;}
	  }
  if(d) cout<<d;
  else cout<<"No target";*/
//-----------------------------------------------------------------------
   /*long long x,z=0,n;
  cin>>x;
  while(z++<x)
  {
	  cin>>n;
	  if(n%2==0) cout<<"OFF"<<endl;
	  else cout<<"ON"<<endl;
  }*/
//--------------------------------------------
 /* long long x,z=0,d;
  cin>>x;
  while(z++<x)
  {
	  cin>>d;
	  d=6-d;
	  if(d==0){
		  cout<<d<<endl;
		  continue;
	  }
	  switch(d){
	  case(1): {cout<<"1/6"<<endl; continue;}
	  case(2) :{cout<<"1/3"<<endl; continue;}
	  case(3) :{cout<<"1/2"<<endl; continue;}
	  case(4) :{cout<<"2/3"<<endl; continue;}
	  case(5) :{cout<<"5/6"<<endl; continue;}
	  }

  }*/
//----------------------------------------------------
  /*long long x,z=0,f,d,n,m,y[22][22];
  cin>>x;
  while(z++<x)
  {
	  cin>>n>>m;
	  for(int i=0;i<n;i++)
		  for(int k=0;k<m;k++)
		  {
			  cin>>f;
			  if(f>127) y[i][k]=1;
			  else y[i][k]=0;
		  }
	  for(int i=0;i<n;i++)
	  {  cout<<y[i][0];
	  		  for(int k=1;k<m;k++)
	  		  {
	  			 if(k!=m) cout<<" "<<y[i][k];
	  			 else cout<<y[i][k];
	  		  }
	  		  cout<<endl;
	  }
  }*/
//----------------------------------------------------
 /* long long z=0,x,y[100002],r[100002][2],n,m,sum,a,b,i,k;
  cin>>x;
  while(z++<x)
  {
	  cin>>n>>m;
	  for(i=0;i<n;i++)
		  cin>>y[i];
	  for(i=0;i<m;i++)
	  {
		  for(k=0;k<2;k)
	  }

		  for(k=a;k<=b;k++)
			  sum+=y[k];
		  cout<<sum<<endl;
  }*/
//------------------------------------------
  /*long long x,z=0,i,k,c=0,w=0,min=0,d;
  string s,y[55],m[55],t,dd,qqq;
  getline(cin,qqq);
  if(qqq.size()==1) x=qqq[0]-48;
  if(qqq.size()==2) x=(qqq[0]-48)*10+(qqq[1]-48);
  if(qqq.size()==3) x=(qqq[0]-48)*100+(qqq[1]-48)*10+(qqq[0]-48);
  while(z++<x)
  {
  	d=0;
  //	cin.ignore(1,'\n');
	  getline(cin,dd);
	  if(dd[1]==' ') {
	  d=dd[0]-48;
	  dd.erase(0,2);
}
	  else {
	  d=(dd[0]-48)*10+(dd[1]-48);
	  dd.erase(0,3);}
	  s=dd;
	 // cin.ignore(1,'\n');
	  for(i=0;i<d;i++) getline(cin,y[i]);
	 // y[d]="%%%%%";
	  w=0,min=0;

	  for(i=0;i<d;i++)
	  {
		  c=0;
		  for(k=0;k<s.size();k++)
		  {
			  if(y[i][k]==s[k]) c++;
			  else break;
		  }
		  if(c==s.size()) m[w++]=y[i];
	  }
	  if(w){
		  for(i=0;i<w;i++)
		  {
			  min=i;
			  for(k=i+1;k<w;k++)
				  if(m[k].compare(m[min])<0)
					  min=k;
			  t=m[i];
			  m[i]=m[min];
			  m[min]=t;
		  }
		  cout<<w<<endl;
		  for(i=0;i<w;i++) cout<<m[i]<<endl;
	  }
	  else cout<<"Conan's assumption is wrong!"<<endl;
	 // cin.ignore(1,'\n');
  }*/
//-----------------------------------------------
/*int m=3,z[3][3],y[3][3],t;
cin>>t;
for(int i=0;i<m;i++)
	for(int k=0;k<m;k++)
		cin>>y[i][k];
while(t--){
for(int i=0;i<m;i++)
	  for(int k=0,j=m-1;k<m,j>=0;k++,j--)
		  z[j][i]=y[i][k];
}
while(t--){
for(int i=0,j=m-1;i<m,j>=0;i++,j--)
	  for(int k=0;k<m;k++)
		  z[k][j]=y[i][k];
}
for(int i=0;i<m;i++)
	{for(int k=0;k<m;k++)
		cout<<z[i][k]<<" ";
cout<<endl;}*/
//------------------------------------------------------
/*long long x,z=0,t,n,a,i,y[35][35],k;
cin>>x;
while(z++<x)
{
	cin>>t;
	for(i=0;i<t;i++)
		for(k=0;k<t;k++)
			cin>>y[i][k];
	cin>>a>>n;
	n=n%4;
	if(n==0)
	{
		for(i=0;i<t;i++)
		{	for(k=0;k<t;k++)
					{cout<<y[i][k];
					if(k!=t-1) cout<<" ";
					}
		cout<<endl;}
		continue;
	}
	if(a==1){
		clock(y,n,t);
	}
	else nonclock(y,n,t);

}*/
//-----------------------------------------------------
 /* string s;
  cin>>s;
  int z=0;
  while(z++<s.size()) s[z-1]=tolower(s[z-1]);
  z=0;
  while(z++<s.size()){
	  if(s[z-1]=='a'||s[z-1]=='i'||s[z-1]=='e'||s[z-1]=='u'||s[z-1]=='o'||s[z-1]=='y')
	  {
		  s.erase(z-1,1);
		  z--;
	  }
	  else {s.insert(z-1,1,'.');
	  z++;
	  }
  }
  cout<<s;*/
//---------------------------------------------------------------
  /* long long x,d=0;
   string s;
   cin>>x;
   while(x--)
   {
	   cin>>s;
	   if(s[0]=='+'||s[1]=='+'||s[2]=='+') d++;
	   else d--;
   }
   cout<<d;*/
//--------------------------------------------------
  /*long long x,c=0,z=0;
  string s;
  cin>>x>>s;
  while(z++<s.size())
	  if(s[z-1]==s[z])
	  {
		  s.erase(z--,1);
		  c++;
	  }
  cout<<c;*/
//----------------------------------------------------
  /*string s,d;
  cin>>s>>d;
  for(int i=0;i<s.size();i++)
  {
	  s[i]=tolower(s[i]);
	  d[i]=tolower(d[i]);
  }
  cout<<s.compare(d);*/
//-------------------------------------------------------
  /*string s;
  cin>>s;
  s[0]=toupper(s[0]);
  cout<<s;*/
//----------------------------------------------
  int x,y;
  cin>>x>>y;
  cout<<(x*y)/2;
  return 0;
}
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define f(i,a,n) for(ll i=a;i<n;i++)
#define vec vector<ll>
#define mxh priority_queue<pair<int,int>>
#define mh priority_queue<int,vector<int>,greater<int>>
#define omap map<ll,ll>
#define umap unordered_map<ll,ll>
#define vpair vector<pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define sor(v) sort(v.begin(),v.end())
#define fi  first
#define se second
#define emp empty

using namespace std;
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result= (result*base)%mod;;
        exp >>= 1;
        if (!exp)
            break;
        base= (base*base)%mod;
    }

    return result;
}
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
ll fact(ll n)
{
    if (n >= mod)
        return 0;

    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % mod;

    return result;
}
ll fact1(ll n)
{   ll x=1;
    while(n>1)
    {
        x*=n;
        n--;
    }
    return x;
}
bool is_prime(ll n) {
    if (n == 1) {
        return false;
    }
    ll i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}
bool areRotations(string str1, string str2)
{
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length())
        return false;

   string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}
bool pow2 (ll x)
{
    return x && (!(x&(x-1)));
}
ll maxXorSum(ll n, ll k)
{
    if (k == 1)
        return n;
    ll res = 1;
    while (res <= n)
        res <<= 1;

    // Return res - 1 which denotes
    // a number with all bits set to 1
    return res - 1;
}
ll mcost(ll a[], ll n)
{

    ll y;
    if (n % 2 == 1)
        y = a[n / 2];
    else
        y = (a[n / 2] + a[(n - 2) / 2]) / 2;

    ll s = 0;
    for(ll i = 0; i < n; i++)
        s += abs(a[i] - y);

    return s;
}
ll largest_subarray(ll a[], ll n)
{
    unordered_map<ll, ll> index;
    ll ans = 0;
    for (ll i = 0, j = 0; i < n; i++) {

        j = max(index[a[i]], j);
        ans = max(ans, i - j + 1);
        index[a[i]] = i + 1;
    }
    return ans;
}
ll b[101],sz;
pair<ll,ll> adj[101];

void dfs(int s)
{
    b[s]=1;
    for(int i=1;i<=sz;i++)
    {    if(!b[i] && (adj[s].first==adj[i].first || adj[s].second==adj[i].second))
            dfs(i);
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
void per(int a[], int n)
{  ll d=0;
    sort(a, a + n);
  //  cout << "Possible permutations are:\n";
    do { ll s=0,x=1;
        f(i,0,n)
        {
            s+=a[i];
            if(s==0)
            {
                x=-1;
            }
        }
        if(x==1)
        {    cout<<"YES"<<endl;
        d=1;
            f(i,0,n)
           {
             cout<<a[i]<<" ";
           }cout<<endl;
          break;
        }
    } while (next_permutation(a, a + n));
    if(d==0)
    {
        cout<<"NO"<<endl;
    }
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

bool leftRotate(int a[], int d, int n)
{

    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        int temp = a[i];
        int j = i;

        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            a[j] = a[k];
            j = k;
        }
        a[j] = temp;
    }
    ll s=0,x=1;
    f(i,0,n)
    {
        s+=a[i];
        if(s==0)
        {
            x=0;
        }
    }
    if(x==1)
    {   cout<<"YES"<<endl;
        f(i,0,n)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
      return true;
    }
    return false;

}
ll rec(ll n,ll k)
{
    if(n==1)
    {
        return 1;
    }
    if (k==1)
    {
        return n;
    }
    return ((n+rec(n-1,k-1))%mod);
}

bool isPerfectSquare(ll x)
{
  if(sqrt(x)*sqrt(x)==x)
  {
      return true;
  }
  return false;
}
bool isSubSequence(string str1,string str2, int m, int n)
{
   int j = 0,x=0,d=0;
    if(str1[0]==str2[0])
    {
        for (int i=0; i<n&&j<m; i++)
       {
           if (str1[j] == str2[i])
            {
              j++;

            }
           else
            {   d=i;
                break;
            }
       }
       if(j==m)
       {
           return true;
       }
       ll p=9,v=0;
       for(int i=n-1;i>=d;i--)
        {  //  cout<<"l";
            if(v==10-j)
            {
                break;
            }
            if(str1[p]==str2[i])
            {
                p--;
                v++;
            }

            else
            {
                break;
            }
        }
       //cout<<j<<" "<<v<<" "<<d<<endl;
        if(v+j==10)
        {
            return true;
        }
        else
        {
            return false;
        }


    }
    else{
         size_t found = str2.find(str1);
        if (found != string::npos && str1[9]==str2[n-1])
         {
             return true;
         }
         else
         {
             return false;
         }
    }

}
ll countBits(ll n)
{
   ll count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}

bool sov(ll a[500][500],ll n,ll m)
{
	map<ll,vector<ll> > mp;
	f(i,0,n)
       {
         f(j,0,m)
         {
			mp[j-i].push_back(a[i][j]);
		}
	}
	for(auto i : mp)
	{
		f(j,1,i.second.size())
		{
			if(i.second[j]!=i.second[0])
			return false;
		}
	}
	return true;
}
bool findPartiion(ll arr[], ll n)
{
    int sum = 0;
    int i, j;

    for (i = 0; i < n; i++)
        sum += arr[i];

    if (sum % 2 != 0)
        return false;

    bool part[sum / 2 + 1][n + 1];
    for (i = 0; i <= n; i++)
        part[0][i] = true;

    for (i = 1; i <= sum / 2; i++)
        part[i][0] = false;

    for (i = 1; i <= sum / 2; i++) {
        for (j = 1; j <= n; j++) {
            part[i][j] = part[i][j - 1];
            if (i >= arr[j - 1])
                part[i][j] = part[i][j]
                             || part[i - arr[j - 1]][j - 1];
        }
    }

    return part[sum / 2][n];
}
ll CountPairs(ll arr[], ll n)
{
    sort(arr, arr + n);
    ll count = 0;
    ll l = 0, r = n - 1;

    while (l < r) {

        if (arr[l] + arr[r] > 0) {

            count += (r - l);
            r--;
        }
        else {
            l++;
        }
    }
    return count;
}
ll lcm(ll a, ll b)
   {

return a / __gcd(a, b) * b;
   }
ll rec2(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    ll s=0;
    f(i,0,n)
    {
        s+=rec2(i)+rec2(n-i-1);
    }
    return s;

}
bool exist(ll n)
{
    for (int i=3; i<=sqrt(n); i+=2)
    {
        if (n%i == 0)
        {

            if (n/i == i)
                {
                    if(i%2==1)
                    {
                        return true;
                    }
                }

            else // Otherwise print both
                {
                    if(i%2==1 || (n/i)%2==1)
                    {
                        return true;
                    }
                }
        }
    }
    return false;
}
bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}
ll factorial(ll n)
{

    return (n == 1 || n ==(ll) 0) ? (ll)1 : n * factorial(n - 1);
}
void leftRotate(ll arr[], ll d, ll n)
{
    /* To handle if d >= n */
    d = d % n;
    ll g_c_d = gcd(d, n);
    for (ll i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        ll temp = arr[i];
        ll j = i;

        while (1) {
            ll k = j + d;
            if (k >= n)
                k = k - n;

            if (k == i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
struct node
{
   int minimum;
   int maximum;
};
int getMid(int s, int e) {  return s + (e -s)/2;  }
struct node MaxMinUntill(struct node *st, int ss, int se, int qs,
                         int qe, int index)
{   struct node tmp,left,right;
    if (qs <= ss && qe >= se)
        return st[index];
    if (se < qs || ss > qe)
    {
       tmp.minimum = INT_MAX;
       tmp.maximum = INT_MIN;
       return tmp;
     }
    int mid = getMid(ss, se);
    left = MaxMinUntill(st, ss, mid, qs, qe, 2*index+1);
    right = MaxMinUntill(st, mid+1, se, qs, qe, 2*index+2);
    tmp.minimum = min(left.minimum, right.minimum);
    tmp.maximum = max(left.maximum, right.maximum);
    return tmp;
}
struct node MaxMin(struct node *st, int n, int qs, int qe)
{
    struct node tmp;
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        tmp.minimum = INT_MIN;
        tmp.minimum = INT_MAX;
        return tmp;
    }

    return MaxMinUntill(st, 0, n-1, qs, qe, 0);
}

void constructSTUtil(int arr[], int ss, int se, struct node *st,
                     int si)
{
    if (ss == se)
    {
        st[si].minimum = arr[ss];
        st[si].maximum = arr[ss];
        return ;
    }
    int mid = getMid(ss, se);
    constructSTUtil(arr, ss, mid, st, si*2+1);
    constructSTUtil(arr, mid+1, se, st, si*2+2);

    st[si].minimum = min(st[si*2+1].minimum, st[si*2+2].minimum);
    st[si].maximum = max(st[si*2+1].maximum, st[si*2+2].maximum);
}
struct node *constructST(int arr[], int n)
{
    int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;
    struct node *st = new struct node[max_size];
    constructSTUtil(arr, 0, n-1, st, 0);
    return st;
}
bool ckck(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'
       || c=='u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
map<ll, bool> isPowerAdded;
bool canBeFormed (ll ele, ll K) {
   //trace1(ele)
   map<ll, bool> isPowerAdded;
   while (ele) {
    ll num = 1;
    while((num*K) <= ele) {
        num *= K;
    }
    if (!isPowerAdded[num]) {
       ele -= num;
       isPowerAdded[num] = 1;
    } else {
       return 0;
    }
   }

   return 1;
}
ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
ll slv1(string X,string Y, ll m, ll n)
{
    int ar[m + 1][n + 1];
    int p = 0;
    f(i,0,m+1)
    {
        f(j,0,n+1)
        {
            if (i == 0 || j == 0)
                ar[i][j] = 0;

            else if (X[i - 1] == Y[j - 1]) {
                ar[i][j] = ar[i - 1][j - 1] + 1;
                p = max(p, ar[i][j]);
            }
            else
                ar[i][j] = 0;
        }
    }
    return p;
}
ll fun123(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)return i;
    }
    return n;
}

bool isPalindrome(string s,ll n)
{
    ll l = 0;
    ll h =n-1;
    while (h > l)
    {
        if (s[l++] != s[h--])
        {

            return false;
        }
    }return true;
}
ll calculatePow(ll a,ll b)
{
   if(b==0)
   {
       return a;
   }
   else
   {
       return calculatePow( b,a % b);
   }
}

// Code Starts

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
     {
       ll n,x,y,z,c=0;
       cin>>x>>y;

       cout<<(x*y)/2;
     }
  return 0;
}
 #include <iostream>
using namespace std;
struct edge{
	int x,y;
}edges[110];
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>edges[i].x>>edges[i].y;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		int max_y=0,max_x=0;
		for(int j=0;j<n;j++)
		{
			if(edges[i].x==edges[j].x) max_y=max(max_y,edges[j].y);
			if(edges[i].y==edges[j].y) max_x=max(max_x,edges[j].x);
		}
		ans=max(ans,(max_x-edges[i].x)*(max_y-edges[i].y));
	}
	 cout<<ans;
	return 0;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[0]<target)
            {
            	if(nums[0]<target&&target<nums[mid])
				r=mid-1;
				else l=mid+1;
            }
            else
            {
            	if(nums[mid]>target&&taregt<=nums[n-1])
            		l=mid+1;
            	else r=mid-1;
            }
        }
        return -1;
    }
};
#include <bits/stdc++.h>
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


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&1)
	{
		cout<<n/2<<endl<<n/2+1<<endl;
	}
	else
	{
		cout<<n/2<<endl;
	}
	return 0;
}



#include <string.h>
#include <stdio.h>
int main()
{
    char s[110];
    gets(s);
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
        if((int)s[i]>=48 && (int)s[i]<=57) ans++;
    }
    printf("%d",ans);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a[500001],n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	if(m.count(0)) puts("NO");
	else if(m.size()==2)
	{
		int cnt=0;
		for(auto i:m)
		{
			a[++cnt]=i.first;
		}
		if(a[1]+a[2]==0) puts("NO");
		else puts("YES");
	}
	else puts("YES");
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,vector<int>> p;
int n,k;
ll ans;
string s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		auto &v=p[s];
		ans+=v.end()-lower_bound(v.begin(),v.end(),i-k-1);
		v.push_back(i);
	}
	cout<<ans<<endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

string s;
int x=0,y=0;
unordered_set<string> h;
string m[8]={"ULD","URD","LDR","LUR","DLU","DRU","RUL","RDL"};
int main()
{
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if((s[i]=='L'&&s[i+1]=='R')||(s[i]=='R'&&s[i+1]=='L'))
        {
            puts("NO");
            return 0;
        }
        if((s[i]=='U'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='U'))
        {
            puts("NO");
            return 0;
        }
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        else if(s[i]=='D') y--;
        else x--;
    }
    for(int i=0;i<len-2;i++)
    {
        string ans="";
        ans=s[i]+s[i+1]+s[i+2];
        h.insert(ans);
    }
    for(int i=0;i<8;i++)
    {
        if(h.count(m[i]))
        {
            puts("NO");
            return 0;
        }
    }
    if(x==0&&y==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


// # ����DP  ����������

#include <bits/stdc++.h>
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



���ű�ʮһ��

#include <bits/stdc++.h>
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


*/
/**************************************

#include <bits/stdc++.h>
using namespace std;
const int N =



int main()
{

	return 0;
}

******************************************


#include <bits/stdc++.h>
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



#include <bits/stdc++.h>
using namespace std;
int t;
int n;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int ans=0;
		int i=0;
		while(i<s.size()-1)
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='0') ans+=2;
				else if(s[i+1]=='1'&&s[i+2]=='0') ans+=1;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int b[26];
char a[100001];
int ans=0;

int q(int x,int y)
{
	int n=0;
	memset(b,0,sizeof b);

	for(int i=x;i<=y;i++)
	{
		b[a[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(b[i]==1) n++;
	}
	return n;
}


int main()
{
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			ans+=q(i,j);
		}
	}
	cout<<ans<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;

int a[10];


int main()
{
	for(int i=0;i<10;i++) a[i]=2021;
	int k;
	int ans=-1;
	for(int i=1;i<=100000;i++)
	{
		int x=i;
		while(x)
		{
			int k=x%10;
			a[k]--;
			x/=10;
			if(a[k]==-1)
			{
				ans=i;
				break;
			}
		}
		if(ans!=-1)
		{
			break;
		}
	}
	cout<<ans-1<<endl;
	return 0;
}




#include <bits/stdc++.h>
using namespace std;
const int N = 0x3f3f3f3f;
typedef long long ll;
ll mp[2031][2031];


int main()
{
	int i,j,k;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			mp[i][j]=mp[j][i]=N;
	for(i=1;i<=2021;i++)
		for(j=1;j<=2021;j++)
			if(abs(i-j)<=21)
				mp[i][j]=mp[j][i]=(i*j)/(__gcd(i,j));
	for(k=1;k<=2021;k++)
	{
		for(i=1;i<=2021;i++)
		{
			for(j=1;j<=2021;j++)
			{
				if(mp[i][j]>mp[i][k]+mp[k][j]) mp[i][j]=mp[j][i]=mp[i][k]+mp[k][j];
			}
		}
	}
	cout<<mp[1][2021]<<endl;
	return 0;
}

*

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b,n,p,x,sum;
	cin>>n;
	while(n--)
	{
		cin>>p;
		sum=0;
		for(int i=0;i<p;i++)
		{
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
		if(n) cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s,sf;
		cin>>s;
		sf=s.substr(0,6);
		string home;
		int t=(s[0]-'0')*10+(s[1]-'0');
		if(t==33) home="zhejiang,";
		else if(t==11) home="beijing,";
		else if(t==71) home="Taiwan,";
		else if(t==81) home="Hong Kong,";
		else if(t==82) home="Macao,";
		else if(t==54) home="Tibet,";
		else if(t==21) home="Liaoning,";
		else if(t==31) home="shanghai,";

		cout<<"He/She is from "<<home;
		cout<<"and his/her birthday is on "
		<<s[10]<<s[11]<<","<<s[12]<<s[13]<<","<<s[6]<<s[7]<<s[8]<<s[9]
		<<" based on the table."<<endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,t;
    string home,a;
    cin>>n;
    for(int k = 0 ; k < n ; k++)
    {
        cin>>a;
        t = (a[0]-'0')*10+a[1]-'0';
        switch(t)
        {
            case 11:home = "Beijing";break;
            case 31:home = "Shanghai";break;
            case 21:home = "Liaoning";break;
            case 33:home = "Zhejiang";break;
            case 54:home = "Tibet";break;
            case 71:home = "Taiwan";break;
            case 81:home = "Hong Kong";break;
            case 82:home = "Macao";break;
            default :break;
        }
        cout<<"He/She is from "<<home<<",and his/her birthday is on "
        <<a[10]<<a[11]<<","<<a[12]<<a[13]<<","<<a[6]<<a[7]<<a[8]<<a[9]
        <<" based on the table."<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

bool is_prime(int x)
{
	for(int i=2;i*i<x;i++)
	{
		if(x%i==0) return false;
	}
	return true;
}

int main()
{
	int x,y;
	while(cin>>x>>y,x+y)
	{
		bool f=true;
		for(int i=x;i<=y;i++)
		{
			if(!is_prime(i*i+i+41))
			{
				f=false;
				cout<<"Sorry"<<endl;
				break;
			}
		}
		if(f) cout<<"OK"<<endl;
	}
	return 0;
}


``````````````````````
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int x=n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<4<<endl;
		else{
		while(n--)
		{
			if(n==2)
			{
				x*=2;
				break;
			}
			else
			{
				x=(x+1)*2+1;
			}
		}
		cout<<x<<endl;
	}
	}
	return 0;
}```````````````



#include <bits/stdc++.h>
using namespace std;

int g[10000][10000];

int main()
{
	int ans=0;
	int x,y;
	x=2020,y=2020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4040,y=2031;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=2031,y=2034;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	x=4020,y=4020;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(abs(i-x)+abs(y-j)<=2020) g[i][j]=1;
		}
	}
	//int ans=0;
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<10000;j++)
		{
			if(g[i][j]) ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
20312088


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int w;
	cin>>w;
	for(int i=2;i<w;i+=2)
	{
		if((w-i)%2==0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}


#include <iostream>
using namespace std;
const int N = 1010;

int t,n;
int w[N],v[N];
int f[N][N];
int main()
{
	cin>>t>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=t;j++)
		{
			f[i][j]=f[i-1][j];
			if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
		}
	}
	cout<<f[n][t];
	return 0;
}
*
#include <iostream>
using namespace std;
const int N = 20010;
int m,n;
int f[N];
int main()
{
	//���������m   ��Ʒ����Ϊn
	cin>>m>>n;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		for(int j=m;j>=x;j--)
		{
		    f[j]=max(f[j-x]+x,f[j]);
		}
	}
	cout<<m-f[m];
	return 0;
}*

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{

		char s[10000];
		gets(s);
		int ans=0;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]<0) ans++;
		}
		cout<<ans/2<<endl;
	}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int n;
int solve(string s)
{
	int n=s.size();
	for(int i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(solve(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <stdio.h>
using namespace std;
#define lcm(a,b) a/gcd(a,b)*b
int n;
long gcd(long m,long n)
{
	while(n)
	{
		long temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

int main()
{
	int a[100001];
	while(scanf("%d",&n)!=EOF)
	{
		int a,x;
		cin>>a;
		while(--n)
		{
			cin>>x;
			a=lcm(a,x);
		}
		cout<<a<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		int a=0,e=0,i=0,o=0,u=0;
		char s[101];
		gets(s);
		for(int j=0;j<strlen(s);j++)
		{
			if(s[j]=='a'||s[j]=='A') a++;
			if(s[j]=='e'||s[j]=='E') e++;
			if(s[j]=='i'||s[j]=='I') i++;
			if(s[j]=='o'||s[j]=='O') o++;
			if(s[j]=='u'||s[j]=='U') u++;
		}
		cout<<"a:"<<a<<endl;
		cout<<"e:"<<e<<endl;
		cout<<"i:"<<i<<endl;
		cout<<"o:"<<o<<endl;
		cout<<"u:"<<u<<endl;
		if(n) cout<<endl;

	}

	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char s[105];

int main()
{
	while(gets(s))
	{
		int len=strlen(s);
		s[0]-='a'-'A';
		for(int i=1;i<len;i++)
		{
			if(s[i]==' ') s[i+1]-='a'-'A';
		}
		cout<<s<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s[10011];
	while(scanf("%s",&s)!=EOF)
	{
		int maxchar=s[0];
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]>maxchar) maxchar=s[i];
		}
		for(int i=0;i<strlen(s);i++)
		{
			cout<<s[i];
			if(s[i]==maxchar)
			{
				cout<<"(max)";
			}
		}
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int n;
char s[100001];

int main()
{
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		int c=0;
		int l=strlen(s);
		if(s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z'||s[0]=='_')
		{
			for(int i=1;i<l;i++)
			{
				if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9'))
				c++;
				else
				{
					cout<<"no"<<endl;
					break;
				}
				if(c+1==l)
				{
					cout<<"yes"<<endl;
				}
			}
		}
		else cout<<"no"<<endl;
	}
	return 0;
}


#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
int a[101];
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					swap(a[i],a[j]);
				}
			}
		}
		for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
		cout<<a[n-1];
		cout<<endl;
	}
	return 0;
}



#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;

int n;

int main()
{
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int a[10001];
		int mp,mn=1000000;
		for(int i=0;i<n;i++)
		{
			cin>>a[i]
			if(a[i]<mn)
			{
				mn=a[i];
				mp=i;
			}
		}
		if(mp!=0){
			a[mp]=a[0];
			a[0]=mp;
		}
		cout<<a[0];
		for(int i=1;i<n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f=1;
		for(int i=0;i<66;i++)
		{
			if((n*i+18)%65==0)
			{
				cout<<i<<endl;
				f=0;
				break;
			}
		}
		if(f) cout<<"no"<<endl;
	}
	return 0;
}



#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n==0&&m==0) break;
		int a[1000][1000];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		int ans=a[0][0],x=0,y=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(abs(a[i][j])>abs(ans))
				{
					ans=a[i][j];
					x=i+1;
					y=j+1;
				}
			}
		}
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;

struct edge{
	int ts,id;
	bool operator < (const edge x) const {
		return ts<x.ts;
	}
}edges[N];

int n,m,ti;
map<int,int> m;
int main()
{
	cin>>n>>m>>ti;

	for(int i=0;i<m;i++)
		cin>>edges[i].ts>>edges[i].id;
	sort(edges,edges+m);



	return 0;
}
*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	int n1=max(x4,x2)-min(x1,x3);
	int n2=max(y2,y4)-min(y1,y3);
	int n=max(n1,n2);
	cout<<n*n<<endl;
	return 0;
}
*
#################   a^b
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(int a,int b,int p)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ans;
}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}

################   64λ�����˷�
#include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll q(ll a,ll b,ll p)
{
	ll ans=0;
	while(b)
	{
	    if(b&1) ans=(ans+a)%p;
	    b>>=1;
	    a=a*2%p;
	}
	return ans;

}
int main()
{
	cin>>a>>b>>p;
	cout<<q(a,b,p)<<endl;
	return 0;
}
*

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n,m,a[100001];
	while(cin>>n>>m,(n||m))
	{
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=m;
		sort(a,a+n+1);
		cout<<a[0];
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='0'&&s[i]<='9') ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;
const int N = 100001;
int a[N];
int n;
void swap(int &x,int &y)
{
	int a=x;
	x=y;
	y=a;
}
int main()
{
	while(cin>>n,n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int min_index=0,num=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]<num)
			{
				num=a[i];
				min_index=i;
			}
		}
		swap(a[min_index],a[0]);
		cout<<a[0];
		for(int i=1;i<n;i++) cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector<int> res;
int main()
{
	while(cin>>n>>m)
	{
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=i*2;
			if(i%m==0)
			{
				res.push_back(sum/m);
				sum=0;
			}
		}
		if(n%m!=0) res.push_back(sum/(n%m));
		cout<<res[0];
		for(int i=1;i<res.size();i++)
		{
			cout<<" "<<res[i];
		}
		cout<<endl;
		res.clear();
	}
	return 0;
}
*

#include <iostream>
using namespace std;

int n;
int a[33][33];

void fun()
{
	a[1][1]=1;
	a[2][1]=a[2][2]=1;
	for(int i=3;i<=30;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
}

int main()
{
	fun();
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<a[i][1];
			for(int j=2;j<=i;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

*
#include <iostream>

using namespace std;

int n;
int a,b;
int is_ans(int x)
{
	int ans=1;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			ans+=i;
			ans+=x/i;
		}
	}
	return ans;
}
int main()
{
	//cout<<is_ans(200);
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(is_ans(a)==b&&is_ans(b)==a) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
*

#include <iostream>

using namespace std;

int t;
char op;
int y;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>op>>y;
		if(op>='a'&&op<='z') cout<<-(op-'a'+1)+y<<endl;
		else cout<<op-'A'+y+1<<endl;
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

char a[40000],b[40000];
void pop(char *s)
{
	int i,len=strlen(s)-1;
	for(i=len;i>=0;i--)
	{
		if(s[i]=='0') len--;
		else break;
	}
	if(s[i]=='.') len--;
	s[len+1]='\0';
}

int main()
{
	int i;
	while(scanf("%s%s",a,b)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='.') pop(a);
		}
		for(int i=0;i<strlen(b);i++)
		{
			if(b[i]=='.') pop(b);
		}
		if(strcmp(a,b))
		cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

string s,w;

int main()
{
	while(getline(cin,s),s!="#")
	{
		set<string> ans;
		istringstream str(s);
		while(str>>w)
		{
			ans.insert(w);
		}
		cout<<ans.size()<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <string>
using namespace std;

int n,x;
//int a[11];

int main()
{
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans;
		ans=s.substr(6,5);
		ans="6"+ans;
		cout<<ans<<endl;
	}
	return 0;
}
*

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;

struct Stu{
	char name[1000];
	int sn;
	int st;
}stu[1000];

int n,m;
int cmp(Stu x,Stu y)
{
	if(x.sn==y.sn)
	{
		return x.st<y.st;
	}
	return x.sn>y.sn;
}
int main()
{
	cin>>n>>m;
	int p=0;
	while(cin>>stu[p].name)
	{
		for(int i=0;i<n;i++)
		{
			char ch;
			int k,l;
			cin>>k;
			if(k<=0) continue;
			stu[p].sn++;
			stu[p].st+=k;
			if(getchar()=='(')
			{
				cin>>l;
				cin>>ch;
				stu[p].st+=l*m;
			}
		}
		p++;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<p;i++)
	{
		cout<<left<<setw(10)<<stu[i].name<<" "<<right<<setw(2)<<stu[i].sn<<right<<" "<<setw(4)<<stu[i].st<<endl;
	}
	return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char op;
	int n,s=0;
	while(cin>>op,op!='@')
	{
		if(s) cout<<endl;
		s=1;
		cin>>n;
		getchar();

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i+n;j++)
			{
				if(j==n-1-i||j==n-1+i) cout<<op;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
//������:http://acm.hdu.edu.cn/showproblem.php?pid=2091
#include <queue>
#include <functional>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <assert.h>
using namespace std;
#define N 100005
//�ӵ㣺ע����ĩ��Ҫ�пո� ע�����ͼ�μ任��
char ch;
int main()
{
   bool flag = 0;
    while(scanf("%c",&ch),ch!='@'){  //������ʹ�� scanf("%c",ch) ���� getchar()  ��Ϊ��ȡ�߻س��� ������ scanf("%s",s) ���� cin>>sting ע����ʱ��Ҫ��"@"
      if(flag) printf("\n");
      flag = 1;
      int n;
      scanf("%d",&n);
      getchar();                     //ȡ������n�� ���Ļس�
      for(int i=0;i<n;i++){          //���ǱȽϼ���д��
         for(int j=0;j<i+n;j++){
            if(j==n-1-i || j==n-1+i || i==n-1) printf("%c",ch);
            else printf(" ");
         }
         printf("\n");
      }
    }
    return 0;
}

*
#include <iostream>
#include <stdio.h>
using namespace std;

int n,r;
void solve(int n,int r)
{
	int f=1;
	if(n<0)
	{
		f=0;
		n=-n;
	}
	string ans="";
	while(n)
	{
		int a=n%r;
		if(a==10) ans+='A';
		else if(a==11) ans+='B';
		else if(a==12) ans+='C';
		else if(a==13) ans+='D';
		else if(a==14) ans+='E';
		else if(a==15) ans+='F';
		else ans+=a+'0';
		n/=r;
	}
	if(!f) cout<<"-";
	for(int i=ans.size()-1;i>=0;i--)
	{
		cout<<ans[i];
	}
	cout<<endl;
}

int main()
{
	while(scanf("%d%d",&n,&r)!=EOF)
	{
		solve(n,r);
	}
	return 0;
}
*

#include <iostream>

using namespace std;

int a,b,c,d,e,f;
int n;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d>>e>>f;
		c+=f;
		if(c>=60)
		{
			b+=c/60;
			c=c%60;
		}
		//cout<<b<<" "<<c<<endl;
		b+=e;
		if(b>=60)
		{
			a+=b/60;
			b%=60;
		}
		cout<<a+d<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
*
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int n,k;
double a[101];
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+k);
		printf("%.2lf\n",a[k-1]);
	}
	return 0;
}


#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
ll f(int n)
{
	if(n<=1) return n;
	ll a=0,b=1;
	for(int i=1;i<n;i++)
	{
		ll c=a+b;
		a=b;
		b=c;
	}
	return b;
}

int main()
{
	int n;
	while(scanf("%d",&n),n!=-1)
	{
		cout<<f(n)<<endl;
	}
	return 0;
}

*

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long a,b;
	while(cin>>hex>>a>>b)
	{
		if(a+b<0)
		{
			cout<<setiosflags(ios::uppercase)<<hex<<"-"<<-(a+b)<<endl;
		}
		else cout<<setiosflags(ios::uppercase)<<hex<<a+b<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int a,b;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
*
#include <iostream>

using namespace std;

int a,b;
int n[1000001];

int main()
{
	n[0]=1;
	for(int i=1;i<1000002;i++)
	{
		int m=i,f=1;
		while(m)
		{
			if(m%10==4)
			{
				f=0;
				break;
			}
			else if(m%10==2&&m%100/10==6)
			{
				f=0;
				break;
			}
			m/=10;
		}
		if(f) n[i]=n[i-1]+1;
		else n[i]=n[i-1];
	}
	while(cin>>a>>b,(a||b))
	{
		cout<<n[b]-n[a-1]<<endl;
	}
	return 0;
}

*

#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char s[1000];
	double a,b,ans;
	while(~scanf("%s",s))
	{
		scanf("%lf%lf",&a,&b);
		ans+=a*b;
	}
	printf("%.1lf\n",ans);
	return 0;
}
*
#include <iostream>

using namespace std;
int t;
int a,b;

int solve(int a,int b)
{
	a=a%100;
	b=b%100;
	a+=b;
	return a%100;
}

int main(){
	cin>>t;
	while(t--)
	{
		cin>>a>>b;

		cout<<solve(a,b)<<endl;
	}
	return 0;
}


#include <iostream>
typedef long long ll;
using namespace std;
int n,m;
int g[10][10];
int st[10][10];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int ans=100,sum=0;
int total;
void dfs(int x,int y,int total,int s)
{
	if(total==sum/2)
	{
		ans=min(ans,s);
		return ;
	}
	if(total>sum/2) return ;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(st[nx][ny]==0&&nx>=0&&ny>=0&&nx<n&&ny<m)
		{
			st[nx][ny]=1;
			dfs(nx,ny,total+g[nx][ny],s+1);
			st[nx][ny]=0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>g[i][j];
			sum+=g[i][j];
		}
	}
	st[0][0]=1;
	dfs(0,0,g[0][0],1);
	if(ans!=100) cout<<ans<<endl;
	return 0;
}
*
                       codeforces 231 team
#include <iostream>

using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a+b+c>=2) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
*
#include <iostream>
using namespace std;
int a[55];
int n,k,m=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	k=a[k];
	for(int i=1;i<=n;i++)
		if(a[i]>=k&&a[i]) m++;
	cout<<m<<endl;
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	string s,t;
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s>>t;
		if(s==t)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			bool f=true;
			int lastindex;
			int m=t.size();
			lastindex=s.rfind(t[m-1]);
			s[lastindex]='1';
			if(lastindex==-1)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				int i=m-2;
				while(i>=0)
				{
					int pos=s.rfind(t[i]);
					if(pos==-1)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else if(pos>lastindex)
					{
						cout<<"NO"<<endl;
						f=false;
						break;
					}
					else
					{
						lastindex=pos;
						s[pos]='1';
					}
					i--;
				}
				if(f) cout<<"YES"<<endl;
			}

		}
	}
	return 0;
}

*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[3];
struct edge
{
	int a,b,c,d;
}edges[5];
int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	return 0;
}
*


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct P {
	int x, y;
} p[10];

struct PT {
	int x1, y1, x2, y2;
};

int cmp(P a, P b) {
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main() {
	PT t[10];
	PT s[10];
	for (int i = 0; i < 3; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p, p + 3, cmp);

	t[0] = {p[0].x, p[0].y, p[0].x, p[1].y};
	t[1] = {p[0].x, p[1].y, p[1].x, p[1].y};
	t[2] = {p[1].x, p[1].y, p[2].x, p[1].y};
	t[3] = {p[2].x, p[1].y, p[2].x, p[2].y};
	int tt = -1;
	for (int i = 0; i < 4; i++) {
		if (tt == -1)
			s[++tt] = t[i];
		else {
			auto q = s[tt];
			tt--;
			if (q.x1 == t[i].x2 || q.y1 == t[i].y2) {
				s[++tt] = {q.x1, q.y1, t[i].x2, t[i].y2};
			} else {
				s[++tt] = q;
				s[++tt] = t[i];
			}
		}
	}
	cout << tt+1 << endl;
	for (int i = 0; i <= tt; i++)
		cout << s[i].x1 << " " << s[i].y1 << " " << s[i].x2 << " " << s[i].y2 << endl;
	return 0;
}
*


#include <iostream>
using namespace std;
int n, m;
int main() {
	cin >> n >> m;
	cout << (n * m) / 2;
	return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
	int n, ans = 0;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s[0] == '+' || s[2] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
	return 0;
}
