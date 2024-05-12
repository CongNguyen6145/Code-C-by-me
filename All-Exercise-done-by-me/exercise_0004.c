/*
Author: Nguyễn Thành Công
date : 11/5/2024
Đề bài. Tính toán giá trị biểu thức
    Yêu cầu : Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c).
    Dữ liệu : Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 10^9), a và b cách nhau một khoảng trắng.
    Kết quả : Một dòng ghi giá trị S = a*(b+c) + b*(a+c).
Ví dụ
    Input             Output
    1 2 3             13
*/

#include<stdio.h>

int a, b, c;
int init(int *a, int *b, int *c);
void output(int *a, int *b, int *c);

int main()
{
    init( &a, &b, &c);
    output( &a, &b, &c);
    return 0;
}

int init(int *a, int *b, int *c)
{
    do{
    printf("\nNhap so a b c: ");
    scanf("%d%d%d", a,b,c);
    // printf("\nNhap so a: ");
    // scanf("%d",a);
    // printf("Nhap so b: ");
    // scanf("%d",b);
    // printf("Nhap so c: ");
    // scanf("%d",c);
    printf("\n");
    }while(*a<=0 && *b<=0 && *c<=0);
    return 0;
}

void output(int *a, int *b, int *c)
{
    int d = ((*a)*((*b)+(*c)))+((*b)*((*a)+(*c)));
    printf("Gia tri S = %d\n", d);
    //printf("Gia tri S = a*(b+c) + b*(a+c) \n          = %d*(%d+%d) + %d*(%d+%d) \n          = %d\n",*a,*b,*c,*b,*a,*c,d); vui nhỉ haha ngày cuối tuần 11/5/2024
}