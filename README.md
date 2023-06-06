# Library
System zarządzania biblioteką.
W ramach tego projektu zamierzam wykorzystać nabyte przeze mnie umiejętności programowania oraz wykorzystania narzędzi programistycznych (GIT i CMake) w sposób praktyczny.

# Założenia do wersji 1.0
### System do zarządzania biblioteką - funkcjonalności:
* Dodawanie, usuwanie i modyfikowanie dostępnych książek
* Wyszukiwanie książek po: tytule, autorze, ISBN
* Wypożyczanie, zwracanie i rezerwowanie książek
* Wyświetlanie historii wypożyczeń książki
* Logowanie użytkowników do systemu Biblioteki
* Administrator biblioteki może zarządzać książkami, wypożyczeniami oraz akceptować rejestracje użytkowników i ich rozliczać (wydruk stanu konta czytelnika)
* Czytelnik może wypożyczać książki oraz zweryfikować stan swojego konta (lista wypożyczonych książek, terminy zwrotu książek oraz naliczone kary w przypadku przekroczenia terminu)
* Administrator biblioteki będzie miał możliwość wyswietlania listy czytelników oraz ich wyszukiwania

### Założenia funkcjonalne wersji 1.0
* Obsługa programu przy pomocy terminalu
* Dane: użytkowników, książek oraz wypożyczeń przechowywane w bazie danych SQLite
* System wersjonowania kodu GIT
* Narzędzie do budowania CMake