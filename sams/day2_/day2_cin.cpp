#include<iostream>
#include<string>

using namespace std;

int main(){
  int var1,var2;
  string str1, str2, str3;

  cout << "Enter two integers: ";
  // for each variable, var1 and var2 need each console input
  // spacebar doesn't take into account
  // you can parse each variable by pressing spacebar or enter buttons
  cin >> var1 >> var2;

  cout << "var1 is : " << var1 << " " << "var2 is : "<< var2 << endl;

  cout << "Enter a string: ";
  cin >> str1 >> str2 >> str3;
  cout << "string is : " << str1 << str2 << str3 << endl;

  return 0;
}
