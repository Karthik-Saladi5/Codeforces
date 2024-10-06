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
int recur(ll i, ll time, ll prevT, ll nxT,ll n,vector<ll> &a,ll &ln) {
    if (i > ln or i < 0 or i >= n) return 0;
    if (a[i] < time) return 0;
    if (prevT == 0 && nxT == n - 1) return 1;
    return recur(i - 1, time + 1, prevT - 1, nxT,n,a,ln) 
        + recur(i + 1, time + 1, prevT , nxT+1,n,a,ln);
}
void sk() {
    // Your code goes here
    ll n; cin >> n;
    vi a(n);
    ll ln = 10 + log2(n);
    for (auto& i : a) cin >> i;
    ll ans = 0;
    for (int i = 0;i < ln;i++) {
        if(recur(i,1,i,i,n,a,ln)) ans++;
    }
    cout << ans << endl;
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