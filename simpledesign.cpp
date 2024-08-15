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
int sod(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
void sk(){
    // Your code goes here
    ll x,k;
    cin>>x>>k;
    ll y=x;
    while(y>=x){
        if(sod(y)%k==0){
            cout<<y<<endl;
            return;
        }
        else y++;
    }
}

int main()
{
    takeinput();
    tc {sk();}
    return 0;
}