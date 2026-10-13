#include <stdio.h>

#define Max_stduents 50

void bubbleSort(int *arr, int size){
    for (int i=0; i<size-1;i++){
        for (int j=0; j<size-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp = *(arr+j);
                *(arr +j)= *(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}


int main() {
    int num;

    printf("학생 수를 입력하세요 (최대 %d명) : ", Max_stduents);
    scanf("%d", &num);

    if (num > Max_stduents){
        printf("최대 학생수를 초과했습니다");
        return 1;
    }

    int *scoreP;
    int score[Max_stduents]; 
    scoreP = score;

    for (int i=0; i<num; i++) {
        printf("%d번 학생의 성적을 입력하세요 : ", i+1);
        scanf("%d", scoreP + i);
    }

    bubbleSort(scoreP,num);

    printf("\n정렬된 성적 : ");
    for(int i=0; i<num; i++){
        printf("%d ",*(scoreP + i));
    }

    printf("\n\n최고 성적 : %d\n", *(scoreP + num - 1));
    printf("최하 성적 : %d\n", *scoreP);

    return 0;
}