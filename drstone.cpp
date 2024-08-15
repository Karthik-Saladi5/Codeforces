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
int main()
{
    //takeinput();
    // Your code here
    int a[]={0,0,0},n;
    cin>>n;
    while(n--){
        for(int i=0;i<3;i++){
            int temp;
            cin>>temp;
            a[i]+=temp;
        }
    }
    if(a[0]==0 and a[1]==0 and a[2]==0) cout<<"YES";
    else cout<<"NO";
}