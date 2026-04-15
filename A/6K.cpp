#include <stdio.h>
int main()
{
unsigned long int dnum;
int  rem,parity,l,i,j,num,t;
int s[1000];
while(scanf("%lu", &dnum)==1)
{
num=dnum;
parity=0;
l=0;
while(dnum>0)
 {
 rem = dnum%2;
 l=l+1;
 if(rem==1)
 parity=parity+1;
 dnum = dnum / 2 ;
 }


 for(i=0;i<l;i++)
     {
    rem = num%2;
     s[i]=rem;
     num = num / 2 ;
    }
printf("The parity of ");
for(i=l-1;i>=0;i--)
    printf("%d",s[i]);
printf(" is %d (mod 2).\n",parity);
}
return 0;
}
#include <stdio.h>
int main()
{
unsigned long int dnum;
int  rem,parity,l,i,j,num,t;
int s[1000];
while(scanf("%lu", &dnum)==1)
{
num=dnum;
parity=0;
l=0;
while(dnum>0)
 {
 rem = dnum%2;
 l=l+1;
 if(rem==1)
 parity=parity+1;
 dnum = dnum / 2 ;
 }


 for(i=0;i<l;i++)
     {
    rem = num%2;
     s[i]=rem;
     num = num / 2 ;
    }
printf("The parity of ");
for(i=l-1;i>=0;i--)
    printf("%d",s[i]);
printf(" is %d (mod 2).\n",parity);
}
return 0;
}
#include<stdio.h>
int main()
{
    int m,n,x[2000001],i,j,k;
    while(scanf("%d",&n)==1)
    {
if(n==0)
break;
    for(i=1;i<=n;i++)
      {
      scanf("%d",&x[i]);
      }
      m=0;
    for(i=0;i<120;i++)
    for(j=1;j<=n;j++)
      {
      if(x[j]==i && m<=n-1)
        {
         printf("%d ",i);
         m++;
        }
      }

    }
}
#include<stdio.h>
int main()
{
int n,t,a[100],i,j;
while(scanf("%d",&t)==1)
 {
 for(i=1;i<=t;i++)
  {
  scanf("%d",&n);
  for(j=0;j<n;j++)
  scanf("%d",&a[j]);
  printf("Case %d: %d\n",i,a[j/2]);
  }
 }
 return 0;
}
#include <stdio.h>

int main(){
    int T,n ,tc;

    scanf("%d",&T);

    for( tc = 1;tc <= T;++tc){
        scanf("%d",&n);

        long long ans = (long long)n * (n-1);

        printf("Case %d: ",tc);

        if(ans % 4 == 0) printf("%lld\n",ans / 4);
        else printf("%lld/2\n",ans / 2);
    }

    return 0;
}
#include<stdio.h>
int R[100];
int main()
{
    int t, n, x, i, swap, possition, k=0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d", &x);
            R[x]=i;
        }
            swap= 0;
            possition= -1;
            for(i=1; i<=n;i++){
                if(R[i]<possition){
                swap++;
                possition=n+1;
                }
                else
                    possition=R[i];
                    }
                     printf("Case %d: %d\n", ++k, swap);
                     }
                     return 0;
                     }
#include<stdio.h>
int main()
{
    long long a[60],i,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        a[0]=0;
        a[1]=1;
        for(i=2;i<=n+1;i++)
        a[i]=a[i-1]+a[i-2];
        printf("%lld\n",a[n+1]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    long long  n,a,s,c;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
        a=n;
        c=0;
        while(1)
        {
            s=0;
        while(n!=0)
            {
                s=s*10+n%10;
                n/=10;
            }
        if(s==a)
        break;
        else
        {
        n=s+a;
        a=s+a;
        c++;
        }

    }
    printf("%lld %lld\n",c,a);
        }
    }

   return 0;
}
#include<stdio.h>
int main()
{
unsigned long int a,b,x,y;
int i,j,c,d,carry;
while(scanf("%lu%lu",&a,&b)==2)
{
c=0;
d=0;
if(a==0 && b==0) break;
for(i=0;i<9;i++)
    {
    x=a%10;
    y=b%10;
    if(x+y>=10)
        {
        d=d+1;
        do
            {
            a=a/10;
            b=b/10;
            x=a%10;
            y=b%10;
            if(x+y==9)
            c=c+1;
            else if(x+y>9)
            d=d+1;
            }while(x+y>=9);
        }
    a=a/10;
    b=b/10;
    if(a==0 && b==0) break;
    }
carry=d+c;
if(carry==0)
printf("No carry operation.\n");
else if(carry==1)
printf("%d carry operation.\n",carry);
else
printf("%d carry operations.\n",carry);
}
return 0;
}
#include<stdio.h>

int main()
{
int n,c,b[3010],a[3010],i;
while(scanf("%d",&n)==1)
{
c=1;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
b[i]=abs(a[i+1]-a[i]);
}
sort(b,b+i);
for(i=1;i<n;i++)
{
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
else
printf("Jolly\n");
}
return 0;
}
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
int n,c,b[3010],a[3010],i;
while(scanf("%d",&n)==1)
{
c=1;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
b[i]=abs(a[i+1]-a[i]);
}
sort(b,b+i);
for(i=1;i<n;i++)
{
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
else
printf("Jolly\n");
}
return 0;
}
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,n,a[5000],sum;
    scanf("%d",&t);
    while(t--)
    {
        int p=50000000;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        sort(a,a+i);

        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
            sum+=abs(a[j]-a[k]);
            }
            p=min(sum,p);
        }
        printf("%d\n",p);
    }
    return 0;
}
#include<stdio.h>
int main()
{
long long year;
int c;
while(scanf("%ld",&year)==1)
{
if(year>=2000)
{
c=0;
if(year%4==0 || year%400==0 || year%55==0)
{
printf("This is leap year");
c++;
}
if(year%15==0)
{
if(c==1)
printf("\nThis is huluculu festival year");
else
printf("This is huluculu festival year");
c++;
}
if(year%55==0)
{
if(c>0)
printf("\nThis is buluculu festival year");
else
printf("This is buluculu festival year");
c++;
}
if(c==0)
printf("This is an ordinary year");
printf("\n\n");
}
}
return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	while(cin>>n)
	{

		if(n%15==0)
		{
			if(n%4==0 || n%400==0)
			{
				cout<<"This is leap year."<<endl;
				cout<<"This is huluculu festival year."<<endl;
				cout<<endl;
			}
			else cout<<"This is huluculu festival year.\n"<<endl;
		}
		else if(n%4==0 || n%400==0)
		{
			if(n%55==0){
				cout<<"This is leap year."<<endl;
				 cout<<"This is bulukulu festival year.\n"<<endl;
			}
			else cout<<"This is leap year.\n"<<endl;
		}
		else if((n%4==0||n%400==0) && n%55==0 && n%15==0)
		{
			cout<<"This is leap year."<<endl;
			cout<<"This is huluculu festival year."<<endl;
			cout<<"This is bulukulu festival year."<<endl;
			cout<<endl;
		}
		else{
			cout<<"This is an ordinary year."<<endl;
		}
	}

	return 0;
}
#include<stdio.h>
int main()
{
int v, t, ans;
scanf("%d %d", &v, &t);
ans=(2*v*t);
printf("%d\n", ans);
return 0;
}
#include<stdio.h>
int main()
{
    long int n, a;
    while(scanf("%ld", &n)==1)
    {
    if(n>=0 && n<=210000000)
    {
    a=((n*(n+1))/2)+1;
    printf("%ld\n", a);
    }
    else if(n<0)
        break;
     }
     return 0;
     }
#include<stdio.h>
#include<string.h>
int main()
{
long int l,i;
char s;
while(scanf("%c",&s)==1)
    {
    l=strlen(s);
    for(i=0;i<l;i++)
        {
        switch(s[i])
            {
            case 'W':
            printf("Q");    break;
            case 'E':
            printf("W");    break;
            case 'R':
            printf("E");    break;
            case 'T':
            printf("R");    break;
            case 'Y':
            printf("T");    break;
            case 'U':
            printf("Y");    break;
            case 'I':
            printf("U");    break;
            case 'O':
            printf("I");    break;
            case 'P':
            printf("O");    break;
            case 'S':
            printf("A");    break;
            case 'D':
            printf("S");    break;
            case 'F':
            printf("D");    break;
            case 'G':
            printf("F");    break;
            case 'H':
            printf("G");    break;
            case 'J':
            printf("H");    break;
            case 'K':
            printf("J");    break;
            case 'L':
            printf("K");    break;
            case 'X':
            printf("Z");    break;
            case 'C':
            printf("X");    break;
            case 'V':
            printf("C");    break;
            case 'B':
            printf("V");    break;
            case 'N':
            printf("B");    break;
            case 'M':
            printf("N");    break;
            case '2':
            printf("1");    break;
            case '3':
            printf("2");    break;
            case '4':
            printf("3");    break;
            case '5':
            printf("4");    break;
            case '6':
            printf("5");    break;
            case '7':
            printf("6");    break;
            case '8':
            printf("7");    break;
            case '9':
            printf("8");    break;
            case '0':
            printf("9");    break;
            case '-':
            printf("0");    break;
            case '=':
            printf("-");    break;
            case '[':
            printf("P");    break;
            case ']':
            printf("[");    break;
            case '\\':
            printf("]");    break;
            case ';':
            printf("L");    break;
            case '1':
            printf("`");    break;
            case ',':
            printf("M");    break;
            case '.':
            printf(",");    break;
            case '/':
            printf(".");    break;
            case ' ':
            printf(" ");    break;
            default:
            printf(";");    break;
             }

        }
    printf("\n");
    }
return 0;
}
#include <stdio.h>
int main ()
{
    long int  a,b,i,j,k;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        int len=1,maxlen=0;
        if(a<b)
        {
            for(i=a; i<=b; i++)
            {
                for(j=i,len=1; j!=1; len++)
                {
                    if(j%2==0)

                    {

                        j=j/2;
                    }

                    else

                    {

                        j=3*j+1;
                    }
                }
                if(len>maxlen)
                {
                    maxlen=len;
                }
            }
        }
        else
        {
            for(i=b; i<=a; i++)
            {
                for(j=i,len=1; j!=1; len++)
                {
                    if(j%2==0)

                    {

                        j=j/2;
                    }

                    else

                    {

                        j=3*j+1;
                    }
                }
                if(len>maxlen)
                {
                    maxlen=len;
                }
            }
        }
        printf("%d %d %d\n",a,b,maxlen);

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    long long int a,b,c;
    while(cin>>s1>>s2)
    {
        a=s1;
        b=s2;
        c=a*b;
        c.print();
        cout<<endl;
    }
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    long long n,a,b;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        a=sqrt(n);
        b=a*a;
        if(b==n)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
     long int i,s ,d ,sum;
     while(scanf("%ld %ld", &s, &d)!=EOF){
     sum=0;
     for(i=s; s>0;i++){
          sum=sum+i;
          if(sum>d||sum==d){
               printf("%ld\n", i);
               break;

          }
     }
     }
     return 0;
}
#include<stdio.h>
#include<math.h>
int main ()
{
    double a;
    double b;
    double c;

    while ( scanf ("%lf %lf %lf", &a, &b, &c) != EOF ) {

        if ( b + c <= a || c + a <= b || a + b <= c ) {
            printf ("The radius of the round table is: 0.000\n");
            continue;
        }

        double radius = .5 * sqrt (((b + c - a)*(c + a - b)*(a + b - c)) / (a + b + c));

        printf ("The radius of the round table is: %.3lf\n", radius);
    }

    return 0;
}
#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,s,ans;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
if(a<=0||b<=0||c<=0)
{
printf("The radius of the round table is: 0.000\n");
continue;
}
    s=(a+b+c)/2;

    ans=sqrt( ((s-a)*(s-b)*(s-c))/s);
    printf("The radius of the round table is: %.3lf\n",ans);

    }
}
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,r,s,p;
while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
    if(a<=0 || b<=0 || c<=0){
    printf("The radius of the round table is: 0.000\n");
    continue;
    }
    else
        {
        s=(a+b+c)/2;
        r=(s-a)*(s-b)*(s-c)*s;
        p=sqrt(r)/s;
        printf("The radius of the round table is: %.3lf\n",p);
        }
    }
}
#include<stdio.h>
int main()
{
double a1,a2,b1,b2,c1,c2,d1,d2,e1,e2;
while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2)==8)
{
if(a1==b1 && a2==b2)
{e1=c1+d1-a1;
e2=c2+d2-a2;}
else if(a1==c1 && a2==c2)
{e1=b1+d1-a1;
e2=b2+d2-a2;}
else if(a1==d1 && a2==d2)
{e1=c1+b1-a1;
e2=c2+b2-a2;}
else if(b1==c1 && b2==c2)
{e1=a1+d1-b1;
e2=a2+d2-b2;}
else if(b1==d1 && b2==d2)
{e1=a1+c1-b1;
e2=a2+c2-b2;}
else if(c1==d1 && c2==d2)
{e1=b1+a1-c1;
e2=b2+a2-c2;}
printf("%.3lf %.3lf\n",e1,e2);
}
return 0;
}
#include<stdio.h>
int main()
{
long long n;
while(scanf("%lld",&n)==1)
{
if(n<0&&n%2==0) printf("Underflow!\n");
else if(n<0&&n%2!=0) printf("Overflow!\n");
else if(n==0||n<=7) printf("Underflow!\n");
else if(n==8) printf("40320\n");
else if(n==9) printf("362880\n");
else if(n==10) printf("3628800\n");
else if(n==11) printf("39916800\n");
else if(n==12) printf("479001600\n");
else if(n==13) printf("6227020800\n");
else if(n>13) printf("Overflow!\n");
}
return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000001];
    set <int> S;
    int i,j,k,l,n,m,a,b;
    int tc = 1;
    int flag;
    while(scanf("%s",&s)==1)
    {
        l = strlen(s);
        if(l==0)
            break;
        scanf("%d",&n);
        printf("Case %d:\n",tc);
        for(i=0;i<n;i++)
        {
            flag = 0;
            scanf("%d %d",&a,&b);
            if(a>b)
                swap(a,b);
            for(j=a+1;j<=b;j++)
            {
                if(s[a]!=s[j])
                flag = 1;
            }

            if(flag == 0)
                printf("Yes\n");
            else printf("No\n");
        }
        tc++;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int i, j, len_s, len_t, temp;
    while(cin >> s >> t)
    {
        len_s = s.length();
        len_t = t.length();
        temp=0;
        for(i=0; i<len_s; i++)
        {
            for(j=0; j<len_t; j++)
            {
                if(s[i]==t[j])
                {
                    temp=temp+1;
                    i++;
                }
            }
        }
        if(temp==len_s)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
int n,k,s,b,tb,r;
while(scanf("%d%d",&n,&k)==2)
{
s=n;
tb=0;
while(s>=k)
    {
    b=s/k;
    r=s%k;
    s=b+r;
    tb=tb+b;
    }
printf("%d\n",n+tb);
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,s;

    while (scanf("%lf%lf%lf", &a, &b, &c) == 3){

        double s = (a + b + c) / 2.0;
        double area = (4.0 / 3.0) * sqrt(s * (s - a) * (s - b) * (s - c));

        if(area > 0)
            printf("%0.3lf\n", area);
        else
            printf("-1.000\n");

    }
    return 0;
}
 #include<stdio.h>
int main()
{
     int a[10000], avr, b, n,j,i,t,sum;
     float ans;
     while(scanf("%d", &t)!=EOF)
          {

               for(j=0; j<t;j++)
               {

                    b=0;
                    sum=0;
                    scanf("%d", &n);
                    for(i=0;i<n;i++)
                         sum=sum+a[i];
                    avr=sum/n;
                    for(i=0;i<n;i++)
                         if(a[i]>avr)
                         b=b+1;
                    ans=((float)b/(float)n);
                    printf("%0.3f%\n", ans*100);

               }
          }
          return 0;
     }
#include<stdio.h>
int main()
{
int a[1020],i,j,n,sum,test,b,avr;
float ans;
while(scanf("%d",&test)==1)
{
for(j=0;j<test;j++)
    {
    b=0;
    sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avr=sum/n;
    for(i=0;i<n;i++)
        if(a[i]>avr)
            b=b+1;
    ans=((float)b/(float)n);
    printf("%.3f%%\n",ans*100);
    }
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a[10001],b[10001];
int main()
{
    int q,n,s,d,i,k,j,l;

    l=0;
    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0&&q==0)
            break;

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<q;i++)
            scanf("%d",&b[i]);

        sort(a,a+n);

        printf("CASE# %d:\n",++l);

        for(i=0;i<q;i++)
        {
            k=0;
            for(j=0;j<n;j++)
            {
                if(b[i]==a[j]&&k!=1)
                {
                   printf("%d found at %d\n",b[i],j+1);
                   k=1;
                }
            }
            if(k==0)
                printf("%d not found\n",b[i]);
        }
    }

    return 0;
}
#include<stdio.h>
int main()
{
long long int n;
while(scanf("%lld",&n)==1 && n>=0)
{
if(n==1)
printf("0%%\n");
else
printf("%lld%%\n",n*25);
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
int n, a, b, c, d;
    string s;
    while(cin>>a>>b>>c>>d)
    {
        if(!a && !b && !c && !d)
         break;
        int ans=1080;
        if(a<b) ans+=(40+a-b)*9;
        else ans+=(a-b)*9;
        if(b>c)  ans+=(40+c-b)*9;
        else ans+=(c-b)*9;
        if(c<d) ans+=(40+c-d)*9;
        else ans+=(c-d)*9;
        cout<<ans<<"\n";
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, a, b, c, d;
    while(cin>>a>>b>>c>>d)
    {
        if(!a && !b && !c && !d)
         break;
        int ans=1080;
        if(a<b)
            ans+=(40+a-b)*9;
        else
        ans+=(a-b)*9;
        if(b>c)
        ans+=(40+c-b)*9;
        else
        ans+=(c-b)*9;
        if(c<d)
        ans+=(40+c-d)*9;
        else
        ans+=(c-d)*9;
        cout<<ans<<"\n";
    }
return 0;
}
#include<stdio.h>
int main()
{
    unsigned long int n,x;
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
    break;
    x=(n*10)/9;
    if(n%9==0)
    printf("%ld %ld\n",x-1,x);
    else
   printf("%ld\n",x);
   }
    return 0;
    }
#include<stdio.h>
int main()
{
int a,b;
while(scanf("%d",&a)==1 && a!=0)
{if(a>100)
b=a-10;
else
b=91;
printf("f91(%d) = %d\n",a,b);}
return 0;
}
#include<iostream>
using namespace std;

int main(){
	int n,m,k;
	while(cin>>n>>m>>k){
		if(n==0 && m==0 && k==0)
			break;
		if(m%2==0)
			cout<<"Gared\n";
		else
			cout<<"Keka\n";
		}
	return 0;
}
#include<stdio.h>
int main()
{
    int a,b,t,k=0,i=0, sum;
    scanf("%d", &t);
    while(t--)
    {
    scanf("%d %d", &a, &b);
    {
        sum=0;
        for(i=a; i<=b; i++)
        if(i%2!=0)
        sum=sum+i;
        printf("Case %d: %d\n", ++k, sum);
    }
    }
    return 0;
    }
    // 10874
#include<stdio.h>
#include<math.h>
int main()
{
long n,kase=1,x;
while(scanf("%ld",&n)==1)
{
if(n==0)
break;
x=ceil((3+sqrt(9+8*n))/2);

printf("Case %ld: %ld\n",kase,x);
kase++;
}
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];
    int i, sum, prime, val,j;
    while(scanf("%s",a)==1)
    {
        sum=0;prime=1;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]>64 && a[i]<91)
                val=a[i]-38;
            if(a[i]>96 && a[i]<123)
                val=a[i]-96;
                sum=sum+val;
        }
        for(j=2;j<sum;j++)
        {
            if((sum%j)==0)
            prime=0;
        }
        if(prime==0)
            printf("It is not a prime word.\n");
        if(prime==1)
            printf("It is a prime word.\n");
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,s;
char n[1050];
while(1)
{
s=0;
scanf("%s",&n);
i=strlen(n);
for(j=0;j<i;j++)
{
s=s*10+n[j]-'0';
s=s%11;
}
if(s==0 && i==1)
    break;
else if(s==0)
    printf("%s is a multiple of 11.\n",n);
else
    printf("%s is not a multiple of 11.\n",n);
}
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,k,n,count,a[100000],mod;
    while(scanf("%ld",&n)==1)
    {
        if (n==0)
            break;
        count=0;
        for(i=0; ; i++)
        {
            mod=n%2;
            if(mod==1)
                count++;
            a[i]=mod;
            if(n==0)
                break;
            n=n/2;

        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
            printf("%d",a[j]);
        printf(" is %d (mod 2).\n",count);


    }
    return 0;
}
#include<stdio.h>
int main()
{
long long int n,i,sum[100000],fib[100000];
while(scanf("%lld",&n)==1 && n>=0)
{
fib[0]=0;
fib[1]=1;
sum[0]=1;
for(i=2;i<=n+1;i++)
    fib[i]=fib[i-1]+fib[i-2];
for(i=1;i<=n;i++)
    sum[i]=sum[i-1]+fib[i+1];
printf("%lld %lld\n",sum[n]-fib[i],sum[n]);
}
return 0;
}
#include<stdio.h>
#include<conio.h>
int main(){
int i,j,k,l;
long long int ar[100],n,max;
l=0;
while(scanf("\n%d",&n)==1){
j=0;
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
j++;
}
max=1;
for(k=0;k<n;k++){
if(ar[k]>0){
max=max*ar[k];
}
}
if(max>0)printf("Case #%d: The maximum product is %d.\n\n",max);
if(max<=0)printf("Case #%d: The maximum product is 0.\n\n");
l++;
}
return 0;
}
#include<stdio.h>
int main()
{
int a,n;
while(scanf("%d",&n)==1)
{
a=n;
while(n>=3)
{
a=a+(n/3);
n=(n/3)+(n%3);
}
if(n==2)
{
a++;
}
printf("%d\n",a);
}
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,l,d,a,n;
char s[1000];
while(scanf("%d",&n)==1)
 {
 if(n==0)
    break;
 scanf(" ");
 gets(s);
 l=strlen(s);
 d=l/n;
 for(i=1;i<=n;i++)
  {
  a=i*d;
  for(j=a-1;j>=a-d;j--)
  printf("%c",s[j]);
  }
 printf("\n");
 }
 return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,income;
    int x;
    while(scanf("%lld %d",&m, &x)==2)
    {
        if(m==0 && x==0) break;
        if(x==100)
            printf("Not found\n");
        else
        {
            income = (m-1)*100/(100-x);
            if((m-1)*100%(100-x)==0)
                income = income - 1;
            if(income<m)
                printf("Not found\n");
            else
               printf("%lld\n",income);
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int cases,n,val;
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&n);
        int max=0,min=100;
        while(n--){
            scanf("%d",&val);
            if(val>max)
                max=val;
            if(val<min)
                min=val;
        }
        printf("%d\n",2*(max-min));
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ages[2000000];
	int n;

	while (true) {
		scanf("%d", &n);
		if (n == 0)
			break;

		for (int i = 0; i < n; i++) {
			scanf("%d", &ages[i]);
		}

		std::sort(ages, ages + n);

		for (int i = 0; i < n; i++) {
			printf("%d", ages[i]);
			if(i!=n-1)printf(" ");
		}
		printf("\n");
	}

	return 0;
}
#include<stdio.h>
int main()
{
int k,n,m,x,y,i;
while(scanf("%d",&k)==1){
if(k==0)
break;
scanf("%d %d",&n,&m);
for(i=0;i<k;i++)
{
scanf("%d %d",&x,&y);
if(x==n || y==m){
    printf("divisa\n");
}
else if(x>n && y>m){
    printf("NE\n");
}
else if(x<n&&y>m){
    printf("NO\n");
}
else if(x<n&&y<m){
    printf("SO\n");
}
else if(x>n&&y<m){
    printf("SE\n");
}
}
}
return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char a[107];
    int n,s,j,t,i;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        s=0;
        n=strlen(a);
            for(j=0;j<n;j++)
            {
            if((a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' '))
            s+=1;
                else if((a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x'))
            s+=2;
                    else if((a[j]=='c')||(a[j]=='f')||(a[j]=='i')||(a[j]=='l')||(a[j]=='o')||(a[j]=='r')||(a[j]=='v')||(a[j]=='y'))
            s+=3;
                        else if((a[j]=='s')||(a[j]=='z'))
            s+=4;
        }
        printf("Case #%d: %d\n",i,s);
    }

    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    char a[107];
    int n,s,j,t,i;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(a);
        s=0;
        n=strlen(a);
            for(j=0;j<n;j++)
            {
            if((a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' '))
            s+=1;
                else if((a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x'))
            s+=2;
                    else if((a[j]=='c')||(a[j]=='f')||(a[j]=='i')||(a[j]=='l')||(a[j]=='o')||(a[j]=='r')||(a[j]=='v')||(a[j]=='y'))
            s+=3;
                        else if((a[j]=='s')||(a[j]=='z'))
            s+=4;
        }
        printf("Case #%d: %d\n",i,s);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int t,num;

    scanf("%d",&t);
    while(t--){
    scanf("%d",&num);
    num=num*63;
    num=num+7492;
    num=num*5;
    num=num-498;
    num=num/10;
    num=num%10;
    if(num>=0)
    printf("%d\n",num);
    else
    printf("%d\n",-num);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double s,s1;
    long long int n,test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lf",&s);
        s1=(-1 + sqrt(1+(8*s)))/2;
        n=(long long)(s1);
        printf("%lld\n",n);
    }

}
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,j=1;
while(scanf("%d",&a)==1 && (a>=0))
{
if(a==1)
printf("Case %d: 0\n",j);
for(i=0;i<14;i++)
if(pow(2,i)<a && a<=pow(2,i+1))
printf("Case %d: %d\n",j,i+1);
j++;
}
return 0;
}
#include<stdio.h>
int main()
{
    int N,e,f,c,a,b,d,i;
    while (scanf("%d",&N)==1)
    {
        for (i=0;i<N;i++)
        {
            scanf("%d %d %d",&e,&f,&c);
            b=0;
            d=e+f;
            while (d>=c)
            {
                a=d/c;
                b=b+a;
                d=a+(d%c);
            }
            printf("%d\n",b);
        }
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
   double u, v, s, t, a;
   int i=0, n;
   while(scanf("%d",&n)==1 && n!=0)
   {
       s=0,v=0,u=0,t=0,a=0;

       if(n==1)
       {
       scanf("%lf %lf %lf", &u, &v, &t);
       s=(u+v)*t/2;
       a=(v-u)/t;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, s, a);
       }
       else if(n==2){

        scanf("%lf %lf %lf", &u, &v, &a);
        t=(v-u)/a;
        s=t*(u+v)/2;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, s, t);
       }
       else if(n==3)
       {
       scanf("%lf %lf %lf", &u, &a, &s);
       v=sqrt(u*u+2*a*s);
       t=(v-u)/a;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, v, t);
       }
       else if(n==4)
       {
       scanf("%lf %lf %lf", &v, &a, &s);
       u = sqrt(v*v - 2*a*s);
              t=(v-u)/a;
       printf("Case %d: %0.3lf %0.3lf\n", ++i, u, t);
       }
       }
       return 0;
       }
#include<stdio.h>
int main()
{
    int a,b,c,t,i=0,ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a , &b, &c);
        if(a>b&& b>c|| a<b && b<c)
        ans=b;
        if( a>c && c>b || a<c && a<c && c<b)
        ans =c;
        if (b>a && a>c || b<a && c>a)
        ans =a;
        printf("Case %d: %d\n", ++i, ans);
        }
        return 0;
    }
#include<stdio.h>
int main()
{
   int n,t, L[49], hj, lj, j, i=0;
   scanf("%d", &t);
   while(t--)
   {
   hj=0; lj=0;
   scanf("%d",&n);
   for(j=0; j<n; j++){
   scanf("%d", &L[j]);
   }
   for(j=0; j<n-1; j++)
   {
   if(L[j]<L[j+1])
   hj++;
   if(L[j]>L[j+1])
   lj++;
   }
   printf("Case %d: %d %d\n", ++i, hj,lj);
   }
   return 0;
   }
#include<stdio.h>
int main()
{
    int t1,t2,f,at,ct1,ct2,ct3,c,d,n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
           scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<=ct3)
           c=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
           c=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
             c=(ct1+ct2)/2;
        d=t1+t2+f+at+c;
        if(d>=90)
        printf("Case %d: A\n",i);
        else if(d>=80)
        printf("Case %d: B\n",i);
        else if(d>=70)
        printf("Case %d: C\n",i);
        else if(d>=60)
        printf("Case %d: D\n",i);
        else if(d<60)
        printf("Case %d: F\n",i);

        }
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int T,k,p,sum,n,ans,i;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d%d%d",&n,&k,&p);
        sum=k+p;
        if(sum>n){
        ans=sum%n;
            if(ans==0){
                ans=n;
            }
        }
        else{
            ans=sum;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
#include<stdio.h>
int main()
{
int a,b,c,t;
  scanf("%d", &t);
  while(t--)
   {
  scanf("%d %d %d",&a,&b,&c);
         if (a==0 && b==0 && c==0)
         break;
           else if (a*a==b*b+c*c)
                     printf("right\n");
          else if (b*b==a*a+c*c)
                     printf("right\n");
          else if (c*c==a*a+b*b)
                     printf("right\n");
          else
                     printf("wrong\n");
         }
         return 0;
}
#include<stdio.h>
int main()
{
    int n;
    int coke=0;
    while(scanf("%d",&n)==1){
        if(n==0)

break;
        coke=0;
        while(n>=3){

n=n-3;

coke++;
            n=n+1;
            }
    if(n==2)
        printf("%d\n",(coke+1));
    else
        printf("%d\n",coke);
    }
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum,r,l;
    char s[1020];
    while(gets(s))
    {
        r=0;
        l=strlen(s);
        if(l==1 && s[0]=='0')
        break;
        for(i=0;i<l;i++)
        {
        sum=r*10+(s[i]-'0');
        r=sum%17;
        }
        if(r==0)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
int a,b,c,i,t;
while(scanf("%d",&t)==1)
{
for(i=0;i<t;i++)
 {
 scanf("%d%d%d",&a,&b,&c);
 if(a+b<=c || b+c<=a || a+c<=b)
 printf("Wrong!!\n");
 else
 printf("OK\n");
 }
}
return 0;
}
#include<stdio.h>
int main()
{
    int n,c,i,a[15],up,down;
    printf("Lumberjacks:n");
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            for(i=0;i<10;i++)
            {
                scanf("%d",&a[i]);
            }
            up=a[0];
            down=a[1];

            if(up>down)
            {
                c=0;
                for(i=0;i<9;i++)
                {
                if(a[i]>a[i+1])
                {
                c++;
                }
                }
            }
            else if(up<down)
            {
                c=0;
                for(i=0;i<9;i++)
                {
                if(a[i]<a[i+1])
                {
                c++;
                }
                }
            }

            if(c==9)
            printf("Ordered\n");
            else
            printf("Unordered\n");

        }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int t,i;
    double f,a,c,d;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf %lf",&c,&d);
            f = 9*c/5+d;
            a = f*5/9;
            printf("Case %d: %.2lf\n",i,a);
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char s[20];
    while(gets(s)){
    if(strcmp(s, "#")==0){
                break;
    }
    if(strcmp(s, "HELLO")==0)
    printf("Case %d: ENGLISH\n", ++i);
    else if(strcmp(s, "HOLA")==0)
    printf("Case %d: SPANISH\n",++i);
    else if(strcmp(s, "HALLO")==0)
    printf("Case %d: GERMAN\n",++i);
    else if(strcmp(s, "BONJOUR")==0)
    printf("Case %d: FRENCH\n", ++i);
    else if(strcmp(s, "CIAO")==0)
    printf("Case %d: ITALIAN\n", ++i);
    else if(strcmp(s, "ZDRAVSTVUJTE")==0)
    printf("Case %d: RUSSIAN\n", ++i);
    else
    printf("Case %d: UNKNOWN\n", ++i);
    }
    return 0;
    }
#include<stdio.h>
int main()
{
int n,test=0;
while(scanf("%d",&n)==1)
{
if(n==0)
    break;
int a[1005],i,c1=0,c2=0;
test++;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]==0)
    c2++;
else
    c1++;
}
printf("Case %d: %d\n",test,c1-c2);
}
return 0;
}
#include <stdio.h>
# include <string.h>

int main()
{
   int n;
   char a[7],chr;
 scanf("%d%c",&n,&chr);
while(n--)
{

  gets(a);
  if(strlen(a)==5)
  printf("3\n");
  else if((a[0]=='o' && a[1]=='n')||
          (a[0]=='o' && a[1]=='e')||
          (a[1]=='n' && a[2]=='e')||
          (a[0]=='o' && a[2]=='e')||
          (a[0]=='o' && a[2]=='n'))
  printf("1\n");
  else
  printf("2\n");

}

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
	int t, x, sum = 0;
	char s[20];

	scanf("%d", &t);
	while (t--) {
        scanf("%s", s);

        if (strcmp(s, "donate") == 0) {
        scanf("%d", &x);
        sum = sum+x;
        }
        else {
        printf("%d\n", sum);
        }
	}

	return 0;
}
#include<stdio.h>
int main()
{
    long long a,n,m,i,sum;
    while(scanf("%lld",&a)==1)
    {
        if(a==0)
            break;
        n=0;
        m=1;
        for(i=1; i<=a; i++)
        {
            sum=n+m;
            n=m;
            m=sum;
        }
        printf("%lld\n",sum);
    }

    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, t, ans;
    scanf("%d", &t);
    while(t--)
    {
        ans=0;
        scanf("%d %d %d", &a,&b, &c);
        ans=c*(a+(a-b))/(a+b);
        if(ans<=0)
        printf("0\n");
        else
        printf("%d\n", ans);
        }
        return 0;
        }
#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n%6)
        cout<<"N"<<endl;
        else
        cout<<"Y"<<endl;
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
char s[6];
int i=0;
while (gets(s)){
if(strcmp(s, "*")==0)
break;
else if (strcmp(s, "Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n", ++i);
else if(strcmp(s, "Umrah")==0)
    printf("Case %d: Hajj-e-Asghar\n", ++i);
  }
  return 0;
  }
#include<stdio.h>
#include<string.h>
#include<math.h>
#define Pi 2*acos(0.0)
int main()
{
    int t;
    double b,c,r,h,g,n;
    scanf("%d",&t);
    while(t--)
    {
       r=0;
       scanf("%lf",&n);
       r=n/5;
       h=(n*6)/10;
       r=Pi*r*r;
       g=(n*h)-r;
       printf("%.2lf %.2lf\n",r,g);
    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,tst;
    char nm[5];
    scanf("%d",&tst);
    for(a=0;a<tst;a++)
    {
        scanf("%3s-%4d",nm,&c);
        b=26*26*(nm[0]-'A')+26*(nm[1]-'A')+(nm[2]-'A');
        d=abs(b-c);
        if(d<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
    }
#include<stdio.h>

int main()
{
 int a,b,c;

 while(scanf("%d %d %d",&a,&b,&c)==3)
 {

  if(a+b==2 && c==0) printf("C\n");
   else if(a+c==2 && b==0) printf("B\n");
     else if(b+c==2 && a==0) printf("A\n");
      else if(a+c+b==0) printf("*\n");
       else if(a+b+c==3) printf("*\n");
        else if(a+b==0 && c==1) printf("C\n");
         else if(a+c==0 && b==1) printf("B\n");
          else if(b+c==0 && a==1) printf("A\n");
 }
 return 0;
}
#include <stdio.h>

int main()
{
    double l,w,d,o,a,b,c;
    int n,m,i,j,k;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&o);
        if(((l<=56&&w<=45&&d<=25)||(l+w+d<=125))&&o<=7)
        {
            printf("1\n");
            k++;
        }
        else printf("0\n");
    }
    printf("%d\n",k);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,b,w,a,t,n,m;
    char ch[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        b=0;
        t=0;
        a=0;
        w=0;
        scanf("%d",&m);
        getchar();
        for(j=0; j<m; j++)
        {
            scanf("%c",&ch[j]);
        }
        for(k=0; k<m ; k++)
        {

            if(ch[k]=='B')
                b++;
            if(ch[k]=='W')
                w++;
            if(ch[k]=='A')
                a++;
            if(ch[k]=='T')
                t++;
        }
        if(b==0 && w==0 && a>0 && t==0)
        {
              printf("Case %d: ABANDONED\n",i);
        }
         else if(b==0 && t==0)
        {
            printf("Case %d: WHITEWASH\n",i);
        }
        else if(t==0 && w==0)
        {
                 printf("Case %d: BANGLAWASH\n",i);
        }
        else if(b>w)
        {
            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        }
        else if(w>b)
        {
            printf("Case %d: WWW %d - %d\n",i,w,b);
        }
        else if(b==w)
        {
            printf("Case %d: DRAW %d %d\n",i,b,t);
        }
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sd,ld,k,x,y,z;
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f%f%f",&x,&y,&z);

        k=sqrt(((y*y)+(x*x)));
        if(k<=z)
        {
         sd=z-k;
        }
        else if(k>z)
        {
            sd=k;
        }
        ld=z+k;
        printf("%.2f %.2f\n",sd,ld);

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long int powera(long long int a,long long int b)
{
    long long int x=1,i;
    for(i=1;i<=b;i++)
    {
        x*=a;
    }
    return x;
}
int main()
{
   long long int number, sum = 0, temp, remainder,n,i,x;

    cin>>n;
    while(n--)
    {
   scanf("%lld",&number);

   temp = number;
   sum=0;
   x=0;

   while(temp!=0)
   {
       x++;
       temp/=10;
   }
   temp=number;
   while( temp != 0 )
   {
      remainder = temp%10;
      sum = sum + powera(remainder,x);
      temp = temp/10;
   }

   if ( number == sum )
      printf("Armstrong\n");
   else
      printf("Not Armstrong\n");
    }
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
	int A, B;
	while (scanf("%d %d", &A, &B) == 2)
		printf("%d\n", max(A, B));
	return 0;
}
#include<stdio.h>
int main()
{
    int n, i, m, count;
    while( scanf("%d", &n)!=EOF)
    {
        count=0;
        for(i=0;  i<5; i++)
        {
        scanf("%d", &m);
            if (m==n)
            count++;
        }

      printf("%d\n", count);
    }
      return 0;
      }
#include<stdio.h>
int main()
{
    int a[13],t, i,ck,j=1;
    scanf("%d", &t);
    while(t--)
    {
        ck=0;


        for(i=0;i<13;i++)
             scanf("%d", &a[i]);
             for(i=0;i<13;i++)
             {
                 if(a[i]==0){
                     ck=1;
                     break;
                     }
              }
               if(ck==1)
                    printf("Set #%d: No\n",j);
                    else
                    printf("Set #%d: Yes\n",j);
                    j++;
                    }
                    return 0;
                    }
#include<stdio.h>

int main() {
	double pi = 3.1416;
	double R, V;
	int testcase, cases = 0, ans;
	scanf("%d", &testcase);
	while (testcase--) {
		scanf("%lf %lf", &R, &V);
		ans= (pi/ 2*R / V);
		printf("Case %d: %.8lf\n", ++cases, ans);
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[22]={1, 64,729,4096,15625, 46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121};
    long long int i,j,n;
    while(cin>>n)
    {
        j=0;
        if(n==0)
            break;
        for(i=0; i<=21;i++)
        {
            if(n==a[i])
            {
                j=1;
                break;
            }
        }
            if(j==1)
                cout<<"Special"<<endl;
                else
                cout<<"Ordinary"<<endl;

    }

    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[21]={1, 64,729,4096,15625, 46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121};
    long long int i,j,n;
    while(cin>>n)
    {
        j=0;
        if(n==0)
            break;
        for(i=0; i<=21;i++)
        {
            if(n==a[i])
            {
                j=1;
                break;

            }
        }
            if(j==1)
                cout<<"Special"<<endl;
                else
                cout<<"Ordinary"<<endl;

    }

    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
long n[6000],a=1,b=1,c=1,i,j,x=2,y=3,z=5,t=2;
n[1]=1;
while(n[1500]==0)
    {
    if(x<y && x<z)
        {
            n[t]=x;
            a++;
            x=n[a]*2;
            t++;
        }
    else if(y<x && y<z)
        {
            n[t]=y;
            b++;
            y=n[b]*3;
            t++;
        }
    else if(z<y && z<x)
        {
            n[t]=z;
            c++;
            z=n[c]*5;
            t++;
        }
    if(x==y)
        {
            a++;
            x=n[a]*2;
        }

    else if(y==z)
        {
            b++;
            y=n[b]*3;
        }
    else if(z==x)
        {
            c++;
            z=n[c]*5;
        }
    }
cout<<"The 1500'th ugly number is "<<n[1500]<<"."<<endl;
return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
long int i,count=0,l;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    if(s[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",s[i]);
    }
printf("\n");
}
return 0;
}
#include<stdio.h>
int main()
{
    int i, j, t, n, b,a[100], c;
    scanf("%d", &t);
    while(t--)
    {
        c=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        scanf("%d", &a[i]);
        for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

        if(a[i]>a[j])
        {
         b=a[i];
         a[i]=a[j];
         a[j]=b;
         c++;
         }
        }
        }
         printf("Optimal train swapping takes %d swaps.\n",c);
         }
         return 0;
         }
#include<stdio.h>
int main()
{

    int x, y, temp, i, j, ans, sum;
    while(scanf("%d %d",&x, &y)==2 && x>0 &&y>0)
    {

        sum=0;
        printf("%d %d", x,y);
        if(x>y){
            temp=y;
            y=x;
            x=temp;
        }
    for(i=x;i<=y;i++)
    {
        ans=1;
        for(j=i;j!=1;j=j)
        {
            if(j%2==0)
                j=j/2;
            else
                j=3*j+1;
            ans=ans+1;
        }
        if(ans>=sum)
            sum=ans;
    }
    printf("%d\n",sum);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("PERFECTION OUTPUT\n");
   while(scanf("%d",&n)==1)
        {
        if(n==0)
            break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum=sum+i;
               printf("%d",sum);
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
        }
    printf("END OF OUTPUT\n");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];

    while(gets(s))
    {

        int i, j, k, l;
        k=0;
        for(i=0; i<strlen(s); i++)
        {
            //cout<<s[i]<<" ";
            if(i == strlen(s)-1)
            {
                for(j=i; j>=k; j--)
                {
                    cout<< s[j];
                }
            }

            if(s[i] == ' ' )
            {

                for(j=i-1; j>=k; j--)
                {
                    cout<< s[j];
                }
            cout<<" ";
            k=i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char name[1000];
    int i,p;
    while(gets(name))

{
p=0;
for(i=0;name[i]!='\0';i++)
{
    if(
          ((name[i]>='a'&& name[i]<='z')||(name[i]>='A' && name[i]<='Z'))
          &&
          (name[i+1]<'a' || name[i+1]>'z') &&(name[i+1]<'A' || name[i+1]>'Z')
       )
          p++;
      }
      printf("%d\n",p);
    }
}
#include<stdio.h>
int main()
{
    int n,i,a[100],t=1,sum,ans,avr;
    while(scanf("%d",&n)==1 && n!=0)
{
    sum=0;
    ans=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avr=sum/n;
    for(i=0;i<n;i++)
        if(a[i]>avr)
        ans=ans+(a[i]-avr);
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,ans);
    t++;
}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,e,c,a;
   int no=0;
   while(scanf("%lld %lld",&n,&e)==2)
   {
       if(n<0&&e<0)
       break;
       c=0;
       a=n;
       while(n<=e)
       {
           if(n==1)
           {
               c++;
               break;
           }
           else if(n%2==0)
           {
               c++;
               n/=2;
           }
           else if(n%2==1)
           {
               c++;
               n=n*3+1;
           }

       }
       printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n",
          ++no,a,e,c);
   }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define uint unsigned long long int
int main()
{
    uint N;
    while(scanf("%llu", &N)!=EOF)
    {

        uint row=ceil((sqrt(1+8*N)-1)/2);
        uint S=((row-1)*row)/2;

        uint y=1, x=row;

        uint div=N-(S+1);
        x=x-div;
        y=y+div;

            cout<<x<<"/"<<y<<endl;
    }
}
#include <stdio.h>
int main()
{
    long int n,sum,odd;
    while(scanf("%ld",&n)==1)
    {
    odd=(n*(n+2))/2;
    sum=(3*odd)-6;
    printf("%ld\n",sum);
    }
    return 0;
}
#include<stdio.h>
int main()
{
 int t, max, n, j, i=0, a;
 scanf("%d", &t);
 while(t--)
 {
 max=0;
 scanf("%d", &n);
 for(j=1; j<=n; j++){
 scanf("%d", &a);
 if(a>max)
 max=a;
 }
 printf("case %d: %d\n", ++i, max);
 }
 return 0;
 }
#include<stdio.h>
int main()
{
    long long  n,a,s,c;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
        a=n;
        c=0;
        while(1)
        {
            s=0;
        while(n!=0)
            {
                s=s*10+n%10;
                n/=10;
            }
        if(s==a)
        break;
        else
        {
        n=s+a;
        a=s+a;
        c++;
        }

    }
    printf("%lld %lld\n",c,a);
        }
    }

   return 0;
}
#include<stdio.h>
    int main()
    {
    int n,temp,num[1001],flip,i,j;
    while(scanf("%d",&n)==1)
    {
    for(i=1;i<=n;i++)
    {
    scanf("%d",&num[i]);
    }
    flip=0;
    for(i=1;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
    if(num[i]>num[j])
    flip++;
    }
    }
    printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
    }
#include<stdio.h>
int main()
{
int m,n,c;
while(scanf("%d%d",&m,&n)==2)
printf("%d\n",m*n-1);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   ll n,e,c,a;
   int no=0;
   while(sc("%lld %lld",&n,&e)==2)
   {
       if(n<0&&e<0)
       break;
       c=0;
       a=n;
       while(n<=e)
       {
           if(n==1)
           {
               c++;
               break;
           }
           else if(n%2==0)
           {
               c++;
               n/=2;
           }
           else if(n%2==1)
           {
               c++;
               n=n*3+1;
           }

       }
       pf("Case %d: A = %lld, limit = %lld, number of terms = %lldn",
          ++no,a,e,c);
   }
    return 0;
}
#include<stdio.h>
int main()
{
int a,b,c,t ;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&b,&c);
if(b>c)
printf(">\n");
else if(b<c)
printf("<\n");
else
printf("=\n");
}
return 0;
}
#include<stdio.h>
int main()
{
long int t,a,b,c,i;
while(scanf("%ld",&t)==1)
{
i=1;
while(i<=t)
 {
 scanf("%ld%ld%ld",&a,&b,&c);
 if((a+b)<=c || (b+c)<=a || (c+a)<=b)
 printf("Case %ld: Invalid\n",i);
 else if(a<=0 || b<=0 || c<=0)
 printf("Case %ld: Invalid\n",i);
 else if(a==b && b==c)
 printf("Case %ld: Equilateral\n",i);
 else if(a==b || b==c || c==a)
 printf("Case %ld: Isosceles\n",i);
 else
 printf("Case %ld: Scalene\n",i);
 i++;
 }

}
return 0;
}
#include<stdio.h>
int main()
{
int x1,y1,x2,y2,dx,dy;
while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
{
if(x1==0 && x2==0 && y1==0 && y2==0)
break;
if(x1>x2)
dx=x1-x2;
else
dx=x2-x1;
if(y1>y2)
dy=y1-y2;
else
dy=y2-y1;
if(dx==0 && dy==0)
printf("0\n");
else if(dx==dy || dx==0 || dy==0)
printf("1\n");
else
printf("2\n");
}
}
#include<stdio.h>
int main()
{
    int a,b,c, i=0, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a<=20 && b<=20 && c<=20)
        printf("Case %d: good\n", ++i);
        else
        printf("Case %d: bad\n",++i);
        }
        return 0;
        }
#include <stdio.h>
int main() {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		long long N, M;
		scanf("%lld %lld", &N, &M);
		long long S , ret;
		S= N+M;
		ret = (S*(S+1)/2) + N + 1;
		printf("%lld\n", ret);
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, i;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d", &n)!= EOF){
        if(n==0) {
            cout<<"END OF OUTPUT"<<endl;
            return 0;

        }
        sum=0;
        for(i=1; i<n; i++){
            if(n%i==0){
                sum=sum+i;

            }
        }
        if(sum==n)
            printf("%5d  PERFECT\n", n);
            else if(sum < n)
                printf("%5d  DEFICIENT\n", n);
            else
                printf("%5d  ABUNDANT\n", n);


}
return 0;
}

               n/=2;
           }
           else if(n%2==1)
           {
               c++;#include<stdio.h>
int main()
{
   long long int n,e,c,a;
   int no=0;
   while(scanf("%lld %lld",&n,&e)==2)
   {
       if(n<0&&e<0)
       break;
       c=0;
       a=n;
       while(n<=e)
       {
           if(n==1)
           {
               c++;
               break;
           }
           else if(n%2==0)
           {
               c++;
               n=n*3+1;
           }

       }
       pf("Case %d: A = %lld, limit = %lld, number of terms = %lldn",
          ++no,a,e,c);

