#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define PB push_back
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
    #endif
}
void shiftR(vector<ll>& row) {
    if (!row.empty()) {
        rotate(row.rbegin(), row.rbegin() + 1, row.rend());
    }
}
void shiftL(vector<ll>& row) {
    if (!row.empty()) {
        rotate(row.begin(), row.begin() + 1, row.end());
    }
}
void shiftC(vector<vector<ll>>& matrix, ll col) {
    ll rows = matrix.size();
    ll lastElement = matrix[rows - 1][col];

    for (ll i = rows - 1; i > 0; --i) {
        matrix[i][col] = matrix[i - 1][col];
    }
    matrix[0][col] = lastElement;
}
void sk() {
    // Your code goes here
    ll n, m; cin >> n >> m;
    vector<vi> a(n, vi(m));
    vector<vi> b(n, vi(m));
    b = a;
    for (auto& i : a) {
        for (auto& j : i) cin >> j;
    }
    if (n == 1 && m == 1) {
        cout << "-1" << endl;
        return;
    }
    for (ll i = 0;i < n;i++) {
        if (i & 1) shiftL(a[i]);
        else shiftR(a[i]);
    }
    for (ll i = 0;i < m;i++) shiftC(a, i);
    // if (a == b) {
    //     cout << "-1" << endl;
    //     return;
    // }
    for (auto& i : a) {
        for (auto& j : i) cout << j << " ";
        cout << endl;
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