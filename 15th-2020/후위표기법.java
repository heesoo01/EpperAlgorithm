package sec01;
import java.util.*;

public class 후위표기법 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int m=sc.nextInt();//연산자, 피연산자 개수 합
		String str= sc.nextLine();
		solution(str);
		sc.close();
	}
	
	public class StackNode{
		int item;
		StackNode next;
	}
	
	public class LinkedStack implements Stack{
		StackNode top;
		
		public LinkedStack() {
			this.top=null;
		}

		@Override
		public boolean isEmpty() {
			// TODO Auto-generated method stub
			return (top==null);
		}

		@Override
		public void push(int item) {
			// TODO Auto-generated method stub
			StackNode node= new StackNode();
			node.item=item;
			node.next=top;
			top=node;
		}

		@Override
		public int pop() {
			// TODO Auto-generated method stub
			StackNode node=top;
			top=node.next;
			return node.item;
		}

		@Override
		public void delete() {
			// TODO Auto-generated method stub
			top=top.next;
		}

		@Override
		public int peek() {
			// TODO Auto-generated method stub
			return top.item;
		}
		
	}
	
	public static void solution(String postfix) {
		char testCh = ' ';
		int expSize = postfix.length();
		int num1=0, num2=0;
		LinkedStack stack = new LinkedStack();
		
		for(int i=0; i<expSize; i++){
			testCh = postfix.charAt(i);
			
			if(testCh=='+' || testCh=='-' || testCh=='*' || testCh=='/'){
				num2 = stack.pop();
				num1 = stack.pop();
				
				switch(testCh){
				case '+' :
					stack.push(num1+num2);
					break;
				case '-' :
					stack.push(num1-num2);
					break;
				case '*' :
					stack.push(num1*num2);
					break;
				case '/' :
					stack.push(num1/num2);
					break;
				}
			}else{
				stack.push(testCh-'0');
			}
		}
		
		System.out.println("결과값 : " + stack.pop());
		
	}

}
