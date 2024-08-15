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
    vi positions(n), powers(n);
    for (auto& i : positions) cin >> i;
    for (auto& i : powers) cin >> i;
    vector<pi> left, right;
    for (int i = 0;i < n;i++) {
        ll x = positions[i];
        ll p = powers[i];
        left.PB({ x-p,x });
        right.PB({ x,x+p});
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    ll coverRight = positions[0];
    for (auto i : right) {
        if (i.F <= coverRight) coverRight = max(i.S, coverRight);
        if (coverRight >= positions[n - 1]) {
            yes;
            return;
        }
    }
    ll coverLeft = positions[n-1];
    for (auto i : left) {
        if (i.S >= coverLeft) coverLeft = min(i.F, coverLeft);
        if (coverLeft <= positions[0]) {
            yes;
            return;
        }
    }
    for (auto l : left) {
        for (auto r : right) if (r.F <= positions[0] && l.S >= positions[n - 1] && r.S >= l.F) {
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
}d
/*
sit straight
type it now
focus on aditya university logo
karthik saladi
kowshik jallipalli
inshirt
double trouble
sofia and the lost ope
boys thopul
[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[{{{{{{{{{{{{{{{{{{{{{{{{[[[[[[[[[[]]]]]]]]]]}}}}}}}}}}}}}}}}}}}}}}}}]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]
*/