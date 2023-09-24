#ifndef WITTY_H
#define WITTY_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/* narrator's personal comments during the adventure */


//after user 'slides into the DMs
string remark(){

  string lol[5] = {"good one!", "that's all you got?", "you could do better", "smooth", "i'm stealing that"};

  srand(time(0));
  return lol[rand() % 5];
}

// 10% of user getting ghosted, runs otherwise
void ghosted(){
  srand(time(0));
  
  if(rand()%10 == 0){
    cout << "\nYou and your match start talking but after awhile they ghost you. That's rough but you shouldn't expect much from a dating app. Next time buddy!";
    exit(0);
  }
  else{
    cout << "\nYou and your match start talking and hit it off well. You want to ask them out. Where will you take them?(select a number)\n " << endl;
  }
}

void getReady(){
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
 
  cout << "It's the following day, a couple hours before your date. You get ready and put on your best outfit. Don't forget to brush your teeth!" << endl;
}

#endif
  
