package sec01;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Stack;
import java.util.Scanner;
 
public class ����ǥ���2 {
    private static Stack<Integer> numberStack = new Stack<>();
 
    public static void main(String[] args) {
    	Scanner sc= new Scanner(System.in);
    	String input=sc.next();
        char[] inputChars = input.toCharArray();
        
        for(int i=0; i<inputChars.length; i++) {
            char c = inputChars[i];
            
            // �ǿ������̸� ���ÿ� �߰�
            if(!isOperation(c)) {
                int num = Integer.parseInt(new Character(c).toString());
                numberStack.push(num);
            } 
            else {
                int num1 = numberStack.pop();
                int num2 = numberStack.pop();
                
                int result = 0 ;
                switch(c) {
                case '+' :
                    result = num2 + num1;
                    break;
                case '-' :
                    result = num2 - num1;
                    break;
                case '*' :
                    result = num2 * num1;
                    break;
                case '/' :
                    result = num2 / num1;
                    break;
                }
                numberStack.push(result);
            }
            
        }
 
        int result = numberStack.pop();
        System.out.println(result); 
    }
    
    /**
     * ������ ���� Ȯ��
     * @param c
     * @return
     */
    public static boolean isOperation(char c) {
        char[] operations = {'(', ')', '*', '+', '-', '/'};
        for(int i=0; i<operations.length; i++) {
            if(c == operations[i]) {
                return true;
            }
        }
        return false;
    }
}
 


