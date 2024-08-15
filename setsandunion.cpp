#include<bits/stdc++.h>
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
    // Your code here
    ll t;
    cin>>t;
    while(t--){
        vector<set<ll>> sets;
        //taking input
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll setsize;
            cin>>setsize;
            set<ll> s;
            for(int j=0;j<setsize;j++){
                int temp;
                cin>>temp;
                s.insert(temp);
            }
            sets.pb(s);
        }
        //
        ll maxsize=0;
        for(ll i=0;i<n;i++){
            set<ll> s;
            for(ll j=0;j<n;j++){
                if(i!=j){
                    s.insert(sets[j].begin(),sets[j].end());
                }
            }
            ll l=s.size();
            maxsize=max(maxsize,l);
        }
        if(maxsize==0) cout<<0<<endl;
        else cout<<maxsize-1<<endl;
    }
}