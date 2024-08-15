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
    //takeinput();
    // Your code here
    int k,n,w,s=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        s+=i*k;
    }
    if(s>n) cout<<s-n;
    else cout<<0;
}