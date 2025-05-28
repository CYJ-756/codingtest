#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 0;
    int h = 0;
    for (int i = 0; i < sizes.size(); i++) {
        int l = max(sizes[i][0], sizes[i][1]);
        int s = min(sizes[i][0], sizes[i][1]);
        if (w < l) w = l;
        if (h < s) h = s;
    }
    answer = w * h;
    return answer;
}