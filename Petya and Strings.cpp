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
   string s1,s2,result;
   cin>>s1;
   cin>>s2;
   int n1, n2,i;
   n1=s1.size();
   n2=s2.size();

   if(n1<n2) result="-1";
   else if(n2<n1) result="1";
   else{
    result="0";
    for(i=0;i<n1;i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z') s1[i]=s1[i]+32;
        if(s2[i]>='A'&& s2[i]<='Z') s2[i]=s2[i]+32;
    }

    for(i=0;i<n1;i++){
        if(s1[i]<s2[i]) {
            result="-1";
            break;
        }

        if(s1[i]>s2[i]) {
            result="1";
            break;
        }
    }

   }
   cout<<result<<endl;


}
int main()
{

    solve();
    return 0;
}
