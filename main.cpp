#include <iostream>
#include <ctime>
#include <string>
#include "sleep.h"
#include "Characteristics.h"
#include "witty.h"
#include "dateLocation/CoffeeDate.h"
#include "dateLocation/DinnerMovie.h"
#include "dateLocation/Picnic.h"

using namespace std;

int main() {
  string userInput;

  //create dream person
    cout << "Tell me about your dream person." << endl;
    chooseHair();
    chooseEye();
    cout << endl;
    
    sleep(1);
  
  //making moves
    cout << "You got a new match! They're absolutely perfect, ";
    cout << getHair() << " hair and " << getEye() << " eyes. Its your move, how do you slide into those DMs? ";
    cin.ignore();
    getline(cin, userInput);
    cout << "(" << remark() << ")" << endl;
    
    ghosted();

  //date options
    cout << "1. Coffee shop" << endl;
    cout << "2. Dinner & movies" << endl;
    cout << "3. Picnic" << endl;
    

    bool again = true;
    while(again){
    again = false;
    cin >> userInput;


    if(userInput == "1"){
      cout << "They said yes! Congrats you have a date tommorow to the coffee shop." << endl;
      wait();
      getReady();
      wait();
      coffeeDate();
    }
    else if(userInput == "2"){
      cout << "They said yes! Congrats you have a date tommorow to dinner and a movie." << endl;
      wait();
      getReady();
      wait();
      DinnerMovie();
    }
    else if(userInput == "3"){
      cout << "They said yes! Congrats you have a picnic date tommorow." << endl;
      wait();
      getReady();
      wait();
      Picnic();
    }
    else{
      cout << "Error: enter a number from 1-3." << endl;
      cin.clear();
      cin.ignore();
      again = true;
    }
    }

  //postdate 
    if(!badEnding()){
      cout << endl;
      cout << "." << endl;
      cout << "." << endl;
      cout << "." << endl;
      sleep(2000);
      cout << "The date comes to an end and you start walking to your car. Its perfect that the two of you happened to park right next to eachother. ";
      cout << "You say goodbye to one another and you drive home blasting cheesy love songs..." << endl;
      cout << "play again?";
    }
  
  return 0;

  
};
