#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* keymap[], size_t keymap_len, const char* targets[], size_t targets_len) {
    int* answer = (int*)malloc(sizeof(int) * targets_len);
    int pos[26];
    for (int i = 0; i < 26; i++){
        pos[i] = -1;
    }

    for (int i = 0; i < keymap_len; i++){
        int x = strlen(keymap[i]);
        for (int j = 0; j < x; j++){
            int idx = keymap[i][j] - 'A';
            if (pos[idx] == -1 || pos[idx] > j + 1) {
                pos[idx] = j + 1;
            }
        }
    }
    for (int i = 0; i < targets_len; i++){
        int total = 0;
        int y = strlen(targets[i]);
        for (int j = 0; j < y; j++) {
            int idx = targets[i][j] - 'A';
            if (pos[idx] == -1) {
                total = -1;
                break;
            } else {
                total += pos[idx];
            }
        }
        answer[i] = total;
    }
    return answer;
}


// keymap_len은 배열 keymap의 길이
// targets_len은 배열 targets의 길이
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.