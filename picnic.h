
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;


  

const int MENU_SIZE = 9;
int userInput;
string answer;
string userOrder;
string dateOrder;
bool again = true; //error catch

string menu[MENU_SIZE] = {"Expresso","Latte", "Americano", "Cappuccino", "Cold Brew","Mocha","Tea","Matcha", "Chai"};


void getMenu();
void pay();

void coffeeDate(){
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
  sleep(2000);

  cout << "You walk into the coffee shop and they are already there. You shake hands and greet eachother. \"Shall we order?\" they ask. You look up at the menu." << endl;

  sleep(1000);

  // order
    getMenu();
    cout << "\nWhat will you have?(select a number) ";

    //catch error
    while(again){
      again = false;
      cin >> userInput;
      
    if(cin && userInput > 0 && userInput <= MENU_SIZE){
        userOrder = menu[userInput-1];
        again = false;
    } 
    else{
      cout << "Error: choose a number between 1-" << MENU_SIZE << endl;
      cin.clear();
      cin.ignore();
      again = true;
      
    }
    }

    srand(time(0));
    dateOrder = menu[rand() % MENU_SIZE];

  //paying
    pay();
    cout << "." << endl;
    cout << "." << endl;
    cout << "." << endl;
    sleep(2000);

  cout << "\nThe two of you sit across from one another at a table. They're absolutely beautiful and you can't help but stare. ";
  cout << "\"So tell me about yourself.\" they ask.";
  cout << "\n(type an answer)\"";
  cin.ignore();
  getline(cin, answer);
  cout << ",\" You respond. \"Aw, you have got to be the cutest person ever.\" You go on to ask about themself. The conversation goes well and the two of you just click.";

}

void getMenu(){
  cout << "\nThe Menu: " << endl;
  for(int i = 0; i < MENU_SIZE; i++){
    cout << i + 1 << ". " << menu[i] << endl;
  }
}

void pay(){
  cout << "Do you offer to pay?(yes or no) ";

  again = true;

        //catch error
        while(again){
          again = false;
          cin >> answer;
          
        if(cin && (answer.at(0) == 'y' || answer.at(0) == 'Y')){
            cout << "\nYou tell your date that you will pay. After some playful bantering they agree to let you. \"I'll have a(n) " << userOrder << ",\" You tell the cashier, \"And this fine person will have...\" You gester towards your date. They look up and smile at you. ";

            if(userOrder == dateOrder){
              cout << "\"That's my favorite drink, I'll have a(n) " << userOrder <<  " too\".\n";
            } 
            else{
              cout << "\"I'll take a(n) " << dateOrder << ".\"\n";
            }

            cout << "You then pay for the drinks and thank the cashier." << endl;
  
            again = false;
        } 
        else if(cin && (answer.at(0) == 'n' || answer.at(0) == 'N')){
          cout << "(You were the one to ask them out but okay) You tell the cashier, \"I'll take a(n) " << userOrder << ". You pay for your drink and let yourself date order.";
          again = false;
        }
        else{
          cout << "Error: Enter yes or no." << endl;
          cin.clear();
          cin.ignore();
          again = true;
        }
        }
}
