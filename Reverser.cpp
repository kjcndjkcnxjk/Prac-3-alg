#include"Reverser.h"
using namespace std;

int Reverser::reverseDigit(int value){
    if(value<0)return -1;
    int n=0;
    int len=value;
    while(len){
        n++;
        len/=10;
    }
    if(n==0){
        return value;
    }
    else {
        return reverseDigit(value/10)+(value%10)*pow(10,n-1);
    }
}

string Reverser::reverseString(string characters){
    int len = characters.length();
    if(len<1)return "ERROR";
    if(len==1)return characters;
    else return reverseString(characters.substr(1))+characters.substr(0,1);
}
