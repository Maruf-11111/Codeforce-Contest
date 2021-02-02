#include<bits/stdc++.h>
using namespace std;
int main()
{
     double T,ab,bc,ca,r,x,ad;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>ab>>bc>>ca>>r;
        x= sqrt(r)/sqrt(r+1);
        ad=x*ab;
        cout<<"Case "<<i<<": "<<setprecision(10)<<ad<<endl;


    }
    return 0;
}
