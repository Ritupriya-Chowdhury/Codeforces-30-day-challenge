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
    int k,i,c=0;
    k=s.size();
    for(i=0;i<k;i++){
        if(s[i]=='7') c++;
        if(s[i]=='4') c++;
    }
    if(c==7||c==4) yes;
    else no;


}
int main()
{

    solve();
    return 0;
}
