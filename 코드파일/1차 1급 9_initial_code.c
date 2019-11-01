#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int func(int record){
    if(record == 0) return 1;
    else if(record == 1) return 2;
    return 0;
}

int solution(int *recordA, int recordA_len, int *recordB, int recordB_len){
    int cnt = 0;
    for(int i = 0; i < recordA_len; i++){
        if(recordA[i] == recordB[i])
            continue;
        else if(recordA[i] == func(recordB[i]))
            cnt = cnt + 3;
        else
            cnt = cnt - 1;
    }
    return cnt;
}

// The following is main function to output testcase. The main function is correct and you shall correct solution function.
int main() {
    int recordA[10] = {2,0,0,0,0,0,1,1,0,0};
    int recordA_len = 10;
    int recordB[10] = {0,0,0,0,2,2,0,2,2,2};
    int recordB_len = 10;
    int ret = solution(recordA, recordA_len, recordB, recordB_len);

	// Press Run button to receive output. 
	printf("Solution: return value of the function is %d .\n", ret);
}