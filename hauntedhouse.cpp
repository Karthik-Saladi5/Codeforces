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
    ll n;
    string bin;
    cin>>n>>bin;
    vector<ll> ans;
    ll zc=0;
    reverse(bin.begin(),bin.end());
    for(ll i=0;i<n;i++){
        if(bin[i]=='0'){
            zc++;
            ans.pb(i+1);
        }
    }
    ll k=1,prev=0;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]-k+prev<<" ";
        prev+=ans[i]-k;
        k++;
    }
    for(ll i=0;i<n-zc;i++){
        cout<<-1<<" ";
    }
    cout<<endl;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}