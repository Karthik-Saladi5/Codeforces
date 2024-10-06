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
    ll n, m, q;
    cin >> n >> m >> q;
    vi mem(n),slides;
    for (auto& i : mem) cin >> i;
    for (int i = 0;i < m;i++) {
        ll temp;cin >> temp;
        if (slides.empty() || (slides.size() && temp != slides.back())) slides.pb(temp);
    }
    unordered_set<ll> qu;
    ll ord = 0;
    for (auto slide : slides) {
        if (slide == mem[ord]) {
            qu.insert(mem[ord]);
            ord++;
        }
        else {
            auto j = qu.find(slide);
            if (j != qu.end()) {}
            else {
                cout << "TIDAK\n";
                return;
            }
        }
    }
    cout << "YA\n";
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