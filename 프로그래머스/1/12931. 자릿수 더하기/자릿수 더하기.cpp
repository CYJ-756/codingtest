#include <iostream>
#include <cmath>

using namespace std;
int solution(int n)
{
    int answer = 0;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    for (int i = 0; i < 10; i++){
        answer += n % 10;
        n /= 10;
    }
    return answer;
}