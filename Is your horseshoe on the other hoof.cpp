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
    int a[5],i,c=0;
    for(i=0;i<4;i++) cin>>a[i];

    sort(a,a+4);
    for(i=0;i<3;i++){
        if(a[i]==a[i+1]) c++;
    }
    cout<<c<<endl;




}
int main()
{

    solve();
    return 0;
}
