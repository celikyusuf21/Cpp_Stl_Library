/*
Vector Sınıfı: Blok halinde daralır/genişler(dinamik dizi)

Avantajları;

Sona eleman ekleme ucuz(Push_Back)
Sondan eleman cıkarma ucuz(Pop_Back)

Dezavantajları;

Başa ve Araya eleman eklemek maliyetli.
Baştan/aradan eleman silme maliyetli

Not: vector içindeki arada kalan bir yere eleman ekleme ve silme işlemleri
 yapılmayacaksa ara işlemlerdeki bir elemeanın adresini alıp işlem yapmaycaksak kullanılabilir.

------------------------------------------------------------------------

List Sınıfı; Birer birer daralır/genişler.

Avantajları;

Başa ve Sona eleman ekleme ucuz(Push_Front, Push_Back)
Baştan ve Sondan elaman silme ucuz(Pop_Back, Pop_Front)
Araya Ekleme ve Silme ucuz(İnsert,Erase)
Sort ve Unique methodları mevccut

Dezavantajları;

Aradaki elemanlara ulaşma maliyetli (O(n))
indis operatoru kullanılmaz.

Not: Liste içindeki arada kalan elemanları sürekli aramayacaksa uygundur.


--------------------------------------------------------------------------

Deque Sınıfı: Birer birer daralır/genişler.

Avantajları:

Başa ve Sona eleman ekleme ucuz(Push_Back, Push_Front)
Baştan ve Sondan eleman silme ucuz(Pop_Back, Pop_Front)
İndis operatörü kullanılabilir.

Dezavantajları:

Araya ekleme ve silme maliyetli(İnsert, Erase).

Not: Liste içindeki arada kalan elemanları sürekli aramayacaksa uygundur.

---------------------------------------------------------------------------

Stack Sınıfı: Listelerin özelleştirilmiş halidir. Birer birer daralır genişler

Avantajlalrı:

Eleman ekleme maliyeti ucuz (push)
Eleman cıkarma maliyeti ucuz.(pop)

Dezavantajları:

Ara elemanlara ulaşma yoktur.

Not: Elemanları eklerken son giren ilk çıkar. (LIFO) kullanılır.)

-----------------------------------------------------------------------------

Queue Sınıfı: Listelerin özelleştirilmiş halidir birer birer daralır ve genişler

Avantajları:

Eleman ekleme maliyeti ucuz.
Eleman çıkarma maliyeti ucuz.

Dezavantajları:

Ara elemanlara ulaşma yok.

Eleman eklerken ilk giren ilk çıkar(FIFO) kullanılır.

--------------------------------------------------------------------

Priority Queue Sınıfı: Queue sınıfının özelleştirilmiş halidir.

->> Vector kullanılırsa Blok halinde genişler.
->> Tree kullanılırsa birer birer genişler.

Avantajları:

Eleman çıkarma maliyeti ucuz.
Eleman ekleme maliyeti orta seviyede Log(n).

Dezavantajları:

Ara elemanlara ulaşma yok.

Not: Elemanları eklerken öncelik durumlarına göre(Öncelik karşılaştırma operatörüne göre)
 göre ekleme ve çıkarma işlemleri yapıldığında kullanılır.


-------------------------------------------------------------------------

Set Sınıfı: 

Avantajları:

Eleman ekleme maliyeti orta seviyede Log(n).
Elemanlar birer kez kullanılır.
Eleman arama Log(n) seviyesindedir.
Aralık halinde arama işlemleri yapılabilir.

Dezavantajları:

İndis operatörü yoktur.
İstediğimiz pozisyona ekleme yok sürekli kendisi elemanların yerini günceller.

Not: Elemanların tekrarlanmamasını istersek ve sürekli arama işlemi yapacaksak kullanılabilir.

-----------------------------------------------------------------------------------

Map Sınıfı:

Avantajlar:

Eleman ekleme maliyeti orta seviyede Log(n).
Eleman birer kez bulunur.
Eleman arama Log(n) sevieysindedir.
Aralık halinde arama işlemleri yapılabilir.
İndis operatörü çok esnektir.

Dezavantajları:

İstediğimiz pozisyona ekleme yok sürekli kendisi elemanların yerini günnceller.

Not: İki veya daha çok eleman arasındaki ilişkiyi kurmak istediğimizde kullanılabilir.



*/

