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
    int a[n+1],i,ans;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    int maxl=0, minr=0;
    for(i=0;i<n;i++){
        if(a[i]>a[maxl]) maxl=i;
        if(a[i]<=a[minr]) minr=i;

    }
    ans=maxl+(n-1-minr);
    if(maxl>minr) ans--;
    cout<<ans<<endl;


}
int main()
{

    solve();
    return 0;
}
