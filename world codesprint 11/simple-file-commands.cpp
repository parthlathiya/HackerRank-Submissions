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
// #define ite iterator
#define maxlong 9223372036854775808
#define diff(a,b) max(a,b)-min(a,b)


/*
                    ** author **
                ** Parth Lathiya **
    ** https://www.cse.iitb.ac.in/~parthiitb/ **
*/

map<string, set<ll> > my;

ll strtoint(string s)
{
	ll ans=0;
	int cnt=1;
	repr(i,s.length())
	{
		ans+=(s[i]-'0')*cnt;
		cnt*=10;
	}
	// cout<<ans<<endl;
	return ans;
}


int main()
{

ios::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
	freopen("simple-file-commands_in.txt","r",stdin);
#endif

//  --------------------------------------------------------------------------------------

	s(q);
	string::size_type sz;
	rep(i,0,q)
	{
		string cmd;
		cin>>cmd;
		string fn1,fn2;
		if(cmd=="crt")
		{
			cin>>fn1;
			set<ll> temp=my[fn1];
			if(temp.empty())
			{
				cout<<"+ "<<fn1<<endl;
				temp.insert(1);
			}
			else
			{
				if(*temp.begin() == 0)
					cout<<"+ "<<fn1<<endl;
				else
					cout<<"+ "<<fn1<<"("<<*temp.begin()<<")"<<endl;
				if(*temp.begin()==*temp.rbegin())
					temp.insert(*temp.begin()+1);
				temp.erase(temp.begin());
			}
			my[fn1]=temp;
		}
		else if(cmd=="del")
		{
			cin>>fn1;
			cout<<"- "<<fn1<<endl;
			string news;
			if(fn1[fn1.length()-1]==')')
			{
				ll j;
				for(j=fn1.length()-1;j>=0;j--)
					if(fn1[j]=='(')
						break;
	
				news=fn1.substr(0,j);
				set<ll> temp=my[news];
				string ss=fn1.substr(j+1,fn1.length()-j-2);
				temp.insert(strtoint(ss));
				my[news]=temp;
			}
			else
				my[fn1].insert(0);

			// for(sll::iterator iter=temp.begin(); iter!=temp.end();++iter){cout<<*iter<<" ";}
			// cout<<news<<endl;
		}
		else if(cmd=="rnm")
		{
			cin>>fn1;
			cin>>fn2;
			string news;

			if(fn1[fn1.length()-1]==')')
			{
				ll j;
				for(j=fn1.length()-1;j>=0;j--)
					if(fn1[j]=='(')
						break;
				
				news=fn1.substr(0,j);
				set<ll> temp=my[news];
				string ss=fn1.substr(j+1,fn1.length()-j-2);
				temp.insert(strtoint(ss));
				my[news]=temp;
			}
			else
				my[fn1].insert(0);
			
			sll temp=my[fn2];
			
			if(temp.empty())
			{
				cout<<"r "<<fn1<<" -> "<<fn2<<endl;
				temp.insert(1);
			}
			else
			{
				if(*temp.begin() == 0)
					cout<<"r "<<fn1<<" -> "<<fn2<<endl;
				else
					cout<<"r "<<fn1<<" -> "<<fn2<<"("<<*temp.begin()<<")"<<endl;
				if(*temp.begin()==*temp.rbegin())
					temp.insert(*temp.begin()+1);
				temp.erase(temp.begin());
			}
			my[fn2]=temp;
		}
	}

//  --------------------------------------------------------------------------------------

return 0;
}
