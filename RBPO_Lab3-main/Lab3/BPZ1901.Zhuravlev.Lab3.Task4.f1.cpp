#include <iostream>
module BPZ1901.Zhuravlev.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x, double y) {
				return (pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1);
			}
		}
	}
}