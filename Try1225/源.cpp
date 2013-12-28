//C++ Primer Plus 课后习题 p198 6.11 
// by itAir
// Try to use Google C++ programing style                                      
#include "标头.h"
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

const bool greater10000 (Patron value) { return value.money > 10000 ;}

void main()
{
    showtitle();
    longline(1);
  // 1
   char ch;
   string buffer("");
   cout << "Enter some letters within Upper & Lowwer and quit with '@'\n";
   cin.read(&ch, 1);
   while (ch != '@') {
     if (!(isdigit(ch))) {
       if (isupper(ch)) ch = tolower(ch);
       buffer += ch;
     }    
     cin.read(&ch, 1);
   }
   cout << endl << buffer;
  // cctype 库函数 if条件嵌套
    longline(2);
  //2
    double donation(0.0), sum(0.0);
    int num(0), higher(0);
    array<double ,kMAX_NUM> money;
    money.fill(0.0);
    cout << "Enter at most" << kMAX_NUM << " donations :\n";
    while (cin >> donation)  {
        num++;
        money.at(num) = donation;
        sum += donation;
    }
    donation = sum / num;
    for (int i = 0; i < num; i++) {
        if(money.at(i) >= donation) higher++;    
    } 
    cout << "Total " << num << " donations : " << sum << endl
        << "There are " << higher 
        << " donations higher than the average " << donation << endl;
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
                for (int i = 0; i < kPobNum; i++) 
                    cout << bop_Sue[i].fullname << endl; break;
            case 'b':
                for (int i = 0; i < kPobNum; i++) 
                    cout << bop_Sue[i].title << endl;    break;
            case 'c':
                for (int i = 0; i < kPobNum; i++)
                    cout << bop_Sue[i].bopname << endl;  break;
            case 'd':
                for (int i = 0; i < kPobNum; i++) {
                    switch (bop_Sue[i].preference) {
                        case 0: 
                            cout << bop_Sue[i].fullname << endl;   break;
                        case 1: 
                            cout << bop_Sue[i].title << endl;      break;
                        case 2: 
                            cout << bop_Sue[i].bopname << endl;    break;
                        default: 
                            cout << bop_Sue[i].fullname << " has no preference.\n\n"; 
                            break;
                    }
                }
                break;
            default:
                cout << "Invaild char....\n";     break;
        }
        cout << "\nNext choice:";
        cin.clear();
    }
    //蛋疼的vs 不支持 arrray 列表式初始化
    longline(5);
    //5
    double incomes(0.0), tax (0.0);
    cout << " Neutronia need Tax! \n"
         << " Show me your money: \n";
    //cin.get();
    while(cin>>incomes) {
        tax = ((incomes > 5000) * 0.1 
                    * ((incomes > 15000) ? 10000 : (incomes - 5000))) 
               + ((incomes > 15000) * 0.15 
                    * ((incomes > 35000) ? 20000 : (incomes - 15000))) 
               + ((incomes > 35000) * 0.2 
                    * (incomes - 35000));  
        cout << "Your tax : " << tax << endl;
    }
    //条件转向 嵌套的几种方法  if 嵌套, switch的变形, 正则表达, ? :嵌套 etc
    longline(6);
    //6
     list<Patron> donars;
     list<Patron> nor_donars;
     list<Patron>::iterator iter;
     Patron dos;
     int number;
         cout << "Enter the number of donars." << endl;
     cin >> number ;    
     for (int i = 0; i < number; i++)  {         
         cin.get();
         cout << "Enter donar #" << i << "'s name: ";
         getline(cin, dos.name);
         cout << "Enter donar #" << i << "'s money: ";
         cin >> dos.money;
         donars.push_back(dos);
     }
     iter = stable_partition(donars.begin(), donars.end(), greater10000);
     nor_donars.splice(nor_donars.begin(), donars, iter, donars.end());
     cout << "\nGrand Parions:\n";
     if (donars.empty()) cout << "none.\n";    
     while (!donars.empty()){
         dos = donars.front();
         cout << dos.name << "\t" << dos.money << endl;
         donars.pop_front();
     }
      cout << "\nParions:\n";
     if (nor_donars.empty()) cout << "none.\n";    
     while (!nor_donars.empty()){
         dos = nor_donars.front();
         cout << dos.name << "\t" << dos.money << endl;
         nor_donars.pop_front();
     }
    //STL 模版算法 与 list操作
    longline(7);
    //7
     string word;
     int vowels(0), vonsonants(0), others(0);
     cout << "Enter some words (q to quit):" << endl;
     cin >> word;
     while (cin >> word && word != "q")    {
         for (char c: word) {
             if (isalpha(c)) {
                 if (c == 'b' || c == 'p' || c == 'm' || c == 'f' ||
                     c == 'd' || c == 't' || c == 'n' || c == 'l' )  vowels++;
                 else if (c == 'a' || c == 'e' || c == 'i' ||
                          c == 'o' || c == 'u' || c == 'v') vonsonants++;
                 else others++;                
             }
         }  
     }
     cout << vowels << " words beginning with vowels\n"
         << vonsonants << " words beginning with consonants\n"
         << others << " others.\n";
    // 条件嵌套 注意条件的范围和逻辑
    longline(8);
//8
    char chh;
    int count(0);
    ifstream pf;
    pf.open("datain.txt");
    if(!pf.is_open()) { 
        cout << "datain.txt 打开错误!\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    //pf >> chh; 
    while (pf.read(&chh, 1) && pf.good()) {
        count++ ;
        cout << chh ;        
    }
    pf.close();
    cout << "\nTolal char : " << count <<endl;
    //文件流 操作....
    longline(9);
    //9
    list<Patron> donars_;
    list<Patron> nor_donars_;
    list<Patron>::iterator iter_;
    Patron dos_;
    int number_;
    ifstream pff;
    pff.open("donars.txt");
    if(!pff.is_open()) { 
        cout << "donars.txt 打开错误!\n";
        system("pause");
        exit(EXIT_FAILURE);
    }
    while (pff.good()){
        getline(pff, dos_.name);
        pff >> dos_.money;
        donars_.push_back(dos_);
        pff.get();
    }
    number_ = donars_.size();    
    iter_ = stable_partition(donars_.begin(), donars_.end(), greater10000);
    nor_donars_.splice(nor_donars_.begin(), donars_, iter_, donars_.end());
    cout << "The number of donars is " << number_ << endl;
    cout << "\nGrand Parions:\n";
    if (donars_.empty()) cout << "none.\n";    
    while (!donars_.empty()) {
        dos_ = donars_.front();
        cout << dos_.name << "\t" << dos_.money << endl;
        donars_.pop_front();
    }
    cout << "\nParions:\n";
    if (nor_donars_.empty()) cout << "none.\n";    
    while (!nor_donars_.empty()) {
        dos_ = nor_donars_.front();
        cout << dos_.name << "\t" << dos_.money << endl;
        nor_donars_.pop_front();
    }
    //文件流读取格式化....
    longline();
    system("pause");

}


