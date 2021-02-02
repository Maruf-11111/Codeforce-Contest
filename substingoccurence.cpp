#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,v;
    int x,count=0;
    getline(cin,a);
    getline(cin,v);
    s

    for(int i=0;i<a.size();i++)
    {
        x=a.find(v);
        if(x!= string::npos)
        {

          count++;
          a=a.substr(x+v.size(),a.size());
        }


        if(x == string::npos)
    {
        break;
    }


    cout<<a<<endl;
    }
    cout<<count<<endl;




 return 0;





}
