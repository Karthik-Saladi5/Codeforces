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
        int n,p; cin>>n>>p;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        multiset<pair<int,int>> s;
        for(int i=0;i<n;i++) s.insert({b[i],a[i]});
        s.insert({p,INT_MAX});
        int c=p;
        int l=n-1;
        while(!s.empty() and l>0){
            pair<int,int> top=*s.begin();
            int temp=min(top.second,l);
            c+=temp*top.first;
            l-=temp;
            top.second-=temp;
            if(top.second==0) s.erase(s.begin());
            else s.insert({top.first,top.second});
        }
        cout<<c<<endl;
    }
    return 0;
}