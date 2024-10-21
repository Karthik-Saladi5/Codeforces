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
    ll n, k; cin >> n>> k;
    vi a(n);
    for (auto& i : a) cin >> i;
    sort(ALL(a));
    ll s=0,ans=0,prev=0;
    for (int i = 0;i < n;i++) {
        if (ans >= k) {
            cout << k + s << endl;
            return;
        }
        if (prev == a[i]) continue;
        ans += (n - i) * (a[i] - prev);
        s = i;
        prev = a[i];
    }
    cout << k + s << endl;
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