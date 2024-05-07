import java.util.Scanner;

class Array {
  int[][] arr;

  Array(int[][] arr) {
    this.arr = arr;
  }

  public void printSum() {
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
      for (int j = 0; j < arr[i].length; j++) {
        sum += arr[i][j];
      }
    }
    System.out.println("sum: " + sum);
  }
}

public class Main {
  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);

    int rows = scanner.nextInt();
    int cols = scanner.nextInt();

    int[][] arr = new int[rows][cols];

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        arr[i][j] = scanner.nextInt();
      }
    }

    Array array = new Array(arr);
    array.printSum();
  }
}
