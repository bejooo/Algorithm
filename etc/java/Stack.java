package stack;

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Stack {
      
        private int top = -1;
        private Object[] stack;
        private int size = 0;
          
        public Stack(int size) {
            //사이즈 만큼 스택 생성
            this.stack = new Object[size];
	    this.size = size;
        }
      
        public void push(Object element) {
              
            if (top >= stack.length) { // 사이즈를 넘어가면
                throw new StackOverflowError();
            }
              
            stack[++top] = element;
        }
          
        public Object pop () {
              
            if (top == -1) { // 데이터 없음
                throw new StackUnderflowError();
            }
             
            return stack[top--];
        }
          
        public boolean isEmpty() {
            return top == -1 ? true : false;
        }
          
        public int getStackSize() {
            return size;
        }
          
        class StackUnderflowError extends RuntimeException {
              
        }
        
        public static void main(String[] args) {

        Stack s = new Stack(5);
        s.push(10);
        s.push(11);
        s.push(12);
        s.push(13);
        s.push(14);
        
        System.out.print("데이터 추출 순서 : ");
        for(int i=0;i<s.getStackSize();i++) {
            System.out.print(s.pop() + " ");
        }
        System.out.println("\n스택 isEmpty : " + s.isEmpty());
    }
          
}
