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
void sk(){
    // Your code goes here
    ll n, q;
    cin >> n >> q;
    vi a(n);
    for (auto& i : a) cin >> i;
    unordered_map<ll, ll> mp;
    for (ll i = 1;i <= n;++i) {
        ll cover = (i - 1) * (n - i + 1) + (n - i);
        mp[cover]++;
        if (i < n) {
            ll dis = a[i] - a[i - 1]-1;
            if (dis > 0) {
                ll btw = i * (n - i);
                mp[btw] += dis;
            }
        }
    }
    while (q--) {
        ll k;cin >> k;
        cout << mp[k]<<" ";
    }
    cout << endl;
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