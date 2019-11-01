#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* number) {
    char* reverse_number = (char*)malloc(sizeof(char) * (strlen(number)+2));
    int j = 0;
    for(int i = strlen(number)-1; i >= 0; i--, j++)
        @@@ = @@@;
    reverse_number[j] = '\0';
    free(number);
    return reverse_number;
}

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char) * (n+1));
    for(int i = 0; i < n; i++) {
        answer[i] = @@@;
        answer[i+1] = '\0';
        answer = reverse(answer);
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int n = 5;
    char* ret = solution(n);    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}