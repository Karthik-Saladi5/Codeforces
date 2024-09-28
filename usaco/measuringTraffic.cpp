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
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
    // freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
class Segment {
public:
    string type;
    ll start, end;
};
void sk() {
    // Your code goes here
    ll n; cin >> n;
    vector<Segment> a(n);
    for (auto &s : a) {
        cin >> s.type >> s.start >> s.end;
    }
    ll low = 0, high = INT_MAX;
    for (int i = n - 1;i >= 0;i--) {
        if (a[i].type == "none") {
            low = max(low, a[i].start);
            high = min(high, a[i].end);
        }
        else if (a[i].type == "on") {
            low -= a[i].end;
            high -= a[i].start;
            low = max(0ll, low);
        }
        else if (a[i].type == "off") {
            low += a[i].start;
            high += a[i].end;
        }
    }
    cout << low << " " << high<<endl;

    low = 0, high = INT_MAX;
    for (int i = 0;i < n;i++) {
        if (a[i].type == "none") {
            low = max(low, a[i].start);
            high = min(high, a[i].end);
        }
        else if (a[i].type == "off") {
            low -= a[i].end;
            high -= a[i].start;
            low = max(0ll, low);
        }
        else if (a[i].type == "on") {
            low += a[i].start;
            high += a[i].end;
        }
    }
    cout << low << " " << high;
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