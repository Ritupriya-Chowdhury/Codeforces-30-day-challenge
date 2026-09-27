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
   int n,i,k=0;
   cin>>s;
   n=s.size();
   sort(s.begin(),s.end());
   for(i=1;i<n;i++){
    if(s[i]!=s[i-1]) k++;
   }
   k++;

   if(k%2==0) cout<<"CHAT WITH HER!"<<endl;
   else cout<<"IGNORE HIM!"<<endl;

}
int main()
{

    solve();
    return 0;
}
