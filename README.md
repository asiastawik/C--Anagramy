# Program do Sprawdzania Anagramów

## Opis Programu

Program wczytuje dwa napisy od użytkownika i sprawdza, czy są anagramami — tzn. czy oba napisy zawierają dokładnie te same litery, niezależnie od ich kolejności.

### Założenia

1. **Case Sensitivity**:
   - Program może być skonfigurowany, aby rozróżniać wielkie i małe litery (case sensitive) lub nie rozróżniać liter (case insensitive). Decyzję tę można podjąć w zależności od potrzeb.

2. **Uwzględnianie Odstępów**:
   - Program może uwzględniać lub ignorować odstępy (spacje) w tekstach. Parametr ten można przekazać jako część funkcji sprawdzającej anagramy.

3. **Wczytywanie Tekstu**:
   - Oba napisy są dostarczane przez użytkownika.
   - Aby poprawnie wczytać teksty z odstępami, program korzysta z funkcji `fgets()`, która pozwala ograniczyć liczbę znaków i wczytać napisy wraz z odstępami.

4. **Długość Tekstu**:
   - Program nie narzuca żadnych specyficznych ograniczeń na długość wprowadzanych tekstów. Użytkownik może wprowadzać teksty dowolnej długości, o ile mieszczą się w zakresie tablicy znaków.

## Funkcjonalność

1. **Sprawdzanie Anagramów**:
   - Dwa napisy są uznawane za anagramy, jeśli zawierają dokładnie te same litery, w tej samej liczbie, niezależnie od kolejności.
   - Program może być skonfigurowany, aby ignorować odstępy i nie rozróżniać wielkości liter.

2. **Algorytm**:
   - Napisy są sortowane, a następnie porównywane. Jeśli po posortowaniu są identyczne, napisy są anagramami.

## Funkcje

### 1. `czy_anagramy(char napis1[], char napis2[], bool case_sensitive, bool uwzglednij_odstepy)`

- **Opis**: Funkcja sprawdza, czy dwa napisy są anagramami.
- **Parametry**:
  - `napis1[]`: Pierwszy wczytany napis.
  - `napis2[]`: Drugi wczytany napis.
  - `case_sensitive`: Informacja, czy program ma rozróżniać wielkość liter (true — rozróżnia, false — ignoruje wielkość liter).
  - `uwzglednij_odstepy`: Informacja, czy program ma uwzględniać odstępy (true — uwzględnia, false — ignoruje odstępy).
- **Działanie**:
  - Usuń odstępy (jeśli parametr `uwzglednij_odstepy` jest ustawiony na `false`).
  - Jeśli `case_sensitive` jest ustawione na `false`, zamień wszystkie litery na małe litery.
  - Posortuj oba napisy.
  - Porównaj posortowane napisy. Jeśli są identyczne, zwróć wynik `true` (są anagramami), w przeciwnym razie zwróć `false`.

### 2. `fgets()`

- **Opis**: Funkcja służąca do wczytywania tekstu od użytkownika wraz z ograniczeniem liczby znaków.
- **Zastosowanie w Programie**: Używana do wczytywania napisów wraz z odstępami, aby uniknąć problemów z przepełnieniem bufora.
