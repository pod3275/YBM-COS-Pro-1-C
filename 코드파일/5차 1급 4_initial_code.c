#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int number) {
    char* answer = "";

    int number_count[10] = { 0, };
    while(number > 0) {
    	number_count[number % 10]++;
    	number /= 10;
    }

    int len = 0;
    for(int i = 0; i < 10; i++)
    	if(number_count[i] != 0)
    		len++;

    answer = (char*) malloc(2 * len * sizeof(char) + 1);
    int index = 0;
    for(int i = 0; i < 10; i++)
    	if(number_count[i] != 0) {
    		answer[index++] = i + '0';
    		answer[index++] = number_count[i] + '0';
    	}
    answer[index] = '\0';

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니, 위의 코드만 수정하세요.
int main() {
	int number1 = 2433;
	char *ret1 = solution(number1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

	int number2 = 662244;
	char *ret2 = solution(number2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}