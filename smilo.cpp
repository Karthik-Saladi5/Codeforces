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
    int n; cin>>n;
    ll s=0,temp=0,ans=0,x=0;
    vi a(n);
    for(int i=0;i<n;i++){
      cin>>a[i]; 
      s+=a[i]; 
    } 
    sort(a.rbegin(),a.rend());
    ans=s;
    for(int i=0;i<n;i++){
        temp+=a[i];
        s-=a[i];
        if(temp>s){
            x=temp-s;
            x=(x+1)/2;
        }
        ll r=s+x;
        ans=min(ans,i+1+r);
        x=0;
    }
    cout<<ans<<endl;

}

int main()
{
    takeinput();
    tc sk();
    return 0;
}