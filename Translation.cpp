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
    string s1,s2;
    cin>>s1>>s2;
    int c=0,i,j,n1,n2;
    n1=s1.size();
    n2=s2.size();
    if(n1!=n2) no;
    else
    {
        for(i=0,j=n2-1; i<n1; i++,j--)
        {
            if(s1[i]!=s2[j]){
                no;
                break;
            }
            c++;
        }
        if(c==n1) yes;


    }

}
int main()
{

    solve();
    return 0;
}
