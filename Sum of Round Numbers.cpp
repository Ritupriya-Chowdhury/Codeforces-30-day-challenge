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
  ll n,i,p=1,k;
  cin>>n;
  vector<int>v;
  while(n>0){
    if((n%10)>0){
            k=(n%10)*p;
        v.push_back(k);
    }
    n=n/10;
    p*=10;
  }
  cout<<v.size()<<endl;
  for(i=0;i<v.size()-1;i++){
    cout<<v[i]<<" ";
  }
  cout<<v[v.size()-1]<<endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
