#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define re(i,b)                for(ll i=0;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long
#define ld long double
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
#define len length()
#define sz size()
const ll mod = 1e9 + 7;
const ll INF = 0x7FFFFFFFFFFFFFFF>>1;

/*#################################################### 
#                                                    #
#                     @author                        #
#                  Parth Lathiya                     #
#      https://www.cse.iitb.ac.in/~parthiitb/        #
#                                                    #
####################################################*/


string getstrr(string aa,ll bb)
{
	
	string temp;
	ll i=0;
	ll cnt=1;
	while(1)
	{
		temp="";
		while(i<aa.length() && aa[i]!=' '){temp+=aa[i];i++;}
		if(cnt==bb)
			return temp;
		cnt++;
		i++;
	}
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifdef PARTH_LATHIYA_HOME

		freopen("B_in.txt","r",stdin);
	
		ll ttt,bkkk;
		cin>>ttt;
		bkkk=ttt;
		while(ttt--) {
			cout<<"Testcase - "<<bkkk-ttt<<"\n";
	#endif

//--------------------------------------------------------------------------------------


	s(n);
	string temp;
	string s[n];
	getline(cin,temp);
	re(i,n)
		getline(cin,s[i]);
	ll a;
	string b,c;
	cin>>a>>b>>c;

	vector<pair<string,ll> > v;
	
	if(c=="numeric")
	{
		re(i,n){
			string ss=getstrr(s[i],a);
			string temp="";
			re(j,50-ss.length())
				temp+='0';
			v.pb({temp+ss,i});
		}
	}
	else
	{
		re(i,n){
			string ss=getstrr(s[i],a);
			v.pb({ss,i});
		}	
	}
	srt(v);

	if(b=="true")
		reverse(v.begin(),v.end());
	re(i,n)
		cout<<s[v[i].ss]<<endl;

//--------------------------------------------------------------------------------------
	
	#ifdef PARTH_LATHIYA_HOME
		cout<<"\n"; }
	#endif

	return 0;
}