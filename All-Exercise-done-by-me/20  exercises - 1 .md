## 20 basic exercises_1
## Author : Nguyen Thanh Cong 
## Date : 2024-05-09
## Description : 20 basic exercises_1.md are used to practice coding
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
### Bài 21. Kiểm tra chữ số   
Input : Kí tự cần kiểm tra   
Output : In ra YES nếu kí tự nhập vào là chữ số, NO trong trường hợp ngược lại  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | NO |
|  a              | NO |
|  5             | YES ||  
### Bài 22. Chuyển ký tự hoa thành thường  
Input : Kí tự cần chuyển   
Output : Nếu kí tự nhập vào là chữ in hoa, in ra dạng in thường tương ứng của nó. Trong trường hợp kí tự nhập vào không phải là chữ in hoa thì không thay đổi kí tự ban đầu.    
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | a |
|  a              | a |
|  %             | % ||  
### Bài 23. Chuyển kí tự thường thành kí tự hoa  
Input : Kí tự cần chuyển   
Output : Nếu kí tự nhập vào là chữ in thường, in ra dạng in hoa tương ứng của nó. Trong trường hợp kí tự nhập vào không phải là chữ in thường thì không thay đổi kí tự ban đầu.  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | A |
|  a              | A |
|  %             | % ||  
### Bài 24. Chữ cái kế tiếp   
Input : Kí tự duy nhất    
Output : Nếu kí tự nhập vào là chữ cái, tiến hành in ra chữ cái kế tiếp của nó trong bảng chữ cái ở dạng in thường, ta coi chữ cái kế tiếp của z là a. Nếu kí tự nhập vào không phải là chữ cái in ra INVALID.  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  A              | b |
|  Z              | a |
|  l              | m |
|  $             | INVALID ||  
### Bài 25. Tam giác hợp lệ   
Input : a, b, c là độ dài 3 cạnh của tam giác. a, b, c là các số nguyên (-10^6 ≤ a, b, c ≤ 10^6)  
Output : In ra YES nếu tam giác nhập vào là hợp lệ, ngược lại in NO   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  3 4 5              | YES |
|  1 1 5              | NO |
|  -1 2 3              | NO |
|  0 4 5             | NO ||  
### Bài 26. Kiểm tra tam giác  
Input : a, b, c là độ dài 3 cạnh của tam giác. a, b, c là các số nguyên (-10^6 ≤ a, b, c ≤ 10^6) 
Output : In ra INVALID tam giác đã cho không hợp lệ In ra 1 nếu tam giác là tam giác đều  
In ra 2 nếu tam giác là tam giác cân  
In ra 3 nếu tam giác là tam giác vuông In ra 4 nếu tam giác là tam giác thường.  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  3 4 5              | 3 |
|  3 3 3              | 1 |
|  1 1 8              | INVALID |
|  4 4 6             | 2 ||  
### Bài 27. Chuyển đổi ngày sang tháng, năm, ngày   
Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang năm,tuần, ngày (Bỏ qua trường hợp năm nhuận)   
Input : Số nguyên n không âm. (0 ≤ n ≤ 10^6)  
Output : Chuyển số ngày đã cho xem số năm, số tháng, số ngày  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  373              | 1 1 1 ||  
### Bài 28. Phương trình bậc 2   
Phương trình bậc 2 là phương trình dạng ax^2 + bx + c = 0.  
Viết chương trình C cho phép nhập vào a,b,c và thực hiện giải phương trình bậc 2. Nếu vô nghiệm thì in ra dòng NO, nếu vô số nghiệm thì in ra INF   
Nếu có nghiệm thì in các nghiệm (luôn lấy 2 chữ số thập phân sau dấu chấm phẩy) cách nhau một khoảng trắng.   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  8 -4 -2              | 0.81 -0.31 ||  
### Bài 29. Số thuộc đoạn  
Yêu cầu: Cho một đoạn đại số a, b. Tính số lượng số nguyên trong đoạn [a,b] đó.   
Dữ liệu: Một dòng ghi 2 số thực a, b.  
Kết quả: Là số lượng các số nguyên trong đoạn [a,b].   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1.1 5.2             | 4 ||  
###  Bài 30. Phép chia  
Yêu cầu: Cho 3 số nguyên 64 bit a, b, c. In ra dấu / nếu a/b = c hoặc b/c = a hoặc c/a = b và in ra NOSOL nếu không thỏa mãn.  
Dữ liệu: Một dòng gồm 3 số nguyên a, b, c   
Kết quả: Ghi ra / nếu thỏa mãn chia hết hoặc in ra NOSOL nếu không thỏa mãn   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  3 1 3             | / |
|  3 4 5             | NOSOL ||  
### Bài 31. Kết quả học tập   
Yêu cầu: Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con điểm hệ số 2, 1 con điểm hệ số 3). In ra Kết quả học tập môn Tin học của em đó. Nếu điểm tổng kết >=8 đạt kết quả Giỏi, <8 và >=6,5 đạt kết quả Khá, <6,5 và
>=5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.   
Dữ liệu: Một dòng chứa 4 số điểm của học sinh.   
Kết quả: Kết quả học tập môn Tin học của em học sinh ở dạng in hoa không dấu   
Ví dụ   
| Input                        | Output         |
|---------------------------------------------|---------------|
|  9 8 7 8.5             | GIOI |
|  5 7 6.5 5            | TRUNG BINH || 
### Bài 32. Số nhỏ thứ 2
Yêu cầu: Cho 5 số nguyên a, b, c, d, e 64 bit đôi một khác nhau. In ra số nhỏ thứ nhì.   
Dữ liệu: Một dòng gồm 5 số nguyên a, b, c, d, e.   
Kết quả: In ra số nhỏ thứ nhì.     
Ví dụ   
| Input                        | Output         |
|---------------------------------------------|---------------|
|  1 2 3 4 5 6              | 2 ||  
### Bài 33. 
Cho biết diện tích của ba mặt có chung đỉnh của hình hộp chữ nhật, tính tổng độ dài 12 cạnh của hình hộp chữ nhật đó.  
Input : 3 số nguyên dương không vượt quá 10^4 là diện tích của ba mặt có chung đỉnh. Output : Tổng của tất cả các cạnh của hình hộp chữ nhật.   
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  4 6 6              | 28 ||  
### Bài 34.   
Bạn được cung cấp một bảng hình chữ nhật có kích thước M × N hình vuông đơn vị. Ngoài ra, bạn được cung cấp một số lượng không giới hạn các mảnh domino tiêu chuẩn kích thước 2 × 1. Bạn được phép xoay các mảnh domino. Bạn được yêu cầu đặt càng nhiều domino càng tốt trên bảng để đáp ứng các điều kiện sau:  
1.	Mỗi domino hoàn toàn bao gồm hai hình vuông đơn vị.  
2.	Không có hai domino trùng nhau.  
3.	Mỗi domino nằm hoàn toàn bên trong bảng. Nó được phép chạm vào các cạnh của bảng.  
Tìm số lượng domino tối đa thỏa mãn điều kiện trên.  
Input : Trong một dòng duy nhất, bạn được cung cấp hai số nguyên M và N - kích thước bảng theo hình vuông (1 ≤ M ≤ N<= 16).
Output : Xuất ra một số - số lượng domino tối đa, có thể được đặt.
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  3 3              | 4 |
|  2 4	             | 4 ||  
### Bài 35.   
Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét. Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông. Mỗi viên đá hình vuông có kích thước a × a.  
Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu? Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các viên đá. Các cạnh của viên đá phải song song với các cạnh của Quảng trường.   
Input : Đầu vào chứa ba số nguyên dương trong dòng đầu tiên: n, m và a (1 ≤ n, m, a ≤ 10^9).  
Output : Viết số lượng viên đá cần thiết để lát kín quảng trường.  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  6 6 4	             | 4 ||   
### Bài 36. Frog   
Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái,
v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b.   
Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy   
Input : 3 số trên cùng một dòng tương ứng a,b,k (1<=a,b,k<=10^9), tương ứng với khoảng cách nhảy sang phải, sang trái và số lượng bước nhảy.   
Output : Vị trí của con ếch sau k bước nhảy.   
Ví dụ   
| Input                        | Output         |
|---------------------------------------------|---------------|
|  5 2 3               | 8 ||   
### Bài 37.   
Một ngày nào đó, Drazil muốn hẹn hò với Varda. Drazil và Varda sống trên máy bay của Cartesian. Nhà của Drazil nằm ở điểm (0, 0) và nhà của Varda nằm ở điểm (a, b). Trong mỗi bước, anh ta có thể di chuyển trong một khoảng cách 1 đơn vị theo hướng ngang hoặc dọc. Nói cách khác, từ vị trí (x, y) anh ta có thể đi đến các vị trí (x + 1, y), (x - 1, y), (x, y + 1) hoặc (x, y - 1).   
Thật không may, Drazil không có ý thức về hướng di chuyển. Vì vậy, anh ta chọn ngẫu nhiên hướng đi mà anh ta sẽ đi trong mỗi bước. Anh ta có thể vô tình trở về nhà trong chuyến đi của mình. Drazil thậm chí có thể không nhận thấy rằng anh ấy đã đến (a, b) và tiếp tục đi.   
May mắn thay, Drazil đã đến vị trí (a, b) thành công. Drazil nói với Varda: "Tôi phải mất chính xác một số để đi từ nhà tôi đến nhà bạn". Nhưng Varda bối rối về lời nói của mình, cô không chắc chắn rằng có thể đi từ (0, 0) đến (a, b) trong các bước cho trước. Bạn có thể tìm ra ?   
Input : Bạn được cung cấp ba số nguyên a, b và s (- 10^9 ≤ a, b <=10^9, 1 ≤ s ≤ 2.10^9) trong một dòng.   
Output : Nếu bạn nghĩ Drazil đã phạm sai lầm và không thể thực hiện chính xác các bước và đi từ nhà của anh ấy đến nhà của Varda, hãy in "No" (không có dấu ngoặc kép).
Nếu không, hãy in "Yes".  
Ví dụ  
| Input                        | Output         |
|---------------------------------------------|---------------|
|  5 5 11               | NO |
|  -5 5 12	              | YES || 
















