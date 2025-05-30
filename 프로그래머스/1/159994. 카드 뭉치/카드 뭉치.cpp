#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int cards1_stack = 0;
    int cards2_stack = 0;
    for(int i = 0; i < goal.size(); i++){
        auto it_1 = find(cards1.begin(), cards1.end(), goal[i]);
        auto it_2 = find(cards2.begin(), cards2.end(), goal[i]);
        if(cards1_stack < cards1.size() && cards1[cards1_stack] == *it_1){
            cards1_stack++;
        }else if(cards2_stack < cards2.size() && cards2[cards2_stack] == *it_2){
            cards2_stack++;
        }else{
            answer = "No";
            break;
        }
        answer = "Yes";
    }
    return answer;
}

// 카드뭉치 2개
// 카드를 순서대로 한 장씩 사용
// 한 번 사용한 카드는 다시 사용 불가
// 카드를 사용하지 않고 다음 카드로 넘어갈 수 없음
// 기존에 주어진 카드 뭉치의 단어 순서는 바꿀 수 없음