#include<iostream>
#include<cmath>

using namespace std;


/**
 *  Compute the sum of the geometric series: 
 *     sum_{k=0}^{n-1} (ar^k)
 *  Where a, r are real values, and n is an integer.
 *  https://www.mathsisfun.com/algebra/sequences-sums-geometric.html
 **/
double GeometricSum(double a, double r, int n) {
  if (n == 0){
    return 1;
  }else{
    return a*pow(r,n-1) + GeometricSum(a,r,n-1);
  }
}


int main() {
  double a = 1.0;
  double r = 0.5;
  int    n = 0;

  cout << endl << "Computing geometric series ar^k" << endl;
  cout << "  What is a? ";
  cin >> a;
  cout << "  What is r? ";
  cin >> r;
  cout << "  How many interations? ";
  cin >> n;
  cout << endl;
  
  cout << "The sum of that series is: " << GeometricSum(a,r,n)-1 << endl;

  return 0;
}
  
