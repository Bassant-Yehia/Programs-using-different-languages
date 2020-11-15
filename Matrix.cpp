#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter num of rows"<<endl;
    cin>>x;
    cout<<"Enter num of cols"<<endl;
    cin>>y;
    int arr[x][y];
    cout<<"enter your matrix"<<endl;
    for(int i=0;i<x;i++)
    {for(int j=0;j<y;j++)
    {
        cin>>arr[i][j];
    }
    }
    cout<<"------------------------"<<endl;

    for(int i=0;i<x;i++)
    {for(int j=0;j<y;j++)
    {

       cout<<"  "<<(arr[i][j])*3<<"   ";

    }
cout<<endl;

    }

    cout<<"------------------------"<<endl;

    return 0;
}
