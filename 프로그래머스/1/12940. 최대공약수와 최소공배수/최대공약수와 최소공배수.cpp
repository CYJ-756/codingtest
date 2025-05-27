#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = n;
    int y = m;
    int z;
    
    while (y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    answer.push_back(x);
    answer.push_back((n * m)/x);
    return answer;
}