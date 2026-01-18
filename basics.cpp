/*
#include<iostream>
using namespace std;

int main(){
    int number;
    cout <<"Enter the number ";
    cin >> number;
    int sum = 0;
    int count=1;
    while(count<=number){
      sum = sum + count;
      count++;
    }
    cout << sum;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number ";
  cin >> number;
  if(number <= 1){
    cout << "it is not a prime number";
    return 0;
  }
  for(int i=2;i<number;i++){
      if(number % i == 0){                                //true -> 1 and fasle -> 0
        cout << "it is not a prime number";
        return 0;
      }
    }
  cout << "it is a prime number";
}
*/

/*
#include<iostream>
using namespace std;

int main(){
  int principla_amount;
  int rate;
  double time;
  cout << "Enter the principal amount: ";
  cin >> principla_amount;
  cout << "Enter the rate: ";
  cin >> rate;
  cout << "Enter the time: ";
  cin >> time;
  double simple_Interest = (principla_amount * rate * time)/100;
  cout << simple_Interest;

}
*/

/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  int fact = 1;
  for (int i=1;i<=number;i++){
    fact = fact * i;
  }
  cout << "The factorial of the number is " << fact;
}
*/

// #include<iostream>
// using namespace std;

// int main(){
  // int age = 25;
  // age = 30;
  // cout << age << endl;

  // float marks = 9.35;
  // int marks1 = (int)marks;
  // cout << marks1 << endl;

  // double marks2 = 4.64729379820830;
  // double num = marks2 ;
  // cout << num << endl;

  //   double x = 5.3455;
  //   int y = (int)x; 
  //   cout << y;
  //   return 0;

    // int a = 3;
    // float b = 3;
    // cout <<  a/b << endl;
    // cout <<  a % (int)b << endl;

    // cout << (3<3) << endl;  //fasle = 0
    // cout << (3<=3) << endl;   // true = 1
    // cout << (3>3) << endl;    //false =  0
    // cout << (3>=3) << endl;   //true = 1
    // cout << (3!=5) << endl;    //true = 1
    // cout << !(3==3 || 3!=5) << endl;   //true = 1
    // cout << (3==3) << endl;   //true = 1

//     int a = 5;
//     cout << a++ << endl;
//     cout << a;

// } 

// #include<iostream>
// using namespace std;

// int main(){
//   int number;
//   cout << "Enter the number";
//   cin >> number;
//   bool flag = false;
//   for(int i=2;i<=number;i++){
//     if(number % i == 0){
//       flag = true;
//       cout << i << endl;
//       continue;
//     }
//   }
//   if(!flag){
//     cout << "nothing print";
//   }  
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//   char ch;
//   cout << "Enter the character: ";
//   cin >> ch;
//   if(ch>=(int)'A' && ch <=(int)'Z'){
//     cout << "the character is uppercase";
//   }
//   else{
//     cout << "the character is lowercase";
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){
//   int number;
//   cout << "Enter the number ";
//   cin >> number;
//   int start = 1;
//   while(start<=number){
//     cout << start << " ";
//     start++;
//   }
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int sum = 0;
//     for(int i=0;i<50;i++){
//       sum+=i;
//       if(i==5){
//       break;
//     }
//   }
//   cout << "sum is " << sum;
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout << "Enter the number ";
//   cin >> n;
//   int sum = 0;
//     for(int i=1;i<=n;i++){
//       if(i%2!=0){
//         cout << i << " ";
//         sum += i;
//       }
//     }
//     cout << endl;
//     cout << "Odd number sum is: " << sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout <<"Enter the number: ";
//     cin >> number;
//     bool isprime = true;
//     if(number <= 1){
//       isprime = false;
//     }
//     for(int i=2;i*i<=number;i++){    optimized solution 
//       if(number % i == 0){
//         isprime = false;
//         break;
//       }
//     }
//     if(isprime){
//       cout << "Prime";
//     }
//     else{
//       cout << "Not prime";
//     }
// }

#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;

  int fact = 1;
  for(int i=1;i<=number;i++){
    fact = fact * i;
  }
  cout << "factorial of the number is: "  << fact;

}
