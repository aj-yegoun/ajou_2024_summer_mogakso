#include <stdio.h>
#include <stdbool.h>

// 윤년 여부를 확인하는 함수
bool is_leap_year(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

// 주어진 연도, 월, 일이 유효한 날짜인지 확인하는 함수
bool is_valid_date(int year, int month, int day) {
    if (year < 2000 || year > 2099) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1) return false;

    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (is_leap_year(year)) {
        days_in_month[1] = 29; // 윤년인 경우 2월은 29일까지
    }

    return day <= days_in_month[month - 1];
}

// 날짜를 비교하는 함수
int compare_dates(int y1, int m1, int d1, int y2, int m2, int d2) {
    if (y1 != y2) return y1 - y2;
    if (m1 != m2) return m1 - m2;
    return d1 - d2;
}

int main() {
    int Y, M, D;
    scanf("%d %d %d", &Y, &M, &D);
    int today_year = 2000 + Y;
    int today_month = M;
    int today_day = D;

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        bool valid1 = is_valid_date(2000 + A, B, C);
        bool valid2 = is_valid_date(2000 + C, B, A);
        bool valid3 = is_valid_date(2000 + C, A, B);

        bool safe1 = valid1 && compare_dates(2000 + A, B, C, today_year, today_month, today_day) >= 0;
        bool safe2 = valid2 && compare_dates(2000 + C, B, A, today_year, today_month, today_day) >= 0;
        bool safe3 = valid3 && compare_dates(2000 + C, A, B, today_year, today_month, today_day) >= 0;

        if (!valid1 && !valid2 && !valid3) {
            printf("invalid\n");
        }
        else if ((valid1 && !safe1) || (valid2 && !safe2) || (valid3 && !safe3)) {
            printf("unsafe\n");
        }
        else {
            printf("safe\n");
        }
    }

    return 0;
}
