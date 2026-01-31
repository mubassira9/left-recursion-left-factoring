# left-recursion-left-factoring
A C-based tool for performing Left Recursion Removal and Left Factoring on context-free grammars used in Compiler Design.

This project is a simple and efficient Compiler Design utility written in C that performs two important grammar transformations:
**Removal of Left Recursion**
**Left Factoring**

These transformations are essential for converting grammars into a form suitable for **LL(1) parsing**.

## Features
✔ Removes **immediate left recursion**  
✔ User-friendly input  
✔ Prints both original and transformed grammar   

# What is Left Recursion?
A grammar is **left recursive** if it has a rule like:
A → Aα | β

This causes problems in top-down parsers.  
The program converts it into:
A → βA'
A' → αA' | ε

# What is Left Factoring?
If two productions have a **common prefix**:
A → αβ1 | αβ2
It is converted into:
A → αA'
A' → β1 | β2
This helps make the grammar suitable for **predictive parsing**.

## How to Run
# Sample Input (Left Recursion)
Enter Non-Terminal: A
Enter alpha: a
Enter beta: b
A -> bA'
A' -> aA' | ε
# Sample Input (Left Factoring)
Enter Non-Terminal: A
Enter common prefix: ab
Enter first remaining part: c
Enter second remaining part: d
A -> abA'
A' -> c | d








