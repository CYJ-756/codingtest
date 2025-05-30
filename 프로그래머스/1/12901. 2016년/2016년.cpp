#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string k[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int arr[12] = {0, 31 , 29 , 31, 30, 31, 30, 31, 31, 30, 31, 30};
    for (int i = 0; i < a; i++){
        b += arr[i];
    }
    answer = k[b % 7];
    return answer;
}