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
    int n,c=0,i,l=n,r=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            c++;
            l=min(l,i);
            r=max(r,i);
        }
    }
    if(c<=2) cout<<c-1<<endl;
    else cout<<r-l<<endl;

    }
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
