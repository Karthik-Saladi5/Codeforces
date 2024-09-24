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
    freopen("cowsignal.in","r",stdin);
    freopen("cowsignal.out","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    ll m, n, k;cin >> m >> n >> k;
    char pattern[m][n];
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            cin >> pattern[i][j];
        }
    }
    for (int i = 0;i < m;i++) {
        for (int c1 = 0;c1 < k;c1++) {
            for (int j = 0;j < n;j++) {
                for (int c2 = 0;c2 < k;c2++) cout << pattern[i][j];
            }
            cout << "\n";
        }
    }
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