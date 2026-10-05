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
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0) cout<<"I love ";
        else if(i%2==1) cout<<"I hate ";
        if(i<n) cout<<"that ";
        else if(i==n) cout<<"it"<<endl;
    }



}
int main()
{

    solve();
    return 0;
}
