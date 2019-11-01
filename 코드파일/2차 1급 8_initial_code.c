#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], int arr_len) {
    int left = 0, right = arr_len - 1;
    int idx = 0;
    int* answer = (int*)malloc(sizeof(int)*arr_len);
    while(left <= right){
        if(left % 2 == 0){
            answer[idx] = arr[left];
            left += 1;
        }
        else{
            answer[idx] = arr[right];
            right -= 1;
        }
        idx += 1;
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr_len = 6;
    int* ret = solution(arr, arr_len);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 6; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}