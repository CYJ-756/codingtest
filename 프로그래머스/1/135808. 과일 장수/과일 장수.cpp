#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end(), greater<int>());
    for (int i = 0; i + m - 1 < score.size(); i += m)
    {
        answer += score[i + m - 1] * m;
    }
    return answer;
}

// 사과의 상태에 따라 1 ~ k 점 까지 점수 부여 낮으면 하품 높으면 상품
// 상자에 들어있는 사과의 개수 m
// 사과 한 상자의 가격 가장 낮은 점수 p * m
// 오름 정리를 해서 묶기