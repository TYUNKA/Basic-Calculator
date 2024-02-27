// A calculator program
#include<stdio.h>
#include "Calculator.h"
int main(){
  printf("************\nSimple Calculator Program\n************");
  int firstNumber, secondNumber = 0;
  char c1, c2; // for use in the verification of ints 1 and 2 respectively
  char inputOperator;
  for(;;){
    printf("Welcome to the program!\n");
    printf("Enter the first number: ");
    inputOfInt(&firstNumber, &c1);
    printf("Enter the operator: ");
    scanf(" %c", &inputOperator);
    while(!validOperatorCheck(inputOperator)){
      inputOperator = ifOperatorNotValid();
    }
    int result;
    printf("Enter the second number: ");
    inputOfInt(&secondNumber, &c2);
    result = ofOperation(firstNumber, secondNumber, inputOperator);
    printf("The result is %d.\n", result);
  }
  return 0;
}

