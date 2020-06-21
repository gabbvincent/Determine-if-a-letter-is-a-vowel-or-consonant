#include <iostream>

int main() {

  char c ;

  int isLowercaseVowel, isUppercaseVowel ;

  std::cout << " Enter a letter: " ;

  std::cin >> c ;

  isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ;

  isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ;

  if (isLowercaseVowel || isUppercaseVowel)

  std::cout << c << " is a vowel " ;

    else 

      std::cout << c << " is a consonant" ;

      return 0 ;
    }