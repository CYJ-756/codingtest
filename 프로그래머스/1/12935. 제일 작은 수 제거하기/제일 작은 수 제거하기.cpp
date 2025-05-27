#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> k;
    k = arr;
    if(arr.size() <= 1){
        return vector<int>{-1};
    }
    sort(k.begin(), k.end(), greater<int>());
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] != k[arr.size() - 1]){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}