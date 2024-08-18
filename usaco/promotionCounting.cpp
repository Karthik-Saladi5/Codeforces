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
    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);
    #endif
}
void sk(){
    // Your code goes here
    int bb, ba;
    cin >> bb >> ba;
    int sb, sa;
    cin >> sb >> sa;
    int gb, ga;
    cin >> gb >> ga;
    int pb, pa;
    cin >> pb >> pa;
    cout << sa-sb + ga - gb + pa - pb << endl;
    cout << ga - gb + pa - pb << endl;
    cout << pa - pb << endl;
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