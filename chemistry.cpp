#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
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
    ll n,k;cin>>n>>k;
    string s; cin>>s;
    unordered_map<char,int> cnt;
    for(auto i: s) cnt[i]++;
    int oc=0;
    for(auto i:cnt){
        if(i.second%2!=0) k--;
    }
    if(k>=-1) yes;
    else no; 
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}