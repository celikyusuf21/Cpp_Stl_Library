
/*

priority_queue(Öncelikli Kuyruk) = Öncelik akrşılaştırma operatorune gore yapilir.

Kurucular->

    Boş: priority_queue<int> object;

    Kopya Kurucu: priority_queue<int> object(container);

*/

#include <iostream>
#include <queue>
#include <stdlib.h> // rastgele sayi tutmak için
#include <time.h>  // her zaman farklı bir sayi tutabilmesi için.

using namespace std;

/*

5-> 5
3-> 5<3 = 5 3
11-> 5<11 = 11 5 3 
7 -> 11<7
     5<7= 11 7 5 3

4-> 11<4 
    7<4
    5<4
    3<4 = 11 7 5 4 3 

*/

template <typename T>
void print(T t){
    while(!t.empty()){
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;
}

template <typename T>
bool cmp(T x , T y){
    return x>y;
}

int main(){

    srand(time(NULL)); // her zaman farklı sayilar tutsun.

    priority_queue<int> p;
    cout << p.empty() << endl;
    p.push(5);
    print(p);
    p.push(3);
    print(p);
    p.push(11);
    print(p);
    p.push(7);
    print(p);
    p.push(4);
    print(p);
    cout << p.empty() << endl;
    cout << p.top() << endl;
    cout << endl;

    cout << "P2 container: " << endl;
    priority_queue<int,vector<int>,bool(*)(int,int)> p2(cmp);
    p2.push(5);
    print(p2);
    p2.push(3);
    print(p2);
    p2.push(11);
    print(p2);
    p2.push(7);
    print(p2);
    p2.push(4);
    print(p2);

    vector<int> v;
    int rast;
    for(int i=0;i<10;i++){
        rast=rand() % 100;
        cout << rast << " ";
        v.push_back(rast);
    }

    priority_queue <int,vector<int>,bool(*)(int,int)> p3(v.begin(),v.end(),cmp);
    cout << endl;
    print(p3);


    return 0;


}
