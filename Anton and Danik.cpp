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
    string s;
    cin>>s;
    int k=0,i,c=0;
    for(i=0;i<n;i++){
        if(s[i]=='D') k++;
        if(s[i]=='A') c++;

    }
    if(k>c) cout<<"Danik"<<endl;
    else if(c>k) cout<<"Anton"<<endl;
    else if(c==k) cout<<"Friendship"<<endl;



}
int main()
{

    solve();
    return 0;
}
