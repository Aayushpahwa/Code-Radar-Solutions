// Your code here...
int fibonacciSeries(int n){
    int fibnm = fibonacciSeries(n-1);
    int fibnmt = fibonacciSeries(n-2);
    int fibn= fibnm+fibnmt;
    
    printf("%d ", fibn)

}