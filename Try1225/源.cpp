//C++ Primer Plus 课后习题 p198 6.11 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>
using namespace std;

void main(){
  showtitle();
  longline(1);
  // 1
  char ch;
  string buffer("");
  cin.read(&ch, 1);
  while (ch != '@') {
    if (!(isdigit(ch))) {
      if (isupper(ch)) ch = tolower(ch);
      buffer += ch;
    }    
    cin.read(&ch, 1);
  }
  cout << buffer;
  // cctype 库函数 if条件嵌套
  longline(2);
  //



  system("pause");

}


