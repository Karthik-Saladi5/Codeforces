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
    //Your code here
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        vector<int> l(k),r(k);
        for(int i=0;i<k;i++)    cin>>l[i];
        for(int i=0;i<k;i++)    cin>>r[i];
        int q;  cin>>q;
        vector<int> x(q);
        for(int i=0;i<q; i++)  cin>>x[i]; 
        vector<int> rc(n+1,0);
        for(int i=0;i<k;i++){
            rc[l[i]]++;
            rc[r[i]+1]--;
        }
        int tr=0;
        for(int i=1;i<=n;i++){
            tr+=rc[i];
            if(tr%2==1){
                int a=min(x[i-1],r[tr/2]);
                int b=max(x[i-1],r[tr/2]);
                reverse(s.begin()+a-1,s.begin()+b);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}