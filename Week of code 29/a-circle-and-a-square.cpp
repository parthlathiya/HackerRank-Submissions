#include <bits/stdc++.h>
using namespace std;


#define forall(i,a,b)                for(int i=a;i<b;i++)
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define ll long long int
#define llu long long unsigned
#define mod 1000000007





bool incircle(float i,float j , float xcir,float ycir,float r)
{
//    if(r==0)
//        return false;
    if( ((xcir-i)*(xcir-i)+(ycir-j)*(ycir-j)) <= r*r )
        return true;
    else
        return false;
}

bool insquare(float i,float j,float x1,float y1,float x2,float y2,float x3,float y3)
{
    if( (0<=((i-x1)*(x2-x1)) + ((j-y1)*(y2-y1)) && ((i-x1)*(x2-x1)) + ((j-y1)*(y2-y1)) <= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))) && (0<=((i-x2)*(x3-x2)) + ((j-y2)*(y3-y2)) && ((i-x2)*(x3-x2)) + ((j-y2)*(y3-y2)) <= ((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)))  )
        return true;
    else
        return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("a-circle-and-a-square_in.txt","r",stdin);
#endif

    float w,h;
        float xcir,ycir,r;
    float x1,y1,x3,y3;
    cin>>w>>h>>ycir>>xcir>>r>>y1>>x1>>y3>>x3;



    float xc = (x1 + x3)/2.0  ;
    float yc = (y1 + y3)/2.0  ;
    float xd = (x1-x3)/2.0  ;
    float yd = (y1-y3)/2.0  ;

//    x2=(xc-yd)-trunc(xc-yd)<=0.5?floor(xc-yd):ceil(xc-yd);
//    y2=(yc+xd)-trunc(yc+xd)<=0.5?floor(yc+xd):ceil(yc+xd);

    float x2=xc-yd;
    float y2=yc+xd;

//    x2 = round(xc - yd) ;
//    y2 = round(yc + xd );
//        cout<<round(2.49)<<round(2.50)<<round(2.51) ;
//     int x4 = xc + yd  ;
//     int y4 = yc - xd;

//cout<<x2<<" "<<y2<<endl;
//cout<<xc<<" "<<yc<<endl<<xd<<" "<<yd<<endl;

    forall(i,0,h)
    {
        forall(j,0,w)
        {
            if(incircle(i,j, xcir,ycir,r) || insquare(i,j,x1,y1,x2,y2,x3,y3))
//            if(incircle(i,j, xcir,ycir,r))
//            if(insquare(i,j,x1,y1,x2,y2,x3,y3))
                cout<<"#";
            else
                cout<<".";
        }
        cout<<endl;
    }


    return 0;
}
