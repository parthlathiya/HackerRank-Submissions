#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define ite iterator
#define maxlong 9223372036854775808


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

int main()
{

    ios::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
        freopen("cartesian-country_in.txt","r",stdin);
    #endif

//  --------------------------------------------------------------------------------------

    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    // s(n);
    ll x=min(x3-x1,x2-x3);
    ll y=min(y3-y1,y2-y3);
    cout<<2*x*y+x+y;

//  --------------------------------------------------------------------------------------

    return 0;
}
