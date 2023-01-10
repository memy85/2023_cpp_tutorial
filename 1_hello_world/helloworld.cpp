

#include <iostream>

// using namespace std;

void Log(const char* message); // 꼭 인자 message가 필요하지는 않음 


int main() {
    Log("Hello World!");
    // cout << "Hello World" << endl; // cout이라는 함수에 Hello World를 입력하고 줄 하나를 삽입
    // return 0; // main에서는 꼭 0을 반환하지 않아도 됨
    std::cin.get(); // cin.get()은 콘솔창에서 입력된 것을 저장하는 함수이다. 
}

/*
디버깅을 하고 싶은 경우 
g++ -o filename file1.c 2>> error.log
*/



