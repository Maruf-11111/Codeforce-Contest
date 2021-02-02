#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,t,result;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        result= max(a+b,c+d);
        cout<<result<<endl;
    }
    return 0;

}
