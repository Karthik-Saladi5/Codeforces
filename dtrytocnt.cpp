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
void sk(){
    // Your code goes here
    int n,m;   cin>>n>>m;
    string x,s; cin>>x>>s;
    int c=0;
    while(x.find(s)==string::npos){
        x+=x;
        c++;
        if(x.find(s)!=string::npos) break;
        if(x.length()>n*m){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<c<<endl;
}

int main()
{
    takeinput();
    tc{
        sk();
    }
    return 0;
}