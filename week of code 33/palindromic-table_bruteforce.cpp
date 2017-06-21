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

mpll m;

ll doxor(ll a,ll b,ll c,ll d)
{
	ll temp=0;
	rep(i,a,c+1)
		rep(j,b,d+1)
			temp^=m[{i,j}];
	return temp;
}	

ll dosum(ll a,ll b,ll c,ll d)
{
	ll sum=0;
	rep(i,a,c+1)
		rep(j,b,d+1)
			sum+=m[{i,j}];
	return sum;
}

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

	ll tt;

	re(i,n)
		re(j,mm){
			cin>>tt;
			if(!tt)
				m[{i,j}]=tt;
			else
				m[{i,j}]=1<<(tt-1);
		}

	ll Area=-1;
	ll x1,x2,y1,y2;
	rep(i,0,n)
		rep(j,0,mm)
			rep(k,i,n)
				rep(l,j,mm){
					ll temp=doxor(i,j,k,l);
					ll sum=dosum(i,j,k,l);
					// cout<<i<<j<<k<<l<<temp<<" "<<sum<<endl;
					if(sum!=0 && temp==0 && (k-i+1)*(l-j+1)>Area)
					{
						Area=(k-i+1)*(l-j+1);
						x1=i;y1=j;x2=k;y2=l;
					}
				}
	if(Area==-1)
		cout<<1<<"\n"<<0<<" "<<0<<" "<<0<<" "<<0;
	else{
		cout<<Area<<"\n";
		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;		
	}


//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}