#include <iostream>

using namespace std;





int Max(int b,int f,int m,int a)
{int c=0;
  cin>>b>>f>>m>>a;
    // c=max(b,max(f,max(m,a)));
    c=max(max(b,f),max(m,a));
    return c;
}














int main()
{ int a,b,c,d;
  int o,q,s,t;
  float w,v,y,z;
    cout<<"Max is"<<Max(a,b,c,d)<<endl;
    cout<<"Max is"<<Max(o,q,s,t)<<endl;
    cout<<"Max is"<<Max(w,v,y,z)<<endl;
    return 0;
}
