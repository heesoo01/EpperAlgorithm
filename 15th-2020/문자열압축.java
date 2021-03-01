package sec01;
import java.util.*;

public class 문자열압축 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String input = sc.next();
		char arr[]=new char[input.length()];
		for(int i=0;i<input.length();i++)
			arr[i]=input.charAt(i);
		System.out.println(solution(arr));
		
	
	}
	
	public static char[] solution(char arr[]) {
		char answer[]=new char[arr.length];
		int i=0; int count=0;
		if(arr[0]=='1') {
			answer[i]='1'; i++;
		}
		for(int p=0;p<arr.length;p++) {
			count++;
			if(p==arr.length-1) {
				if(arr[p]==arr[p-1]) {
					answer[i]=(char)(64+count);
				}else {
					answer[i++]=(char)(63+count);
					answer[i]=(char)(64);
				}
				break;
			}
			if(arr[p]!=arr[p+1]) {
				answer[i]=(char)(64+count);
				i++;
				count=0;
			}
		}
		return answer;
	}

}
