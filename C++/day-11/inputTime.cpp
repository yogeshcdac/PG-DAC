// get_time example
#include <iostream>     // std::cin, std::cout
#include <iomanip>      // std::get_time
#include <ctime>        // struct std::tm
 using namespace std;
int main ()
{
  struct tm when;
  cout << "Please, enter the time in hh:mm format ";
  cin >> get_time(&when,"%R");   // extract time (24H format)

  if (cin.fail()) cout << "Error reading time\n";
  else {
    cout << "The time entered is: ";
    cout << when.tm_hour << " hours and " << when.tm_min << " minutes\n";
  }

  return 0;
}
