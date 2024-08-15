#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void takeinput(){
    #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
void solve(){
    int n,p; cin>>n>>p;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<int,int>> s;
    for(int i=0;i<n;i++) s.pb({b[i],-a[i]});
    sort(s.begin(),s.end());
    int t=0,ans=0;
    for(int i=0;i<n;i++){
        if(s[i].first<p){
            int x=-s[i].second;
            int mn=min(n-1-t,x);
            t+=mn;
            ans+=mn*s[i].first;
        }
    }
    cout<<(n-t)*p+ans<<endl;
}
int main()
{
    takeinput();
    // Your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}