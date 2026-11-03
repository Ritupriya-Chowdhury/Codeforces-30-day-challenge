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
    int n,i,k=0,c=1;
    n=s.size();
    for(i=1; i<n; i++)
    {
        if(s[i]==s[i-1]) c++;
        else c=1;

        if(c==7){
            k=1;
            break;
        }

    }
    if(k==1) yes;
    else no;

}
int main()
{

    solve();
    return 0;
}
