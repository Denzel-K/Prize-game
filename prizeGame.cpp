#include <iostream>
#include <ctime>
using namespace std;

int main() {
  srand (time(0));
  
  int randNum = (rand() % 8) + 1;
  
  switch (randNum) {
    case 1:
      cout << "Congratulations !!" << '\n';
      cout << "You win two matching T-shirts!" << '\n';
      break;
      
    case 2:
      cout << "Congratulations !!" << '\n';
      cout << "You win movie tickets" << '\n';
      break;
    
    case 3:
      cout << "Congratulations !!" << '\n';
      cout << "You win a shopping voucher!" << '\n';
      break;
      
    case 4:
      cout << "Congratulations !!" << '\n';
      cout << "You win a stereo system!" << '\n';
      break;
      
    case 5:
      cout << "Congratulations !!" << '\n';
      cout << "You win a gift card!" << '\n';
      break;
      
    case 6:
      cout << "Congratulations !!" << '\n';
      cout << "You win free pizza for a week!" << '\n';
      break;
      
    case 7:
      cout << "Congratulations !!" << '\n';
      cout << "You win two matching T-shirts!" << '\n';
      break;
      
    case 8:
      cout << "Congratulations !!" << '\n';
      cout << "You win a trip to Mauritius!" << '\n';
      break;
  }
  
  
  return 0;
}