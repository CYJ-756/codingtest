#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while(1){
        if (n / a == 0)
            break;
        answer += (n / a) * b;
        n = (n % a) + ((n / a) * b);
    }
    return answer;
}