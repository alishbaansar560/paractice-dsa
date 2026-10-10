#include<iostream>
using namespace std;


class Alishba {
private:
	string movie[20];
	int size;
	//passing pointer to a method
public:
	Alishba() {
		size = 0;
	}

	int getsize() {
		return size;
	}

	void Print() {
		for (int i = 0; i < size; i++) {
			cout << movie[i] << endl;


		}
	}

	bool InsertAtEnd(string t) {
		if (size == 20) {
			return false;       // no free slot
		}

		movie[size] = t;         // fill the next free slot
		size++;                 // list now contains one more item
		return true;
	}

	bool RemoveAtEnd() {
		if (size == 0) {
			return false;       // nothing to remove
		}

		size--;                 // last item is no longer part of the list
		return true;
	}

	//void set(int* r) {
	//	*r = 2099;
	//}
};
int main() {

	Alishba obj;

	//// pointerrs
	//int a = 5;
	//int* p = &a;
	//cout << *p << endl;
	//*p = 50;
	//cout << *p << endl;
	//cout << &a;

	////reference
	//int b = 5;
	//int& pppp = b;
	//cout << &pppp << endl;
	//pppp = 50;
	//cout << &pppp << endl;
	//cout << &b << endl;;

	////pointer arrays

	//int c[3] = { 10,20,30 };
	//int* l = c;        // points to c[0] always points to 0 index
	//cout << *l << endl;//10
	//l++;
	//cout << *l << endl;//20
	//l++;
	//cout << *l << endl;//30

	////call the first method

	//
	//int z = 00;
	//
	//obj.set(&z);

	//cout << z << endl;


	////call the next methods method

	cout << "size" << endl;
	obj.getsize();

	obj.Print();

	

	obj.InsertAtEnd("hello my name");
	obj.InsertAtEnd("hello my ");


	obj.RemoveAtEnd();



}