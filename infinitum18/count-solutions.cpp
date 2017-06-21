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


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifdef PARTH_LATHIYA_HOME

     freopen("count-solutions_in.txt","r",stdin);
    
    //  ll ttt,bkkk;
    //  cin>>ttt;
    //  bkkk=ttt;
    //  while(ttt--) {
    //      cout<<"Testcase - "<<bkkk-ttt<<"\n";
    // #endif

//--------------------------------------------------------------------------------------

    s(q);
    rep(i,0,q){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll finalans=0;
        rep(j,1,c+1)
        {
            sll ans;
            ld A=1;
            ld B=-b;
            ld C=j*(j-a);
            // cout<<A<<B<<C<<endl;
            ld D=(B*B)-(4*A*C);
            if(D>0)
            {
                ld r1=(-B+sqrt(D))/(2.0*A);
                ld r2=(-B-sqrt(D))/(2.0*A);
                // cout<<r1<<" "<<r2<<endl;
                if(r1-(ll)r1==0 && r1>=1 && r1<=d)
                    ans.insert(r1);
                if(r2-(ll)r2==0 && r2>=1 && r2<=d)
                    ans.insert(r2);
            }
            else if(D==0)
            {
                if((-B)/(2*A)<=d && (-B)/(2*A)>=1)
                    ans.insert((-B)/(2*A));
            }
            finalans+=ans.size();
        }
        cout<<finalans<<endl;
    }

//--------------------------------------------------------------------------------------
    
    // #ifdef PARTH_LATHIYA_HOME
    //  cout<<"\n"; }
    // #endif

    return 0;
}