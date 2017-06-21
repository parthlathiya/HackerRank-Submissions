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
#define pll std::pair<ll, ll>
#define mpll std::map<pair<ll,ll>, ll>
#define sll std::set<ll>
#define fi first
#define se second
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
#define maxlong 9223372036854775808


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/

// vll primes;
// vll primefac[10000001];

// void sieve(ll n)
// {
//  rep(i,2,n+1)
//  {
//      if(primefac[i].empty())
//      {   
//          primes.pb(i);
//          for(ll j=i;j<=n;j+=i)
//              primefac[j].pb(i);
//      }
//  }
// }

/* Iterative Function to calculate (x^y) in O(log y) */
ll power(ll x, ll y,ll m)
{
    ll res = 1;     // Initialize result
  
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*(x%m))%m;
  
        // n must be even now
        y = y>>1; // y = y/2
        x = (x*x)%m;  // Change x to x^2
    }
    return res;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifdef PARTH_LATHIYA_HOME

     freopen("tower-3-coloring_in.txt","r",stdin);
    
    //  ll ttt,bkkk;
    //  cin>>ttt;
    //  bkkk=ttt;
    //  while(ttt--) {
    //      cout<<"Testcase - "<<bkkk-ttt<<"\n";
    // #endif

//--------------------------------------------------------------------------------------

    s(n);
    ll po=power(3,n,mod-1);
    cout<<power(3,po,mod);
    

//--------------------------------------------------------------------------------------
    
    // #ifdef PARTH_LATHIYA_HOME
    //  cout<<"\n"; }
    // #endif

    return 0;
}