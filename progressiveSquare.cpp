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
    ll n, c, d;
    cin >> n >> c >> d;
    unordered_map<int, int> freq;
    unordered_map<int, int> freq1;
    ll a = LONG_LONG_MAX;
    for (int i = 0;i < n * n;i++) {
        ll temp;cin >> temp;
        a = min(a, temp);
        freq[temp]++;
    }
    vector<vector<ll>> v(n, vector<ll>(n));
    v[0][0] = a;
    freq1[v[0][0]]++;
    for (int i = 0;i < n;i++) {
        for (int j = 1;j < n;j++) {
            v[i][j] = v[i][j - 1] + c;
            freq1[v[i][j]]++;
        }
        if (i + 1 < n) {
            v[i + 1][0] = v[i][0] + d;
            freq1[v[i + 1][0]]++;
        }
    }
    if (freq.size() != freq1.size()) {
        no;
        return;
    }
    for (auto i : freq) {
        if (freq1.find(i.first) == freq1.end() || freq1[i.first] != i.second) {
            no;
            return;
        }
    }
    yes;
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