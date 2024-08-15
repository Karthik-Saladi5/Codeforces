#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
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
    int n; cin >> n;
    vi arr(n, 0);
    for (int i = 0;i < n;i++) cin >> arr[i];
    int fo = 0, lo = 0;
    for (int i = 0;i < n;i++) if (arr[i] == 1) {
        fo = i;
        break;
    }
    for (int i = n-1;i>=0;i--) if (arr[i] == 1) {
        lo = i;
        break;
    }
    int c = 0;
    for (int i = fo;i <= lo;i++) if (arr[i] == 0) c++;
    cout << c << "\n";


}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
    takeinput();
    tc{
        sk();
    }
    return 0;
}