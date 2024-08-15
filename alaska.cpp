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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for (int i = 1, o = 1;i <= n;i++, o += 2) {

            cout << o << " ";

        }
        cout<<endl;
    }
}