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
ll solve(ll n,ll k, string s){
    int c=0;
    int cur = 0;
    while (cur < n) {
        if (s[cur]=='B') {
            int mx=min(k,n-cur);
            c++;
            cur+=mx;
        } 
        else{
            cur++;
        }
    }
    return c;
}
int main()
{
    takeinput();
    // Your code here
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout<<solve(n,k,s)<<endl;
    }
}