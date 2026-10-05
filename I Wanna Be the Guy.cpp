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
    int k,x,y,i;
    set<int>a;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>k;
        a.insert(k);
    }
    cin>>y;
    for(i=0; i<y; i++)
    {
        cin>>k;
        a.insert(k);
    }
    if(a.size()!=n) cout<<"Oh, my keyboard!"<<endl;
    else cout<<"I become the guy."<<endl;

}
int main()
{

    solve();
    return 0;
}
