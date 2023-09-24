#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-value"

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PMENU_SIZE = 6;
string userInputP;
bool isEmpty = false;
bool againP = true; //error catch

string picnicMenu[PMENU_SIZE] = {"finger sandwiches", "cheese", "fruit", "crackers", "chocolates", "cake"};

vector<string> picnicBasket;
void getMenuP();
string randomFood();

void Picnic(){
  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
  sleep(2000);
  
  
  cout << "You offered to make the basket and they'll bring the drinks. What do you put in the basket?(enter: yes or no)" << endl;

  getMenuP();

  //empty basket
    if(picnicBasket.size() == 0){
      do{
        cout << "It seems your picnic basket is empty. Would you like to go through the options again?(yes or no) ";
        againP = true;

        //catch error
        while(againP){
          againP = false;
          cin >> userInputP;
          
        if(cin && (userInputP.at(0) == 'y' || userInputP.at(0) == 'Y')){
            getMenuP();
            againP = false;
        } 
        else if(cin && (userInputP.at(0) == 'n' || userInputP.at(0) == 'N')){
          cout << "(Okay buddy, but I am not sure how well your date will take this...) " << endl;
          picnicBasket.push_back("nothing");
          isEmpty = true;
          againP = false;
        }
        else{
          cout << "Error: Enter yes or no." << endl;
          cin.clear();
          cin.ignore();
          againP = true;
        }
        }
      } while (picnicBasket.size() == 0);
    }

  cout << "." << endl;
  cout << "." << endl;
  cout << "." << endl;
  sleep(2000);

  cout << "You head to the park. The weather is absolutely perfect for a picnic. The basket is full of ";
  //display what in the picnic basket
  for(int i = 0; i < picnicBasket.size() - 1; i++){
    cout << picnicBasket.at(i) <<", ";
  }
    //grammar
    if(picnicBasket.size() != 1){
      cout << "and ";
    }
  cout << picnicBasket.at(picnicBasket.size() - 1) << ". ";

  cout << "You meet up with your date and greet eachother. You two walk around and talk a bit while looking for the perfect spot. Once you find the perfect spot, you sit down on the blanket they brought and you start handing them utensils and a plate." << endl;

  if(isEmpty){
    cout << "\n\"There is no food?\", they ask. ";
    cout << "You try and explain your reasoning but they are not having it. They get up and leave. You are left by yourself with an empty picnic basket and the bottle of champagne they brought." << endl;
    cout << "\n(Was not quite sure what you had in mind when not bringing food to a picnic but maybe the next date will understand?)";
    std::abort;
  }
  else{

    cout << "\n\"No way, I love " << randomFood() << "! How did you know? ";
    cout << "You smile and respond, \"Guess I got lucky.\" ";
    cout << "You two start talking more, it is going really well. They ask you, \"What do you do in your free time?\"";
    cout << "\n(type an answer) \"";
    cin.ignore();
    getline(cin, answer);
    cout << ",\" You respond. \"Wow that sounds like fun!\"" << endl;

    cout << "The food is barely touched, instead you two are way too busy talking. Their absolutely amazing." << endl;
  }
   
}

void getMenuP(){

  for(int i = 0; i < PMENU_SIZE; i++){
    cout << picnicMenu[i] << "? ";
    againP = true;
    
    //catch error
    while(againP){
      againP = false;
      cin >> userInputP;
      
    if(cin && (userInputP.at(0) == 'y' || userInputP.at(0) == 'Y')){
        picnicBasket.push_back(picnicMenu[i]);
        againP = false;
    } 
    else if(cin && (userInputP.at(0) == 'n' || userInputP.at(0) == 'N')){
      againP = false;
    }
    else{
      cout << "Error: Enter yes or no." << endl;
      cin.clear();
      cin.ignore();
      againP = true;
      
    }
    }
  }

}

string randomFood(){
  srand(time(0));
  return picnicBasket.at(rand() % picnicBasket.size());
}

bool badEnding(){
  if(isEmpty){
    return true;
  }
  return false;
}



#pragma GCC diagnostic pop
