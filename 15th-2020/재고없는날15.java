package sec01;
import java.util.*;

public class �����³�15 {
	public static int solution(int N, int M) {
		int res=0;
		while(true) {
			res++; N--;//�Ϸ� ������ ��Ʈ���� �ϳ� �Ǹŵ�
			if(N==0&&res%M==0) {//��Ʈ�� ��� 0�̰� �԰�Ǵ� ���̸�
				N++; continue;//��� 1�� �þ
			}else if(N==0){//��� ������
				return res;//�����³� return����
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
