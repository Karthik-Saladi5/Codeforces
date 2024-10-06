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
    int n;
    cin >> n;
    vi x(n), y(n);
    for (auto &i : x) cin >> i;
    for (auto &i : y) cin >> i;
    int mx = 0;
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int sq = dx * dx + dy * dy;
            mx = max(mx, sq);
        }
    }
    cout << mx << endl;
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