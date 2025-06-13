#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {
    int* answer = (int*)malloc(sizeof(int) * 4);
    int lux = INT_MAX, luy = INT_MAX;
    int rdx = 0, rdy = 0;
    for (int i = 0; i < wallpaper_len; i++){
        for (int j = 0; j < strlen(wallpaper[i]); j++){
            if (wallpaper[i][j] == '#'){
                if(lux > i){
                    lux = i;
                }
                if(luy > j){
                    luy = j;
                }
                if(rdx < i + 1){
                    rdx = i + 1;
                }
                if(rdy < j + 1){
                    rdy = j + 1;
                }
            }
        }
    }
    answer[0] = lux;
    answer[1] = luy;
    answer[2] = rdx;
    answer[3] = rdy;
    return answer;
}