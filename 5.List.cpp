
//  -> list = herhangi bir yerden ekleme veya silme yapabilir. Çift yönlü

/*

    #include<list>

    Eklenecek eleman sayisi belirli olmadığı durumlarda uygundur.

    list<string>object;
    list<string>object(5,striing("hello"));
    list<stirng>container(10); ->> 10 elemanlı boş vector
    list<string>object(&container[5],&container[9]);
    list<string> object(container);
    
*/

#include <iostream>
#include <list>

using namespace std;

template <typename T>
void print(T& t){
    typename T::iterator i=t.begin();
    while(i != t.end())
        cout << *i++ << " ";
    cout << endl;
}

int main(){


    list<int> l;   // bos list
    list<int> l2(5,6);
    list<int> l3(10);
    list<int> l4(l3.begin(),l3.end()); // listelere indis indis erişemeyiz vektörlerden farkıda budur.
    list<int> l5(l2);

    print(l);
    print(l2);
    print(l3);
    print(l4);
    print(l5);

    cout << l.empty() << endl; // true(1) dondurur.
    cout << l2.empty() << endl;

    l.begin();
    l.end();

    cout << l2.front() << endl;
    cout << l2.back() << endl;

    l2.clear();
    print(l2);
    cout << l2.empty() << endl;

    l2.insert(l2.begin(),5);
    l2.insert(l2.end(),3);
    l2.insert(l2.end(),9);
    print(l2);


    l2.push_back(10);
    print(l2);

    l2.push_front(1);
    print(l2);

    l2.pop_back();
    print(l2);

    l2.pop_front();
    print(l2);

    // l2.erase(l2.begin(),l2.end());
    // print(l2);

    cout << l2.size() << endl;

    l2.push_back(5);
    l2.push_back(7);
    l2.push_back(9);
    l2.push_back(7);
    print(l2);  

    l2.remove(5);
    print(l2);

    list <int> l6;
    l6.push_back(1);
    l6.push_back(9);
    l6.push_back(2);
    l6.push_back(6);

    print(l6);

    /*
    // l2.splice(l2.end(),l6); // l2 ve l6 yı birleştir ama l2 nin basından
    l2.sort(); // kucukten buyuge sıralar.
    l6.sort();
    print(l2);
    print(l6);


    l2.merge(l6); // sort kullanılmadan çalıştırılırsa elemanları indis indis karsılastırıp yazar.
    */

    print(l2);
    l2.sort();
    print(l2);
    l2.unique(); // indisleri yanyana bakıp benzersiz olanı yazar.
    print(l2);
    

    return 0;
}