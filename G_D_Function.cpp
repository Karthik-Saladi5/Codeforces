#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
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
long long long sod(long long long n) {
    long long long s = 0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }
    cout << s << " ";
    return s;
}
void sk() {
    // Your code goes here
    long long long l, r, k;
     cin >> l >> r >> k;
    long long long left =pow( 10,l);
    long long long right = pow(10,r);
    long long long c = 0;
    for (long long long i = left;i < right;i++) {
        if (sod(k * i) == k * sod(i)) c = (c + 1) % mod;
    }
    cout << c << endl;
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   // takeinput();
    tc sk();
    return 0;
}