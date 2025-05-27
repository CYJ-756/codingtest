#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long x = num;
    int answer = 0;
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = x * 3 + 1;
        }
        answer++;
        if (answer > 500) {
            return -1;
        }
    }
    return answer;
}