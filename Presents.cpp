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
    int n,b;
    cin>>n;
    int a[n+1],i;
    for(i=1;i<=n;i++){
        cin>>b;
        a[b-1]=i;
    }
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;


}
int main()
{

    solve();
    return 0;
}
