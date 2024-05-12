/*
    Author: Nguyễn Thành Công
    date : 10/5/2024
    Đề bài. Tính toán giá trị biểu thức
    Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 . Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
        Input : Số nguyên dương x không quá 10^5.
        Output : Kết quả của biểu thức A(x)
    Ví dụ
        Input            Output
        2                23
*/

#include<stdio.h>

int x; 
int init(int *a);
void output(int *a);

int main()
{
    init(&x);
    output(&x);
    return 0;
}

int init(int *a)
{
    printf("Nhap gia tri x : ");
    scanf("%d",a);
    return 0;
}

void output(int *a)
{
    int b = ((*a)*(*a)*(*a))+(3*(*a)*(*a))+((*a))+1;
    printf("Ket qua bieu thuc la : %d\n", b);
}