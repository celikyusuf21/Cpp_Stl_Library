
/*

vector = dinamik diziyi uygulayan bir dizi kapsayıcı sınıfıdır; bu, öğe eklerken boyutun otomatik olarak değiştiği anlamına gelir. Bir vektör, öğeleri bitişik bellek konumlarında saklar ve belleği, çalışma zamanında gerektiği gibi tahsis eder.

vector ve dizi arasındaki fark = Bir dizi statik yaklaşımı takip eder, vektörün dinamik diziyi uygularken boyutunun çalışma süresi boyunca değiştirilemeyeceği anlamına gelir, öğeleri eklerken kendisini otomatik olarak yeniden boyutlandırır.

tanım = 

vector<string>object;
vector<string>object(5,striing("hello"));
vector<stirng>container(10); ->> 10 elemanlı boş vector
vector<string>object(&container[5],&container[9]);
vector<string> object(container);


at()	            Bir öğeye referans sağlar. 
back()	            Son öğeye bir referans verir.
front()	            İlk öğeye bir referans verir.
swap()	            Elemanları iki vektör arasında değiştirir.
push_back()	        Sonunda yeni bir öğe ekler.
pop_back()	        Vektörden son bir öğeyi kaldırır.
empty()	            Vektörün boş olup olmadığını belirler.
insert()	        Belirtilen konuma yeni eleman ekler.
erase()	            Belirtilen öğeyi siler.
resize()            Vektörün boyutunu değiştirir.
clear()	            Tüm öğeleri vektörden kaldırır.
size()	            Vektördeki bir dizi öğeyi belirler.
capacity()	       	Vektörün mevcut kapasitesini belirler.
assign()	        Vektöre yeni değerler atar.
operator=()	        Vektör kabına yeni değerler atar.
operator[]()	    Belirtilen bir öğeye erişir.
end()	            Vektördeki geçmiş-lats-elemanını ifade eder.
emplace()	        Konum pozisyonundan hemen önce yeni bir eleman ekler.
emplace_back()	    Sonuna yeni bir eleman ekler.
rend()	            Vektörün ilk öğesinden önceki öğeyi işaret eder.
rbegin()		    Vektörün son elemanını işaret eder.
begin()	            Vektörün ilk öğesini işaret eder.
max_size()	        Vektörün tutabileceği maksimum boyutu belirler.
cend()	           	Vektördeki geçmiş-son-elemanı ifade eder.
cbegin()	        Vektörün ilk öğesini ifade eder.
crbegin()	        Vektörün son karakterini ifade eder.
crend()	        	Vektörün ilk öğesinden önceki öğeye atıfta bulunur.
data()	            Vektörün verilerini bir diziye yazar.
shrink_to_fit()  	Kapasiteyi azaltır ve vektörün boyutuna eşit hale getirir.

*/
//--------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print(vector<T>& v){

    typename vector<T>::iterator i=v.begin();
    while (i!=v.end())
        cout << *i++ << " " ;
    cout << endl;
        
    
}

int main(){

    // vector<int> v;
    // vector<int> v1(5,10);
    // vector<int> v2(10);
    // vector<int> v3(&v2[5],&v2[8]);
    // vector<int> v4(v1);

    // print(v);
    // print(v1);
    // print(v2);
    // print(v3);
    // print(v4);

    vector<int> v6;
    v6.insert(v6.begin(),5);
    v6.insert(v6.end(),10);
    v6.insert(v6.begin(),7);
    v6.push_back(88);
    print(v6);
    v6.pop_back();
    print(v6);


    // cout << v6.empty() << endl;

    cout << *v6.begin() << endl;
    cout << *v6.end() << endl;
    
    cout << v6.front() << endl;
    cout << v6.back() << endl;

    v6.erase(v6.begin()+1,v6.end()-1);
    print(v6);
    // v6.clear();
    print(v6);
    v6.push_back(65);
    v6.push_back(56);
    v6.push_back(11);
    print(v6);

    cout << v6.size() << endl;
    cout << v6.capacity() << endl;
//-------------------------------------------------------
    vector<int> v7;
    for(int i=0;i<10;i++)
        v7.push_back(i*2);
    
    print(v7);

    v6.insert(v6.begin(),&v7[2],&v7[5]);

    print(v6);
    v6.insert(v6.end(),&v7[2],&v7[5]);
    print(v6);

//----------------------------------------------------

vector<int> v8(&v7[3],&v7[8]);
print(v8);

v7.swap(v8);
print(v7);
cout << endl;
print(v8);

}


