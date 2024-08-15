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
    sort(s.begin(),s.end());
    int c=1;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]) c++;
    }
    if(c%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}