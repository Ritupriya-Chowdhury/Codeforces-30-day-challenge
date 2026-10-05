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
    getline(cin, s);
    int n,i;
    n=s.size();
    set<char> a;
    for(i=0;i<n;i++){
        if(s[i]>='a'&&s[i]<='z') a.insert(s[i]);
    }
    cout<<a.size()<<endl;

}
int main()
{

    solve();
    return 0;
}
