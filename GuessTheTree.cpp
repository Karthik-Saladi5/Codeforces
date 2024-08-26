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
    #endif
}
ll query(ll l, ll r) {
    cout << "? " << l << " " << r << endl;
    fflush(stdout);
    ll x;
    cin >> x;
    return x;
}
void bin(ll l, ll r, vector<bool>& vis, vector<pi>& edges) {
    ll x = query(l, r);
    if (x == l || x == r) {
        edges.pb({l, r});
        vis[x] = 1;
        vis[r] = 1;
        return;
    }
    if (vis[l] && vis[x]) {
        bin(x, r, vis, edges);
    } else {
        bin(l, x, vis, edges);
        bin(x, r, vis, edges);
    }
}
void sk() {
    // Your code goes here
    ll n;
    cin >> n;
    if (n == 2) {
        cout << "! 1 2" << endl;
        fflush(stdout);
        return;
    }
    vector<bool> vis(n + 1, 0);
    vector<pi> edges;
    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (vis[j]) continue;
            bin(i, j, vis, edges);
        }
    }
    cout << "!";
    for (auto& i : edges) {
        cout << " " << i.first << " " << i.second;
    }
    cout << endl;
    fflush(stdout);
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