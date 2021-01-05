#include <iostream>
using namespace std;
#include "Cat.h"
namespace sdds {
   Cat::Cat(const char* thename, int numOfLives):Animal(thename){
      m_numOfLives = numOfLives;
     cout << "Creating " << name() << " the Cat with " << m_numOfLives << " lives"   << endl;
   }
   void Cat::act() {
      cout << "Act playful, " << name() << " the Cat" << endl;
   }
   void Cat::move() {
      cout << "Move like " << name() << " the Cat" << endl;
   }
   void Cat::sound() {
      Animal::sound();
      cout << "Meow!" << endl;
   }
   Cat::~Cat() {
      cout << "Removing " << name() << " the Cat" << endl;
   }

}