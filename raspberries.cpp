#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
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
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    if(k!=4){
        ll mn=k;
        for(ll i=0;i<n;i++){
            if(a[i]%k==0) mn=0;
            else {
                ll temp=k-a[i]%k;
                mn=min(mn,temp);
            }
        }
        cout<<mn<<endl;
    }
    else{
        ll mn=k,ans=2;
        for(ll i=0;i<n;i++){
            if(a[i]%4==0) mn=0;
            else {
                ll temp=k-a[i]%k;
                mn=min(mn,temp);
            }
        }
        for(ll i=0;i<n;i++){
            if(a[i]%2==0) ans=max(ans-1,0ll);
        }
        cout<<min(ans,mn)<<endl;
    }
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}