#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int h_sum = 0;
    int y = x;
    while (y >= 1){
        h_sum += y % 10;
        y /= 10;
    }
    if (x % h_sum == 0){
        answer = true;
    }else{
        answer = false;
    }
    return answer;
}