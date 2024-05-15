/*
Author: Nguyễn Thành Công
date : 15/5/2024
Đề bài.Tính tổng : Sn = 1 + 2 + 3 + 4 + ... + n
Input : Số nguyên không âm n. ( 0 ≤ n ≤ 10^8).
Output : Kết quả của bài toán
Ví dụ
Input			Output
1000000000   	5000000050000000
*/

#include<stdio.h>

long long  x;
long long init( long long *a);
long long calculate(long long a);
void output( long long *a);

int main()
{
    init(&x);
    output(&x);
    return 0;
}

long long init(long long *a)
{
    printf("Nhap so : ");
    scanf("%lld", a); 
    return 0;
}

void output( long long *a)
{
    long long b = calculate(*a);
    printf("Ket qua la: %lld", b);
}

long long calculate( long long a)
{
    // if(a == 1)
    // {
    //     return 1;
    // }
    // return calculate(a-1)+a;
    return (long long)a * (a + 1) / 2;
}