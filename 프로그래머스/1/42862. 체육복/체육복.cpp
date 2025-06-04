#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < reserve.size(); ) {
        bool erased = false;
        for (int j = 0; j < lost.size(); ++j) {
            if (reserve[i] == lost[j]) {
                reserve.erase(reserve.begin() + i);
                lost.erase(lost.begin() + j);
                erased = true;
                break;
            }
        }
        if (!erased) ++i;
    }

    int answer = n - lost.size();
    for (int i = 0; i < reserve.size(); ) {
        bool erased = false;
        for (int j = 0; j < lost.size(); ++j) {
            if (abs(reserve[i] - lost[j]) == 1) {
                answer++;
                reserve.erase(reserve.begin() + i);
                lost.erase(lost.begin() + j);
                erased = true;
                break;
            }
        }
        if (!erased) ++i;
    }

    return answer;
}