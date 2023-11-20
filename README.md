# push-swap
## Informationen sammeln
- https://push_swap.simple.ink/
- https://github.com/pasqualerossi/Push_Swap

# Grundfunktionen schreiben
### sa

### sb

### pa

### pb 

### ra

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

# Sortierlogik

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