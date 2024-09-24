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
    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    // freopen("D:/coding/error.txt","w",stderr);
    #endif
}
void sk(){
    // Your code goes here
    vi speedLimit(100, 0);
    vi speed(100, 0);
    ll n, m;cin >> n >> m;
    ll prev = 0;
    for (int i = 0;i < n;i++) {
        ll d;cin >> d;
        ll s;cin >> s;
        d += prev;
        for (int j = prev;j < d;j++) speedLimit[j] = s;
        prev = d;
    }
    prev = 0;
    for (int i = 0;i < m;i++) {
        ll d;cin >> d;
        ll s;cin >> s;
        d += prev;
        for (int j = prev;j < d;j++) speed[j] = s;
        prev = d;
    }
    ll mx = 0;
    for (int i = 0;i < 100;i++) {
    // cerr << speedLimit[i] << " " << speed[i]<<"\n";
        if (speed[i] > speedLimit[i]) mx = max(mx, speed[i] - speedLimit[i]);
    }
    cout << mx<<endl;
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