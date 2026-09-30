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
    int n;
    cin>>n;
    int a,b,i,m=0,p=0;
    for(i=0; i<n; i++)
    {
        m=max(m,p);
        cin>>a>>b;
        p=p-a+b;
    }
    cout<<m<<endl;

}
int main()
{

    solve();
    return 0;
}
