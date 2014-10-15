#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int const size = 3;
  int x[size], n;
  char c;
  for (int i = 1; i <= 3; i++)
  {
    cout << "Enter user " << i << " age: ";
    cin >> x[i];
  }
  do{
    cout << "Show me index number: ";
    cin >> n;
    if (n < 1 || n > size)
    {
      cout << "ERROR! Value not found." << endl;
    }
    else{
      cout << "Value Number" << setw(13) << "Value" << endl;
      cout << setw(5) << n << setw(18) << x[n] << endl;
    }
    cout << "Continue? (y/n): ";
    cin >> c;
  }
  while( c == 'y' );
}
