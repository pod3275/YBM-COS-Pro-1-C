#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Student{
    int student_number;
    int rank;
}Student;

int compare(const void *a, const void * b){
    Student first = *(Student *)a;
    Student second = *(Student *)b;
    if(@@@)
        return -1;
    else if(@@@)
        return 1;
    else
        return 0;
}

int* solution(int student_numbers[], int student_numbers_len, int ranks[], int ranks_len) {
    int len = student_numbers_len;
    Student* students = (Student*)malloc(sizeof(Student)*len);
    for(int i = 0; i < len; ++i){
        @@@;
        @@@;
    }
    
    qsort(students, len, sizeof(Student), compare);
    
    int* answer = (int*)malloc(sizeof(int)*len);
    for(int i = 0; i < len; ++i)
        answer[i] = @@@;
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int student_numbers[5] = {2,4,3,6,5};
    int student_numbers_len = 5;
    int ranks[5] = {3,5,1,2,4};//동점자 없음
    int ranks_len = 5;
    int* ret = solution(student_numbers, student_numbers_len, ranks, ranks_len);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.       
    printf("solution 함수의 반환 값은 {");
    for(int i = 0; i < 6; i++){
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}