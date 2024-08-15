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
    int t;
    cin>>t;
    while(t--){
        double a,b,c;
        cin>>a>>b>>c;
        double avg=(a+b)/2;
        double ab=abs(avg-a);
        cout<<ceil(ab/c)<<endl;
    }
}