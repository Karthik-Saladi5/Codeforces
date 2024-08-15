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
        int n,ps=0,ns=0; cin>>n;
        vector<int> a(n-1);
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            if(a[i]<0) ns+=a[i]*(-1);
            else ps+=a[i];
        }
        cout<<ns-ps<<endl;
    }
    return 0;
}