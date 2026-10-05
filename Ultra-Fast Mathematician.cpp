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
    string s1,s2,s3;
    cin>>s1>>s2;
    n=s1.size();
    for(i=0;i<n;i++){
        if(s1[i]==s2[i]) s3+='0';
        else s3+='1';
    }
    cout<<s3<<endl;

}
int main()
{

    solve();
    return 0;
}
