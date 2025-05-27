#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    while (n >= 1){
        arr.push_back(n % 3);
        n /= 3;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        answer = answer * 3 + arr[i];
    }
    
    return answer;
}