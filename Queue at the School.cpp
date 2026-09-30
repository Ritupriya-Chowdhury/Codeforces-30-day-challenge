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
    int n,m,i;
    cin>>n>>m;
    string s;
    cin>>s;
    while(m--){
        for(i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }

        }
    }
    cout<<s<<endl;


}
int main()
{

    solve();
    return 0;
}
