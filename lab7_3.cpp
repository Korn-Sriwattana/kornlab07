#include<iostream>
using namespace std;

char before(char x){
	if(int(x)>'A' and int(x)<'Z'+1){
        return x-1;
    }
    else if (int(x)=='A'){
    return ('Z');
    }
    else{
        return ('0');
    }
}