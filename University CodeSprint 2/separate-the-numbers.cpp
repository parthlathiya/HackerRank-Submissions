#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007

int main()
{

//#ifndef ONLINE_JUDGE
//	freopen("CHEFAPAR_in.txt","r",stdin);
//#endif

	int T;
	cin>>T;

	while(T--)
	{
		string s;
        cin >> s;
        if(s.substr(0,1)=="0")
        {    cout << "NO" <<endl;
        continue;
        }

        int flag=0;
        //cout << s.length()/2;
for(int i=1;i<=(s.length())/2;i++)
    {
        string temp=s.substr(0,i);
    //cout<< temp << endl;

        string bk=temp;
//        int num=(int) (s.substr(0,1).front());
        llu num=stol(temp);
        num++;
        while(temp.length()<s.length())
        {
           temp= temp + to_string(num);
           num++;
        }
     //  cout << temp<<endl;
        if(temp == s && stol(bk)!=0){
            flag=1;
            cout << "YES "<<bk<<endl;
            break;}
}
            if(!flag)cout << "NO"<<endl;
    }
return 0;
}
