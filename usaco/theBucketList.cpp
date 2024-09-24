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
    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);
    // freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
class Cow {
public:
    ll start;
    ll end;
    ll buckets;
    bool inTime(ll time) {
        return (time >= start && time <= end);
    }
};
void sk(){
    // Your code goes here
    ll n;
    cin >> n;
    vector<Cow> a(n);
    for(int i=0;i<n;i++){
        Cow c;
        cin >> c.start >> c.end >> c.buckets;
        a[i] = c;
    }
    ll mx = 0;
    for (int i = 1;i <= 1000;i++) {
        ll cur = 0;
        for (auto c : a)
            if (c.inTime(i)) cur += c.buckets;
        mx = max(cur, mx);
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