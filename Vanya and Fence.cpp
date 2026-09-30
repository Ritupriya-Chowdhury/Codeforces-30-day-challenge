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
    int n,h,s1=0,s2=0;
    cin>>n>>h;
    int a[n+1],i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h) s1++;
        else if(a[i]>h) s2=s2+2;

    }
    cout<<(s1+s2)<<endl;

}
int main()
{

    solve();
    return 0;
}
