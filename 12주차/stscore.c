#include <stdio.h>

struct Student{
    char name[50];
    int score;
};
    
int main(){
    struct Student s;
    //파일 포인터 3개 선언
    FILE *fp;
    FILE *pass;
    FILE *fail;
    
    int count;
    
    fp = fopen("student.txt","w");
    
    if(fp == NULL){
        printf("파일 열기 실패");
        return 1;
    }
    
    printf("학생 수 :");
    scanf("%d", &count);

    for(int i=0; i<count; i++){
        //이름 받기
        printf("\n%d번째 학생 이름", i+1);
        scanf("%49s", s.name);
        //점수 받기
        printf("점수 :");
        scanf("%d", &s.score);
        //이름과 점수를 파일에 저장
        fprintf(fp,"%s %d\n", s.name, s.score);
    }
    
    fclose(fp);

    fp = fopen("student.txt","r");
    pass = fopen("pass.txt","w");
    fail = fopen("fail.txt","w");
    
    // 세 파일중 만약 하나라도 열기에 실패하면
    if(fp == NULL || pass == NULL || fail == NULL){
        // 오류 메시지 출력
        printf("파일 열기 실패\n");
        // 성공적으로 열린 파일은 닫는다
        if(fp != NULL) fclose(fp);
        if(pass != NULL) fclose(pass);
        if(fail != NULL) fclose(fail);

        return 1;
    }
    
    while(fscanf(fp, "%49s %d", s.name, &s.score)==2){
        if(s.score >= 80){
            fprintf(pass, "%s %d\n", s.name, s.score);
        }else{
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    
    }
    
    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("파일 저장 및 분류 완료!");

    return 0;
}
