// Sorting = Verileri artan veya azalan belirli bir şekilde düzenlemek anlamına gelir. 

// Prototip = sort(startaddress,endaddress)

#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int array_size){

    for(int i=0; i<array_size ; ++i){

        cout << a[i] << " ";
    }
}

int main(){

    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    cout << endl << endl;

    int asize = sizeof(a) / sizeof(a[0]);

    cout << "The array before sorting is: ";

    show(a,asize);

    cout << endl << endl;

    sort (a,a + asize);

    cout << "\n\nThe array after sorting is :";

    show(a, asize);

    cout << endl << endl;





}




