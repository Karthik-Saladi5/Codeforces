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
    int a,b,c,cnt=0;
    cin>>a>>b>>c;
    bool f=1;
    int ml=min(min(a,b),c);
    if(a%ml!=0 or b%ml!=0 or c%ml!=0) f=0;
    while(a!=ml){
        if(a%ml!=0 or cnt>3){
            f=0;
            break;
        }
        a-=ml;
        cnt++;
    }
    while(b!=ml){
        if(b%ml!=0 or cnt>3){
            f=0;
            break;
        }
        b-=ml;
        cnt++;
    }
    while(c!=ml){
        if(c%ml!=0 or cnt>3){
            f=0;
            break;
        }
        c-=ml;
        cnt++;
    }
    if(cnt>3) f=0;
    if(f) yes;
    else no;
}

int main()
{
    takeinput();
    tc{

    sk();
    }
    return 0;
}