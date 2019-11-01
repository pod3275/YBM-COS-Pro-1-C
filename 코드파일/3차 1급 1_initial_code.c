#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_NUMBER 1001

int* func_a(int arr[], int arr_len){
    int* ret = (int*)malloc(sizeof(int)*(2*arr_len));
    for(int i = 0; i < arr_len; i++)
        ret[i + arr_len] = ret[i] = arr[i];
    return ret;
}

bool func_b(int first[], int second[], int length){
    int counter[MAX_NUMBER] = {0};
    for(int i = 0; i < length; i++){
        counter[first[i]]++;
        counter[second[i]]--;
    }
    for(int i = 0; i < MAX_NUMBER; i++)
        if(counter[i] != 0)
            return false;
    return true;
}

bool func_c(int first[], int second[], int length){
    for(int i = 0; i < length; i++){
        int j;
        for(j = 0; j < length; j++)
            if(first[i + j] != second[j])
                break;
        if(j == length)
            return true;
    }
    return false;
}

bool solution(int arrA[], int arrA_len, int arrB[], int arrB_len) {
    if(arrA_len != arrB_len)
        return false;
    if(func_@@@(@@@)){
        int* arrA_temp = func_@@@(@@@);
        if(func_@@@(@@@))
            return true;
    }
    return false;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int arrA1[4] = {1, 2, 3, 4};
    int arrA1_len = 4;
    int arrB1[4] = {3, 4, 1, 2};
    int arrB1_len = 4;
    bool ret1 = solution(arrA1, arrA1_len, arrB1, arrB1_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 == true ? "true" : "false");    

    int arrA2[4] = {1, 2, 3, 4};
    int arrA2_len = 4;
    int arrB2[4] = {1, 4, 2, 3};
    int arrB2_len = 4;
    bool ret2 = solution(arrA2, arrA2_len, arrB2, arrB2_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 == true ? "true" : "false");    
}