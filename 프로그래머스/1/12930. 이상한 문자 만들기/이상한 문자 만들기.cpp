#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' '){
            index = 0;
        }else if (index % 2 == 0){
            s[i] = toupper(s[i]);
            index++;
        }else {
            s[i] = tolower(s[i]);
            index++;
        }
        answer.push_back(s[i]);
    }
    return answer;
}