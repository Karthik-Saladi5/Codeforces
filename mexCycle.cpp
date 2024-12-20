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
ll mex(set<ll> s) {
    ll m = 0;
    while (s.find(m) != s.end()) m++;
    return m;
}
void sk() {
    // Your code goes here
    ll n, x, y; cin >> n >> x >> y;
    vi a(n, -1);
    vector<set<ll>> friends(n);
    for (ll i = 0;i < n;i++) {
        friends[i].insert((i + 1) % n);
        friends[i].insert((i+n - 1) % n);
    }
    x--;
    y--;
    friends[x].insert(y);
    friends[y].insert(x);
    for (ll i = 0;i < n;i++) {
        set<ll> nb;
        for (ll j : friends[i])
            if (a[j] != -1) nb.insert(a[j]);
        a[i] = mex(nb);
    }
    for (auto i : a) {
        cout << i << " ";
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