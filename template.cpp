#include <iostream>

using namespace std;

template <typename T>
void topla(T a , T b){
    cout << " y: " <<  a+b << endl;
}

// template <typename T>
void topla(int a , int b){
    cout << "x: " <<  a+b << endl;

}



int main(){

    topla(3,5);

   
}