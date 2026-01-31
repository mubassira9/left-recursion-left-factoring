#include <stdio.h>
#include <string.h>
int main() {
 char nonTerminal;
 /* Variables for Left Recursion */
 char alpha[20], beta[20];
 /* Variables for Left Factoring */
 char common[20], prod1[20], prod2[20];
 printf("Compiler Design: Grammar Transformations\n");
 printf("---------------------------------------\n");
 /* ===== LEFT RECURSION REMOVAL ===== */
 printf("\n--- Removal of Left Recursion ---\n");
 printf("Enter Non-Terminal: ");
 scanf(" %c", &nonTerminal);
 printf("Enter alpha (for %c -> %cα): ", nonTerminal, nonTerminal);
 scanf("%s", alpha);
 printf("Enter beta (for %c -> β): ", nonTerminal);
 scanf("%s", beta);
 printf("\nOriginal Grammar:\n");
 printf("%c -> %c%s | %s\n", nonTerminal, nonTerminal, alpha, beta);
 printf("\nGrammar after removing Left Recursion:\n");
 printf("%c -> %s%c'\n", nonTerminal, beta, nonTerminal);
 printf("%c' -> %s%c' | ε\n", nonTerminal, alpha, nonTerminal);
 /* ===== LEFT FACTORING ===== */
 printf("\n--- Left Factoring ---\n");
 printf("Enter Non-Terminal: ");
 scanf(" %c", &nonTerminal);
 printf("Enter common prefix: ");
 scanf("%s", common);
 printf("Enter first remaining part: ");
 scanf("%s", prod1);
 printf("Enter second remaining part: ");
 scanf("%s", prod2);
 printf("\nOriginal Grammar:\n");
 printf("%c -> %s%s | %s%s\n",
 nonTerminal, common, prod1, common, prod2);
 printf("\nGrammar after Left Factoring:\n");
 printf("%c -> %s%c'\n", nonTerminal, common, nonTerminal);
 printf("%c' -> %s | %s\n", nonTerminal, prod1, prod2);
 return 0;
}
