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
int solve(int n,vector<string> &mat){
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            freq[mat[i][j]-'a']++;
        }
    }
    int t=0;
    for(int i=0;i<13;i++) t+=min(freq[i],freq[25-i]);
    return t;
}
void sk(){
    // Your code goes here
    int n; cin>>n;
    vector<string> mat(n);
    for(int i=0;i<n;i++) cin>>mat[i];
    int ans=0;
    vector<vector<bool>> v(n, vector<bool>(n,false));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]) continue;
            map<char,int> freq;
            freq[mat[i][j]-'a']++;
            freq[mat[j][n-1-i]-'a']++;
            freq[mat[n-1-i][n-1-j]-'a']++;
            freq[mat[n-1-j][i]-'a']++;
            v[i][j]=v[j][n-1-i]=v[n-1-i][n-1-j]=v[n-1-j][i]=true;
            for(auto &[key,value]:freq) ans+=(freq.rbegin()->first-key)*value;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    takeinput();
    tc{
        sk();
        }
    return 0;
}