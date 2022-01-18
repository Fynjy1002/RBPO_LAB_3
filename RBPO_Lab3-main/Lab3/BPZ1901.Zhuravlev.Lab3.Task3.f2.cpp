#include <iostream>
module BPZ1901.Zhuravlev.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x < 3.2) {
					return pow(x, 4);
				}
				else {
					return (54 * pow(x, 4) / (-5 * pow(x, 2) + 7));
				}
			}
		}
	}
}