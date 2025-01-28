#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a, int &b, int &c, int &d){
    int satangs[4] = {a, b, c, d};
    bool used[4] = {false, false, false, false};
    
    int salaped[4];
    for(int i =0; i<4; i++){
        int index;
        do{
            index = rand()%4;
        }while (used[index]);
        salaped[i] = satangs[index];
        used[index] = true;
    }
    a = salaped[0];
    b = salaped[1];
    c = salaped[2];
    d = salaped[3];
    
}