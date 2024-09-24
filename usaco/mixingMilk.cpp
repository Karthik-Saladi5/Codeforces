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
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    #endif
}
// void takeinput(){
//     #ifndef ONLINE_JUDGE
//     freopen("D:\\coding\\input.txt","r",stdin);
//     freopen("D:\\coding\\output.txt","w",stdout);
//     #endif
// }
void sk() {
    // Your code goes here
    ll c1, m1;cin >> c1 >> m1;
    ll c2, m2;cin >> c2 >> m2;
    ll c3, m3;cin >> c3 >> m3;
    vi cap = { c1,c2,c3 };
    vi milk = { m1,m2,m3 };
    for (int i = 0;i < 100;i++) {
        ll amt = min(milk[i % 3], cap[(i + 1) % 3] - milk[(i + 1) % 3]);
        milk[i % 3] -= amt;
        milk[(i+1) % 3] += amt;
    }
    for (auto i : milk) cout << i << "\n";
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