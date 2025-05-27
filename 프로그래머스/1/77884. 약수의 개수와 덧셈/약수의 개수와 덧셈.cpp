#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int k;
    for (int i = left; i <= right; i++){
        k = sqrt(i);
        if(k * k == i){
            answer -= i;
        }else{
            answer += i;
        }
    }
    return answer;
}