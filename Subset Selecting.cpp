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
    int l=s.size(),k=0;
    if(l<=10) cout<<s<<endl;
    else{
        k=l-2;
        cout<<s[0]<<k<<s[l-1]<<endl;
    }



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
