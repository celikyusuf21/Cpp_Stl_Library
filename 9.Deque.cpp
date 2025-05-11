/*

     deque = her iki uçtan ekleme ve silmeye izin veren çift uçlu kuyruktur. Rastgele erişim

    #include <deque>

    deque<string>object
    deque<string>container(10);
    deque<string>object(&container[5],&container[9]);
    deque<strinng>object(container)

*/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

template<typename T>
void print(T& t){
    typename T::iterator iter=t.begin();
    while(iter != t.end())
        cout << *iter++ << " ";
    cout << endl;
}       

int main(){

    deque<int> d;
    cout << d.empty() << endl;
    d.push_back(2);
    print(d);
    d.push_back(3);
    print(d);
    d.push_front(4);
    print(d);
    cout << d.empty() << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();
    cout << endl;
    print(d);
    d.pop_front();
    print(d);
    d.push_back(1);
    print(d);
    cout << d.empty() << endl;
    d.clear();
    cout << d.empty() << endl;


    d.insert(d.begin(),5);
    print(d);
    d.insert(d.end(),9);
    print(d);
    
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    cout << "Vector: ";
    print(v);
    d.insert(d.begin()+1,&v[1],&v[3]);
    print(d);

    //d.erase(d.begin()+2);
    // d.erase(d.begin()+1,d.end()-1);

    cout << d.size() << endl;
    d.resize(10,9);
    print(d);
    cout << d.size() << endl;

    deque<int> d2(d);
    print(d2);
    deque<int> d3(5,7);
    print(d3);

    deque<int> d4(&d[2],&d[7]);
    print(d4);

}

