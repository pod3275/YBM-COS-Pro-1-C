#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(char* s) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(s) * 2 + 1));
    int answer_idx = 0;
    char previous = tolower(s[0]);
    int counter = 1;

    for(int i=1; i<strlen(s); i++) {
        if(tolower(s[i]) == previous)
            counter++;
        else {
            answer[answer_idx++] = previous;
            answer[answer_idx++] = counter + '0';
            counter = 1;
            previous = tolower(s[0]);
        }
    }
    answer[answer_idx++] = tolower(previous);
    answer[answer_idx++] = counter + '0';
    answer[answer_idx++] = '\0';
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 코드입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
    char* s = "YYYYYbbbBbbBBBMmmM";
    char* ret = solution(s);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}