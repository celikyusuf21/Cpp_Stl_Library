// The C++ Standard Template Library (STL)

/*


STL'nin dört bileşeni vardır(STL has four components)


* Algorithms
* Containers
* Functions
* Iterators

-----------------------------------------------------------------------------------------------------------


* Algorithm = Özellikle eleman aralıklarında kullanılmak üzere tasarlanmış bir işlevler koleksiyonunu tanımlar.

    --> Algorithm

        -> Sorting
        -> Searching
        -> Important STL Algorithms
        -> Useful Array algorithms
        -> Partition Operations

    --> Numeric

        -> valarray class

--------------------------------------------------------------------------------------------------------------------------------------------

* Containers = Kapsayıcılar veya kapsayıcı sınıfları, nesneleri ve verileri depolar.

    --> Sequence Containers = Sıralı bir şekilde erişilebilen veri yapılarını uygulamak.

        -> vector = sona ekleme ve silme işlemlerine izin veren dinamik bir dizi oluşturur. Rastgele erişim
        -> list = herhangi bir yerden ekleme veya silme yapabilir. Çift yönlü
        -> deque = her iki uçtan ekleme ve silmeye izin veren çift uçlu kuyruktur. Rastgele erişim
        -> arrays 
        -> forward_list( Introduced in C++11)

    
    --> Container Adaptors = Sıralı kapsayıcılar için farklı bir arayüz sağlamak.

        -> queue = İlk giren ilk çıkar (FIFO) takip eder. Yineleyici yok
        -> priority_queue = lk öğe dışarı her zaman en yüksek öncelikli öğedir. Yineleyici yok
        -> stack = Son giren ilk çıkar (LIFO) takip eder. Yineleyici yok
    

    --> Associative Containers = Hızlı bir şekilde aranabilen (O(log n) karmaşıklığı) sıralanmış veri yapılarını uygulayın.

        -> set = benzer olamayan kümeleri depolamak için ortak kapsayıcıdır. 	çift ​​yönlü
        -> multiset = benzer olan kümeleri depolamak için bir ortak kapsayıcıdır. 	çift ​​yönlü
        -> map =  benzersiz anahtar/değer çiftlerini depolamak için bir ortak kapsayıcıdır, yani her anahtar yalnızca bir değerle ilişkilendirilir (bire bir eşleme). 	çift ​​yönlü
        -> multimap = anahtar-değer çiftini depolamak için bir ortak kapsayıcıdır ve her anahtar, birden fazla değerle ilişkilendirilebilir. çift ​​yönlü

    
    --> Unordered Associative Containers = Hızla aranabilen sırasız veri yapılarını uygulamak.

        -> unordered_set (Introduced in C++11)
        -> unordered_multiset (Introduced in C++11)
        -> unordered_map (Introduced in C++11)
        -> unordered_multimap (Introduced in C++11)

----------------------------------------------------------------------------------------------------------------------------------------------------

* Functions = STL, işlev çağrısı operatörünü aşırı yükleyen sınıfları içerir. Bu tür sınıfların örneklerine işlev nesneleri veya işlevler denir.

        -> Functors


----------------------------------------------------------------------------------------------------------------------------------------------------------

* Iterators = Adından da anlaşılacağı gibi, yineleyiciler bir dizi değer üzerinde çalışmak için kullanılır. STL'de genelliğe izin veren ana özelliktir.


        -> Iterators

-----------------------------------------------------------------------------------------------------------------------------------------------------------

*/



