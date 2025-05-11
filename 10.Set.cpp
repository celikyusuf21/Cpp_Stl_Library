/*
      -> Set(Küme) = benzer olamayan kümeleri depolamak için ortak kapsayıcıdır. 	çift ​​yönlü

*/
#include <iostream>
#include <set>
#include<vector>
#include<list>
using namespace std;

template <typename T>
void print(T& t){
    typename T::iterator iter = t.begin();
    while(iter != t.end())
        cout << *iter++ << " ";
    cout << endl;
}

template<typename T>
bool cmp(T x, T y){
    return x>y;
}

int main(){

    std::set<int> s;
    cout << s.empty() << endl;
    s.insert(5);
    s.insert(5); // benzer degerleri ekleyemeyiz.
    s.insert(4);
    cout << s.empty() << endl;
    print(s);
    
    set<int>::iterator it = s.begin();
    it=s.insert(it,10);
    print(s);

    int dizi[]={1,2,6,4,8,9};
    s.insert(dizi,dizi+6);
    print(s);

    vector<int> v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    s.insert(v.begin(),v.end());
    print(s);

    set<int>::iterator begin = s.begin();
    cout << *begin << endl;

    set<int>::iterator end = s.end();
    cout << *end << endl;   
       
    s.erase(it);
    print(s);
    // s.erase(s.begin(),s.end());
    print(s);
    // s.clear();
    s.insert(11);
    print(s);
    cout << s.empty() << endl; 
    cout << s.size() << endl; // 10

    cout << s.count(12) << endl; // 0

    set<int>::iterator alti=s.find(6);
    if(alti !=s.end())
        cout << "eleman var";
    else
        cout << "eleman yok";
    cout << *alti << endl; // 6
    s.erase(alti);
    print(s);

    /*
    s.lower_bound(); // 2 3 4 5 9 10
    s.upper_bound();
    */


   set<int>::iterator uc=s.lower_bound(3);
   set<int>::iterator dokuz=s.upper_bound(9);
   s.erase(uc,dokuz);
   print(s);
   cout << s.size() << endl;

   set<int> s2(s);
   print(s2);

   set<int> s3(dizi,dizi+5);
   print(s3);


   set<int,greater<int>> s4; // less<T>
   s4.insert(3);
   s4.insert(2);
   s4.insert(11);
   print(s4);

   set<int,bool(*)(int,int)> s5(cmp);

   s5.insert(3);
   s5.insert(2);
   s5.insert(11);
   print(s5);


}
   






