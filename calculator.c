/* Simple calculator Program in C.
Algorithm:
01. Start
02. Accept a, b (integers) amd an op (operator)  .
03. Based on the operator use switch case
04. Stop  */

# include <stdio.h>
int main() {
  int a, b;
  char op;
  
  printf("Enter two numbers (a:b) :" );
  scanf("%d:%d", &a, &b);
  
  printf("Enter an operator +, -, *, /" );
  scanf("%c", &op);
    
  switch (op) {
    case '+': printf("%d", a + b);
              break;
    case '-': printf("%d", a - b);
              break;
    case '*': printf("%d", a * b);
              break;
    case '/': printf("%d", a / b);
              break;
    case '%': printf("%d", a % b);
              break;
    default: printf("Invalid operator");
  }

  return 0;
}
