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
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> freq;
    ll s=0,f=1;
    for(int i=0;i<n;i++){
       cin>>a[i]; 
       freq[a[i]]++;
    } 
    sort(a.begin(),a.end());
    if(freq.size()>2){
        no;
        return;
    }
    if(freq.size()==1){
        yes;
        return;
    }
    if(n%2==0) f&=(freq[a[0]]==n/2);
    else f&=(freq[a[0]]==n/2 or freq[a[n-1]]==n/2);
    if(f) yes;
    else no;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}