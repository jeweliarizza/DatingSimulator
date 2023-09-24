#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*allow user to create the characteristics of their date*/


string eye;
string hair;


//eye color
void chooseEye(){
  cout << "What is their eye color? ";
  cin >> eye;
}

string  getEye(){
  return eye;
}

//hair color
void chooseHair(){
  cout << "What is their hair color? ";
  cin >> hair;
}

string  getHair(){
  return hair;
}

