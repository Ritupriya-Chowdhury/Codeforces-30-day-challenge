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
    int a[n+1];
    for(i=0; i<n; i++) cin>>a[i];
    int m=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>0)
            m=m-a[i];
        else m=m+a[i];
    }
    cout<<m<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
