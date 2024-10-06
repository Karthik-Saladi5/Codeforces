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
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    // freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
void sk(){
    // Your code goes here
    int x, y, m;
    cin >> x >> y >> m;
    int ans = 0;
    for (int i = 0;i <= m;i++) {
        if (i * x > m) break;
        for (int j = 0;j <= m;j++) {
            int fill = (i * x) + (j * y);
            if (fill > m) break;
            ans = max(ans, fill);
        }
    }
    cout << ans << endl;
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