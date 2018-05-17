#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100000
#define boolean unsigned char
#define true 1
#define false 0
#include <math.h>// abs() fabs()

int stack[MAX_SIZE];
int top = -1;
void push (int e){
 stack[++top] = e;
}
int peek(){
 return stack[top];
}
int pop(){ 
 return stack[top--]; 
}

int main(int argc, char *argv[]) {
 
 char array[MAX_SIZE];
    scanf("%s", array);
    fflush(stdin);
int cnt = 0;
int i=0;
 while( array[i]=='(' || array[i]==')') 
 {
  if(array[i]=='('){
   push(i);
   
  } else { // ')'
  
   if( abs(peek()-i)==1){
    pop();
    cnt += top+1;
   
   } else { // not laser, stick
    pop();
    cnt += 1;
   }
  }
  i++;
 }
 
 printf("%d",cnt);
 return 0; 
}
