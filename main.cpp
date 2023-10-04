#include<stdio.h>
template <typename Type>

Type Min(Type a, Type b) {
	if (a < b) {
		return a ;
	}
	return b;
}

const char* Min(char a, char b) {

	const char* mes = "”ŽšˆÈŠO‘ã“ü‚Å‚«‚Ü‚¹‚ñ";
	
	return mes;
	
}



int main(){

	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(114, 514));
	printf("%lf\n", Min<double>(614, 514));
	printf("%s\n", Min('a', 'b'));



}
