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
void sk() {
    // Your code goes here
    int n; cin >> n;
    vector<ll> a(n), b(n);
    unordered_map<ll,ll> freq;
    for (auto& i : a) cin >> i;
    // for (auto& i : a) cout<< i<<" ";
    for (auto& i : b) cin >> i;
    int m; cin >> m;
    for (int i = 0;i < m;i++) {
        ll temp; cin >> temp;
        freq[temp]++;
    }
    for (int i = 0;i < n;i++){
        if (a[i] != b[i]) {
            if (freq.find(b[i]) != freq.end()) {
                freq[b[i]]--;
                if (freq[b[i]] == 0) freq.erase(b[i]);
            }
            else {
                no;
                return;
            }
        }
    }
    // yes;
    for (auto i : freq) {
        if (i.second > 1) {
            yes;
            return;
        }
    }
    no;
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