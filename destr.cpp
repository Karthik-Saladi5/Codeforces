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
        string s; cin>>s;
        int pos; cin>>pos;
        string cons="";
        int n=s.length(),i=n;
        for(i=0;i<n;i++){
            cons+=s.substr(0,i);
        }
        cout<<cons<<endl;
    }
    return 0;
}