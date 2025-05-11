/*
-> map =  benzersiz anahtar/değer çiftlerini depolamak için bir ortak kapsayıcıdır, 
,yani her anahtar yalnızca bir değerle ilişkilendirilir (bire bir eşleme). 	çift ​​yönlü

#include<map>

-> Key/Value pairs
-> map<string,int> object
      -> pair<string,int>
         pa[]={

             pair<string,int>("one",1),
             pair<string,int>("two",1),
             pair<string,int>("three",1),
             pair<string,int>("four",1),
            
        };
        
        -> map<string,int> object(&pa[0],&pa[3]);

->object["two"]

*/

#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string,int> m;
    cout << m.empty() << endl;
    pair<string,int> deger("bir",1);
    m.insert(deger);


    return 0;
}