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
bool check(string s){
    char c = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] != c){
            c = s[i];
        }
        else{
            return false;
        }
    }
    return true;
}
void sk(){
    // Your code goes here
    int n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    if(check(s)){
        yes;
        return;
    }
    if(check(t) == false){
            no;
        return;
    }
    bool ans = true;
    char ts = t[0],tl = t[m-1];
    for(int i = 1;i<n;i++){
        if(s[i] == s[i-1]){
            if(s[i-1] != ts && s[i] != tl){
                continue;
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(ans) yes;
    else no;
}

int main()
{
    takeinput();
    tc sk();
    return 0;
}