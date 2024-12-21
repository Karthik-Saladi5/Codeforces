#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define pb push_back
#define F first
#define S second
#define SQ(a) (a)*(a)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define ALL(a) (a).begin(), (a).end()
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
    freopen("D:\\coding\\error.txt","w",stderr);
    #endif
}
string xorStrings(string a, string b) {
    string result = "";
    int n = max(a.length(), b.length());

    // Pad shorter string with zeros
    string aPadded = string(n - a.length(), '0') + a;
    string bPadded = string(n - b.length(), '0') + b;

    // Perform XOR operation
    for (int i = 0; i < n; i++) {
        result += (aPadded[i] == bPadded[i]) ? '0' : '1';
    }

    return result;
}

void sk() {
    string s;
    cin >> s;
    int n = s.size();
    string maxXOR(n,'0');
    int l1 = 1, r1 = n, l2 = 1, r2 = 1;
    int sub = 0;
    for (int i = 0;i < n;i++) {
        if (s[i] == '0') {
            sub = i;
            break;
        }
    }
    sub = n - sub;
    for (int k = 0; k < n-sub; k++) {
        string cur = xorStrings(s, s.substr(k, sub));
        if (cur > maxXOR) {
            maxXOR = cur;
            l2 = k+1 ;
            r2 = k+sub;
        }
    }
    cout <<l1<<" "<<r1<<" "<<l2<<" "<<r2<< "\n";
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   takeinput();
   tc sk();
    return 0;
}