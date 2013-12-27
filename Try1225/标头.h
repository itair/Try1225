#ifndef TRY1225_TRY1225_TRY_H
#define TRY1225_TRY1225_TRY_H

//TODO  库之类的sha
#include <tchar.h>
#include <iostream>
#include <string>

const int kMAX_NUM = 10;
const int kStrSize = 40;
const int kPobNum = 5;

inline void showtitle(void) { std::cout<< "C++_Primer_Plus\n"
  << "    by itAir\n"<< "Hello World!\n"; }           

inline void longline(void) { std::cout<< "________________________________\n\n"; }  
inline void longline(const int i) { std::cout<<i<< ".______________________________\n\n"; } 

struct Bop {
  char fullname[kStrSize]; //real name
  char title[kStrSize];    // job title
  char bopname[kStrSize];   // secret BOP name
  int preference;           // 0 = full name , 1 = title , 2 = bopname
};




#endif //TRY1225_TRY1225_TRY_H
