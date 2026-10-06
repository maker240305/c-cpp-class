#include <stdio.h>

void insertion(int arr[], int n){    // 삽입정렬 함수
    for(int i=1; i<n; i++){  // 두 번째 원소부터 시작 (첫 번째 원소는 이미 정렬되어 있다고 생각)
        int key = arr[i];    // 지금 정렬할 값을 key에 저장
        int j = i-1;         // key 바로 앞의 원소부터 비교

        while(j >= 0 && arr[j] > key){   // key보다 큰 값이 있으면 한 칸씩 뒤로 이동
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;     // key를 알맞은 위치에 삽입
    }
}

int main(){
    int arr[] = {7,4,5,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);  // 배열의 원소 개수 계산

    printf("초기 상태 배열: [ ");   // 정렬 전 배열 출력
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("] \n");

    insertion(arr,n);     // 삽입 정렬 함수 호출

    printf("정렬된 배열: [ ");   // 정렬 후 배열 출력
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("] \n");

    return 0;
}