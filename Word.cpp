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
    int c=0,d=0,n,i;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')c++;
        if(s[i]>='a'&&s[i]<='z')d++;
    }
    if(c>d){
        for(i=0;i<n;i++){
             if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;

        }

    }
    else if(c<=d){
        for(i=0;i<n;i++){
             if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;

        }

    }
    cout<<s<<endl;


}
int main()
{

    solve();
    return 0;
}
