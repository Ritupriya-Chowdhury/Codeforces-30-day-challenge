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
    int n,x,c=0,i;
    cin>>n>>x;
    int a[n+1];
    for(i=0;i<n;i++)
    cin>>a[i];
   for(i=0;i<n;i++)
    {

       if(a[i]!=0&&a[i]>=a[x-1]) c++;
    }
    cout<<c<<endl;


}
int main()
{

    solve();
    return 0;
}
