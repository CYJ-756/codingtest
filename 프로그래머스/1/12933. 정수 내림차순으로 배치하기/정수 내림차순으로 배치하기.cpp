#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <int> x;
    while(n >= 1){
        x.push_back(n % 10);
        n /= 10;
    }
    sort(x.begin(), x.end(), greater<>());
    for(int i = 0; i < x.size(); i++){
        answer *= 10;
        answer += x[i];
    }
    return answer;
}