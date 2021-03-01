package sec01;
import java.util.*;

public class eQueen {
	static int N;
	static int MAX=40;
	static boolean isused1[]=new boolean[MAX];//���� ���� �����ϴ� ���� �����ϴ���
	static boolean isused2[]=new boolean[MAX];//��� �밢���� �����ϴ� ���� �����ϴ���
	static boolean isused3[]=new boolean[MAX];//�»� �밢���� �����ϴ� ���� �����ϴ���
	static int count=0;//�����ϴ� ��ġ ���� ����
	
	public static void solution(int level) {
		if(level == N) {
			count++;
			return;
		}
		for(int i=0;i<N;i++) {
			if(isused1[i]||isused2[i+level]||isused3[level-i+N-1])
				continue;
			isused1[i]=true;
			isused2[i+level]=true;
			isused3[level-i+N-1]=true;
			solution(level+1);
			isused1[i]=false;
			isused2[i+level]=false;
			isused3[level-i+N-1]=false;
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		N=sc.nextInt();
		int k=sc.nextInt(); //���� ����
		int x[][]=new int[k][2];//��ǥ
		for(int i=0;i<k;i++)
			for(int j=0;j<2;j++)
				x[i][j]=sc.nextInt();
		solution(0);
		System.out.println(count);
		sc.close();
	}

}
