#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
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
    int n,q; cin>>n>>q;
    vi a(n),x;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<q;i++){
       ll t; cin>>t;
       if(x.empty() or x.back()>t) x.pb(t);
    } 
    for(auto &i: a){
        for(auto j:x){
            if(i%(1<<j)==0) i+=(1<<j-1);
        }
    }
    for(auto i: a) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}