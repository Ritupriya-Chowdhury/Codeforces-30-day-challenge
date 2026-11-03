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
    string s;
    cin>>s;
    int n,i;
    n=s.size();
    for(i=0;i<n;i++){
    if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    }
    if(s[0]=='y'&&s[1]=='e'&&s[2]=='s') yes;
    else  no;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
