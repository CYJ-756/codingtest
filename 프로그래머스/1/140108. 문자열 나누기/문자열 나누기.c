#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    int answer = 0;
    int s_len = strlen(s);
    int i = 0;
    
    while (i < s_len) {
        int e_count = 0;
        int n_count = 0;
        int j = i;
        
        while (j < s_len){
            if (s[j] == s[i]){
                e_count++;
            }else{
                n_count++;
            }
            j++;
            if (e_count == n_count) {
                break;
            }
        }
        answer++;
        i = j;
    }   
    return answer;
}