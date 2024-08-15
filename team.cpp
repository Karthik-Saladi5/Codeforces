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
    //Stakeinput();
    int n;
    cin>>n;
    int a,b,c,cnt=0;
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>=2) cnt++;
    }
    cout<<cnt;
}