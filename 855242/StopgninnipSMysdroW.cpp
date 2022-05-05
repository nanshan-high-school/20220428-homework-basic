#include <vector>
using namespace std;

string spinWords(const string &str) {
  int spaceTimes = 0;
  vector<string> splits = {};
  string part = "";
  for(int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      part += str[i];
    } else {
      splits.push_back(part);
      part = "";
      spaceTimes ++;
    }
    if (i == str.length() - 1) {
      splits.push_back(part);
    }
  }

  string spinningWord = "";
  for (string i : splits) {
    if (i.length() > 4) {
      for (int j = (i.length() - 1); j >= 0; j--) {
        spinningWord += i[j];
      }
    } else {
      spinningWord += i;
    }
    if (spaceTimes) {
      spinningWord += " ";
      spaceTimes --;
    }
  }
  return spinningWord;
}
