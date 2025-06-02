#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++){
        int count = 0;
        int sqrt_i = sqrt(i);
        for (int j = 1; j <= sqrt_i; j++) {
            if (i % j == 0) {
                count += 2;
                if (j * j == i) count--;
            }
        }
        if (count > limit){
            count = power;
        }
        answer += count;
    }
    return answer;
}

// 기사에게 1번부터 number 까지 번호가 지정
// 약수 만큼의 공격력을 가짐
// 공격력 1당 무개 1
// 기사가 제한 공격력 limit 을 넘으면 power 의 공격력을 가짐