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
#define ff first
#define ss second
#define msll std::multiset<ll>
#define all(c) c.begin(), c.end()
#define allr(c) c.rbegin(), c.rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(allr(x))
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define pb push_back
#define s(yy) ll yy;cin>>yy
#define mod 1e9+7
#define maxlong 1e18+5


/*
###################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
###################################################### 
*/


//global var default value 0,;local var inside fun max size 10^6, but if declare globbally size 10^7


// ll a[100001][100001];
mpll m;
mpll dp;
mpll sum;


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("palindromic-table_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------

	s(n);
	s(mm);
	// ll a[n][m];
	ll tt;

	re(i,n)
		re(j,mm){
			cin>>tt;
			if(tt==0){
				m[{i,j}]=0;
			}
			else
				m[{i,j}]=1<<(tt-1);

		}

	// re(i,n)	{
	// 	re(j,mm)
	// 		cout<<m[{i,j}]<<" ";
	// cout<<endl;
	// }

	// ll dp[n][mm];
	dp[{0,0}]=m[{0,0}];
	sum[{0,0}]=m[{0,0}];
	rep(i,1,mm){
		dp[{0,i}]=m[{0,i}]^dp[{0,i-1}];
		sum[{0,i}]=m[{0,i}]+sum[{0,i-1}];
	}
	rep(i,1,n){
		dp[{i,0}]=m[{i,0}]^dp[{i-1,0}];
		sum[{i,0}]=m[{i,0}]+sum[{i-1,0}];
	}
	rep(i,1,n)
		rep(j,1,mm){
			dp[{i,j}]=dp[{i-1,j}]^dp[{i,j-1}]^dp[{i-1,j-1}]^m[{i,j}];
			sum[{i,j}]=sum[{i-1,j}]+sum[{i,j-1}]-sum[{i-1,j-1}];
		}

	// re(i,n)	{
	// 	re(j,mm)
	// 		cout<<dp[{i,j}]<<" ";
	// cout<<endl;
	// }
	ll rectA=-1,x1,x2,y1,y2;
	rep(i,0,n)
		rep(j,0,mm)
			rep(k,-1,i)
				rep(l,-1,j){
					ll temp,sumo;
					if(k==-1 && l==-1){
						temp=dp[{i,j}];
						sumo=sum[{i,j}];
					}

					else if(l==-1){
						temp=dp[{i,j}]^dp[{k,j}];
						sumo=sum[{i,j}]-sum[{k,j}];
					}
					else if(k==-1){
						temp=dp[{i,j}]^dp[{i,l}];
						sumo=sum[{i,j}]-sum[{i,l}];
					}
					else{
						temp=dp[{i,j}]^dp[{i,l}]^dp[{k,j}]^dp[{k,l}];
						sumo=sum[{i,j}]-sum[{i,l}]-sum[{k,j}]+sum[{k,l}];
					}
					// cout<< 
					if(temp==0 && sumo && (i-k)*(j-l)>rectA){
						rectA=(i-k)*(j-l);
						x1=k;y1=l;x2=i;y2=j;
					}
					
				}
	if(rectA==-1)
		cout<<1<<"\n"<<0<<" "<<0<<" "<<0<<" "<<0;
	else{
		cout<<rectA<<"\n";
		cout<<x1+1<<" "<<y1+1<<" "<<x2<<" "<<y2;		
	}

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}