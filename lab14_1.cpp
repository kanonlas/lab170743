#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[], int N, double B[]){
    double sum = 0;
    for(int i = 0; i < N; i++ ){
    sum = A[i] + sum; 
}
    sum = sum/N;
    B[0] = sum;

   double sum5 = 0;

     for(int i = 0; i < N; i++ ){
    sum5 = (pow((A[i]), 2) - pow(sum, 2)) + sum5;
     }
    sum5 = sqrt(sum5/N);
     B[1] = sum5;
double sum2 = 1;
   for(int i = 0; i < N; i++ ){
        sum2 = A[i]*sum2;
    }
    B[2] = pow(sum2, 1.0/N);
   
    double sum3 = 0;
   for(int i = 0; i < N; i++ ){
        sum3 = (1/A[i]+sum3);
    }
    B[3] = N/sum3;

   double l = A[0] ,m = A[0];
   for(int i = 0; i < N; i++ ){
    if(A[i] > l){
        l = A[i];
    }
      if(A[i] < m){
       m = A[i];
   }
    B[4] = l;
    B[5] = m;
    

}    
}