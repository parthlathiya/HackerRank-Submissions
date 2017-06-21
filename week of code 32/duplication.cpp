#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define pb push_back
#define mod 1000000007

/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("duplication_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

    int q,t;
    cin>>q;
    rep(i,0,q)
    {
        cin>>t;
        
        int d=t%2,cnt=0;
        t=(t>>1);

        while(t)
        {
            cnt+=t%2;
            t=t>>1;
        }
        if(cnt%2)
            cout<<1-d<<endl;
        else
            cout<<d<<endl;
    }
    
//  --------------------------------------------------------------------------------------

return 0;
}
