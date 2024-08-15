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
    string pin;
    cin>>pin;
    ll pres=1,ans=0;
    for(int i=0;i<pin.length();i++){
        int num=pin[i]-'0';
        if(num!=0){
           ans+=abs(num-pres); 
            pres=num;
        } 
        else{
          ans+=abs(10-pres);
          pres=10;  
        } 
        // cout<<num<<" /"<<ans<<" .";
    }
    ans+=pin.length();
    cout<<ans<<endl;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}