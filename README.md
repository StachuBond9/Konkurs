ZAD1
 Harpagon, zafascynowany gromadzeniem bogactwa, postanawia zarejestrować swoje finansowe transakcje jako sekwencję liczbową. Każda transakcja jest reprezentowana przez punkty sukcesu. Jest to liczba całkowita, która symbolizuje zadowolenie bohatera z transakcji - dodatnia dla zysków i ujemna dla strat. Harpagon, pragnąc zrozumieć dynamikę swojego majątku i efektywność swoich działań oszczędnościowych, prosi Cię o pomoc w analizie sumy punktów sukcesu w określonych przedziałach czasu.

Wejście:

Pierwsza linia wejścia zawiera dwie liczby całkowite: n, liczbę transakcji zarejestrowanych przez Harpagona, oraz q, liczbę zapytań dotyczących sumy punktów. Druga linia zawiera n liczb całkowitych e​, gdzie każda liczba reprezentuje punkty poszczególnych transakcji. Następnie q linii, każda z parą liczb całkowitych a i b​, reprezentuje zakres zapytania o sumę punktów od transakcji numer a do transakcji numer b, włącznie.

1 ≤ n ≤ 1000000
1 ≤ q ≤ 1000000
-1000 ≤ e​ ≤ 1000
1 ≤ a​ ≤ b​ ≤ n
Wyjście:

Dla każdego zapytania wypisz jedną liczbę całkowitą, będącą sumą punktów sukcesu transakcji w określonym przedziale.
Przykład
Wejście

5 3
100 -200 300 -400 500
1 3
2 4
1 5

Wyjście

200 -300 300



ZAD 2
 Zbliżała się północ. Wszystko wskazywało na to, że na tegorocznych Dziadach nie zjawi się żadna zbłąkana dusza. Aż tu nagle ukazało się widmo. Dawno zmarły brat Konrada pojawił się, by przekazać mu tajemnicę. Duch zaczął swoją wypowiedź od podania liczby n. Następnie wypowiedział n par typu [liczba słowo] i zniknął. Konrad nie jest w stanie poradzić sobie z odszyfrowaniem wiadomości, więc zwrócił się o pomoc do Ciebie. Osoby, która nigdy nie zdradzi tajemnic i umie trzymać język za zębami. Oczywiście widać z daleka, że wiadomość może być zaszyfrowana z pomocą RSA. Po krótkiej rozmowie z Konradem okazało się, że dawno temu bracia uzgodnili między sobą klucze publiczne, dzięki którym mogą szyfrować wiadomości. Konrad dał ci swój klucz prywatny i instrukcję jak odszyfrować wiadomość.

Instrukcja ta wygląda następująco: Najpierw podane są 3 liczby: n - pierwsza liczba podana przez ducha, d - klucz prywatny otrzymany od Konrada i m - tak zwany modulus - również otrzymany od Konrada. Następnie podane są pary typu liczba c i napis s. Aby zrozumieć napis, należy odszyfrować liczbę z nim związaną za pomocą systemu RSA. Aby uzyskać odszyfrowaną liczbę msg należy skorzystać ze wzoru:

msg = cd mod m

Pamiętaj, że a mod b jest równe reszcie z dzielenia a przez b.

Następnie msg razy wykonujemy następującą operację: Zabieramy pierwszą literę ze słowa, a następnie wstawiamy tę literę na koniec słowa. Przykład działania tej operacji:
Dla słowa w = „kot" po wykonaniu tej operacji otrzymamy słowo w = „otk". Jeśli ponowimy wykonanie tej operacji, słowo w przyjmie wartość „tko". Po wykonaniu tej operacji msg razy uzyskujemy odszyfrowany napis.
Wejście:

W pierwszym wierszu znajdują się trzy liczby naturalne n, d, m. Oznaczające odpowiednio liczbę słów do odszyfrowania, potęgę, do której należy, podnieść liczby podane w parach oraz wartość, przez którą modulujemy. W kolejnych n wierszach znajdują się pary c, s. c jest liczbą naturalną, s jest słowem stworzonym z małych i wielkich liter alfabetu łacińskiego.
1 ≤ n ≤ 5*103
1 ≤ d,m,c ≤ 10100
1 ≤ |s| ≤ 106
Wyjście:

Na wyjściu należy wypisać n słów oddzielonych spacją, będących odszyfrowaną zgodnie z powyższymi poleceniami wiadomością.
Przykład:
Wejście:

2 209 1121 
44 ielbiamUw
42 gorytmyal

Wyjście:

Uwielbiam algorytmy 


ZAD 3

 Podczas nieobecności Wokulskiego, Rzecki wpadł na genialny pomysł rozszerzenia oferty sklepu o dostawę poza granice Warszawy. Już kolejnego dnia po ogłoszeniu nowych możliwości, Ignacy otrzymał wiele listów z zamówieniami. Niektórzy klienci zdawali się być ważniejsi od innych, więc stary subiekt nadał każdemu zamówieniu priorytet, a także wyznaczył rozmiar przesyłki. Niestety Rzecki zaskoczył się, gdy dowiedział się ile przyjdzie mu zapłacić za transport. Okazało się, że kurier ma pewne zasady, które wyglądają następująco:

    Każdego dnia dostarcza dokładnie 1 przesyłkę.
    Wszystkie n przesyłek zostanie dostarczonych dokładnie w n następujących po sobie dni ponumerowanych od 1 do n.
    Jeśli przesyłka ma rozmiar r oraz została dostarczona i-tego dnia to cena jej transportu jest równa i*r.
    Najpierw dostarczane są przesyłki o wyższym priorytecie. Jeżeli dwie przesyłki mają ten sam priorytet to najpierw dostarczana jest ta, która została zamówiona wcześniej.

Rzecki zastanawia się teraz ile będzie musiał zapłacić kurierowi. Stary subiekt poprosił Cię o pomoc w wyznaczeniu tej liczby. Jako, że wynik może być bardzo duży, wystarczy, że podasz resztę z dzielenia przez 1000000009. Aby ułatwić Ci zadanie Rzecki podał Ci kilka ciekawych informacji. Priorytety to liczby całkowite z pewnego zakresu. Wszystkie liczby z tego zakresu mają podobne prawdopodobieństwo na to, że są równe priorytetowi danej przesyłki.
Wejście:

W pierwszym wierszu wejścia znajduje się liczba naturalna t oznaczająca liczbę przypadków testowych. Każdy przypadek testowy składa się z liczby naturalnej n, oznaczającej ilość przesyłek. W kolejnych n wierszach znajduje się opis przesyłek. Przesyłki są opisane w tej samej kolejności w jakiej przyjmował je Rzecki. Opis przesyłki składa się z pary liczb całkowitych a, b gdzie pierwsza z nich oznacza priorytet, a druga oznacza rozmiar przesyłki.
1 ≤ t ≤ 2*105
1 ≤ n ≤ 3*106
-109 ≤ a ≤ 109
0 ≤ b ≤ 109
1 ≤ t*n ≤ 2*107
Wyjście:

Dla każdego przypadku na wyjściu należy wypisać pojedynczą liczbę będącą odpowiedzią na prośbę Rzeckiego. Liczby powinny być wypisane w jednym wierszu i oddzielone spacją.
Przykład:
Wejście:

2
4
1 0
4 2
-4 2
4 1
4	
1 1
3 4
-5 3
0 2

Wyjście:

12 24 

ZAD 4
 Kmicic od samego początku wojny dzielnie walczył z wrogiem. Kilka dni temu dostał informację, że w okolicy stacjonuje kilkuosobowa grupa wrogów. Główny bohater postanowił się z nimi rozprawić, zakradając się do nich w nocy. Grupa wroga uznała, że walka nie ma sensu i oddała się w niewolę. Uwagę głównego bohatera zwróciła pewna wiadomość, którą znalazł przy dowódcy. Wiadomość ta była dla niego kompletnie nieczytelna. Następnego dnia Kmicic zebrał się z grupą ludzi w lokalnej karczmie i próbował rozszyfrować znaczenie tej wiadomości. Zagłoba w pewnym momencie rzucił, że jest to pewnie zakodowany rozkaz od jednego ze szwedzkich generałów. Rzeczywiście, informacja wyglądała na jakiegoś rodzaju polecenie ataku zakodowanego tak, by nikt nie mógł go zrozumieć. Kmicic zdecydował się więc przekazać ową wiadomość do naczelnych matematyków króla Jana Kazimierza.

Po dostarczeniu im wiadomości szybko zrozumieli, jak działa szyfr wykorzystywany przez wroga. Rzeczywiście, zawierał on rozkaz mówiący o ataku na jeden z celów. Żeby jednak zmylić Polaków, rozkaz był potencjalnie zaszywany w tekście (jeżeli był on tam, to rozkaz należało wykonać; w przeciwnym wypadku rozkaz był nieważny) jako jedna z metod zmylenia wroga. Innym utrudnieniem był znak specjalny: '!', który od razu rzucił się w oczy głównemu bohaterowi, lecz kompletnie nie rozumiał jego przeznaczenia. Matematycy wytłumaczyli mu, że wystąpienie wykrzyknika oznacza, że następne kilka znaków należy pominąć (należy je traktować tak, jakby ich nie było w tekście). Ilość pomijanych znaków jest podana na samym początku wiadomości jako liczba. Sam wykrzyknik nie stanowi części rozkazu.

Niestety matematycy mieli problem ze znalezieniem owego rozkazu w tekście i dlatego poprosili Ciebie, byś pomógł im w tym zadaniu. Napisz program, który będzie znajdował rozkaz szwedzkich generałów w tekście.
Wejście:

Na wejściu otrzymujemy nieujemną i całkowitą liczbę n, która oznacza ilość kolejnych znaków jakie należy pominąć po napotkaniu znaku '!'. W drugiej linii otrzymujemy nasz rozkaz, który zawiera jedynie małe litery alfabetu łacińskiego. W kolejnej linii otrzymujemy tekst, w którym musimy znaleźć wcześniej podany rozkaz, który składa się z małych liter znaków alfabetu łacińskiego i znaków '!'.
1 ≤ n ≤ 1000
1 ≤ |order| ≤ 40000
2 ≤ |text| ≤ 50000000
Wyjście:

Na wyjściu należy wypisać literę 'T', jeżeli rozkaz znajduje się w tekście, lub 'N', jeśli nie występuje on.
Przykład:
Wejście:

2
ataknaklasztor
bcat!naaknak!cclasztor!n

Wyjście:

T

Wyjaśnienie:

Na wejściu otrzymujemy w pierwszej linii wartość 2, która mówi nam, ile znaków musimy pominąć po napotkaniu wykrzyknika wraz z nim. Oznacza to, że podany tekst możemy traktować, jakby wyglądał tak: "bcataknaklasztor". 


ZAD 5
 Santiago po nawiązaniu lukratywnej współpracy z Ernestem Hemingwayem stał się bardzo popularnym rybakiem w okolicy. Główny bohater nie mógł się opędzić od fanów, którzy czekali pod jego domem na autografy. Taka sława bardzo męczyła staruszka, więc zdecydował się wyjechać na drugi koniec kraju na zawody w łowieniu ryb. Zawody te miały swoje specyficzne zasady, które można streścić w następujący sposób:
1. Każdy uczestnik zawodów otrzymuje całkowitą i nieujemną wartość, która mówi, ile ryb dany zawodnik musi złowić.
2. Każdy gatunek ryby, jaki możemy złowić, ma swoją wartość.
3. Po złapaniu ryby wynik jest zapisywany na karcie użytkownika.
4. Za niektóre gatunki ryb otrzymujemy ujemną liczbę punktów na karcie.
5. Po złapaniu wszystkich ryb możemy odrzucić a pierwszych wyników i b ostatnich wyników.
Celem zawodów jest wyznaczenie maksymalnego rezultatu po odrzuceniu wyników. Pomóż Santiago wygrać te zawody i wyznacz maksymalny możliwy rezultat. Jeżeli Santiago będzie miał strasznego pecha i uzyska rezultat ujemny po odrzuceniu wyników, to należy zwrócić wartość 0.
Wejście:

Na wejściu otrzymujemy nieujemną liczbę n, która mówi o ilości przypadków testowych. Każdy przypadek testowy składa się z dwóch liczb l - liczba rodzajów ryb możliwych do złapania i k - liczba ryb, które Santiago musi złapać w trakcie zawodów. W kolejnych l liniach otrzymujemy liczbę punktów pkt, które otrzymujemy za złapanie tego gatunku. Na końcu w jednej linii otrzymujemy k indeksów ryb, które zostały złapane przez głównego bohatera. Ryby są indeksowane od liczby 1.
1 ≤ n ≤ 10
2 ≤ l ≤ 10000
2 ≤ k ≤ 1000000
-10000 ≤ pkt ≤ 10000
Wyjście:

Na wyjściu należy w jednej linii wypisać wyniki maksymalnego rezultatu z każdego przypadku testowego.
Przykład
Wejście:

2
4 5
3
2
-5
10
1 2 3 4 3
4 4
1
2
-5
3
1 2 3 4

Wyjście:

10 3

ZAD 6

 Jadwiga właśnie szukała ubrań, w których weźmie ślub. Przechodziła obok sklepu obuwniczego i pomyślała sobie „Trza być w butach na weselu”. Weszła więc do środka i zauważyła, że pary butów są ustawione w n rzędach o długości m. Pozycje każdej z par można określić, podając indeks rzędu i kolumny, w której się ona znajduje, numerując rzędy od 1 do n i kolumny od 1 do m. Każdej parze przypisano wartość będącą dodatnią liczbą całkowitą, która definiuje „piękno” danej pary. Jadwiga stwierdziła jednak, że to już niemodne chodzić w dwóch identycznych butach, więc postanowiła kupić dwie pary, z których weźmie po jednym bucie. Wiadomo, że nie każde dwie pary do siebie pasują, jednak sposób na rozwiązanie tego problemu szepnął jej do ucha Chochoł, który akurat był w okolicy. Wystarczy, że liczba różnych dzielników pierwszych liczby piękna tych par ma różną resztę z dzielenia przez 2. Jadwiga nie ma ochoty, biegać po całym sklepie, więc postanowiła, że wybierze takie dwie pary, które stoją obok siebie. To znaczy, że są w tym samym rzędzie i w sąsiadujących ze sobą kolumnach albo są w tej samej kolumnie i sąsiadujących ze sobą rzędach. Pomóż Jadwidze znaleźć dwie pary spełniające powyższe warunki, tak by nie traciła czasu na szukanie butów. W końcu ma teraz ważniejsze sprawy na głowie. Przydatna może być informacja, że liczba różnych dzielników pierwszych piękna pary o współrzędnych (1,1) jest podzielna przez 2, natomiast dla pary o współrzędnych (n,m) ta wartość nie jest podzielna przez 2.
Wejście:

W pierwszym wierszu podana jest liczba z oznaczająca liczbę przypadków testowych, a poniżej znajduje się ich opis. Dla każdego przypadku testowego podane są liczby n i m. Następnie podanych jest n wierszy. W każdym z nich znajduje się m liczb. Liczba aij w i-tym rzędzie i j-tej kolumnie określa piękno pary stojącej na współrzędnych i, j.

1 ≤ z ≤ 20
1 ≤ n, m ≤ 5*106
1 ≤ aij ≤ 1012
Wyjście:

Dla każdego przypadku testowego, w oddzielnych wierszach, należy podać współrzędne dwóch par butów, które spełniają warunki podane w treści zadania. Dla każdej z dwóch par podaj numer rzędu i kolumny, w którym się znajdują. Najpierw podaj współrzędne pary, której numer rzędu jest mniejszy, a jeśli są równe, to wypisz najpierw współrzędne pary, której numer kolumny jest mniejszy. Ponieważ istnieje wiele poprawnych odpowiedzi, wypisz dowolną z nich.
Przykład:
Wejście:

1
3 3
20 7 20 
11 8 13 
11 14 2

Wyjście:

3 1 3 2

ZAD 7 
 Ijon Tichy był kosmicznym podróżnikiem. Pewnego dnia stwierdził, że zajmie się badaniem otaczającego go Wszechświata. W ostatnim czasie główny bohater skończył budować swoje magnum opus - Teleskop Tichego, który mógł dostrzec każdy obiekt w przestrzeni kosmicznej. Inną ciekawą cechą wynalazku była możliwość reprezentowania galaktyk wraz z otaczającym je Wszechświatem na trzy różne sposoby (jedno, dwu i trzy wymiarowo). W zależności od sposobu reprezentacji danych obiektów, kosmos był traktowany jako odcinek, prostokąt lub prostopadłościan, który obejmował kosmiczne obiekty. Uczony zastanawia się teraz nad innym problemem - jaką część zajmuje reprezentacja galaktyki w danym wymiarze.
Po kilku dniach pracy udało mu się przygotować zestaw funkcji opisujące galaktyki, które Ijon uznał za najciekawsze. Funkcja odpowiada na pytanie, czy zadany w parametrach punkt należy do galaktyki, czy nie. Ijon poprosił cię, byś pomógł mu obliczyć ile procent kosmosu w danym wymiarze zajmują galaktyki, używając funkcji, które główny bohater przygotował.
Wejście:

Na wejściu otrzymujemy wartość t, która mówi o liczbie przypadków testowych. Każdy przypadek testowy składa się z wartości n, która mówi w jakim wymiarze zostały wykonane pomiary, a następnie w kolejnej linii otrzymujemy 2*n wartości całkowitych, które mówią o ograniczeniu podanej galaktyki. Pierwsze n wartości stanowią pierwszy punkt, a kolejne n wartości tworzą drugi punkt.

    Jeden wymiar: pierwszy punkt stanowi minimalną wartość x, a drugi maksymalną wartość x.
    Dwa wymiary: pierwszy punkt stanowi minimalne wartości x,y, a drugi maksymalne wartości x,y.
    Trzy wymiary: pierwszy punkt stanowi minimalne wartości x,y,z, a drugi maksymalne wartości x,y,z.

Dla każdego testu istnieje funkcja:

bool f(const double*, const int);

, która jako argumenty otrzymuje tablicę (1-, 2- lub 3-elementową) wartości zmiennoprzecinkowych - punkt w przestrzeni i numer przypadku testowego (przypadki są numerowane od 0). Jeżeli wskazany w parametrze punkt należy do obszaru galaktyki, to funkcja zwraca wartość true. W przeciwnym przypadku zwraca wartość false.
1 ≤ t ≤ 10
n ∈ {1,2,3}
-1000000000 ≤ x,y,z ≤ 1000000000

Wyjście:

Na wyjściu należy wypisać w osobnych liniach ile procent naszego uniwersum stanowi galaktyka. Wynik należy zaokrąglić do liczby całkowitej.
Uwaga!

Funkcja, która sprawdza, czy dany punkt należy do galaktyki jest dodawana do rozwiązania po jego wysłaniu i nie należy wstawiać jej do własnego kodu.
Przykład:
Wejście:

3
1
1 30
2
0 0 5 5
3
-10 -10 -10 5 5 5

Przykładowe wyjście:

62
17
35

Funkcja w powyższym przypadku działa w następujący sposób:
Dla przypadku testowego nr 0 - punkt należy do galaktyki, jeżeli jego wartość jest większa od 12.
Dla przypadku testowego nr 1 - punkt należy do galaktyki, jeżeli należy do jednego z trzech prostokątów:

    1.2 < x < 3.4 i 2.3 < y < 3.8
    2.8 < x < 4.0 i 0.6 < y < 1.1
    0.2 < x < 0.9 i 3.3 < y < 3.8

Dla przypadku testowego nr 2 - punkt należy do galaktyki, jeżeli należy on do kuli, o środku w punkcie P=(-2.7;0.9;0.3) i promieniu o długości r=7.
