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
int solve(vector<ll> a, int n,int k,int l){
    int low=0;
    int high=n;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int cur=a[l-1];
        for(int i=l;i<=mid;i++) cur&=a[i];
        if(cur>=k){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    if(ans==-1) return -1;
    return ans+1;
}
int main()
{
    takeinput();
    // Your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int q;
        cin>>q;
        while(q--){
            int k,l;    cin>>l>>k;
            int ans=solve(arr,n,k,l);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}