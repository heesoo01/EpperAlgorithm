package sec01;
import java.util.*;

public class 도서관예약 {
	
	public static int solution(int s[], int s_len,int e[],int e_len) {
		int answer=0, N=s_len;
		int i,j,tmp,e1=-1, e2=-1;
		
		for(i=0;i<N;i++) {
			for(j=0;j<N-1;j++) {
				if((e[j]>e[j+1])||(e[j]==e[j+1]&&s[j]>s[j+1])) {
					tmp=s[j];
					s[j]=s[j+1];
					s[j+1]=tmp;
					tmp=e[j];
					e[j]=e[j+1];
					e[j+1]=tmp;
				}
			}
		}
		for(i=0;i<N;i++) {
			if(e1<=s[i]) {
				e1=e[i];
				answer++;
			}else if(e2<=s[i]) {
				e2=e1;
				e1=e[i];
				answer++;
			}
		}
		return answer;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int N=sc.nextInt();//학생 수
		int s[]=new int[N];
		int e[]=new int[N];
		for(int i=0;i<N;i++)
			s[i]=sc.nextInt();
		for(int i=0;i<N;i++)
			e[i]=sc.nextInt();
		System.out.println(solution(s,s.length,e,e.length));

	}

}
