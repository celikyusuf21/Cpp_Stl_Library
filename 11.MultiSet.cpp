/*

-> multiset = benzer olan kümeleri depolamak için bir ortak kapsayıcıdır. 	çift ​​yönlü

-> setlerden farkı elemanları birden çok bulunabilir.

*/

#include <iostream>
#include <set>
using namespace std;

template <typename T>
void print(T &t){
    typename T::iterator iter=t.begin();
    while(iter != t.end())
        cout << *iter++ << " ";
    cout << endl;

}

int main(){

    multiset<int> m;
    cout << m.empty() << endl;
    m.insert(3);
    m.insert(1);
    m.insert(3);
    m.insert(6);
    m.insert(7);
    m.insert(6);
    m.insert(6);
    cout << m.empty() << endl;
    print(m);

    cout << m.count(6) << endl; // kaç tana 6 geçiyor

    multiset<int>::iterator up,low;
    low=m.lower_bound(6); // alt sınır
    up=m.upper_bound(8); // ust sınır 
    if(low != m.end()) 
        cout << "eleman var" << endl;
    else
        cout << "eleman yok" << endl;

    cout << endl;

    if(up != m.end())
        cout << "eleman var" << endl;
    else
        cout << "eleman yok" << endl;

    
    // m.erase(low,up);
    // print(m);

    multiset<int>::iterator it;
    pair<decltype(it),decltype(it)> range = m.equal_range(6);
    print(m);

    // pair<multiset<int>::iterator,multiset<int>::iterator>range = m.equal_range(6);  // yukardakinin kıasltılmışı
    // print(m);

    m.erase(range.first,range.second);
    print(m);
}