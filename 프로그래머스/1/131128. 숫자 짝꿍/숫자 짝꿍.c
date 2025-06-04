#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* X, const char* Y) {
    int x_count[10] = {0};
    int y_count[10] = {0};
    int x_len = strlen(X);
    int y_len = strlen(Y);
    
    for (int i = 0; i < x_len; ++i){
        x_count[X[i] - '0']++;
    }
    for (int i = 0; i < y_len; ++i){
        y_count[Y[i] - '0']++;
    }
    
    char* answer = (char*)malloc(sizeof(char) * (x_len + y_len));
    int pos = 0;
    
    for (int i = 9; i >= 0; i--){
        int cnt = x_count[i] < y_count[i] ? x_count[i] : y_count[i];
        for (int k = 0; k < cnt; ++k) {
            answer[pos++] = '0' + i;
        }      
    }
    answer[pos] = '\0';
        
    if (pos == 0) {
        free(answer);
        answer = (char*)malloc(3);
        strcpy(answer, "-1");
    } else if (answer[0] == '0') {
        answer[1] = '\0';
    }
    
    
    return answer;
}

