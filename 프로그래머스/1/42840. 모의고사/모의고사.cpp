#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Correct_Sum(vector<int> person, vector<int> answers){
    int correct = 0;
    for (int i = 0; i < answers.size(); i++){
        if (answers[i] == person[i % person.size()]){
            correct++;
        }
    }
    return correct;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> p = {
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 2, 4, 2, 5},
        {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
    };
    vector<int> scores(3);
    
    for (int i = 0; i < 3; i++) {
        scores[i] = Correct_Sum(p[i], answers);
    }
    
    int max_score = *max_element(scores.begin(), scores.end());
    
    for (int i = 0; i < 3; i++) {
        if (scores[i] == max_score) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}

// 1번 수포자 : 1, 2, 3, 4, 5 반복
// 2번 수포자 : 2, 1, 2, 3, 2, 4, 2, 5 반복
// 3번 수포자 : 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 반복
