#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* s) {
    char* answer = (char*)malloc(sizeof(char)*1001);
    int idx = 0, length = strlen(s);
    for(int i = 0; i < length; ++i){
        if (s[i] == '0' && s[i+1] != '0')
            answer[idx++] = '0';
        else
            answer[idx++] = '1';
    }
    answer[idx] = 0;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. main함수는 잘못된 부분이 없으니, solution함수만 수정하세요.
int main() {
    char* s = "101100011100";
    char* ret = solution(s);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}