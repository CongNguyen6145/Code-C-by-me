/*
Author: Nguyễn Thành Công
date : 16/5/2024
Đề bài. Tính tổng : Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + ... + n^2
Input : Số nguyên không âm n. ( 0 ≤ n ≤ 10^5).
Output : Kết quả của bài toán
Ví dụ
Input		Output
100000		333338333350000
*/

#include<stdio.h>

long long a;
long long init( long long *a );
long long calculate(long long a);
void output( long long *a );

int main()
{
    init(&a);
    calculate(&a);
    output(&a);
    return 0;
}

long long init( long long *a )
{
    printf("Nhap so : ");
    scanf("%lld", a);
    return 0;
}

long long calculate(long long a)
{
    long long sum = 0;
    for (long long i = 1; i <= a; ++i) 
    {
        sum += i * i;
    }
    return sum;   
}

void output( long long *a )
{
    printf("Tong la: %lld", calculate(*a));
}