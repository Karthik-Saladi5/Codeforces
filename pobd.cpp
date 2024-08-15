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
bool isBinary(int n) {
    string str = to_string(n);
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}
void sk() {
    // Your code goes here
    vector<int> bin = {
        1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 
        1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 
        10011, 10100, 10101, 10110, 10111, 11000, 11001, 
        11010, 11011, 11100, 11101, 11110, 11111, 100000, 
        100001, 100010, 100011, 100100, 100101, 100110, 
        100111, 101000, 101001, 101010, 101011, 101100, 
        101101, 101110, 101111, 110000, 110001, 110010, 
        110011, 110100, 110101, 110110, 110111, 111000, 
        111001, 111010, 111011, 111100, 111101, 111110, 
        111111
    };
    int n; cin >> n;
    for (auto i : bin) {
        if (n % i == 0) {
            int temp = n;
            while (temp % i == 0 && i!=1) temp /= i;
            if (isBinary(temp)) {
                yes;
                return;
            }
        }
    }
    no;
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