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
    int n,x=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s=="++X") ++x;
        else if(s=="X++") x++;
        else if(s=="--X") --x;
        else if(s=="X--") x--;

    }
    cout<<x<<endl;



}
int main()
{

    solve();
    return 0;
}
