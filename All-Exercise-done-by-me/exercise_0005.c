/*
Author: Nguyễn Thành Công
date : 11/5/2024
Đề bài.  Tính tổng, hiệu, tích, thương
    Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).
    Input : 2 số nguyên a, b với b khác 0( -10^9 ≤a, b ≤10^9)
    Output : Tổng, hiệu, tích, thương của 2 số
Ví dụ :
    Input                        Output
    10 2                         12 8 20 5.00
    1000000 1000000              2000000 0 1000000000000 1.00
*/

#include<stdio.h>

int a = 0, b = 0;
int init( long long *a, long long *b);
void output( long long *a, long long *b);

int main()
{
    init( &a, &b);
    output( &a, &b);
    return 0;
}

int init( int *a, int *b)
{
    printf("Nhap so a: ");
    scanf("%d", a);
    printf("Nhap so b: ");
    scanf("%d", b);   
    return 0;
}

void output( long long *a, long long *b) 
{
    //int c;
    printf("Tong = %d + %d = %d\n", *a,*b,((*a)+(*b)));
    printf("Tich = %d * %d = %ld\n", *a,*b,(long long)((*a)*(*b)));
    // if(*a<*b)// vui vui đảo thôi ko theo đề đâu
    // {
    //     c = *a;
    //     *a = *b;
    //     *b = c;
    // }
    printf("Hieu = %d - %d = %d\n", *a,*b,((*a)-(*b)));
    printf("Thuong = %d / %d = %d\n", *a,*b,((*a)/(*b)));
}