#include <iostream>

using namespace std;

int main()
{
    int month,day;
    cout << "Enter your month of birth!" << endl;
    cin>>month;
    cout << "Enter your day of birth!" << endl;
    cin>>day;

    if(month>0&&month<=12||day>0&&day<=30)
    {
        if(month==1||month==12)
        {
            if (month==1&&day<22||month==12&&day>=22)
                cout<<"El-Gadi"<<endl;
        }


        if(month==2||month==1)
        {
            if (month==2&&day<22||month==1&&day>=22)
                cout<<"El-Dalw"<<endl;
        }

        if(month==3||month==2)
        {
            if (month==3&&day<22||month==2&&day>=22)
                cout<<"El-Howt"<<endl;
        }

        if(month==4||month==3)
        {
            if (month==4&&day<22||month==3&&day>=22)
                cout<<"El-Hamal"<<endl;
        }

        if(month==5||month==4)
        {
            if (month==5&&day<22||month==4&&day>=22)
                cout<<"El-Thoor"<<endl;
        }

        if(month==6||month==5)
        {
            if (month==6&&day<22||month==5&&day>=22)
                cout<<"El-Gawzaa"<<endl;
        }

        if(month==7||month==6)
        {
            if (month==7&&day<22||month==6&&day>=22)
                cout<<"El-Sartan"<<endl;
        }

        if(month==8||month==7)
        {
            if (month==8&&day<22||month==7&&day>=22)
                cout<<"El-Asad"<<endl;
        }
        if(month==9||month==8)
        {
            if (month==9&&day<22||month==8&&day>=22)
                cout<<"El-Azraa"<<endl;
        }

        if(month==10||month==9)
        {
            if (month==10&&day<22||month==9&&day>=22)
                cout<<"El-Mezan"<<endl;
        }

        if(month==11||month==10)
        {
            if (month==11&&day<22||month==10&&day>=22)
                cout<<"El-Akrab"<<endl;
        }

        if(month==12||month==11)
        {
            if (month==12&&day<22||month==11&&day>=22)
                cout<<"El-Koos"<<endl;
        }
    }

    return 0;
}
