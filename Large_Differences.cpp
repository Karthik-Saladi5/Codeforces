#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
#define tc\
        int t;\
        cin>>t;\
        while(t--)
void sk(){
	// your code goes here
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a) cin>>i;
    int s = 0;
    for (int i = 0; i < n - 1; ++i) s += abs(a[i] - a[i + 1]);
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int left = (i > 0) ? a[i - 1] : 0;
        int right = (i < n - 1) ? a[i + 1] : 0;
        int mx1 = 0;
        if (i > 0) mx1 += abs(1 - left) - abs(a[i] - left);
        if (i < n - 1) mx1 += abs(1 - right) - abs(a[i] - right);        
        int mxk = 0;
        if (i > 0) mxk += abs(k - left) - abs(a[i] - left);
        if (i < n - 1) mxk += abs(k - right) - abs(a[i] - right);
        int mxi = max(mx1, mxk);
        mx = max(mx, mxi);
    }    
    int ans = s + mx;
    cout<<ans<<endl;
}
int main() {
	tc{
	    sk();
	}
	return 0;
}
