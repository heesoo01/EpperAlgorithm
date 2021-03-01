package sec01;
import java.util.*;
import java.util.LinkedList;

public class N개의작업공정 {
	public static int solution(int[] n, int [][] r, int goal) {
		int answer=0;
		int n_len=n.length; //공정의 개수 
		int [][] adj=new int[n_len][n_len]; //공정간의 관계
		int[] time = new int[n_len]; // 해당 공정의 수행시간
		int[] total = new int[n_len]; //각 공정의 최소시간
		int[] inDegree = new int[n_len]; //선수 공정의 개수
		
		System.arraycopy(n,  0, time, 0, n_len);//time배열에 n배열을 복사
		/*
		for(int i=0;i<n_len;i++)
			time[i]=n[i];
		*/
		for(int[] ints: r) {
			int X=ints[0]-1;
			int Y=ints[1]-1;
			adj[X][Y]=1;
			inDegree[Y]++;
		}
		/*
		for(int i=0;i<r.length;i++)
		*/
		
		LinkedList<Integer> queue = new LinkedList<Integer>();
		
		for(int i=0;i<n_len;i++) {
			if(inDegree[i] == 0) {//시작
				total[i]=time[i];
				queue.add(i);
			}
		}
		
		while(!queue.isEmpty()){
			int q=queue.poll();
			for(int i=0;i<n_len;i++) {
				if(adj[q][i]==1) {
					total[i]=Math.max(total[i], total[q]+time[i]);
					if(--inDegree[i]==0)
						queue.add(i);
				}
			}
		}
		
		return answer=total[goal-1];
		
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt(); //공정수
		int R=sc.nextInt(); //관계수
		int N []=new int [n];
		for(int i=0;i<n;i++) {
			N[i]=sc.nextInt();//공정에서 소요되는 시간
		}
		int Relation[][]=new int [R][2];
		for(int i=0;i<R;i++) {
			Relation[i][0]=sc.nextInt();
			Relation[i][1]=sc.nextInt();
		}
		int goal = sc.nextInt();
		System.out.println(solution(N,Relation,goal));
		
	}

}
