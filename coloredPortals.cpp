
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
    ll n, q; cin >> n >> q;
    vector<string> portals(n);
    vector<vi> adj(n);
    for (auto& i : portals) cin >> i;
    for (ll i = 0;i < n;i++) {
        for (ll j = i + 1;j < n;j++) {
            if (portals[i][0] == portals[j][0] || portals[i][0] == portals[j][1] || portals[i][1] == portals[j][0] || portals[i][1] == portals[j][1]) {
                adj[i].PB(j);
                adj[j].PB(i);
            }
        }
    }
    vector<vi> mn(n, vi(n, INT_MAX));
    for (ll start = 0;start < n;start++) {
        queue<ll> q;
        q.push(start);
        mn[start][start] = 0;
        while (!q.empty()) {
            ll city = q.front();
            q.pop();
            for (auto next : adj[city]) {
                if (mn[start][next]>mn[start][city]+abs(city-next)) {
                    mn[start][next] = mn[start][city] + abs(city - next);
                    q.push(next);
                }
            }
        }
    }
    while (q--) {
        ll x, y; cin >> x>> y;
        x--;
        y--;
        ll ans = mn[x][y];
        if (ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
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