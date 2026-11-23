#pragma warning(disable:4996)
#include <stdio.h>

int main(){
    FILE *filePtr;
    char filename[] = "example.txt";

    filePtr = fopen(filename,"w");

    // 열기 실패 확인
    if (filePtr == NULL){
        printf("파일을 열 수 없습니다: %s\n", filename);
        return 1;
    }

    fprintf(filePtr, "Hello,world\n");

    fclose(filePtr);

    printf("%s 파일에 데이터를 성공적으로 썼습니다.\n",filename);

    return 0;
}
