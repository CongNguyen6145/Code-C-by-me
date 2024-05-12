/* 
Author: Nguyễn Thành Công
date : 10/5/2024
Đề bài. Phần nguyên, phần dư
Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.
    Input : 2 số nguyên a, b với b khác 0( -1018 ≤a, b ≤1018)
    Output : Đáp án của bài toán được in trên 1 dòng
Ví dụ
    Input           Output
    100 5            20 0
    14 6             2 2
*/

#include<stdio.h>

int a;
int b;
int init (int *a, int *b); 
void output (int *a, int *b);

int main()
{
init(&a, &b);
output(&a, &b);
return 0;
}

int init (int *a, int *b){
printf("Nhap so a : ");
scanf("%d", a);
printf("Nhap so b : ");
scanf("%d", b);
return 0;
}

void output (int *a, int *b){
printf("Phan nguyen: %d\n", (*a)/(*b));
printf("Phan du: %d\n", (*a)%(*b));
}