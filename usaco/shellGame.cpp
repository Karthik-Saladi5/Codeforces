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
    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    #endif
}
// void takeinput(){
//     #ifndef ONLINE_JUDGE
//     freopen("D:\\coding\\input.txt","r",stdin);
//     freopen("D:\\coding\\output.txt","w",stdout);
//     #endif
// }
void sk(){
    // Your code goes here
    int n;cin >> n;
    vi count(4);
    vi pos(4);
    for (int i = 1;i <= 3;i++) pos[i] = i;
    ll ans = 0;
    while (n--) {
        ll a, b, g;
        cin >> a >> b >> g;
        swap(pos[a], pos[b]);
        count[pos[g]]++;
    }
    cout << max({count[1],count[2],count[3]});
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