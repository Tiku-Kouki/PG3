#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;



int main() {
	
	

	list<const char*> lst { 
	"Tokyo","Kanda","Akihabara","Okachimachi",
	"Uguisudani","Nippori","Tabata","Komagome",
	"Sugame","Otsuka","Ikebukuro","Mejiro",
	"Takabanobaba","Shin-Okubo","Shinjuku",
	"Yoyogi","Harajuku","Shibuya",
	"Ebisu","Meguro","Gotanda",
	"Osaki","Shinagawa","Tamachi",
	"Hamamatsucho","shimbashi","Yurakucho"

	};

	

	printf("���a6�N�̘H��\n");
		
	for (list<const char*>::iterator it_f = lst.begin(); it_f != lst.end(); ++it_f) {
			
			cout << *it_f << endl;
	}
	printf("\n");
	printf("���a47�N�̘H��\n");

	for (list<const char*>::iterator it_f = lst.begin(); it_f != lst.end(); ++it_f) {

		if (*it_f == "Tabata") {

			it_f = lst.insert(it_f, "Nishi-Nippori");

			++it_f;
		}
		
	}

	for (list<const char*>::iterator it_f = lst.begin(); it_f != lst.end(); ++it_f) {

		cout << *it_f << endl;
	}
	printf("\n");
	printf("�ߘa5�N�̘H��\n");
	for (list<const char*>::iterator it_f = lst.begin(); it_f != lst.end(); ++it_f) {

		if (*it_f == "Tamachi") {

			it_f = lst.insert(it_f, "Takanawa Gateway");

			++it_f;
		}

	}

	for (list<const char*>::iterator it_f = lst.begin(); it_f != lst.end(); ++it_f) {

		cout << *it_f << endl;
	}

	return 0;
}
