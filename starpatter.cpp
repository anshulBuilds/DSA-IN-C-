//First pattern
/*
#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout << " * ";
    }
    cout << endl;
  }
}
*/

//Second pattern
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;

  for(int i=1;i<=number;i++){
    for(int j=1;j<=number;j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
*/

//Third pattern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  for(int i=1;i<=number;i++){
    for(char j = 'A';j<'A' + number ;j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
*/

//Fourth pattern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  int num = 1;
  for(int i=1;i<=number;i++){
    for(int j=1;j<=number;j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
*/

//FiFth pattern
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout <<"Enter the number: ";
  cin >> number;

  char ch ='A';
  for(int i=1;i<=number;i++){
    for(int j=1;j<=number;j++){
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}
*/

//Sixth Pattern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout <<"Enter the number: ";
  cin >> number;

  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << " * "; 
    }
    cout << endl;
  }
}
*/

//Seveth Pattern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  int num = 1;
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
*/

//Eight patern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << i << " ";
    }
    cout << endl;
  }
}
*/

//Nineth pattern
/*
#include<iostream>
using namespace std;
int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  char ch = 'A';
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << ch << " ";
      
    }
    cout << endl;
    ch++;
  }
}
*/

//Tenth pattern
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
*/

//Eleventh pattern
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;

  for(int i=1;i<=number;i++){
    for(int j=i+0;j>=1;j--){
      cout << j << " ";
    }
    cout << endl;
  }
}
*/

//Twelth pattern
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  int num = 1;
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}
*/

//Thirteenth pattern 
/*
#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;

  char ch = 'A';
  for(int i=1;i<=number;i++){
    for(int j=1;j<=i;j++){
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}
*/

//Fourteenth pattern

#include<iostream>
using namespace std;

int main(){
  int number;
  cout << "Enter the number: ";
  cin >> number;
  for(int i=1;i<=number;i++){
    for(int j=1;j<i;j++){
      cout << " ";
    }
    for(int k=i;k<=number;k++){
      cout << i;
    }
    cout << endl;
  }
  
}








