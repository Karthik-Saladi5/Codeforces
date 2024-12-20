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
    int n;cin >> n;
    string st; cin >> st;
    if (n == 1) {
        yes;
        return;
    }
    vi p(n, INT_MAX), s(n, INT_MAX);
    for (int i = 0;i < n;i++) {
        if (st[i] == 'p') p[i] = i + 1;
        if (st[i] == 's') s[i] = n-i ;
    }
    for (int i = 1;i < n;i++) {
        s[i] = min(s[i], s[i - 1]);
    }
    for (int i = n-2;i >= 0;i--) {
        p[i] = min(p[i], p[i + 1]);
    }
    vi temp(n);
    for (int i = 0;i < n;i++) {
        temp[i] = min(s[i], p[i]);
    }
    sort(ALL(temp));
    for (int i = 0;i < n;i++) {
        if (i >= temp[i]) {
            no;
            return;
        }
    }
    yes;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
   tc{
       
        // cerr << "I am here" << endl;
        sk();
   }
    return 0;
}