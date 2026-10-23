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
    ll n,ans;
    cin>>n;
    if(n<=2) cout<<0<<endl;
    else
    {
        if(n%2==0)
            ans=(n/2)-1;
        else
            ans=n/2;
        cout<<ans<<endl;
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
