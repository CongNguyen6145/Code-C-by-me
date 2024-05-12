/*
Đề. Phần nguyên, phần dư
       Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.

Input
  2 số nguyên a, b với b khác 0( -1018 ≤a, b ≤1018)

Output
  Đáp án của bài toán được in trên 1 dòng

Ví dụ
   Input    Output
   100 5    20 0
   14 6     2 2
*/

#include<stdio.h>
#include<stdint.h>
int main()
{
  int32_t a,b;
  do
  {
      printf("Nhap so 2 so nguyen: ");
      scanf("%d%d", &a, &b);
      if(a < -1018 || b >= 1018)
      {
          printf("Nhap lai\n");
      }
  } while (a < -1018 || b >= 1018);
  printf("\n Phan nguyen la: %d ; Phan du la: %d", a/b, a%b);
  return 0;
  }
