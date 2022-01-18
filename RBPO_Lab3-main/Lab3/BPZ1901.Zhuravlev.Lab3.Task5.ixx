export module BPZ1901.Zhuravlev.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 {
		namespace Task5 {
			double f1(double x, double y);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x, double y) {
	return (pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1);
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x < 3.2) {
		return pow(x, 4);
	}
	else {
		return (54 * pow(x, 4) / (-5 * pow(x, 2) + 7));
	}
}
double RBPO::Lab3::Task5::a(int i) {
	 return (pow(-1.0, i) * (1-(((double)pow(2,i))/((double)pow(2,i)+1))));
}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
		sum += a(i);
	}
	return sum;
}