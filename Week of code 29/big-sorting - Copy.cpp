#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(llu i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007


bool mf(string i,string j){return i.length()<j.length();}

void sortandprint(vector<string> my,ll a,ll b)
{
    ll n=b+1;
    ll m=my.at(a).length();
queue<string> q0,q1,q2,q3,q4,q5,q6,q7,q8,q9;

    forall(i,a,n){
    string temp=my.at(i);
        switch(temp[temp.length()-1])
        {
            case '0':
                q0.push(temp);
                break;
            case '1':
                q1.push(temp);
                break;
            case '2':
                q2.push(temp);
                break;
            case '3':
                q3.push(temp);
                break;
            case '4':
                q4.push(temp);
                break;
            case '5':
                q5.push(temp);
                break;
            case '6':
                q6.push(temp);
                break;
            case '7':
                q7.push(temp);
                break;
            case '8':
                q8.push(temp);
                break;
            case '9':
                q9.push(temp);
                break;
        }
        }

//        while(1){string t;
//        if(!q0.empty()){t=q0.front();
//            q0.pop();}
//        else if(!q1.empty()){t=q1.front();
//            q1.pop();}
//        else if(!q2.empty()){t=q2.front();
//            q2.pop();}
//        else if(!q3.empty()){t=q3.front();
//            q3.pop();}
//        else if(!q4.empty()){t=q4.front();
//            q4.pop();}
//        else if(!q5.empty()){t=q5.front();
//            q5.pop();}
//        else if(!q6.empty()){t=q6.front();
//            q6.pop();}
//        else if(!q7.empty()){t=q7.front();
//            q7.pop();}
//        else if(!q8.empty()){t=q8.front();
//            q8.pop();}
//        else if(!q9.empty()){t=q9.front();
//            q9.pop();}
//        else {break;}
//
//        cout<<t<<endl;
//        }

//cout<<"jj"<<m<<"jj";

    forall(j,1,m){
queue<string> q00;
queue<string> q11;
queue<string> q22;
queue<string> q33;
queue<string> q44;
queue<string> q55;
queue<string> q66;
queue<string> q77;
queue<string> q88;
queue<string> q99;
swap(q00,q0);
swap(q11,q1);
swap(q22,q2);
swap(q33,q3);
swap(q44,q4);
swap(q55,q5);
swap(q66,q6);
swap(q77,q7);
swap(q88,q8);
swap(q99,q9);

//cout<<j<<"j"<<endl;
    while(1)
    {
        string t;
        if(!q00.empty()){t=q00.front();
            q00.pop();}
        else if(!q11.empty()){t=q11.front();
            q11.pop();}
        else if(!q22.empty()){t=q22.front();
            q22.pop();}
        else if(!q33.empty()){t=q33.front();
            q33.pop();}
        else if(!q44.empty()){t=q44.front();
            q44.pop();}
        else if(!q55.empty()){t=q55.front();
            q55.pop();}
        else if(!q66.empty()){t=q66.front();
            q66.pop();}
        else if(!q77.empty()){t=q77.front();
            q77.pop();}
        else if(!q88.empty()){t=q88.front();
            q88.pop();}
        else if(!q99.empty()){t=q99.front();
            q99.pop();}
        else {break;}
//        cout<<"process"<<t<<endl;
        char temp={'0'};
        if(t.length()-1>=j)
            temp=t[t.length()-1-j];
        else
            temp='0';
//            cout<<t.length()-1-j<<endl;
//            cout<<"t"<<t<<"temp"<<temp<<endl;
        switch(temp)
        {
            case '0':
                q0.push(t);
                break;
            case '1':
                q1.push(t);
                break;
            case '2':
                q2.push(t);
                break;
            case '3':
                q3.push(t);
                break;
            case '4':
                q4.push(t);
                break;
            case '5':
                q5.push(t);
                break;
            case '6':
                q6.push(t);
                break;
            case '7':
                q7.push(t);
                break;
            case '8':
                q8.push(t);
                break;
            case '9':
                q9.push(t);
        }

//        cout<<"next"<<endl;

//     while(1){string t;
//        if(!q0.empty()){t=q0.front();
//            q0.pop();}
//        else if(!q1.empty()){t=q1.front();
//            q1.pop();}
//        else if(!q2.empty()){t=q2.front();
//            q2.pop();}
//        else if(!q3.empty()){t=q3.front();
//            q3.pop();}
//        else if(!q4.empty()){t=q4.front();
//            q4.pop();}
//        else if(!q5.empty()){t=q5.front();
//            q5.pop();}
//        else if(!q6.empty()){t=q6.front();
//            q6.pop();}
//        else if(!q7.empty()){t=q7.front();
//            q7.pop();}
//        else if(!q8.empty()){t=q8.front();
//            q8.pop();}
//        else if(!q9.empty()){t=q9.front();
//            q9.pop();}
//        else {break;}
//
//        cout<<t<<endl;
//        }
    }




    }
        while(1){string t;
        if(!q0.empty()){t=q0.front();
            q0.pop();}
        else if(!q1.empty()){t=q1.front();
            q1.pop();}
        else if(!q2.empty()){t=q2.front();
            q2.pop();}
        else if(!q3.empty()){t=q3.front();
            q3.pop();}
        else if(!q4.empty()){t=q4.front();
            q4.pop();}
        else if(!q5.empty()){t=q5.front();
            q5.pop();}
        else if(!q6.empty()){t=q6.front();
            q6.pop();}
        else if(!q7.empty()){t=q7.front();
            q7.pop();}
        else if(!q8.empty()){t=q8.front();
            q8.pop();}
        else if(!q9.empty()){t=q9.front();
            q9.pop();}
        else {break;}

        cout<<t<<endl;
        }
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("big-sorting_in.txt","r",stdin);
#endif

    ll n;
    cin>>n;
    vector<string> my;
//    ll m=0;
//    cout<<n;
    forall(i,0,n)
    {
        string s;
        cin>>s;
//        m=maX(s.length(),m);
        my.push_back(s);
//    cout<<s<<endl;
    }

    sort(my.begin(),my.end(),mf);


    forall(i,1,n)
    {
        if(my.at(i).length()!=my.at(i-1).length())
        {

         if(i==n-1)
                cout<<my.at(n-2)<<endl<<my.at(n-1)<<endl;
            else
                cout<<my.at(i-1)<<endl;
        }else{
               ll startt=i-1;
            while(i<n && my.at(i).length()==my.at(i-1).length())i++;
       ll endt=i-1;
        //startt to endt sort and print
        sortandprint(my,startt,endt);
        if(i==n-1)
            cout<<my.at(n-1)<<endl;

        }
    }
    return 0;
}
