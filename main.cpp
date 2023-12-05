#include <iostream>

int main() {
  int tryagain{1};
  while(tryagain == 1){
    double P{0};
    double F{0};
    double M{0};
    
    std::cout << "Enter your Project grade: ";
    std::cin >> P;

    std::cout << "Enter your Midterm grade: ";
    std::cin >> M;

    std::cout << "Enter your Final grade: ";
    std::cin >> F;

    double E {(0.25*M) + (0.75*F)};
    double G{0};

    if(E<=45){
      G = E;
    }
    else if(45 < E && E < 55) {
      double Q {0.1*(E-45)};
      G = (1-(0.33*Q))*(E) + (0.33*Q*P);
    }
    else{
      G = (0.5 * F) + ((1/6) * M) + ((1/3) * P);
    }
      

      std::cout << "Your final grade is " << G << std::endl << "Try again? (0 = no, 1 = Yes): ";
      std::cin >> tryagain;
  }
}