#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int x = 0;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        x = s.find(s[i], i + 1);
        if (x == string::npos){
            answer.push_back(-1);
        }else{
            answer.push_back(x - i);
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
}