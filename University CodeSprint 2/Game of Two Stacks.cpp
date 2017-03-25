#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007



ll n,m,x;
ll a[100001],b[100001];

ll dp[11111][11111];
//ll *dp = new ll[100001*100001];

//int *dp;

//vector<vector<int> > dp;

//std::vector<std::vector<int>> dp(100001, std::vector<int>(100001, -1));


  // Set up sizes. (HEIGHT x WIDTH)


int rec(int i, int j)
{


ll cr=0;

forall(k,0,i)
cr+=a[k];
forall(k,0,j)
cr+=b[k];
cr=x-cr;
//cout<<"i:"<<i<<n<<"j:"<<j<<m<<"called"<<cr<<endl;
if(i<n && j<m)
{
//    cout<<"h1"<<a[i]<<b[j]<<cr;
if(a[i]<=cr && b[j]<=cr)
{
//cout<<"h2"<<dp[i+1][j];
    int t1=dp[i+1][j]==-1?rec(i+1,j):dp[i+1][j];
    int t2=dp[i][j+1]==-1?rec(i,j+1):dp[i][j+1];
//    cout<<"t1";
    return dp[i][j]=maX(1+ t1 , 1+ t2 );
//cout<<"h3";
}
else if(a[i]<=cr){
        int t1=dp[i+1][j]==-1?rec(i+1,j):dp[i+1][j] ;
    return dp[i][j]=1+ t1;}
else if(b[j]<=cr){
    int t1=dp[i][j+1]==-1?rec(i,j+1):dp[i][j+1];
    return dp[i][j]=1+ t1 ;}
else
    return dp[i][j]=0;
}
else if(i<n && a[i]<=cr){
    int t1=dp[i+1][j]==-1?rec(i+1,j):dp[i+1][j];
    return dp[i][j]=1+ t1 ;}
else if(j<m && b[j]<=cr){
    int t1=dp[i][j+1]==-1?rec(i,j+1):dp[i][j+1] ;
    return dp[i][j]=1+ t1;}
else
    return dp[i][j]=0;
}
int main()
{
//
//#ifndef ONLINE_JUDGE
//	freopen("in.txt","r",stdin);
//#endif


	int T;
	cin>>T;
//dp = new int[100001];
// for(int i = 0; i < 100001; ++i) { dp[i] = new int[100001]; }

	while(T--)
	{
        cin >> n>>m>>x;

//    dp.resize(n+1);
//  for (int i = 0; i <= n; ++i)
//    dp[i].resize(m+1);
//
//    cout<<dp.size();
          forall(i,0,n+2)
            forall(j,0,m+2)
                dp[i][j]=-1;
//            cout<<dp[0][0];
        forall(i,0,n)
            cin >> a[i];
        forall(i,0,m)
            cin >> b[i];

        cout << rec(0,0) << endl;
//        dp.clear();
    }

return 0;
}
