#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    int correct_count = 0;
    int zero_count = 0;
    
    bool correct_nums[45] = {false};
    
    for (int i = 0; i < win_nums_len; i++){
        correct_nums[win_nums[i] - 1] = true;
    }
    
    for (int i = 0; i < lottos_len; i++){
        if (lottos[i] == 0){
            zero_count++;
        }else if(correct_nums[lottos[i] - 1]){
            correct_count++;
        }
    }
    
    answer[0] = 7 - (correct_count + zero_count);
    answer[1] = 7 - correct_count;
    if (answer[0] > 6){
        answer[0] = 6;
    }
    if (answer[1] > 6){
        answer[1] = 6;
    }
    
    return answer;
}

// 민우가 구매한 로또 번호를 담은 배열 lottos
// 당첨 번호를 담은 배열 win_nums
// lottos_len은 배열 lottos의 길이
// win_nums_len은 배열 win_nums의 길이
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.


