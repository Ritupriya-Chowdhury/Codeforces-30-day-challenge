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
   double sum=0,a,i,ans;
   for(i=0;i<n;i++){
    cin>>a;
    sum+=a;
   }
   ans=(sum*1.0)/n;

   printf("%.12lf\n",ans);


}
int main()
{

    solve();
    return 0;
}
