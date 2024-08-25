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
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
ll som(ll x) { 
    return x*(x+1)/2; 
} 
ll ival(ll l,ll r) { 
    return som(r)-som(l-1); 
} 
void sk() {
    // Your code goes here
    ll n,m,mx=0; 
    cin >> n >> m; 
    for(ll i=1;i<=n;++i) { 
        ll l; 
        cin >> l; 
        set<ll> s; 
        for(ll i=1,x;i<=l;++i) { 
            cin >> x; 
            s.insert(x); 
        } 
        bool flag=true; 
        for(ll i=0;;++i) { 
            if(!s.count(i)) { 
                if(flag) flag=false; 
                else { 
                    mx=max(mx,i); 
                    break; 
                } 
            } 
        } 
    } 
    if(m<=mx) cout << mx*(m+1) << endl; 
    else cout << mx*(mx+1)+ival(mx+1,m) << endl; 
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
   tc sk();
    return 0;
}