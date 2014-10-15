#include <iostream>

using namespace std;

int main(){
  int const size = 1000;
  int i = 0;
  char x[size];
  cin.getline(x,size);
  while( x[i] != '\0')
  {
    cout << x[i];
    i++;
  }
  cout << endl;
}
