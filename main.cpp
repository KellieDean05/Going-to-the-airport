#include <iostream>
using namespace std;
int main()
{
  int time = 1-12;
  
  //Declare how early you need to be at the airport.
  cout << "\nYou need to arrive at the airport two hours early." << endl;
  cout << "\nPlease enter flight departure time: " << endl;
  cin >> time;
  if (time == 8 or 9 or 5 or 6)
  {
    cout << "\nYou need to leave four hours before your flight." << endl;
  }
  else if  (time == 1 -4 or 7 or 10-12)
  {
    cout << "\nYou need to leave three hours early." << endl;
  }

  return 0;
}