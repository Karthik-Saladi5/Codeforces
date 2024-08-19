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
    #endif
}
void sk(){
    // Your code goes here
    vi arr(7);
    for (auto &i : arr) cin >> i;
    sort(ALL(arr));
    ll a = arr[0];
    ll abc = arr[6];
    ll bc = abc - a;
    ll ca = arr[5] == bc ? arr[4] : arr[5];
    ll c = ca - a;
    ll ab = abc - c;
    ll b = ab - a;
    cout << a << " " << b << " " << c;
    // cout<< " " << ab << " " << bc << " " << ca << " " << abc;

}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
//    takeinput();
    sk();
    return 0;
}