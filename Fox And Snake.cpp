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
    int m,n,i,j,k=0;
    cin>>m>>n;
    for(i=0; i<m; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<n; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(k%2==0)
            {
                 for(j=0; j<n-1; j++)
                {
                    cout<<".";
                }
                cout<<"#";
                k++;
                cout<<endl;

            }
            else
            {
                cout<<"#";
                for(j=1; j<n; j++)
                {
                    cout<<".";
                }
                k++;
                cout<<endl;


            }

        }
    }


}
int main()
{

    solve();
    return 0;
}
