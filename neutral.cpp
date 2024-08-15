#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<ll>
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
    int n,m; cin>>n>>m;
    vi a(n),b(m);
    for(auto &i:a) cin>>i;
    for(auto &j:b) cin>>j;
    sort(b.begin(),b.end());
    vi c;
    for(auto &i:a){
        while(!b.empty() and b.back()>=i){
            c.pb(b.back());
            b.pop_back();
        }
        c.pb(i);
    }
    while(!b.empty()){
        c.pb(b.back());
        b.pop_back();
    }
    for(auto i: c) cout<<i<<" ";
    cout<<endl;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}