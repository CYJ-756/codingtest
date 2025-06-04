#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool correct_word(const char* word) {
    const char* can_word[] = { "aya", "ye", "woo", "ma" };
    int word_len = strlen(word);
    int i = 0;
    char last[4] = "";

    while (i < word_len) {
        bool correct = false;
        for (int j = 0; j < 4; j++) {
            int can_len = strlen(can_word[j]);
            if (strncmp(&word[i], can_word[j], can_len) == 0) {
                if (strcmp(last, can_word[j]) == 0) {
                    return false;
                }
                strcpy(last, can_word[j]);
                i += can_len;
                correct = true;
                break;
            }
        }
        if (!correct){
            return false;  
        }
    }

    return true;
}

int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    for (int i = 0; i < babbling_len; i++) {
        if (correct_word(babbling[i])) {
            answer++;
        }
    }
    return answer;
}