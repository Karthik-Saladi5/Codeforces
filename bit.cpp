#include<bits/stdc++.h>
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
    int t,n=0;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[1]=='+') n++;
        else n--;
    }
    cout<<n;
}