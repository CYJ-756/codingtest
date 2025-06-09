#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s, const char* skip, int index) {
    int s_len = strlen(s);
    int skip_len = strlen(skip);
    char* answer = (char*)malloc(s_len + 1);
    int a[26] = {0};
    
    for (int i = 0; i < skip_len; i++){
        a[skip[i] - 'a'] = 1;
    }
    
    for (int i = 0; i < s_len; i++){
        answer[i] = s[i];
        int j = 0;
        while (j < index){
            answer[i]++;
            if (answer[i] > 'z'){
                answer[i] = 'a';
            }
            if (a[answer[i] - 'a']){
                continue;
            }
            j++;
        }
    }
    answer[s_len] = '\0';
    return answer;
}

// 문자열 s
// index 건너뛰는 크기
//
