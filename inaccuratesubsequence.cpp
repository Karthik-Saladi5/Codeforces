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
void sk(){
    // Your code goes here
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    unordered_map<int, int> freq, freq1;
    for (auto &i : a) cin >> i;
    for (auto &i : b) {
        cin >> i;
        freq[i]++;
    }
    for (int i = 0;i < m;i++) {
        freq1[a[i]]++;
    }
    int cur = 0, ans = 0;
    for (auto i : freq) {
        // int val = i.first;
        if (freq1.find(i.F) != freq1.end()) cur += min(freq[i.F], freq1[i.F]);
    }
    if (cur >= k) ans++;
    if (n == m) {
        cout << ans << "\n";
        return;
    }
    for (int i = 0;i < n - m;i++) {
        if (a[i] != a[i + m]) {
            cur -= min(freq[a[i]], freq1[a[i]]);
            cur -= min(freq[a[i + m]], freq1[a[i + m]]);
            freq1[a[i]]--;
            freq1[a[i + m]]++;
            cur += min(freq[a[i]], freq1[a[i]]);
            cur += min(freq[a[i+m]], freq1[a[i+m]]);
        }
        if (cur >= k) ans++;
    }
    cout << ans << endl;
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