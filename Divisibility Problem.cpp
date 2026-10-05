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
   int m,n,p,k,ans;
   cin>>m>>n;
   if(m%n==0) ans=0;
   else{
   p=m/n;
   k=(p+1)*n;
   ans=k-m;
   }
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
