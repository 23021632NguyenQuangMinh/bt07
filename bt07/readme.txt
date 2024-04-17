Cho đoạn lệnh sau.
1.char c = ‘A', d = ‘B';
char* p1 = &c;
char* p2 = &d;
char* p3;
Giả sử địa chỉ của c là 0x1234, địa chỉ của d là 0x5678. Hỏi output của đoạn lệnh sau là gì?
p3 = &d;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl; 
p3 = p1;
cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
*p1 = *p2;
cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;

output:p=
*p3 =B. p3=0x5678 //con tro p3 tham chieu den char d
*p3 = A, p3=0x1234 //gan con tro p1 vao p3
*p1 = B,p1=0x5678 //gan gia tri con tro p2 tro den vao p1

2.Cho các lệnh sau.
int *p;
int i;
int k;
i = 4
k = i;
p = &i;

(Những) lệnh nào trong số các lệnh dưới đây sẽ gán cho i giá trị 5?
k = 5;
*k = 5;
p = 5;
*p = 5; <-- cai nay

3.Giải thích lỗi sau:
char c = ‘C';
double *p = &c;
// con tro kieu double duoc truyen tham chieu den bien kieu char
