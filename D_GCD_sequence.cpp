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
bool func(vector<ll>& a) {
    int n = a.size();
    vector<ll> g(n-1);
    for (int i = 0;i < n - 1;i++) g[i] = __gcd(a[i], a[i + 1]);
    for (int i =1;i < n-1;i++) if (g[i] < g[i - 1]) return 0;
    return 1;
}
void sk() {
    // Your code goes here
    int n; cin >> n;
    vector<ll> a(n);
    vector<ll> g(n-1);
    for (auto& i : a) cin >> i;
    for (int i = 0;i < n - 1;i++) g[i] = __gcd(a[i], a[i + 1]);
    int ind = -1;
    for (int i = 1;i < n ;i++) if (g[i] < g[i - 1]) {
        ind = i;
        break;
    }
    if (ind == -1) {
        yes;
        return;
    }
    for (int i = ind - 1;i <= ind + 1;i++) {
        vi temp;
        for (int j = 0;j < n;j++) if (i != j) temp.PB(a[j]);
        if (func(temp)) {
            yes;
            return;
        }
    }
    no;
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