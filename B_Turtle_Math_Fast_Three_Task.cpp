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
// int c = 0;
void sk() {
    // Your code goes here
    int n, s = 0;
    bool tip = false;
    cin >> n;
    vector<int> arr;
    for (int i = 0;i < n;i++) {
        int temp; cin >> temp;
        arr.PB(temp);
        if (temp == 2) tip = 1;
        s += temp;
    }
    if (s % 3 == 0) {
        cout << 0 << "\n";
        return;
    }
    // int dif = s % 3;
    // sort(arr.begin(), arr.end());
    else {
        
        for (int i = 0;i < n;i++) {
            int temp = s;
            temp -= arr[i];
            if (temp % 3 == 0) {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }
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