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
    int n,i;
    cin>>n;
   string s;
   cin>>s;
   if(n<26) no;
   else{
        set<char> l;
   for(i=0;i<n;i++){
    if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    l.insert(s[i]);
   }

   if(l.size()==26) yes;
   else no;

   }
}
int main()
{

    solve();
    return 0;
}
