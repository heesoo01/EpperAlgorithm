package sec01;
import java.util.*;

public class 백만들기 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int [] numbers = new int [9];
		for(int i=0;i<9;i++) {
			numbers[i]=sc.nextInt();
		}
		solution(numbers);

	}
	
	public static void solution(int arr[]) {
		int i=0,j=0;
		int sum=0;
		for(i=0;i<8;i++) {
			for(j=i+1;j<9;j++) {
				sum=sum(arr)-arr[i]-arr[j];
				if(sum==100)
					break;
			}
		}
		if(sum!=100) {
			System.out.println("100을 만들 수 있는 7개 숫자가 없습니다.");
			return;
		}
		for(int k=0;k<arr.length;k++) {
			if(k==i-2 || k==j-2)
				continue;
			System.out.print(arr[k]+" ");
		}
	}
	public static int sum(int arr[]) {
		int sum=0;
		for(int i=0;i<arr.length;i++)
			sum+=arr[i];
		return sum;
	}

}
