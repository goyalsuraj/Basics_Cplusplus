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
    
    driveMode mode = static_cast<driveMode>(input);
    
    // Switch statement can also be used
    if (mode==3)
    {
        cout<<" Selection is Snow = " <<mode;
    }
    else if (mode==1)
    {
        cout<<" Selection is Sports = " <<mode;
    }
    else if (input==2)
    {
        cout<<" Selection is Trail = " <<mode;
    }
    // default case
    else
    {
        cout<<" Selection is Eco = " <<mode;
    }
    
}
