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
    // takeinput();
    // Your code here
    int n,k;
    cin>>n>>k;
    while(k--){
        if(n%10==0) n/=10;
        else n-=1;
    }
    cout<<n;
}