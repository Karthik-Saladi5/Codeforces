#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
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
void sk(){
    // Your code goes here
    ll n;cin >> n;
    ll k;cin >> k;
    vi a(n);
    for (auto& i : a) cin >> i;
    sort(a.rbegin(), a.rend());
    for (ll i = 0;i < n-1;i++) {
        if (!k) break;
        ll d = a[i] - a[i + 1];
        ll c = min(d, k);
        a[i + 1] += c;
        k -= c;
        i++;
    }
    ll odd = 0, even = 0;
    for (ll i = 0;i < n;i++) {
        if (i & 1) odd += a[i];
        else even += a[i];
    }
    cout << abs(odd - even) << endl;
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