#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
#define llu long long unsigned
#define pll std::pair<ll, ll> 
#define ppll std::pair<ll, pll>
#define vll std::vector<ll> 
#define vpll std::vector<pll> 
#define vppll std::vector<ppll> 
#define mll std::unordered_map<ll, ll> 
#define mpll std::unordered_map<pll, ll>
#define mppll std::unordered_map<ppll, ll>
#define sll std::set<ll>
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1000000007
#define maxlong 1e18+5


/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/

ll x,s,f,m,n;
int sm;
ld ct[35][25][25];
ll cto[35][25][25];
pair<ld,ll> dp[25][35];
// vll v;

pair<ld,ll> calc(ll s,int mm)
{
	if(dp[s][mm].ff!=-1)
		return dp[s][mm];
	if(mm==sm){
		// v.eb(s);
		// if(s==f)
		// 	return {-1000000000000000.0,0};
		return {ct[mm][s][f],cto[mm][s][f]};
	}

	ld ma=-1;
	ll ma1;
	// idx;
	if((m>>mm) & 1)
	{
		re(i,n){
			if(ct[mm][s][i]+calc(i,mm-1).ff-ma>0){
				ma=ct[mm][s][i]+calc(i,mm-1).ff;
				ma1=(cto[mm][s][i]*calc(i,mm-1).ss)%mod;
				// idx=i;
			}
			// ma=max(ma,ct[mm][s][i]+calc(i,mm-1));
		}
		// v.eb(idx);
	}
	else
	{
		re(i,n){
				if(calc(s,mm-1).ff-ma>0){
				ma=calc(s,mm-1).ff;
				ma1=calc(s,mm-1).ss;
				// idx=i;
			}
			// ma=max(ma,calc(s,mm-1));
		}
	}
	// v.eb(idx);
	return dp[s][mm]={ma,ma1};
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("currencies_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	cin>>n;
	cin>>x>>s>>f>>m;
	
	re(i,35)
		re(j,25)
			re(k,25)
				ct[i][j][k]=-1000000000000000.0;
	ll a;
	re(i,n)
		re(j,n){
			cin>>a;
			ct[0][i][j]=log2(a);
			cto[0][i][j]=(a);
		}

	re(i,25)
		re(j,35)
			dp[i][j].ff=-1;
			// 21][31];

	// int temp=ceil(log2(m));
			// int temp=32;
	re(p,34)
	{
		re(i,n)
			re(j,n)
			{
				re(k,n)
				{
					// if(k==i || k==j)
					// 	continue;
					if((ct[p][i][k]+ct[p][k][j]-ct[p+1][i][j])>0){
						ct[p+1][i][j]=ct[p][i][k]+ct[p][k][j];
						cto[p+1][i][j]=(cto[p][i][k]*cto[p][k][j])%mod;
					}
				}
			}
	}

	re(p,35)
	{
		if((m>>p) & 1) {
			sm=p;
			break;
		}
	}

	// for(auto aaa:v)
		// cout<<aaa<<endl;

	// cout<<x*calc(s,30)<<endl;
	pair<ld,ll> aaa=calc(s,35);
	// cout<<log(x)+aaa.ff<<endl;
	cout<<(x*aaa.ss)%mod<<endl;

	// for(auto aaa:v)
	// 	cout<<aaa<<endl;


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}
