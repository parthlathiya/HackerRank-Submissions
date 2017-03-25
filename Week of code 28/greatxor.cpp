#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

bool mf(int i,int j){return i>j;}

void printvec(vector<int> x)
{
    cout << endl <<"vec starts";
    for(vector<int>::iterator it = x.begin(); it < x.end(); ++it)
    cout << *it << " ";
    cout << "vec ends"<<endl;
}
int main()
{

#ifndef ONLINE_JUDGE
	freopen("greatxor_in.txt","r",stdin);
#endif

	int T;
	cin>>T;

	while(T--)
	{
		ll x;
        cin >> x;
        ll smart=pow(2,floor(log(x)/log(2)));
        cout << (smart-1)-(x-smart) << endl;
    }
return 0;
}
