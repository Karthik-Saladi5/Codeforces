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
    ll n, k;
    cin >> n >> k;
    vi a(n+1, 0), x(n+1, 0);
    for (int i = 1;i <= n;i++)cin >> a[i];
    multiset<pair<int,int>> st;
    for (int i = 1;i <= n;i++)cin >> x[i], st.insert({ abs(x[i]),a[i] });
    int go = 0;
    bool fl = 1;
    while(!st.empty()){
        int cur = k;
        while(!st.empty()&&cur>0){
            pair<int, int> p = *st.begin();
            if (p.first - go <= 0) fl = 0;
            st.erase(st.begin());
            if(cur>=p.second){
                cur -= p.second;
            }
            else{
                st.insert({ p.first,p.second - cur });
                cur = 0;
                break;
            }
        }
        go++;
    }
    cout << (fl ? "YES\n" : "NO\n");
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