#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = phone_number;
    for (int i = phone_number.size() - 1; i >= 0; i--)
        if (i < phone_number.size() - 4) {
            answer[i] = '*';
        }
    return answer;
}