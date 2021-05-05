#include <string>
#include <iostream>
#
using namespace std;

int solution(string s) {
    int answer = s.size();
    for(int i = 1; i < answer / 2; i++) {
      int count = 1;
      string sub = s.substr(0, i), output;

      for(int j = i; j < answer; j += i) {
        if(sub == s.substr(j, i)) {
          count++;
        } else {
          if(count > 1) {output += to_string(count);}
            output += sub;
            sub = s.substr(j, i);
            count = 1;
        }
      //Check  cout << output << endl;
      }
    
      if(count > 1) {output += to_string(count);}
      output += sub;
      cout << output << endl;
      answer = output.size();

    }
    return answer;
}

int main() {

  int answer = solution("aaabbbacc");
  cout << answer << endl;

  return 0;
}
