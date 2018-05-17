import java.util.Scanner;
  
//public class Main {
public class selectionSort {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
   
        int number;
        number = scan.nextInt();

		int array[] = new int[number];

        for (int i=0; i<number; i++) {
			array[i] = scan.nextInt();
		}

		int min, offset;
        for (int i=0; i<number-1; i++) {
			min = array[i];
			offset = i;
			for (int j=i+1; j<number; j++) {
				if (array[j] < min) {
					min = array[j];
					offset = j;
				}
			}
			int temp = array[i];
			array[i] = array[offset];	
			array[offset] = temp;	
			for (int k=0; k<number; k++) {
                System.out.printf("%d ",array[k]);
			}
            System.out.println("");
		}
    }
}
