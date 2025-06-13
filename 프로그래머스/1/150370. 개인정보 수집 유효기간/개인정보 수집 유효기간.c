#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], 
              size_t privacies_len) {
    
    int* answer = (int*)malloc(sizeof(int) * privacies_len);
    int to_y, to_m, to_d;
    int arr[26] = {0};
    
    for (int i = 0; i < terms_len; i++){
        char terms_c;
        int terms_m;
        sscanf(terms[i], "%c %d", &terms_c, &terms_m);
        arr[terms_c - 'A'] = terms_m; 
    }
    // 계약 이름에 따른 개월수
    
    sscanf(today, "%d.%d.%d", &to_y, &to_m, &to_d);
    // 오늘 날짜
    
    int td = to_y * 12 * 28 + to_m * 28 + to_d;
    // 오늘 날짜의 총일 수
    
    int count = 0;
    for (int i = 0; i < privacies_len; i++){
        int p_y, p_m, p_d;
        char p_c;
        sscanf(privacies[i], "%d.%d.%d %c", &p_y, &p_m, &p_d, &p_c);
        
        int pd = p_y * 12 * 28 + p_m * 28 + p_d;
        pd += arr[p_c - 'A'] * 28;
        
        if (pd <= td){
            answer[count++] = i + 1;
        }
    }
    
    return answer;
}


// 오늘 날짜를 의미하는 문자열 today
// 약관의 유효기간을 담은 1차원 문자열 배열 terms
// 수집된 개인정보의 정보를 담은 1차원 문자열 배열 privacies
// terms_len은 배열 terms의 길이입니다.
// privacies_len은 배열 privacies의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.