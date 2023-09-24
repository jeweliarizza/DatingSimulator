
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "../witty.h"
#include "../sleep.h"


using namespace std;

const int DM_SIZE = 5;
const int MOVIE_SIZE = 5;
string temp;
int userInputDM;
string userOrderDM;
string dateOrderDM;
bool againDM = true; //error catch

string dinnerMenu[DM_SIZE] = {"Burger", "Pasta", "Steak", "Salad", "Sushi"};
string movies[MOVIE_SIZE] = {"action", "horror", "romance", "comedy", "drama"};

void getDMenu();
void getMovies();
void payDM();

void DinnerMovie(){
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
  sleep(2000);

  cout << "You two meet up at the restaurant. You think to yourself, \"damn, they look even better in person\". You thought ahead and made reservations. The hostess seats the both of you. Now, c'mon, compliment your date:(type in a compliment) ";
  cin.ignore();
  getline(cin, temp);
  cout << "(" << remark() << ")" << endl;
  sleep(1500);

  cout << "\nTheir face gets slightly red, \"Thank you!\" ";
  cout << "You look down at the menu in front of you." << endl;
  sleep(1000);

  //order
  getDMenu();
  
    //catch error
    while(againDM){
      againDM = false;
      cin >> userInputDM;
      
    if(cin && userInputDM > 0 && userInputDM <= DM_SIZE){
        userOrderDM = dinnerMenu[userInputDM-1];
        againDM = false;
    } 
    else{
      cout << "Error: choose a number between 1-" << DM_SIZE << endl;
      cin.clear();
      cin.ignore();
      againDM = true;
      
    }
    }
  
  srand(time(0));
  dateOrderDM = dinnerMenu[rand() % DM_SIZE];

  cout << "\nYou let your date order first. \"I'll have the " << dateOrderDM << ".\" They hand the menu to the waiter. ";
  if(userOrderDM == dateOrderDM){
    cout << "\"I'll have the what they are having,\" you tell the waiter.\n";
  } 
  else{
    cout << "\"I'll take the " << userOrderDM << ",\" you tell the waiter.\n";
  }

  cout << "You two start talking until your interrupted by the food coming." << endl;
  cout << "\"How's the food?\" you ask. ";
    //random response
    srand(time(0));
    if(rand() % 4 != 0){
      cout << "\"Its delicious!\" they respond. ";
    }
    else{
      cout << "\"Not sure, I haven't eaten it yet,\" they respond. ";
    }

  cout << "The conversation is easy since you two click. After dinner you pay for the food and head to the movies. Its not too far from the restaurant so you walk. " << endl;
  
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
  sleep(2000);
  
  cout << "While walking to the restaurant, you reach out to grab their hand, they squeeze your hand back. Once you get to the ticket booth the cashier asks, \"What movie will it be?\"\n ";

  getMovies();
  cout << "(choose a number) ";

  againDM = true;
  //catch error
    while(againDM){
      againDM = false;
      cin >> userInputDM;
      
    if(cin && userInputDM > 0 && userInputDM <= DM_SIZE){
        userOrderDM = movies[userInputDM-1];
        againDM = false;
    } 
    else{
      cout << "Error: choose a number between 1-" << DM_SIZE << endl;
      cin.clear();
      cin.ignore();
      againDM = true;
      
    }
    }

  cout << "\n\"Two tickets for the " << userOrderDM << " movie please,\" you say. " << endl;

  cout << "You two head into the movie theatre, find your seats and enjoy the movie. After the movie, the two of you head out. ";

    //random response
    srand(time(0));
    if(rand() % 2 != 0){
      cout << "they say, \"that was a really good movie, I'm glad you chose.\" ";
    }
    else{
      cout << "\"That movie was really awful,\" they say laughing, \"but I still had a good time with you!\" ";
    }

  
  
  

  

  
  
}

void getDMenu(){
  cout << "\nThe Menu: " << endl;
  for(int i = 0; i < DM_SIZE; i++){
    cout << i + 1 << ". " << dinnerMenu[i] << endl;
  }
  cout << "\nThe waiter comes to the table and asks, \"What will we be having?\"(choose a number) ";
}

void getMovies(){
  cout << "\nChoose a genre: " << endl;
  for(int i = 0; i < MOVIE_SIZE; i++){
    cout << i + 1 << ". " << movies[i] << endl;
  }
  cout << endl;
}

void payDM(){
  cout << "Do you offer to pay?(yes or no) ";

  againDM = true;

        //catch error
        while(againDM){
          againDM = false;
          cin >> temp;
          
        if(cin && (temp.at(0) == 'y' || temp.at(0) == 'Y')){
            

            

            cout << "You then pay for the drinks and thank the cashier." << endl;
  
            againDM = false;
        } 
        else if(cin && (temp.at(0) == 'n' || temp.at(0) == 'N')){
          cout << "(You were the one to ask them out but okay) You tell the cashier, \"I'll take a(n) " << userOrder << ". You pay for your drink and let yourself date order.";
          againDM = false;
        }
        else{
          cout << "Error: Enter yes or no." << endl;
          cin.clear();
          cin.ignore();
          againDM = true;
        }
        }
}
