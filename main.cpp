#include<stdio.h>
template <typename Type, typename Type2>


class Box {
public:

	Type a;
	Type2 b;

	Box(Type a, Type2 b) : a(a), b(b) {};


	Type Min(Type a, Type2 b) {
		if (a < b) {
			return static_cast<Type>(a);
		}
		return static_cast<Type2>(b);
	}

};




int main() {
	Box<int,int> b1(11, 51);
	Box<float,float> b2(11, 51);
	Box<double,double> b3(11, 51);
	Box<int, float> b4(11, 51);
	Box<float, double> b5(11, 51);
	Box<double, int> b6(11, 51);




	printf("int,int:%d\n", b1.Min(1, 15));
	printf("float,float:%f\n", b2.Min(2, 8));
	printf("double,double:%lf\n", b3.Min(9, 10));

	printf("int, float:%d\n", b4.Min(1, 15));
	printf("float, double:%f\n", b5.Min(2, 8));
	printf("double, int:%lf\n", b6.Min(9, 10));



}
