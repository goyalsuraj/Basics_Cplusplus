/* Program to get user selection with enums */

#include <iostream>

using namespace std;

enum driveMode
{
    eco, sports, trail, snow
};

int main()
{
    int input;
    cout<<"Enter an integer to make a driver mode selelction: ";
    cin>>input;
    
    // Switch statement can also be used
    if (input==0)
    {
        driveMode mode = snow;
        cout<<" Selection is Snow = " <<mode;
    }
    else if (input==1)
    {
        driveMode mode = sports;
        cout<<" Selection is Sports = " <<mode;
    }
    else if (input==2)
    {
        driveMode mode = trail;
        cout<<" Selection is Trail = " <<mode;
    }
    // default case
    else
    {
        driveMode mode = eco;
        cout<<" Selection is Eco = " <<mode;
    }
    
}
