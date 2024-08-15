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
    int n; cin>>n;
    vi a(n), b(n,1);
    for(auto &i:a) cin>>i;
    unordered_map<int,vi> mp;
    for(int i=0;i<n;i++) mp[a[i]].push_back(i);
    int c=0;
    for(auto &i:mp){
        if(i.second.size()>=2){
            b[i.second[0]]=c+1;
            for(int j=1;j<i.second.size();j++) b[i.second[j]]=c+2;
            c++;
        }
        if(c==2){
            for(auto &j:b) cout<<j<<" ";
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}