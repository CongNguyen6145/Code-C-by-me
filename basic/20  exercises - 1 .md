## 20 basic exercises_1
## Author : Nguyen Thanh Cong 2024-05-09
### Bài 1. Phần nguyên, phần dư  
Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.  
Input: 2 số nguyên a, b với b khác 0 ( -10^18 ≤ a , b ≤ 10^18)  
Output: Đáp án của bài toán được in trên 1 dòng  
Ví dụ:  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  100  5              | 20  0 |
|  14  6              | 2  2 ||
### Bài 2. Tính toán giá trị biểu thức: Cho biểu thức A(x) = x^3 + 3x^2 + x + 1  
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên  
Input: Số nguyên dương x không quá 105.   
Output: Kết quả của biểu thức A(x)   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  2              | 23 ||
### Bài 3. Tính toán giá trị biểu thức   
Yêu cầu: Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c).  
Dữ liệu: Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 10^9), a và b cách nhau một khoảng trắng.  
Kết quả: Một dòng ghi giá trị S = a*(b+c) + b*(a+c).   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1 2 3              | 13 ||
### Bài 4. Tính tổng, hiệu, tích, thương  
Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).  
Input : 2 số nguyên a, b với b khác 0( -10^9 ≤a, b ≤10^9)  
Output : Tổng, hiệu, tích, thương của 2 số  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  10 2              | 12 8 20 5.00 |
|  1000000 1000000              | 2000000 0 1000000000000 1.00 ||  
### Bài 5. Tính chu vi, diện tích hình tròn   
Input : Bán kính r của hình tròn là một số nguyên.(1≤r≤10^6)   
Output : Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  10              | 62.80 314.00 || 
### Bài 6. Tính khoảng cách  
Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy  
Input : Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -10^6 ≤xi, yi ≤10^6)     
Output : Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1 4 4 8              | 5.00 ||   
### Bài 7. Chuyển đơn vị đo C và F  
Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32  
Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển
sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  24              | 75.20 ||    
### Bài 8. Tính tổng : Sn = 1 + 2 + 3 + 4 + ... + n  
Input : Số nguyên không âm n. ( 0 ≤ n ≤ 10^8).  
Output : Kết quả của bài toán  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1000000000              | 5000000050000000 ||   
### Bài 9. Tính tổng : Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + ... + n^2  
Input : Số nguyên không âm n. ( 0 ≤ n ≤ 10^5).  
Output : Kết quả của bài toán  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  100000              | 333338333350000 || 
### Bài 10. Tính tổng : Sn = 1/(1∗2) + 1/(2∗3) + 1/(3∗4) + ... +	1/(𝑛∗(𝑛+1))  
Input : Số nguyên dương n. ( 1 ≤ n ≤ 10^9).   
Output : Kết quả của bài toán lấy độ chính xác 2 chữ số  
Ví dụ
| Input                        | Output         |
|---------------------------------------------|---------------|
|  99              | 0.99 || 
### Bài 11. Tính tổng :  Sn = 2 + 4 + 6 + 8 + ... + 2*n  
Input : Số nguyên dương n. ( 1 ≤ n ≤ 10^9).  
Output : Kết quả của bài toán  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1000000              | 1000001000000 |
|  3              | 12 ||  
### Bài 12. Tính tổng : Sn = -1 + 2 - 3 + 4 - 5 + 6 + …. + ((-1)^n)*n   
Input : Số nguyên dương n. ( 1 ≤ n ≤ 10^16).  
Output : Kết quả của bài toán  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  10000000000000000              | 5000000000000000 || 
### Bài 13. Số chia hết lớn nhất  
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a. Chú ý không dùng vòng lặp và các hàm có sẵn.   
Input : 2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108)   
Output : Kết quả của bài toán  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  19 5              | 15 |
|  20 5              | 20 ||  
### Bài 14. Số chia hết nhỏ nhất  
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a. Chú ý không dùng vòng lặp và các hàm có sẵn.   
Input : 2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤10^8)  
Output : Kết quả của bài toán 
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  19 5              | 20 |
|  20 5              | 20 |
|  21 5              | 25 ||  
### Bài 15. Kiểm tra số chia hết cho 3 và 5    
Input : Số nguyên n. (-10^18 ≤ n ≤ 10^18) 
Output : In ra 1 nếu n chia hết cho cả 3 và 5, ngược lại in ra 0   
Ví dụ
| Input                        | Output         |
|---------------------------------------------|---------------|
|  30              | 1 |
|  25              | 0 ||  
### Bài 16. Kiểm tra năm nhuận   
Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100).   
Input : Năm là một số nguyên. (-10^6 ≤ n ≤ 10^6) 
Output : In ra INVALID nếu n là một số nguyên âm hoặc số 0. Nếu n là năm nhuận, in ra YES, ngược lại in ra NO  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  2021              | NO |
|  2020              | YES |
|  -1982              | INVALID ||  
### Bài 17. In ra số ngày của tháng   
Input : 2 số nguyên t, n lần lượt là tháng và năm. (-10^6 ≤ t, n ≤ 10^6) 
Output : Nếu tháng và năm nhập vào không hợp lệ ( tháng, năm không phải là số dương, tháng không năm trong các số từ 1 tới 12) in ra INVALID, ngược lại in ra số ngày trong năm. Chú ý tháng 2 của năm nhuận có 29 ngày  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  2 2021              | 28 |
|  1 2021              | 31 |
|  14 2020             | INVALID |
|  -1 2019             | INVALID |
|  2 2020             | 29 || 
### Bài 18. Kiểm tra chữ in thường   
Input : Kí tự cần kiểm tra   
Output : In ra YES nếu kí tự nhập vào là chữ cái in thường, NO trong trường hợp ngược lại  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | NO |
|  a              | YES |
|  %             | NO || 
### Bài 19. Kiểm tra in hoa  
Input : Kí tự cần kiểm tra  
Output : In ra YES nếu kí tự nhập vào là chữ cái in hoa, NO trong trường hợp ngược lại  
Ví dụ   
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | YES |
|  a              | NO |
|  %             | NO || 
### Bài 20. Kiểm tra chữ cái  
Input : Kí tự cần kiểm tra   
Output : In ra YES nếu kí tự nhập vào là chữ cái, NO trong trường hợp ngược lại  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | YES |
|  a              | YES |
|  %             | NO |
|  1             | NO ||  






