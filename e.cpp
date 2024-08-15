#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
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
    if(k==0) return 1;
        long long ans=51,n=nums.size();
        for(long long i=0;i<n;i++){
            long long cur=0;
            long long lenght=0;
            long long j=i;
            while(j<n && k>cur){
                cur|=nums[j];
                lenght++;
                j++;
            }
            if(k<=cur) ans=min(ans,lenght);
        }
        return ans==51 ? -1:ans;

}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
    tc sk();
    return 0;
}