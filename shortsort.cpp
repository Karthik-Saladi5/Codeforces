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
bool solve(string s){
    if(s[0]=='a') return 1;
    else if(s[0]=='b'){
        if(s[1]=='a') return 1;
        else return 0;
    }
    else{
        if(s[2]=='a') return 1;
        else return 0;
    }
}
int main()
{
    takeinput();
    // Your code here
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    if(solve(s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
}