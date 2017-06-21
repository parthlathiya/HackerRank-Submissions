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





const int N = 12345;

int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    #ifdef PARTH_LATHIYA_HOME

        freopen("C_in.txt","r",stdin);
    
        ll ttt,bkkk;
        cin>>ttt;
        bkkk=ttt;
        while(ttt--) {
            cout<<"Testcase - "<<bkkk-ttt<<"\n";
    #endif

//--------------------------------------------------------------------------------------




char s[N];
char w[N];
int p[N];

  scanf("%s", s);
  // cout<<s;
  int n = strlen(s);
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      w[j - i + 1] = s[j];
    }
    // cout<<w.substr(1,w.length()-4)<<end;
    int len = n - i;
    int k = 0;
    p[1] = 0;
    // adabracabra
    for (int j = 2; j <= len; j++) {
      if (k > 0 && w[j] != w[k + 1]) 
        k = p[k];
      if (w[j] == w[k + 1]) 
        k++;
      p[j] = k;
      cout<<j<<" "<<k<<endl;
    }
    cout<<"ssssssss";


    for (int j = 1; j <= len; j++) {
      int per = j - p[j];
      if (j % per != 0) {
        per = j;
      }
      ans += 2 * j / per - 1;
    } 
  }
  cout << ans << endl;


//--------------------------------------------------------------------------------------
    
    #ifdef PARTH_LATHIYA_HOME
        cout<<"\n"; }
    #endif

    return 0;
}