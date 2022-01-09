#include <iostream>
using namespace std;
int main() {
   char str[8] = "value";
   char ch;
   cin.getline(str, 8); // 8 is the size of the array needed not the string; 
                    // delimeter by default is \n and will be extracted
   if (cin)
      cout << str << endl;
   else {
      cout << "cin failed: " << str << endl;
      cin.clear();
      cin.ignore(1000, '\n');
   }
   cout << "ch: ";
   ch = cin.get();
   cin.ignore(1000, '\n'); // only getting one char above
   cout << "*" << ch << "*" << endl;
   cin.getline(str, 8, ','); // 8 is the size of the array needed not the string; 
                    // delimeter by default is \n and will be extracted
   if (cin)
      cout << str << endl;
   else {
      cout << "cin failed: " << str << endl;
   }
   cout << "ch: ";
   ch = cin.get();
   cout << "*" << ch << "*" << endl;
   return 0;
}
