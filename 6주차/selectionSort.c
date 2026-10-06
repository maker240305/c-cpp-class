#include <stdio.h>

void selection(int arr[], int n){
    for(int i=0; i<n-1; i++){   // 배열의 앞쪽부터 하나씩 정렬
        int minIndex = i;       // 현재 위치의 값을 가장 작은 값이라고 가정

        for(int j=i+1; j<n; j++){       // 현재 위치 다음부터 배열 끝까지 확인
            if(arr[j] < arr[minIndex]){ // 더 작은 값이 발견되면
                minIndex = j;           // 가장 작은 값의 위치를 저장
            }
        }

        int temp = arr[i];      // 현재 위치의 값과 가장 작은 값을 교환
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main(){
    int arr[] = {7,4,5,1,3};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 원소 개수 계산

    printf("초기 상태 배열: [ ");   // 정렬 전 배열 출력
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("] \n");

    selection(arr,n);   // 선택 정렬 함수 호출

    printf("정렬된 배열: [ ");  // 정렬 후 배열 출력
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("] \n");

    return 0;
}