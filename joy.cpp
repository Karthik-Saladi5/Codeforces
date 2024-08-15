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
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    if(k>3){
        cout<<0<<endl;
        return;
    }
    if(k==1){
        cout<<1<<endl;
        return;
    }
    if(k==2){
        cout<<m/n+min(m,n-1)<<endl;
        return;
    }
    if(m<=n) {
        cout<<0<<endl;
        return;
    }
    cout<<(m+1)-(m/n)-n<<endl;
}
int main()
{
    takeinput();
    // Your code goes here
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}