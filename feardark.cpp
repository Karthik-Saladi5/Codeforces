#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int mod = 1000000007;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tc\
        int t;\
        cin>>t;\
        while(t--)

void takeinput(){
    #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
double dis(int x,int y,int v,int w){
    double d=sqrt((x-v)*(x-v)+(y-w)*(y-w));
    return d;
}
int main()
{
    takeinput();
    // Your code goes here
    tc{
        int px,py,ax,ay,bx,by;
        cin>>px>>py>>ax>>ay>>bx>>by;
        double a,b,c,d,e;
        a=dis(px,py,ax,ay);
        b=dis(px,py,bx,by);
        c=dis(0,0,ax,ay);
        d=dis(0,0,bx,by);
        e=dis(ax,ay,bx,by);
        double ans=max(min(a,b),min(c,d));
        if(!(min(a, b) == a and min(c, d) == c) && !(min(a, b) == b and min(c, d) == d) && e>2*ans) ans=e/2;
        cout<<setprecision(11)<<ans<<endl;
        yes;
    }
    return 0;
}