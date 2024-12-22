#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
#define fixed(n) fixed<<setprecision(n)
#define middle low+(high-low)/2
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
///// be an EGOIST/////////////////////////////
void sk(){
    // Your code goes here
    ll n, x, y; cin >> n >> x >> y;
    vi a(n);
    ll sum = 0;
    for (auto& i : a) {
        cin >> i;
        sum += i;
    }
    sort(ALL(a));
    ll mn = sum - y;
    ll mx = sum - x;
    ll c = 0;
    for (ll i = 0; i < n; i++) {
        ll start = lower_bound(a.begin() + i + 1, a.end(), mn - a[i]) - a.begin();
        ll end = upper_bound(a.begin() + i + 1, a.end(), mx - a[i]) - a.begin();
        c += (end - start);
    }
    cout << c << endl;
}
///// be an EGOIST/////////////////////////////
/*

*/
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
    tc sk();
    return 0;
}   