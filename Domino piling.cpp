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
    int m,n, mul,result;
    cin>>m>>n;
    if(m==1&&n==1) result=0;
    else{
          mul=m*n;
          result=mul/2;

    }


    cout<<result<<endl;

}
int main()
{

    solve();
    return 0;
}
