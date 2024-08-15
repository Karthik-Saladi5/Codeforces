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
        ll n,x;
        cin>>n>>x;
        vector<int> arr;
        for(ll i=0;i<n;i++){
            ll t;
            cin>>t;
            arr.pb(t);
        }
        //sort(arr.begin(),arr.end());
        ll l=1,r=INT_MAX,s=INT_MAX;
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll wn=0;
            for(auto i: arr){
                if(mid>i) wn+=mid-i;
            }
            if(wn<=x){
                s=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<s<<endl;
    }
    return 0;
}