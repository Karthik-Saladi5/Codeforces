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
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int o=0;
    for(int i=1;i<n;i++){
        while(a[i-1]>a[i]){
            a[i]*=2;
            o++;
        }
    }
    cout<<o<<endl;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}