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
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    ll a, b; cin >> a >> b;
    ll c, d; cin >> c >> d;
    vector<bool> cover(100);
    for (int i = a;i < b;i++) cover[i] = 1;
    for (int i = c;i < d;i++) cover[i] = 1;
    int ans = 0;
    for (int i = 0;i < 100;i++) if (cover[i]) ans++;
    cout << ans;

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