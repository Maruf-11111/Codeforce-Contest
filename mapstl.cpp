#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string , int> m;
    map <string , int> :: iterator me;
    m["sdfh"]= 17;
    m["shf"]=16;
    for(me = m.begin();me!=m.end();me++)
    {
        cout<<me->second<<" "<<me->first <<endl;
    }
    ///inserting value with insert function
    m.insert(make_pair("maruf",8));
    m.insert(make_pair("masum",5));
    m.insert(make_pair("naif",6));
    for(me=m.begin();me!=m.end();me++)
    {
        cout<<me->second<<" "<<me->first<<endl;
    }
    ///erasing values from a map
    cout<<"/---------------------/"<<endl<<"Erasing values from an array"<<endl;
    m.erase(m.find("naif"),m.find("sdfh"));
      for(me=m.begin();me!=m.end();me++)
    {
        cout<<me->second<<" "<<me->first<<endl;
    }
    ///upper bound and lower bound
    cout<<m.upper_bound("masum")->first<<endl;
    cout<<m.lower_bound("masum")->first<<endl;


}
