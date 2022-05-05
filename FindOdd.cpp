#include <vector>
#include <string>
using namespace std;
string spinWords(const string &str) {
  vector<string> word;   string strings;
  for(auto i : str){
    if(i == ' '){
      word.push_back(strings);
      strings = "";
    }else{
      strings += i;
    }
  }
  word.push_back(strings);
  
  vector<string> ans; string temp;
  for(int i = 0 ; i < word.size() ; i++){
    strings = "";
    temp = word[i];
    if(temp.size() >= 5){
      for(int j = temp.size()-1 ; j >= 0 ; j--){
        strings += temp[j];
      }
      ans.push_back(strings);
    }else{
      ans.push_back(temp);
    }
  }
  string finalans;
  for(unsigned long i = 0 ; i < ans.size()-1 ; i++){
    finalans += ans[i];
    finalans += ' ';
  }
  finalans += ans[ans.size()-1];
  return finalans;
}// spinWords
