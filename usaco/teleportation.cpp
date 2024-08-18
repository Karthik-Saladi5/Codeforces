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
    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    int A, B;cin >> A >> B;
    int X, Y;cin >> X >> Y;
    int a = min(A,B);
    int b = max(A,B);
    int x = min(X,Y);
    int y = max(X,Y);
    // int ans1=100,ans2=100;
    if (abs(a - x) >= abs(a-b) || abs(b - y) >= abs(a-b) || abs(a - x) + abs(b - y) >= abs(a-b))     cout << abs(a-b);
    else cout << abs(a - x) + abs(b - y);
    // cout << min(ans1, ans2);
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