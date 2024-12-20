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
    int n, k; cin >> n >> k;
    vi a(n,-1);
    int c = 1;
    for (int i = k-1;i < n;i += k) {
        a[i] = c;
        c++;
    }
    for (int i = 0;i < n;i++) {
        if (a[i] != -1) continue;
        a[i] = c++;
    }
    for (auto i : a) {
        cout << i << " ";
    }
    cout << endl;
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