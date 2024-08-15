#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string result = (n%2==0 and n>2) ? "Yes" : "No";
    cout<<result;
}