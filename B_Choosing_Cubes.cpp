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
    int n; cin >> n;
    int f, k; cin >> f >> k;
    vector<int> cubes(n, 0);
    for (auto& i : cubes) cin >> i;
    bool y = false, nope = 0;
    f -=1;
    int fav = cubes[f];
    sort(cubes.rbegin(), cubes.rend());
    // for (auto i : cubes) cout << i << " ";
    for (int i = 0;i < k;i++) {
        if (cubes[i] < fav) break;
        if (cubes[i] == fav) {
            y = 1;
            break;
        }
    }
    for (int i = k;i < n;i++) {
        // cout << cubes[i] << " ";
        if (cubes[i] < fav) break;
        if (cubes[i] == fav) {
            nope = 1;
            break;
        }
    }
    if (y && nope) cout << "MAYBE" << endl;
    else if (y) yes;
    else no;
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