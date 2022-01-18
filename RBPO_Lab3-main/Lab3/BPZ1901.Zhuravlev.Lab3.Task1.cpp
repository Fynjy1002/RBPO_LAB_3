#include <iostream>
#include <cmath>
module BPZ1901.Zhuravlev.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x, double y) {
				return (pow(cos(x),4)+pow(sin(y),2)+1/4*pow(sin(2*x),2)-1);
			}
			double f2(double x) {
				return (x < 3.2) ? (pow(x,4)) : ((54* pow(x, 4)/(-5* pow(x, 2)+7)));
			}
			double a(int i) {
				return  (pow(-1.0, i) * (1-((pow(2,i))/(pow(2,i)+1))));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double pred = a(0);
				double sled = a(1);
				double sum = pred+sled;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
