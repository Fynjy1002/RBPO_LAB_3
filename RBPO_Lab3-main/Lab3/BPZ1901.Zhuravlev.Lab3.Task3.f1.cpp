#include <iostream>
module BPZ1901.Zhuravlev.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f1(double x, double y) {
				return (pow(cos(x), 4) + pow(sin(y), 2) + 1 / 4 * pow(sin(2 * x), 2) - 1);
			}
		}
	}
}