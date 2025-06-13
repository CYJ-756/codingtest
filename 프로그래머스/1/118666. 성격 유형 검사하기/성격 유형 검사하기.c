#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(5);
    int arr[26] = {0};
    char types[4][2] = {
        {'R', 'T'},
        {'C', 'F'},
        {'J', 'M'},
        {'A', 'N'}
    };
    for (int i = 0; i < survey_len; i++){
        if (choices[i] - 4 > 0){
            arr[survey[i][1] - 'A'] += choices[i] - 4;
        }else{
            arr[survey[i][0] - 'A'] += -(choices[i] - 4);
        }
    }
    for (int i = 0; i < 4; i++){
        if (arr[types[i][0] - 'A'] > arr[types[i][1] - 'A']){
            answer[i] = types[i][0];
        }else if(arr[types[i][0] - 'A'] < arr[types[i][1] - 'A']){
            answer[i] = types[i][1];
        }else{
            answer[i] = (types[i][0] < types[i][1]) ? types[i][0] : types[i][1];
        }
    }
    answer[4] = '\0';
    return answer;
}


// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.