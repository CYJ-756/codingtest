#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;
    int b;
    for (int i = 0; i < nums.size() - 2; i++){
        for(int j = i + 1; j < nums.size() - 1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                b = 0;
                sum = nums[i] + nums[j] + nums[k];
                for(int l = 2; l < sum - 1; l++){
                    if (sum % l == 0){
                        b = 1;
                        break;
                    }
                }
                if(b != 1){
                    answer++;
                }
            }
        }
    }
    return answer;
}

// 대표 3개를 뽑는 반복문 생성
// 생성된 값을 더하고
// 더한 값이 소수 인지 확인
