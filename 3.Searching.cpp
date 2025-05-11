
// Binary Search = Arama uygulanmadan önce dizinin sıralanmasını gerektiren, yaygın olarak kullanılan bir arama algoritmasıdır.
   //Bu algoritmanın arkasındaki ana fikir, eleman bulunana veya tüm elemanlar tükenene kadar diziyi ikiye bölmeye (böl ve yönet) devam etmektir.

// Prototip = binary_search(startaddress,endaddress,valuetofind)

#include <algorithm> 
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int testAry[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
    int arysize = sizeof(testAry) / sizeof(testAry[0]); 
     
    sort(testAry, testAry + arysize); 
      
    cout<<"\nSorted Array is \n";
    for(int i=0;i<arysize;i++)
          {
        cout<<testAry[i]<< " ";
          }
     
    if (binary_search(testAry, testAry + arysize, 2)) 
    cout << "\nKey = 2 found in the array"; 
    else
    cout << "\nKey = 2 not found in the array"; 
     
    if (binary_search(testAry, testAry + arysize, 10)) 
    cout << "\nKey = 10 found in the array"; 
    else
    cout << "\nKey = 10 not found in the array" << endl;
     
    return 0; 
}
