//Calculator.h header file
#include<stdio.h>
#include<stdbool.h>
bool validOperatorCheck(char testOperator){
  switch(testOperator){
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
      return 1;
    default:
      return '\0';
  }
}
int ofOperation(int num1, int num2, char operator){
    switch(operator){
      case '+':
        return num1 + num2;
      case '-':
        return num1 - num2;
      case '*':
        return num1 * num2;
      case '/':
        return num1 / num2;
      case '%':
        return num1 % num2;
      default:
        return '\0';
    }
}
int inputOfInt(int* i){
  char c;
  while(scanf("%d%c", i, &c) != 2 || c != '\n'){
    printf("Invalid input! Enter an integer please: ");
    //while ((c = getchar()) != EOF && c != '\n'){};
    scanf("%*[^\n]");
  }
  return *i;
}
char ifOperatorNotValid(){
  char userInput; // supposed to equal an operator (+ - * / %)
  int ch;
  printf("Enter the operator: ");
  while((ch = getchar()) != '\n' && ch != EOF){};
  while(scanf(" %c", &userInput) != 1){
    printf("Too long. Enter in an actual operator: ");
    scanf("%c", &userInput);
  }
  return userInput;
}

