//C++ Primer Plus 课后习题 p198 6.11 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>
#include <array>

using namespace std;

const int kMAX_NUM = 10;

void main(){
  showtitle();
  longline(1);
  // 1
//   char ch;
//   string buffer("");
//   cout << "Enter some letters within Upper & Lowwer and quit with '@'\n";
//   cin.read(&ch, 1);
//   while (ch != '@') {
//     if (!(isdigit(ch))) {
//       if (isupper(ch)) ch = tolower(ch);
//       buffer += ch;
//     }    
//     cin.read(&ch, 1);
//   }
//   cout << endl << buffer;
  // cctype 库函数 if条件嵌套
  longline(2);
  //2
//   double donation(0.0), sum(0.0);
//   int num(0), higher(0);
//   array<double ,kMAX_NUM> money;
//   money.fill(0.0);
//   cout << "Enter at most" << kMAX_NUM << " donations :\n";
//   while (cin >> donation)  {
//     num++;
//     money.at(num) = donation;
//     sum += donation;
//   }
//   donation = sum / num;
//   for (int i = 0; i < num; i++) {
//     if(money.at(i) >= donation) higher++;    
//   }
// 
//   cout << "Total " << num << " donations : " << sum << endl
//     << "There are " << higher 
//     << " donations higher than the average " << donation << endl;
  // cin 条件判断 识别数字..
  longline(3);
  //3
  char chh;
  string option("");
  cout << "Please enter one of the following choices:\n"
       << "c) carnivore        p) pianist \n"
       << "t) tree             g) game \n";
  while (cin.get(chh)) {
    switch (chh)  {
    case 'c': option = "carnivore" ; break;
    case 'p': option = "pianist"  ; break;
    case 't': option = "tree" ; break;
    case 'g': option = "game" ; break;
    default:  break; 
    }
    if (!option.empty()) break;
    cout << "Please enter a c, p, t, or g:";
    cin.get();
  }
  cout << "A maple is a " << option << endl;
  //
  longline(4);
  //4




  system("pause");

}


