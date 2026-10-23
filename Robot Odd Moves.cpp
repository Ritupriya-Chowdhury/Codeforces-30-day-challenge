/**|----------------------------------------------------------------------------|
|....................<<<<<<<<RITUPRIYA CHOWDHURY>>>>>>>>.....................|
|....................<<<<<<<<BGC TRUST UNIVERSITY>>>>>>>.....................|
|----------------------------------------------------------------------------|**/
#include<bits/stdc++.h>
#define pi 3.141592653589793
#define ll long long int
#define Allv v.begin(),v.end()
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define my cout<<"MAYBE"<<endl
using namespace std;
void solve()
{
    int a,b,ans;
    cin>>a>>b;
    if(b>a+1) ans=-1;
    else if(a%2==b%2) ans=a;
    else ans=a+1;
    cout<<ans<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
