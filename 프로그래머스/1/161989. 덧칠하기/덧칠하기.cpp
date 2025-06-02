#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int count = 0;
    for (int i = 0; i < section.size(); i++){
        if(section[i] < count){
            continue;
        }
        answer++;
        count = section[i] + m;        
    }
    
    return answer;
}

// 칠해진 길이 n 미터, 1미터 길이의 n개의 구역, 왼쪽에서부터 번호를 부여 1~n 까지
// 롤러의 길이 m 미터 벽에 페인트를 한번 칠한다.