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
        int n;
        cin>>n;
        int a[n];
        bool pres=0;
        int k;
        cin>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) pres=1;
        }
        if(pres==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}