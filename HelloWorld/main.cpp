#include <iostream>

using namespace std;

int ageToDays(int age){
  int z;
  z = age * 365;
  return z;
}

int main(){

  int age, z;

  cout << "Hello jetty!\n";
  cout << "Please enter your age: ";
  cin >> age;

  z = ageToDays(age);

  cout << "You are aproximately " << z << " days old.\n";
  cin.ignore(1024, '\n');
  cout << "Press enter to continue ...";
  cin.get();

  return 0;
}
