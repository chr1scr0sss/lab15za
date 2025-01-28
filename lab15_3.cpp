#include <iostream>
using namespace std;

template <typename T>
T*max_element(T x[], int size){
    if(size <= 0){
        return nullptr;
    }
    T*maxele = &x[0];
    for(int i=1; i<size; i++){
        if(x[i] > *maxele){
            maxele = &x[i];
        }
    }
    return maxele;
}

int main(){
	int a[] = {1,2,4,6,9}; //ห้ามแก้ไข
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; //ห้ามแก้ไข
	
	
	int*pa = max_element(a, sizeof(a)/sizeof(a[0])); 
	cout << "Address of the highest value in array A is " << pa << "\n";
	cout << "The highest value in array A is "<< *pa << "\n";
	
	double*pb = max_element(b, sizeof(b)/sizeof(b[0])); 
	cout << "Address of the highest value in array B is " << pb << "\n";
	cout << "The highest value in array B is "<< *pb << "\n";

	return 0;
}
