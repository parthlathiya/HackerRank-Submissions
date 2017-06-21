#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b)                for(ll i=a;i<b;i++)
#define repr(i,n)                for(ll i=n-1;i>=0;i--)
#define ll long long int
#define ld long double
#define llu long long unsigned
#define vll std::vector<ll>
#define mll std::map<ll, ll>
#define sll std::set<ll>
#define msll std::multiset<ll>
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



//  --------------------------------------------------------------------------------------

	ll n,s,t;
	cin>>n>>s>>t;
	
	ll r[n],ans[n];
	
	ll g,sp,p;
	cin>>r[0]>>g>>sp>>p;
	if(s==t){cout<<0;return 0;}
	set<ll> ss;
	ss.insert(0);
	rep(i,1,n)
	{	r[i]=((r[i-1]*g)+sp) % p;
	ss.insert(i);
	}	
	ans[s]=0;
	// rep(i,0,n)
	// ss.insert(i);
	queue<ll> q;
	q.push(s);
	ss.erase(s);
	ll cur;

	while(!q.empty())
	{
		cur=q.front();
        q.pop();
        if(r[cur]==0)
        	continue;
		
		if(r[cur]>=ceil((n-1)/2.0))
		{	
			cout<<ans[cur]+1;
			return 0;
		}
		else	
		{
			ll l=(n+cur-r[cur])%n;
			ll h=(cur+r[cur])%n;
            
			set<ll>::iterator it=ss.lower_bound(l);
			vll temp;
			if(l>h)
            {
                 while(it!=ss.end())
			{
				temp.pb(*it);
				it++;
			}
                it=ss.begin();
             
                 while(it!=ss.end() && *it<=h)
			{
				temp.pb(*it);
				it++;
			}   
            }
        else{    while(it!=ss.end() && *it<=h)
			{
				temp.pb(*it);
				it++;
			}
        }
			for(ll i=0;i<temp.size();i++)
			{
				if(temp[i]==t)
				{
					cout<<ans[cur]+1;
					return 0;
				}
				ans[temp[i]]=ans[cur]+1;
				q.push(temp[i]);
				ss.erase(temp[i]);		
			}
		}
	}
	cout<<-1;

//  --------------------------------------------------------------------------------------

return 0;
}
