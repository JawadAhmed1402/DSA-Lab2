#include<iostream>
using namespace std;

void analyze_pointer(int* ptr){
    cout<< "The memory Allocation is: "<<ptr<<endl;
    cout<< "The value of interger is: "<<*ptr<<endl;
}

int main(){

    int iValue = 5;
    analyze_pointer(&iValue);
    int* heapVariable = new int;
    *heapVariable = 10;
    analyze_pointer(heapVariable);
}