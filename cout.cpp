#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	printf("%-5c%-5d%-5.2f\n", 'c', 123, 12.34567);
	cout << setiosflags(ios::left) << setw(5) << 'c' << setw(5) << 123 << setw(5) << 12.34567 << endl;
	//setiosflags(ios::left)   ->   左对齐
	//setw(5)  ->  最少占五位
	cout << setiosflags(ios::fixed) << setprecision(2) << 12.34567 << endl;	// setiosflags(ios::fixed)  ->  按照c格式输出  setprecision()设置小数位数

	return 0;
}
