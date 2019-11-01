#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int numbers[], int i, int j) {
	int tmp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = tmp;
}

int compare(const void* a, const void* b) {
	return *(const int*)a - *(const int*)b;
}

int* solution(int numbers[], int numbers_len) {
	int* answer;

    qsort(numbers, numbers_len, sizeof(int), compare);
    int mid = (numbers_len - 1) / 2;
    swap(numbers, mid, numbers_len-1);

    int left = mid + 1;
    int right = numbers_len - 1;
    while(left <= right) {
    	swap(numbers, left, right);
    	left = left + 1;
    	right = right - 1;
    }

    answer = numbers;
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.
int main() {
	int numbers[] = {7, 3, 4, 1, 2, 5, 6};
	int numbers_len = 7;
	int* ret = solution(numbers, numbers_len);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 {");
	for(int i = 0; i < numbers_len; i++) {
		if(i != 0)
			printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.");
}