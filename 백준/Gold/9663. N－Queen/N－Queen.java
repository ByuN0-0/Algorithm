import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static int[] arr;
    public static int N;
    public static int count = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        arr = new int[N];

        nQueen(0);
        System.out.println(count);
    }
    public static boolean isAvailable(int col){
        for (int i = 0; i < col; i++) {
            if (arr[col] == arr[i]){
                return false;
            }
            else if (Math.abs(arr[col] - arr[i]) == Math.abs(col - i)){
                return false;
            }
        }
        return true;
    }
    public static void nQueen(int depth){
        if (depth == N){
            count++;
            return;
        }
        for (int i = 0; i < N; i++) {
            arr[depth] = i;
            if (isAvailable(depth)){
                nQueen(depth + 1);
            }
        }
    }
}