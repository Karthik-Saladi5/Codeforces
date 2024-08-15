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
        vector<ll> arr;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            arr.pb(temp);
        }
        sort(arr.begin(),arr.end());
        arr[0]++;
        ll m=1;
        for(auto i: arr) m*=i;
        cout<<m<<endl;
    }
}