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
    int k,l,m,n,d,c=0,i;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++){
        if(i%k==0||i%l==0||i%m==0||i%n==0) c++;
    }
    cout<<c<<endl;



}
int main()
{

    solve();
    return 0;
}
