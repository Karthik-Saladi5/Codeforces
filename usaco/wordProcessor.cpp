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
    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    int n, k; cin >> n >> k;
    vector<string> arr(n);
    for (auto& i : arr) cin >> i;
    int cur = 0;
    for (auto i : arr) {
        if (cur + i.size() > k) {
            cout << endl;
            cur = 0;
        }
        if (cur != 0) cout << " ";
        cout << i;
        cur += i.size();
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