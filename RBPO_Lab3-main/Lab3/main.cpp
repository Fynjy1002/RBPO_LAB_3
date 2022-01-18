#include <iostream>
import BPZ1901.Zhuravlev.Lab3.Task1;
import BPZ1901.Zhuravlev.Lab3.Task2;
import BPZ1901.Zhuravlev.Lab3.Task3;
import BPZ1901.Zhuravlev.Lab3.Task4;
import BPZ1901.Zhuravlev.Lab3.Task5;

using namespace std;
void task1(double x, double y,  int n, double eps);
void task2(double x, double y, int n, double eps);
void task3(double x, double y, int n, double eps);
void task4(double x, double y, int n, double eps);
void task5(double x, double y, int n, double eps);
int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double y;
	double eps;
	int n;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "eps = ";
	cin >> eps;
	cout << "n = ";
	cin >> n;
	while (true) {
		int choose = 1;
		printf("Cпособ №1 - Task1\nCпособ №2 - Task2\nCпособ №3 - Task3");
		printf("\nCпособ №4 - Task4\nCпособ №5 - Task5\nВыход - 6\n");
		cin >> choose;
		printf("\n");
		switch (choose) {
		case 1:
			task1(x, y, n, eps);
			printf("\n");
			break;
		case 2:
			task2(x, y, n, eps);
			printf("\n");
			break;
		case 3:
			task3(x, y, n, eps);
			printf("\n");
			break;
		case 4:
			task4(x, y, n, eps);
			printf("\n");
			break;
		case 5:
			task5(x, y, n, eps);
			printf("\n");
			break;
		case 6:
			return 0;
		default:
			printf("Ошибка!\n");
		}
	}
	return 0;
}

void task1(double x, double y, int n, double eps) {
	cout << "f1(" << x << "," << y << ") : " << RBPO::Lab3::Task1::f1(x,y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task1::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task1::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task1::f4(eps) << endl;
}

void task2(double x, double y, int n, double eps) {
	cout << "f1(" << x << "," << y << ") : " << RBPO::Lab3::Task2::f1(x,y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task2::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task2::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task2::f4(eps) << endl;
}

void task3(double x, double y, int n, double eps) {
	cout << "f1(" << x << "," << y << ") : " << RBPO::Lab3::Task3::f1(x,y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task3::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task3::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task3::f4(eps) << endl;
}

void task4(double x, double y, int n, double eps) {
	cout << "f1(" << x << "," << y << ") : " << RBPO::Lab3::Task4::f1(x,y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task4::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task4::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task4::f4(eps) << endl;
}
void task5(double x, double y, int n, double eps) {
	cout << "f1(" << x << "," << y << ") : " << RBPO::Lab3::Task5::f1(x,y) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task5::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task5::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task5::f4(eps) << endl;
}
