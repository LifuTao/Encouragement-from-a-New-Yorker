//New York Encouragement App lmaoo
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime> // std::time
#include <algorithm>// std::random_shuffle
#include <chrono> //sleep method
#include <thread>//sleep method




int main()
{

  srand(time(0));
  char input;
  std::vector<std::string> angry_vector = {"Why you sad for b?", "Are you deadass upset?", "What an angry motherf*ker","You not gonna get any girls with that attitude"};
  std::vector<std::string> upset_vector = {"Don't cry bro", "Are those tears", "Who's mans", "My son soft","Look at this dude","Boooy"};
  std::vector<std::string> sad_vector = {"You'll be aii", "We're here for you", "Follow your heart"};
  std::vector<std::string> happy_vector = {"Boy you hyped", "That's wassup", "happy for you bro", "Thats littt"};
  //Intro
  std::cout << "Welcome to Encouragement from a New Yorker \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  std::cout << "developed by a New Yorker of 13 years... \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  std::cout << "100% authentic, meant to be spoken with a New York Accent \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  std::cout << "Go Knicks! \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(700));
  while(true)
  {
  std::cout << "Are you \n (a) angry \n (b) upset \n (c) sad \n (d) happy  \n (q) I have had enough encouragement!?";
  std::cin >> input;
  if(input == 'q')
    break;
  switch(input)
  {
    case 'a': // Angry
    //Call for random New York Encouragement Angry Array
    std::cout << "\n" << angry_vector[rand() % angry_vector.size()] << "\n\n";
    break;
    case 'b':
    // Call for random New York Encouragement Upset Array
    std::cout << "\n" << upset_vector[rand() % upset_vector.size()] << "\n\n";
    break;
    case 'c':
    //call for random New York Encouragement Sad Array
    std::cout << "\n" << sad_vector[rand() % sad_vector.size()] << "\n\n";
    break;
    case 'd':
    //Call for random New York Encouragement Happy Array
    std::cout <<"\n" << happy_vector[rand() % happy_vector.size()] << "\n\n";
    break;
  }
}
std::cout << "Bye!" << std::endl;
  return 0;

}
