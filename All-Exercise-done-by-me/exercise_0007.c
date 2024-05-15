/*
Author: Nguyễn Thành Công
date : 15/5/2024
Đề bài. Chuyển đơn vị đo C và F
Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32
Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
Ví dụ
Input	Output
24	    75.20
*/

#include<stdio.h>

int x;
int init( int *x);
void output( int *x);

int main()
{
    init(&x);
    output(&x);
    return 0;
}

int init( int *x)
{
    printf("nhap gia tri nhiet do = ");
    scanf("%d", x);
    return 0;
}
void output( int *x)
{
    float out_F = (((*x) * 9 )/ 5) + 32;
    printf("Nhiet do do theo don vi F la %0.2f ", out_F);
}