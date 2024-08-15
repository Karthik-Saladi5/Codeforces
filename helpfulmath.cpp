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
    string s;
    cin>>s;
    vector<int> digits;
    for(int i=0;i<s.length();i+=2){
        digits.pb(s[i]);
    }
    sort(digits.begin(),digits.end());
    for(int i=0,j=0;i<s.length(),j<digits.size();i+=2,j++){
        s[i]=digits[j];
    }
    cout<<s;
}