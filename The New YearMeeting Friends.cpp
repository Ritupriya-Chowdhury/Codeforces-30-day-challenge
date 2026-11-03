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
    int x,y,z,i,mi=101,ma=0;
    cin>>x>>y>>z;
    mi=min(mi,x);
    mi=min(mi,y);
    mi=min(mi,z);
    ma=max(ma,x);
    ma=max(ma,y);
    ma=max(ma,z);
    cout<<ma-mi<<endl;




}
int main()
{

    solve();
    return 0;
}
