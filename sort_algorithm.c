#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000000 // 1000만

void insertion_sort(int arr[], int n); // 삽입 정렬
void merge_sort(int arr[], int temp[], int left, int right); // 머지 정렬
void quick_sort(int arr[], int left, int right); // 퀵 정렬
int partition(int arr[], int left, int right);
void copy_arr(int* a, int* b, int size);
void swap(int* a, int* b);
void print_execution_time(clock_t start, clock_t end, const char* sortName); // 시간 출력

int main() {
    int *ordered_arr = (int*)malloc(sizeof(int) * SIZE);
    int *reverse_arr = (int*)malloc(sizeof(int) * SIZE);
    int *random_arr = (int*)malloc(sizeof(int) * SIZE);

    for (int i = 0; i < SIZE; i++) { // 1. 1~1000만까지 순서대로 숫자가 저장된 배열
        ordered_arr[i] = i + 1;
    }
    for (int i = 0; i < SIZE; i++) { // 2. 1000만~1까지 순서대로 숫자가 저장된 배열
        reverse_arr[i] = SIZE - i;
    }
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) { // 3. 균등하게 섞여있는 배열(크기는 1000만)
        random_arr[i] = rand() % SIZE + 1;
    }

    int *arr_for_insertion_sort = (int*)malloc(sizeof(int) * SIZE);
    int *arr_for_merge_sort = (int*)malloc(sizeof(int) * SIZE);
    int *arr_for_quick_sort = (int*)malloc(sizeof(int) * SIZE);

    int *temp = (int*)malloc(sizeof(int) * SIZE); // 머지 정렬에서 사용할 임시 배열

    printf("1. 1~1000만까지 순서대로 숫자가 저장된 배열(ordered_arr):\n"); 
            // 삽입 정렬(Insertion_Sort) 실행
    copy_arr(arr_for_insertion_sort, ordered_arr, SIZE);
    clock_t start = clock();
    insertion_sort(arr_for_insertion_sort, SIZE);
    clock_t end = clock();
    print_execution_time(start, end, "삽입 정렬(Insertion_Sort)");
            // 머지 정렬(Merge_Sort) 실행
    copy_arr(arr_for_merge_sort, ordered_arr, SIZE);
    start = clock();
    merge_sort(arr_for_merge_sort, temp, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "머지 정렬(Merge_Sort)");
            // 퀵 정렬(Quick_Sort) 실행
    copy_arr(arr_for_quick_sort, ordered_arr, SIZE);
    start = clock();
    quick_sort(arr_for_quick_sort, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "퀵 정렬(Quick_Sort)");

    printf("\n");

    printf("2. 1000만~1까지 순서대로 숫자가 저장된 배열(reverse_arr):\n");
            // 삽입 정렬(Insertion_Sort) 실행
    copy_arr(arr_for_insertion_sort, reverse_arr, SIZE);
    start = clock();
    insertion_sort(arr_for_insertion_sort, SIZE);
    end = clock();
    print_execution_time(start, end, "삽입 정렬(Insertion_Sort)");
            // 머지 정렬(Merge_Sort) 실행
    copy_arr(arr_for_merge_sort, reverse_arr, SIZE);
    start = clock();
    merge_sort(arr_for_merge_sort, temp, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "머지 정렬(Merge_Sort)");
            // 퀵 정렬(Quick_Sort) 실행
    copy_arr(arr_for_quick_sort, reverse_arr, SIZE);
    start = clock();
    quick_sort(arr_for_quick_sort, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "퀵 정렬(Quick_Sort)");

    printf("\n");

    printf("3. 균등하게 섞여있는 배열(크기는 1000만)(random_arr):\n");
            // 삽입 정렬(Insertion_Sort) 실행
    copy_arr(arr_for_insertion_sort, random_arr, SIZE);
    start = clock();
    insertion_sort(arr_for_insertion_sort, SIZE);
    end = clock();
    print_execution_time(start, end, "삽입 정렬(Insertion_Sort)");
            // 머지 정렬(Merge_Sort) 실행
    copy_arr(arr_for_merge_sort, random_arr,  SIZE);
    start = clock();
    merge_sort(arr_for_merge_sort, temp, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "머지 정렬(Merge_Sort)");
            // 퀵 정렬(Quick_Sort) 실행
    copy_arr(arr_for_quick_sort, random_arr,  SIZE);
    start = clock();
    quick_sort(arr_for_quick_sort, 0, SIZE - 1);
    end = clock();
    print_execution_time(start, end, "퀵 정렬(Quick_Sort)");

    free(ordered_arr);
    free(reverse_arr);
    free(random_arr);
    free(arr_for_insertion_sort);
    free(arr_for_merge_sort);
    free(arr_for_quick_sort);
    free(temp);

    return 0;
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // key가 앞의 요소보다 작으면 위치 변경
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // key 보다 큰 요소 오른쪽 이동
            j--;
        }
        arr[j + 1] = key; // key를 올바른 위치에 삽입
    }
}

void merge_sort(int arr[], int temp[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    merge_sort(arr, temp, left, mid); // mid 기준 왼쪽 정렬
    merge_sort(arr, temp, mid + 1, right); // mid 기준 오른쪽 정렬
    
    // 두 부분 병합
    int i = left, j = mid + 1;
    int k = left;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++]; // 왼쪽 요소가 작으면 왼쪽 요소를 복사
        }
        else {
            temp[k++] = arr[j++]; // 오른쪽 요소가 작으면 오른쪽 요소를 복사
        }
    }

    // 남아있는 요소 복사
    while (i <= mid) {
        temp[k++] = arr[i++]; // 왼쪽 부분의 나머지 요소 복사
    }
    while (j <= right) {
        temp[k++] = arr[j++]; // 오른 부분의 나머지 요소 복사
    }

    // 정렬된 배열 원복 배열에 복사
    for (int i = left; i <= right; i++) {
        arr[i] = temp[i]; // 정렬된 결과를 원본 배열에 복사
    }
}

void quick_sort(int arr[], int left, int right) {
    if (left < right) {
        int divide = partition(arr, left, right); // 분할
        quick_sort(arr, left, divide - 1); // 좌측 배열 정렬
        quick_sort(arr, divide + 1, right); // 우측 배열 정렬
    }
}

int partition(int arr[], int left, int right) {
    int pivot_index = left + (right - left) / 2;
    int pivot = arr[pivot_index];
    swap(&arr[pivot_index], &arr[right]);

    int i = left - 1;
    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]); // pivot보다 작은 요소와 교환
        }
    }
    swap(&arr[i + 1], &arr[right]); // pivot을 올바른 위치로 이동
    return (i + 1); // pivot의 최종 위치 반환
}

void copy_arr(int* a, int* b, int size) {
    for (int i = 0; i < size; i++) {
        a[i] = b[i];
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_execution_time(clock_t start, clock_t end, const char* sort_name) {
    double time_required = (double)(end - start) / CLOCKS_PER_SEC; // 실행 시간 계산
    printf("%s: %f seconds\n", sort_name, time_required);
}
