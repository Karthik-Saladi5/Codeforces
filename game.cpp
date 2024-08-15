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
    ll t; cin>>t;
    while(t--){
        ll n,m,k,js=0,gs=0;
        cin>>n>>m>>k;
        vector<ll> j(n+1,0),g(m+1,0);
        for(int i=1;i<n+1;i++){
            cin>>j[i];
            js+=j[i];
        }
        for(int i=1;i<m+1;i++){
            cin>>g[i];
            gs+=g[i];
        }
        sort(j.begin(),j.end());
        sort(g.begin(),g.end());
        if(j[1]>=g[m+1-1] and k%2==1) js+=g[1]-j[n+1-1];
        else if(j[n+1-1]<=g[1] and k%2!=1) js+=g[m+1-1]-j[1];
        else{
            js+=g[m+1-1]-j[1];
            swap(g[m+1-1],j[1]);
            sort(j.begin()+1,j.end());
            sort(g.begin()+1,g.end());
            k--;
            if(k and k%2!=1) js+=g[1]-j[n+1-1];
        }
        cout<<js<<endl;
    }
    return 0;
}