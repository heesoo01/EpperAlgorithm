package sec01;
import java.util.*;

public class 재고없는날15 {
	public static int solution(int N, int M) {
		int res=0;
		while(true) {
			res++; N--;//하루 지나고 노트북이 하나 판매됨
			if(N==0&&res%M==0) {//노트북 재고가 0이고 입고되는 날이면
				N++; continue;//재고 1개 늘어남
			}else if(N==0){//재고가 없으면
				return res;//재고없는날 return해줌
			}
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int M=sc.nextInt();
		System.out.println(solution(N,M));
		sc.close();
	}

}
