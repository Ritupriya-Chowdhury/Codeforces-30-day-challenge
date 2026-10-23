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
    int t,c=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron") c+=4;
        else if(s=="Cube") c+=6;
        else if(s=="Octahedron") c+=8;
        else if(s=="Dodecahedron") c+=12;
        else if(s=="Icosahedron") c+=20;
    }
    cout<<c<<endl;




}
int main()
{

    solve();
    return 0;
}
