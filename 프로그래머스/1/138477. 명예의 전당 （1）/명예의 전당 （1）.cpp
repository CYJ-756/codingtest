#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> x;
    for(int i = 0; i < score.size(); i++){
        x.push_back(score[i]);
        sort(x.begin(),x.end(), greater<int>());
        if (x.size() < k){
            answer.push_back(x.back());
        }else{
            answer.push_back(x[k-1]);
        }
    }
    return answer;
}