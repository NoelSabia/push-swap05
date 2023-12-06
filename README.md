# push-swap
## Informationen sammeln
- https://push_swap.simple.ink/
- https://github.com/pasqualerossi/Push_Swap

# Grundfunktionen schreiben
### push_in_stacks
- eingegebene Zahlen werden in stack_a eingelagert
- egal ob argumente in " " oder nicht

### sa

### sb

### pa

### pb 

### ra

### rb

### rra

### rrb

# Hilfsfunktionen
### check_parameters()
- checkt ob nur Zahlen
- checkt ob in Reichweite von int
- checkt ob argc < als 2 Argumente
- checkt auf duplicates

### check_if_sorted()
- handelt negative und positive zahlen
- gibt 0 bei false und 1 bei true zurueck

# Sortierlogik
### tiny-sort()
- sortiert 3 Elemente

### sort()
- push 2 Nummern in stack_B
- check nach der folgenden nummer nach den ersten zwei
- immer die billigsten moves werden ausgefuehrt
- wenn nur noch drei Zahlen in stack_a sind, dann tiny_sort()
- push back to stack_a but only if right spot if not rotate stack_a until its right
- 

# Main
- arbeiten mit int argc, char *argv[]
- zwei stacks kreiern
- int stacksize
- check-parameters
- push_swap()

# Generelle Logik
- Pivot-Auswahl: Du wählst das Element in der Mitte (argv[argc / 2]) als Pivot aus. Dies ist eine gültige Strategie und könnte in vielen Fällen gut funktionieren.
- Aufteilung in Stacks: Du teilst die Elemente in zwei Stacks (stack_a und stack_b) entsprechend ihrer Beziehung zum Pivot.
- Sortierung der Stacks: Du wendest den Quicksort-Algorithmus rekursiv auf beide Stacks an, um sie zu sortieren.
- Zusammenfügen der Stacks: Nachdem beide Stacks sortiert sind, fügst du sie wieder zusammen.
- Ausgabe auf das Terminal: Du druckst das sortierte Ergebnis auf das Terminal.
- Speicherfreigabe: Schließlich gibst du den für die Stacks allozierten Speicher frei.


# To-Do
- memoryleaks verhindern indem man pseudo-pb veraendert
- function rb veraendern und verbessern (sollte eig schon funzen)
- nur noch entsprechend zurueckverschieben
