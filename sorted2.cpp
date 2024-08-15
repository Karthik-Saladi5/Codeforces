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
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int p=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if((1<<p)!=(i+1)){
                no;
                return;
            }
        }
        if((1<<p)<=(i+1)) p++;
    }
    yes;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}