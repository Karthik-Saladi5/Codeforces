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
    freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
ll BinaryExp(ll a, ll b) {
    if (!b) return 1LL;
    ll ans = BinaryExp(a, b / 2)%mod;
    if (b & 1) return (ans * ans* a)%mod;
    else return (ans * ans )%mod;
}
void sk() {
    // Your code goes here
    ll t;cin >> t;
    vi ns(t), ks(t);
    for (auto& i : ns) {
        cin >> i;
    }
    for (auto& i : ks) {
        cin >> i;
        cout << BinaryExp(2, i)%mod << endl;
    }
    
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