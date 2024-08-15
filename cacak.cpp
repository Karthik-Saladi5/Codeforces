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
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        if(k*(k+1)/2>x or (2*n-k+1)*k/2<x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}