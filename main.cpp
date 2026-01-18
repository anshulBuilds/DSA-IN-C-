//Q-1
/*
#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout <<"ENTER THE NUMBER: " << endl;
    cin >> number;
    if(number > 0){
      cout << "Positive number";
    }
    else if(number < 0){
      cout <<"Negative number";
    }
    else {
      cout << "Equal to Zero";
    }
}
*/

//Q-2
/*
#include<iostream>
using namespace std;

int main(){
    int number1;
    int number2;
    int number3;

    cout << "Enter the first number: " << endl;
    cin >> number1;
    cout << "Enter the second number: " << endl;
    cin >> number2;
    cout << "Enter the third number: " << endl;
    cin >> number3;


    if(number1 > number2){
      if(number1 > number3){
        cout << "First number is greatest " << number1 << endl;
      }
      else{
        cout << "Third number is greatest " << number3 << endl;
      }
    }
    else if(number2 > number3) {
      cout << "second number is greatest " << number2 << endl;
    }
    else{
      cout << "Third number is greatest " << number3 << endl;
    }
}
*/

//Q-3
/*
#include<iostream>
using namespace std;

int main(){
    int number;
    bool all = true;
    cout <<"Enter the number to check " ;
    cin >> number;
    if(number % 2 == 0){
      all = true;
    }
    else{
      all = false;
    }                                             //true = 1 and false = 0
    cout << all;

    return 0;

}
*/

//Q-4
/*
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character to find the ascii value: ";
    cin >> ch;

    cout << "the value of the character is " <<  int(ch); 
}
*/

//Q-5
/*
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char ch;
    cout <<"Enter the character: ";
    cin >> ch;
    char ch1 = tolower(ch);
    
    if(ch1 == 'a' || ch1 =='e'|| ch1 == 'i' || ch1 == 'o' || ch1 == 'u'){
      cout << "the entered character is a vowel" << endl;
    }
    else{
      cout << "It's a consonant";
    }
}
*/

//Q-6
/*
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character to be checked ";
    cin >> ch;

    char ch1 = tolower(ch);
    
    if(ch1 > 97 && ch1 <=122){
      cout << "It's an alphabet";
    }
    else{
      cout << "It's not an alphabet";
    }
}
*/
/*
//Q-7
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin,str);

    int length = 0;
    for(int i=0;i<str[i]!='\0';i++){
      length++;
    }
    cout << "The length of the string is " << length << endl;
}
*/

//Q-8
/*
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
  string str;
  cout <<"Enter the string ";
  getline(cin,str);
  int length = str.length();

  for(int i=0;i<length;i++){
      if(islower(str[i])){
        str[i] = toupper(str[i]);
      }
      else if(isupper(str[i])){
        str[i] = tolower(str[i]);
      }
  }
  cout << str << endl;
}
*/

//Q-9

#include<iostream>
#include<string>
using namespace std;

int main(){
  int vowel_count = 0;
  string str;
  cout << "Enter the string: ";
  getline(cin,str);

  int length = str.length();
  for(int i=0;i<length;i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] || 'o' || str[i] || 'u' ){
      vowel_count++;
    }
  }
  cout << "the number of vowels in  the string is " << vowel_count;
}