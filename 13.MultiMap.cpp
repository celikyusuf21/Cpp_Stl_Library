 /*
 
 -> multimap = anahtar-değer çiftini depolamak için bir ortak kapsayıcıdır ve her anahtar, birden fazla değerle ilişkilendirilebilir. çift ​​yönlü

*/
// decltype = daha once oluşturdugum bir değişkenin tipinin buuraya getir.



#include <iostream>
#include <map>

using namespace std;

template <typename T>
void print(T& t,string sepp="\n"){
    typename T::iterator iter = t.begin();
    while(iter != t.end()){
        cout << iter->first << " " << iter->second << sepp;
        iter++;
    }
    cout << endl;
}

template <typename T>
bool cmp(T x, T y){
    return x>y;
}


int main(){

    multimap<string,int,greater<string>> m;
    cout << m.empty() << endl;

    pair<string,int> deger("bir",1);
    m.insert(deger);
    m.insert(pair<string,int>("iki",2));
    m.insert(deger);
    m.insert(pair<string,int>("dort",4));
    m.insert(pair<string,int>("uc",3));
    m.insert(pair<string,int>("bes",5));
    m.insert(pair<string,int>("dort",4));
    m.insert(pair<string,int>("dort",4));
    m.insert(pair<string,int>("yedi",7));
    cout << m.empty() << endl;
    print(m);
    multimap<string,int>::iterator a,b,c,d;
    a=m.lower_bound("dort");
    b=m.upper_bound("dort");
    // m.erase(a,b);
    pair<decltype(a),decltype(a)>aralik=m.equal_range("dort");
    m.erase(aralik.first,aralik.second);
    
    print(m);





}