/*

Stack(Yığın) = Son giren ilk çıkar (LIFO) takip eder. Yineleyici yok(LIFO)

Kurucular ->
          
           Boş-> stack<int> object;
           Kopya Kurucusu -> stack<int> object(container);


*/

#include <iostream>
#include <stack>
#include <queue>
using namespace std;


// 20 3 5 10

template <typename T>
void print(stack<T> s){
    while(!s.empty()){
        cout << s.top() << " " ;
        s.pop();
    }
}

int main(){

    /*

    stack<int> s;
    cout << s.empty() << endl;
    s.push(10);
    s.push(5);
    s.push(3);
    s.push(20);
    cout << s.empty() << endl; 
    cout << s.top() << endl; // ilk elemanı goster
    // s.pop(); // eleman cıkar
    cout << s.top() << endl;

    cout << "size: " <<  s.size() << endl;
    print(s);
    cout << endl;
    cout << s.size() << endl;

    stack<int> s1(s);
    print(s1);
    cout << endl;
    s1.pop();
    print(s1);
    cout << endl;
    print(s);     // s1 stack i etkilenmez.
    cout << endl;

    */


    stack<char> s;
    queue<char> q;
    string str;
    cout << "Enter a String: ";
    cin >> str;
    for(int i=0;i<str.length();i++){

        s.push(str[i]);  // bastan eklme islemi yapar
        q.push(str[i]);  // sondan eklme islemi yapar.
    }

    bool a=true;
    while(!s.empty() and !q.empty()){

        if(s.top() != q.front()){

            a=false;
            break;
        }
        s.pop(); // while döngüsünü sonladırmak için cıkarım yaparız.0
        q.pop();
    }
    if(a){
        cout << str << " string is polindrom" << endl;
    }
    else{
        cout << str << " string is not polindrom" << endl;
    }

    return 0;
    
}