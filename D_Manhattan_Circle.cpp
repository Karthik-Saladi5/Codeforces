#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
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
    int n, m; cin >> n >> m;
    char grid[n][m];
    vi x, y;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '#') {
                x.push_back(i + 1);
                y.push_back(j + 1);
            }
        }
    }
    cout << x[x.size() / 2] << " " << y[y.size() / 2] << "\n";

}


int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   // takeinput();
   tc sk();
    return 0;
}