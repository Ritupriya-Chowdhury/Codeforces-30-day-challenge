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
    int n1,n2=0,i;
    cin>>s;
    n1=s.size();
    int a[n1];
    for(i=0;i<n1;i++){
        if(s[i]>='0'&&s[i]<='9'){
            a[n2]=s[i]-48;
            n2++;
        }
    }
    sort(a,a+n2);
    for(i=0;i<n2-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[n2-1]<<endl;





}
int main()
{

    solve();
    return 0;
}
