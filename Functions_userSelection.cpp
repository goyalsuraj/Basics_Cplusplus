/* Program to get user selection using functions */

#include <iostream>

using namespace std;

int printInfo ()
{
  cout << "1. View Information " << endl;
  cout << "2. Find Information " << endl;
  cout << "3. Quit Menu " << endl;
  cout << "Enter your selection from the menu '1', '2' or '3'" << endl;

  int user_input;
  cin >> user_input;
  return user_input;
}

void user_input (int i)
{
  switch (i)
    {
    case 1:
      cout << "Viewing information... yay!";
      break;

    case 2:
      cout << "Finding information... this is great";
      break;

    case 3:
      cout << "Sorry to see you leave";
      break;

    default:
      cout << "Not a valid selection";
      break;
    }
}

int main ()
{
  int input = printInfo ();
  user_input (input);
}

