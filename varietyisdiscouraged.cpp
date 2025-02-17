#include <bits/stdc++.h>
using namespace std;
/*<-------alternates---------->*/
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define int ll
/*<--------------------------->*/
// ++------------------------------------------------------------------------------------++
// ++------------------------------------------------------------------------------------++
// ||███████╗ ██████╗  ██████╗ ██╗███████╗████████╗     ██████╗ ██████╗ ██████╗ ███████╗ ||
// ||██╔════╝██╔════╝ ██╔═══██╗██║██╔════╝╚══██╔══╝    ██╔════╝██╔═══██╗██╔══██╗██╔════╝ ||
// ||█████╗  ██║  ███╗██║   ██║██║███████╗   ██║       ██║     ██║   ██║██║  ██║█████╗   ||
// ||██╔══╝  ██║   ██║██║   ██║██║╚════██║   ██║       ██║     ██║   ██║██║  ██║██╔══╝   ||
// ||███████╗╚██████╔╝╚██████╔╝██║███████║   ██║       ╚██████╗╚██████╔╝██████╔╝███████╗ ||
// ||╚══════╝ ╚═════╝  ╚═════╝ ╚═╝╚══════╝   ╚═╝        ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝ ||
// ++------------------------------------------------------------------------------------++
// ++------------------------------------------------------------------------------------++
/*<----method shortcuts------->*/
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
#define fixed(n) fixed<<setprecision(n)
#define middle low+(high-low)/2
/*<---------------------------------->*/
/*<------------input----------------->*/
template <class ...As> auto& read(As &...as) { return (cin >> ... >> as); }
template <class T> auto &operator>>(istream &is, vector<T> &xs) {
    for (auto &x : xs) is >> x;
    return is;
}
#define In(...)             __VA_ARGS__; read(__VA_ARGS__)
#define ArIn(name, ...)  name(__VA_ARGS__); cin >> name
/*<----------------------------------->*/
/*<------------output----------------->*/
template <class ...As> auto& write(As ...as) {return (cout << ... << as);}
//template <class T> auto& operator<<(ostream& os, const vector<T>& xs) { for (const auto& x : xs) os << x << ' '; return os;}
#define Out(...)              write(__VA_ARGS__)
template <typename T>
void print(const T& a) {
for(const auto& i : a) cout << i << " ";
cout << "\n";
}
/*<------------debug----------------->*/

/*<----------------------------------->*/

/*<----user defined defaults---------->*/
const int mod = 1000000007;
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define tc\
    int t;\
    cin>>t;\
    while(t--)
void takeinput(){
    #ifndef ONLINE_JUDGE
    freopen("D:/coding/input.txt","r",stdin);
    freopen("D:/coding/output.txt","w",stdout);
    freopen("D:/coding/error.txt","w",stderr);
    #endif
}
/*<------------Math functions----------------->*/
ll power(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a%mod;
    ll ans=power(a,b/2);
    if(b&1){
        return ans%mod * ans%mod * a%mod;
    }
    else return ans%mod * ans%mod;
}
// sieve,spf,gcd,inverse.

/*<----------------------------------->*/
///// be an EGOIST/////////////////////////////
void sk() {
    // Your code goes here
    ll In(n);
    vi ArIn(a, n);
    unordered_map<ll, ll> freq;
    for (auto i : a) freq[i]++;
    ll mx = n - (int)freq.size();
    ll l = -1, r = -1;
    for (int i = 0;i < n;i++) {
        if (freq[a[i]] == 1) {
            int j = i;
            // cerr << j << " ";
            while (j < n && freq[a[j]] == 1) j++;
            if (n - (freq.size() - (j - i+1)) > mx) {
                l = i+1;
                r = j;
                mx = n - (freq.size() - (j - i+1));
            }
            i = j-1;
        }
    }
    if (l == -1 && r == -1) Out(0, "\n");
    else Out(l, " ", r, "\n");

}
///// be an EGOIST/////////////////////////////
#undef int
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
   tc 
   sk();
   return 0;
}
