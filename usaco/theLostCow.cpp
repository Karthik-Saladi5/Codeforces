#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
const int mod = 1000000007;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tc\
    int t;\
    cin>>t;\
    while(t--)
void takeinput(){
    #ifndef ONLINE_JUDGE
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    // freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
void sk(){
    // Your code goes here
    ll x,y;
    cin>>x>>y;
    ll cur=x,total=0,dir=1,step=1;
    while(1){
        ll next=x+(step*dir);
        if((y>=cur && y<=next) || (y<=cur && y>=next)){
            total+=abs(y-cur);
            break;
        }
        else{
            total+=abs(next-cur);
        }
        cur=next;
        dir*=-1;
        step*=2;
    }
    cout<<total<<endl;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
    sk();
    return 0;
}