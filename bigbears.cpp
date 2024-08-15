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
       // takeinput();
    // Your code here
    int a,b;
    cin>>a>>b;
    int c=0;
    while(a<=b){
        a*=3;
        b*=2;
        c++;
    }
    cout<<c;
}