#include <iostream>
#include <cstdlib>

int main() {
  std::cout << "MAGIC 8-BALL:\n\n";
  srand(time(NULL));
  int answer = std::rand() % 10;
  //std::cout << answer << "\n";

  if (answer == 1) {
    std::cout << "It is certain.";
  }
  else if (answer == 2){
    std::cout << "It is decidedly so.";
  }
  else if (answer == 3){
    std::cout << "Without a doubt.";
  }
  else if (answer == 4){
    std::cout << "Yes - definetely.";
  }
  else if (answer == 5){
    std::cout << "You may rely on it.";
  }
  else if (answer == 6){
    std::cout << "As I see it, yes.";
  }
  else if (answer == 7){
    std::cout << "Most likely.";
  }
  else if (answer == 8){
    std::cout << "Outlook good.";
  }
  else if (answer == 9){
    std::cout << "Yes.";
  }
  else {
    std::cout << "Very doubtful";
  }
}