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
    int h[n+1], a[n+1],i,j,c=0;
   for(i=0;i<n;i++)
    {
        cin>>h[i]>>a[i];

    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j&&h[i]==a[j]) c++;
        }
    }
    cout<<c<<endl;

    }
int main()
{

    solve();
    return 0;
}
