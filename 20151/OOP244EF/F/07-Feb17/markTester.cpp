// this will cause memory related error at the end of run time with mark1.cpp and mark1.h


#include "mark.h";
using namespace oop244;
int main(){
  Mark
    ipc("Introduction to Programming Using C", "IPC144A", 90),
    oop1("Introduction to Object Oriented Programming", "OOP244E", 40, 50),
    oop2 = oop1; // copying oop1
  ipc.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // ----------------------------
  oop1.dspSubName().space().dspSubCode().space().dspWMark().nl();
  // --------------------------
  oop2.dspSubName().space().dspSubCode().space().dspWMark().nl();
  return 0;
}