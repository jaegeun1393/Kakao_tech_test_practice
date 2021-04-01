#include <string>
#include <vector>

using namespace std;

vector<int> cpy(int max, string s) {
    vector<int> temp_arr;
    for(int i = 0; i < max; i++) {
        temp_arr.push_back(s[i]);
    }
    
    return temp_arr;
}

int solution(string s) {
    int answer = s.size();
    vector<int> vec = cpy(answer, s);
    vector<int> ans;
    
    for(int i = 0; i < answer; i++) {
        int front_num = 0;
        if(i+1 <= answer) {
            if(vec.at(i) == vec.at(i + 1)) {
                front_num++;
            } else {
                if(front_num > 1) {
                    ans.push_back(front_num);
                }
                ans.push_back(vec.at(i));
                i += front_num;
            }
        }
    } //where i for loop ends
    
    answer = ans.size();
    return answer;
}
