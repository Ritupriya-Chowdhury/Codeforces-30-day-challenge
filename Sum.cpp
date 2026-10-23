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

 int a,b,c;
 cin>>a>>b>>c;
 if((a+b)==c) yes;
 else if((b+c)==a) yes;
 else if((c+a)==b) yes;
 else no;




}
int main()
{
int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
