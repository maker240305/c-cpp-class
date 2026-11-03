#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;  //시작 위치를 0으로 설정
    int right = size - 1;  //끝 위치를 배열크기 -1로 설정

    while (left <= right) { //시작위치가 끝 위치보다 작거나 같을 동안 반복
        int mid = (left + right) / 2; //중간 위치를 계산

        if (arr[mid] == target) {  //원소를 찾음
            return mid;   //중간 위치를 반환하고 탐색을 종료 
        } else if (arr[mid] < target) {  //찾는 원소가 중간값보다 큰 경우 
            left = mid + 1; //오른쪽 절반 탐색
        } else { //찾는 원소가 중간값보다 작은 경우
            right = mid - 1; //왼쪽 절반 탐색
        }
    }

    return -1; // 원소를 찾지 못한 경우
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; //반드시 정렬된 배열
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    
    int result = binarySearch(arr, size, target);


    if (result != -1) {
        printf("원소 %d는 index %d에 존재합니다.\n", target, result);
    } else {
        printf("원소 %d를 찾지 못했습니다.\n", target);
    }

    return 0;
}