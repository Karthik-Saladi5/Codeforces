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

int main()
{
    takeinput();
    // Your code goes here
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=b;
        for(auto i: v) ans+=min(a, i+1)-1;
        cout<<ans<<endl;
    }
    return 0;
}