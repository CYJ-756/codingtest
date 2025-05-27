#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int x = numer1 * denom2 + denom1 * numer2;
    int y = denom1 * denom2;int a = x, b = y;
    
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = a;
    
    answer.push_back(x/gcd);
    answer.push_back(y/gcd);
    return answer;
}