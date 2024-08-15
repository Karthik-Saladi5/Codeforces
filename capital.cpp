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
    string s;
    cin>>s;
    if(s[0]>='a' and s[0]<='z') s[0]-=32;
    cout<<s;
}