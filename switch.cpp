#include <iostream>

using namespace std;

int main()
{ int x;
string a,b,c;
cout<<"what's your name?"<<endl;
cin>>a;
cout<<"what's your faculty?"<<endl;
cin>>b;
cout<<"what's your department ?"<<endl;
cin>>c;

    cout << "Enter 1 if you to print your name " << endl;
    cout << "Enter 2 if you to print your faculty " << endl;
    cout << "Enter 3 if you to print your department " << endl;
    cin>>x;

    switch(x)
    {
      case 1: cout<<"the name is "<<a<<endl;
      break;

      case 2: cout<<"the faculty is "<<b<<endl;
      break;

      case 3: cout<<"the department is "<<c<<endl;
      break;

      default:
        cout<<"you should choose number from 1 to 3"<<endl;
        break;
    }
    return 0;
}
