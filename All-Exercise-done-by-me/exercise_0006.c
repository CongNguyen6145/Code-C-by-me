/*
Author: Nguyễn Thành Công
date : 15/5/2024
Đề bài. Tính khoảng cách
Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
Input : Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -10^6 ≤xi, yi ≤10^6)
Output : Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số
Ví dụ
Input	    Output
1 4 4 8		5.00
*/

#include<stdio.h>
#include<math.h>

int x1,x2,y3,y2;
int init( int *x1, int *y3, int *x2, int *y2);
void output( int *x1, int *y3, int *x2, int *y2);

int main()
{
    init(&x1, &y3, &x2, &y2);
    output(&x1, &y3, &x2, &y2);
    return 0;
}

int init( int *x1, int *y3, int *x2, int *y2)
{
    printf("nhap gia tri x1 = ");
    scanf("%d", x1);
    printf("nhap gia tri y1 = ");
    scanf("%d", y3);
    printf("nhap gia tri x2 = ");
    scanf("%d", x2);
    printf("nhap gia tri y2 = ");
    scanf("%d", y2);
    return 0;
}
void output( int *x1, int *y3, int *x2, int *y2)
{
    float a = (*x1)-(*x2);
    float b = (*y3)-(*y2);
    float c = sqrt((pow(a,2))+(pow(b,2)));
    printf("Khoang cach giua 2 diem la %0.2f ", c);
}