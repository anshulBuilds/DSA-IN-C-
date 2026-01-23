/*
#include<iostream>
using namespace std;

int printhello(int a , int b){
  int sum = a  + b;
  cout << "Hello" << endl;
  return sum;
}

int main(){

  cout << printhello(12,13) << endl;
  cout<< printhello(1,5);
  return 0;
}
*/
/*
#include<iostream>
#include<iomanip>
using namespace std;

double SumOfNnumbers(double number){
  double sum = 0;
  for(double i=1;i<=number;i+= 1.0){
    sum += i;
  }
  return sum;
}

int main(){
  double number;

  cout << fixed << setprecision(2);
  cout << SumOfNnumbers(10.02) << endl;
  cout << "Enter the number: ";
  cin >> number;
  cout <<SumOfNnumbers(number);
  return 0;
}
*/

/*
#include<iostream>
using namespace std;

int MinofTwoNumber(int &number_first, int &number_second){
  if(number_first > number_second){
    return number_second;
  }
  else{
    return number_first;
  }
}

int main(){
  int number_first;
  int number_second;
  cout << "Enter the first number: ";
  cin >> number_first;
  cout << "Enter the second number: ";
  cin >> number_second;
  cout <<"Minimum Number is = " << MinofTwoNumber(number_first, number_second);
}
*/


//FACTORIAL USING FUNCTION
/*
#include<iostream>
using namespace std;

int Factorial(int number){
  int fact = 1;
    for(int i=1;i<=number;i++){
      fact *= i;
    }
    return fact;
}

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  cout << "Factorial of the number is = " << Factorial(number);
}
*/

//Pass By Value
/*
#include<iostream>
using namespace std;

int Sum(int &a, int &b){         //NOw its pass by reference if we removed '&' then its pass by value
  a = a+1;
  b+=1;
  return a+b;
}

int main(){
  int a = 10;
  int b = 20;
  cout << Sum(a,b) << endl;
  cout << a << endl;
  cout << b << endl;
}
*/

/*
#include<iostream>
using namespace std;
int change(int &x){         //pass by reference
  x = 2 * x;
  cout << "function vala x = " << x << endl;
}

int main(){
  int x = 5;
  change(x);
  cout << "Main vala x = " << x << endl;
}
  */


  //Calculate sum of digits of a number
/*
#include<iostream>
using namespace std;

int SumofDigits(int number){
  int sum = 0;
  int chotanumber = number;
  while(chotanumber>0){
    int remainder = chotanumber % 10;
    sum += remainder;
    chotanumber = chotanumber / 10;
  }
  
  cout << "Sum is = " << sum;
}

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  SumofDigits(number);
}
*/

//calculate ncr binomial coefficient for n and r
/*
#include<iostream>
using namespace std;

void binomialCoefficient(int number_n, int number_b){
  int fact_n = 1;
  int fact_r = 1;
  int fact_nr = 1;
  for(int i=1;i<=number_n;i++){
    fact_n = fact_n * i;
  }
  for(int j=1;j<=number_b;j++){
    fact_r *= j;
  }
  for(int k = 1;k<=(number_n-number_b);k++){
    fact_nr *= k;
  }
  int result = fact_n/(fact_r * fact_nr);
  cout << "Factorial of n = " << fact_n << endl;
  cout << "Factorial of r = " << fact_r << endl;
  cout << "Factorial of nr = " << fact_nr << endl ;
  cout << "Factorial of ncr is = " << result << endl;
}

int main(){
  int number_n;
  int number_r;
  cout  << "Enter the number for n factorial calculate = ";
  cin >> number_n;
  cout << "Enter the number for r factorial calculate = ";
  cin >> number_r;
  binomialCoefficient(number_n, number_r);
  
}
*/

//wap to check if a number is prime or not
/*
#include<iostream>
using namespace std;

void PrimeChecker(int number){
  bool isprimeall = true;
  if(number <= 1){
    isprimeall  = false;
  }
  for(int i=2;i*i<=number;i++){
    if(number % i == 0){
      isprimeall = false;
      break;
    }
  }
  if(isprimeall){
    cout << "found the prime number = " << number ;
  }
  else{
    cout << "Not prime";
  }
}

int main(){
  int number;
  cout <<"Enter the number: ";
  cin >> number;
  PrimeChecker(number);
}
*/

//prime number from 2 to n
#include<iostream>
using namespace std;

void PrimeNumberTwoToN(int number){           // 5
  for(int num = 2; num <= number; num++){    // 2<= 5 true    // 3<=5 true     // 4 <=5 true
    bool isprime = true;                      //all = true

    for(int i = 2; i * i <= num; i++){        // 2*2 = 4 <= 2 false vapas upar jayega   // 4<=3 false vapas upar jayega     //4<= 4true andar jayega 
      if(num % i == 0){                     // num = 4 so 4% 4 == 0 true is prime false 4 is not prime break
        isprime = false;
        break;
      }
    }

    if(isprime){
      cout << num << endl;                  // isprime → num
    }
  }
}

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;

  PrimeNumberTwoToN(number);                // cout remove
}












