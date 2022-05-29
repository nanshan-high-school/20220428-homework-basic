#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

std::string spinWords(const std::string &str)
{
  int di = 0;
  bool d = true;
  string wor, words;
  for (int i = 0 ; i < str.length() ; i++){
    if (str[i] != ' '){
      d = true;
      di += 1;
      words += str[i];
      if (i == str.length() - 1 && di >= 5){
    
        for (int j = di ; j > 0 ; j--){
            wor += words[j-1];
          }
      } 
      if (i == str.length() - 1 && di < 5) {
        wor += words;
      }
    } else {
        if (di >= 5){
          for (int j = di ; j > 0 ; j--){
            wor += words[j-1];
          }
//           wor += ' ';
          words = "";
          di = 0;
          d = true;
        } 
        if (di < 5) {
          if (d > 0){
            wor += words;
            wor += ' ';
          } else {
            wor += words;
          }
          words = "";
          di = 0;
          d = true;
        }
      }
    }
  return wor;
}
