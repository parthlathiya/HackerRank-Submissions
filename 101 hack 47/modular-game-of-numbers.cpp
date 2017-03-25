#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define pb push_back
#define mod 1e9+7

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int ans[4001];

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("modular-game-of-numbers_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n,p,q;
    cin>>n>>p>>q;
    int a[p],b[q];
    rep(i,0,p)
        cin>>a[i];
    rep(i,0,q)
        cin>>b[i];
    rep(i,0,p)
    {
        rep(j,0,q)
        {
           ans[(n-((a[i]+b[j])%n))%n]++; 
        }
    }
//    rep(i,0,n)
//    cout<<ans[i];
    int anss=4002,ind;
    ans[n]=ans[0];
    rep(i,1,n+1)
    {
        if(ans[i]<anss){anss=ans[i];ind=i;}
    }    
//    cout<<ind;
    // if(!ind)
    //     cout<<ind+n;
    // else
        cout<<ind;
        

//  --------------------------------------------------------------------------------------

return 0;
}
