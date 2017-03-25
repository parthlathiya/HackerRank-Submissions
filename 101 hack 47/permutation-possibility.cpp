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

bool a[100001];

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("permutation-possibility_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int n,t;
    cin>>n;
    rep(i,0,n)
    {
        cin>>t;
        if(!a[t-1])a[t-1]=1;else{cout<<"NO";return 0;}
    }
    cout<<"YES";
//  --------------------------------------------------------------------------------------

return 0;
}
