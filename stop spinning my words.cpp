#include <vector>
#include <algorithm>
#include <string>
using namespace std;

std::string spinWords(const std::string &str){
  vector<string> words;
  string part = "";
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      part += str[i];
    } else {
      words.push_back(part);
      part = "";
    }
    if (i == str.length() - 1) {
      words.push_back(part);
    }
  }
  string spinnedword = "";
  for (auto i : words) {
    if (i.length() > 4) {
      for (int j = i.length() - 1; j >= 0; j--) {
        spinnedword += i[j];
      }
    } else {
      spinnedword += i;
    }
    spinnedword += " ";
  }
  spinnedword.pop_back();
  return spinnedword;
}
