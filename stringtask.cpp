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
    string s,ans;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]== 'o' || s[i]== 'y' || s[i]== 'e' || s[i]=='u' || s[i]== 'i') continue;
        else{
            ans+='.';
            ans+=s[i];
        }
    }
    cout<<ans;
}