/*

#include <bitset>

binary digit=bit={0,1};

Kurucular : 

        Boş: 
            bitset<size_t> object;
            bitset<size_t> object(unsigned long);
            bitset<size_t> object(string);

        Kopya Kurucusu: bitset<size_t> object(bitset); 

*/

#include <iostream>
#include <bitset>
#include <exception>

using namespace std;

int main(){

    bitset<5> bits(-13);

    cout << bits << endl;

    cout <<"All: " <<  bits.all() << endl; // hepsi 1 olsaydı true deger alırdı.

    cout <<"None: " << bits.none() << endl; // tüm bitler 0 ise true deger doner.

    cout <<"Count: " << bits.count() << endl; // kaçtane 1 degeri var ?
    
    cout <<"Size: "<<  bits.size() << endl; // bits uzunluğunu

    cout << "Any: " << bits.any() << endl; // bit ağında en az bir tane 1 oldugunda true doner. 

    cout << bits.set(2) << endl;

    // cout << bits.set() << endl;

    cout << bits.reset(2) << endl;
    cout << bits.set(3) << endl;

    cout << bits.flip() << endl; // terse cevirme
    cout << bits[4] << endl;
    try{

        cout << bits.test(4) << endl;

    }
    catch(const exception& ex){
        cout << ex.what() << endl;
    }

    cout << bits.to_ullong() << endl;

    string result = bits.to_string();
    cout << result << endl;
   
    
    return 0;
}