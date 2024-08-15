#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
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
    ll n; cin>>n;
    if(n<4 or n&1) cout<<0<<endl;
    else if(n%4==0) cout<<(n/4)-1<<endl;
    else cout<<(n/4);
}

int main()
{
    takeinput();
    sk();
    return 0;
}