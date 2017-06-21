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
#define diff(a,b) max(a,b)-min(a,b)


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

set<int> ss;
set<ll> s[28];
// int smart

vector<vector<int> > ans;

void setcover(int i, set<ll> rem,vector<int> taken)
{

	// if(my.find(mp(i,rem))!=my.end())
        // return my[mp(i,k)];

    // map[mp(i,rem)]
 //     for(set<ll>::iterator it=rem.begin();it!=rem.end();it++)
	// {
	// 	cout<<*it<<" ";
	// }
	// cout<<endl;
	if(rem.empty())
	{
		// cout<<"1";
		ans.pb(taken);
		return;
	}
	if(i==-1){return;}
	set<int>::iterator it = ss.begin();
	std::advance(it, i);

	//not take
	setcover(i-1,rem,taken);

	//take
	taken.pb(i);
	set<ll> res;
	set_difference(rem.begin(), rem.end(), s[*it].begin(), s[*it].end(),std::inserter(res, res.end()));
	setcover(i-1,res,taken);
// for(set<ll>::iterator it=res.begin();it!=res.end();it++)
// 	{
// 		cout<<*it<<" ";
// 	}
}

int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("best-mask_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

s(n);
// ll a[n];
// ll con=pow(2,27)-1;
// ll b[28];
// rep(i,0,28)
// 	b[i]=con;
// ll maxx=-1;
ll cnt;
ll t;
set<ll> total;
rep(i,0,n)
{
	cin>>t;
	ll bk=t;
	cnt=1;
	while(t!=0){
		if((t&1)==1)
		{
			s[cnt].insert(bk);
		}
		cnt++;
		t=t>>1;
	}
	total.insert(bk);
	// maxx=max(maxx,cnt);
	// b[cnt]=b[cnt]&bk;
	// cout<<(7 & 1)<<endl;
}

// rep(i,1,28)
// {
// cout<<endl<<i<<endl;
// 	for(set<ll>::iterator it=s[i].begin();it!=s[i].end();it++)
// 	{
// 		cout<<*it<<" ";
// 	}
// }
// 	for(set<ll>::iterator it=total.begin();it!=total.end();it++)
// 	{
// 		cout<<*it<<" ";
// 	}

// cout<<"hello";
// rep(i,0,27)
// 	cout<<i<<" "<<b[i]<<endl;
// cout<<"f";
// cout<<maxx;

rep(i,1,28)
{
	if(!s[i].empty())
		ss.insert(i);
}

	// for(set<int>::iterator it=ss.begin();it!=ss.end();it++)
	// {
	// 	cout<<*it<<" ";
	// }
vector<int> taken;
setcover(ss.size()-1,total,taken);
// cout<<ss.size()-1<<endl;
// set<int>::iterator it1 = ss.begin();
// 	std::advance(it1, 1);
// 	// s[*it1];
// for(set<ll>::iterator it=s[*it1].begin();it!=s[*it1].end();it++)
// 	{
// 		cout<<*it<<" ";
// 	}

int mins=30;
rep(i,0,ans.size())
{
	// rep(j,0,ans[i].size())
	// {
	// 	cout<<ans[i][j]<<" ";
	// }
	mins=min(mins,(int)ans[i].size());
	// cout<<endl;
}
ll minss=1000;
int index;
rep(i,0,ans.size())
{
	if(ans[i].size()==mins)
	{
		ll cntt=0;
		rep(j,0,ans[i].size())
		{
	 		cntt+=ans[i][j];
	 	}
	 	if(cntt<minss)
	 	{
	 		minss=cntt;
	 		index=i;
	 	}
	 	// minss=min(minss,cntt);
	}
	// rep(j,0,ans[i].size())
	// {
	// 	cout<<ans[i][j]<<" ";
	// }
	// mins=min(mins,(int)ans[i].size());
	// cout<<endl;
}

ll anss=0;
rep(i,0,ans[index].size())
{
	anss+=pow(2,ans[index][i]);
}
cout<<anss;
// rep()
// {}

// ll ans=pow(2,maxx);
// repr(j,maxx)
// {
	
// 	if((b[j]&ans)==0)
// 		ans+=pow(2,j);

// }

// cout<<fixed<<ans<<endl;
// cout<<fixed<<pow(2,26)<<endl;
//  --------------------------------------------------------------------------------------

return 0;
}
