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
    freopen("shuffle.in","r",stdin);
    freopen("shuffle.out","w",stdout);
    // freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
void sk(){
    // Your code goes here
    ll n;
    cin >> n;
    vi idx(n);
    vi a(n);
    vi ans=a;
    for (auto& i : idx) cin >> i;
    for (auto& i : a) cin >> i;
    for (int i = 0;i < 3;i++) {
        for (int i = 0;i < n;i++) {
            ans[i] = a[idx[i] - 1];
        }
        a = ans;
    }
    for (auto i : ans) cout << i <<endl;
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