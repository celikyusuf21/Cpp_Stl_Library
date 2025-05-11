/*

    Queue(Kuyruk)= İlk giren ilk çıkar (FIFO) takip eder. Yineleyici yok

    şablon ->>   queue<stirng>object; // boş kuyruk
                 queue<string>object(container)  // kopya kurucu


*/

#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void print(queue<T> q){  // buraya referans geçirirsek while dongusu ile verdigimiz silme işlmei sonucunda ikinci bir defa aynı kuyrugu basarsak kuyruk boş dönner.

    while(!q.empty()){  // kuyruk bos olmadigi surece bu islemi yap.

        cout << q.front() << " ";
        q.pop();

    }
}


// 5 1 3

int main(){

    queue<int> q;

    cout << q.empty() << endl;
    q.push(5);
    q.push(1);
    q.push(3);
    cout << q.empty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    cout << "Size q : " << q.size() << endl;
    q.pop();
    cout << q.front() << endl;

    cout << q.size() << endl;

    queue<int> q1(q); // kopyalama kurucusu

    cout << q1.front() << endl;
    cout << "q1 size: " << q1.size() << endl;

    q1.pop();
    cout << "q1 size: " << q1.size() << endl;
    cout << "q size: " << q.size() << endl;   // kuyruklar birbirini bağlamaz 

    cout << "---------------------------------------------" << endl;

    print(q);
    cout << endl;
    print(q);

    cout << endl;
    
    cout << q.size() << endl;

    q.push(11);
    q.push(12);
    q.push(19);

    print(q);
    cout << endl;
    
    q.pop();
    q.pop();
    print(q);
    
    cout << endl;

    return 0;
}

