#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
#define fixed(n) fixed<<setprecision(n)
#define middle low+(high-low)/2
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
///// be an EGOIST/////////////////////////////
void sk(){
    // Your code goes here
    ll n;
    cin >> n;
    vi a(n), b(n);
    for (auto& i : a) cin >> i;
    for (auto& i : b) cin >> i;
    ll mn = 0, st = 0;
    for (int i = 0;i < n;i++) {
        if (i == n - 1) {
            mn += a[i];
        }
        else {
            if (a[i] - b[i + 1] > 0) {
                mn += a[i];
                st += b[i+1];
            }
        }
    }
    cout << mn-st<<endl;
}
///// be an EGOIST/////////////////////////////

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
   tc sk();
    return 0;
}