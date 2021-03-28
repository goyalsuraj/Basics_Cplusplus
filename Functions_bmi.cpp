/* Program to Calculate BMI */

#include <iostream>
#include <string>

using namespace std;

double bmi(float height, float weight)
{
  double bmi;
  bmi = (weight * 703) / (height * height);
  return bmi;
}

int main ()
{
  cout << "Enter your name" << endl;
  string name;
  cin >> name;

  cout << "Enter your height in inches" << endl;
  float height;
  cin >> height;

  cout << "Enter your weight in lbs" << endl;
  float weight;
  cin >> weight;

  double BMI = bmi (height, weight);
  cout << "Your BMI is " << BMI;
}
