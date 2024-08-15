#include<bits/stdc++.h>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
int main()
{
    //takeinput();
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    int cnt=0,target=arr[k-1];
    for(int i: arr){
        if(i>=target and i>0) cnt++;
    }
    cout<<cnt;
}