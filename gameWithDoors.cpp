#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
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
    int l, r; cin >> l >> r;
    int L, R; cin >> L >> R;
    if (L > r || l > R) {
        cout << 1 << endl;
        return;
    }
    if (L < l) {
        swap(l, L);
        swap(r, R);
    }
    int ans = 0;
    unordered_map<int, int> freq;
    for (int i = l;i <= r;i++) freq[i]++;
    for (int i = L;i <=R;i++) freq[i]++;
    int left = -1;
    int right = -1;
    for (int i = 1;i <= 100;i++) {
        if (freq[i] == 2) {
            ans++;
            if (left == -1) left = i;
            right = i;
        }
    }
    ans--;
    if (min({ l,r,L,R }) < left) ans++;
    if (max({ l,r,L,R }) > right) ans++;
    cout << ans << endl;
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