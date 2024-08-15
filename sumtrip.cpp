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
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%3==0){
            if(n<=9) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<1<<" "<<4<<" "<<n-5<<endl;
            }
        }
        else{
            if(n<=5) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
        }
    }
    return 0;
}