//C++ Primer Plus 课后习题 p198 6.11 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>
#include <array>
#include <vector>

using namespace std;



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
  char chhh;
  Bop bop_Sue[kPobNum]=
         {{"Sue Horpkings", "CTO_OnChiefe",     "D-girl",     2},
         {"Wimp Macho",    "Junior Programer", "HeilBOY",    1},
         {"Arthur Itair",  "Amatuer",          "Catsharp",   2},
        {"Raki Rhodes",   "MIPS",             "LOOPer",     0},
        {"Hoppy Hipman",  "Analyst Trainee",  "Pat Hand",   2}};
  cout << "Benevolent Order of Programmers Report\n"
       << "a. display by name       b. display by title \n"
       << "c. display by bopname    d. display by preference \n"
       << "q. quit \n" << "Enter your chice: ";
  cin.get(); 
  while (cin.read(&chhh,1) && chhh != 'q')  {
    switch (chhh)  {
    case 'a':
      for (int i = 0; i < kPobNum; i++)  cout << bop_Sue[i].fullname << endl;
      break;
    case 'b':
      for (int i = 0; i < kPobNum; i++)  cout << bop_Sue[i].title << endl;
      break;
    case 'c':
      for (int i = 0; i < kPobNum; i++)  cout << bop_Sue[i].bopname << endl;
      break;
    case 'd':
      for (int i = 0; i < kPobNum; i++) {
        switch (bop_Sue[i].preference) {
        case 0: cout << bop_Sue[i].fullname << endl; break;
        case 1: cout << bop_Sue[i].title << endl; break;
        case 2: cout << bop_Sue[i].bopname << endl; break;
        default: cout << bop_Sue[i].fullname << " has no preference.\n\n"; break;
        }
      }
      break;
    default:
      cout << "Invaild char....\n";
    	break;
    }
    cout << "\nNext choice:";
    cin.clear();
  }
//蛋疼的vs 不支持 arrray 列表式初始化
  longline(5);
  //5




  system("pause");

}


