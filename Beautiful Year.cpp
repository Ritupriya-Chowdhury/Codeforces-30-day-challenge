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
    int y,x,i,a,b,c,d;
    cin>>y;
   for(i=y+1;i<=9999;i++){
    x=i;
    a=x%10;
   x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x%10;
    if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d) break;
   }
   cout<<i<<endl;

}
int main()
{

    solve();
    return 0;
}
