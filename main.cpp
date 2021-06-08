#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction fraction_array[100];

int numFraction = 0;

void CreateArrayFraction();
void SeeArray();
void AddArray();
void MultiplyArray();
void SubstractArray();
void DivideArray();
void CompareFractions();
bool menu();

int main() {
  while (true){
    bool stop;
    stop=menu();
    if (stop == true){
      break;
    }
  }

  return 0;
}

bool menu(){
  #define RED  "\033[91m" 
  #define RESET   "\033[0m"
  cout << endl << "------------MENU------------------"<<endl<<endl;
  cout<<"1. Create an array of fractions to manipulate"<<endl;
  cout<<"2. Add the array"<<endl;
  cout<<"3. Substract the array"<<endl;
  cout<<"4. Multiply the array"<<endl;
  cout<<"5. Divide the array"<<endl;
  cout<<"6. Compare two fractions"<<endl;
  cout<<"7. Exit"<<endl;
  int op;
  cin >> op;
  switch (op){
    case 1:
      CreateArrayFraction();
      SeeArray();
      break;
    case 2:
      AddArray();
      break;
    case 3:
      SubstractArray();
      break;
    case 4:
      MultiplyArray();
      break;
    case 5:
      DivideArray();
      break;
    case 6:
      CompareFractions();
      break;
    case 7:
      return true;
      break;
  }
  return false;
}


void CreateArrayFraction(){
  cout << "Let´s start by inputing the length of the array of fractions you want to create: \n";
  cin >> numFraction;
  for (int i = 0; i < numFraction; i++) {
    int num, den;
    cout <<"Enter a numerator \n";
    cin >> num;
    cout <<"Enter a denominator \n";
    cin >> den;
    fraction_array[i] = Fraction(num,den);
  }
}

void SeeArray(){
  cout<<endl<<"Array created = ("<<fraction_array[0].formatVersion();
  for (int i = 1; i < numFraction; i++) {
    cout<<","<<fraction_array[i].formatVersion();
  }
  cout<<")";
}

void AddArray(){
  Fraction result;
  result = fraction_array[0];
  for (int i = 1; i < numFraction; i++) {
    result = result+fraction_array[i];
  }
  cout <<endl<< "Adding the array gives: " << "\n" << " Decimial notation:"<<result.floatVersion()<< "\n"<<" Fraction notation:"<<result.formatVersion()<< "\n";
}

void SubstractArray(){
  Fraction result;
  result = fraction_array[0];
  for (int i = 1; i < numFraction; i++) {
    result = result-fraction_array[i];
  }
  cout <<endl<< "Substracting the array gives: " << "\n" << " Decimial notation:"<<result.floatVersion()<< "\n"<<" Fraction notation:"<<result.formatVersion()<< "\n";
}

void MultiplyArray(){
  Fraction result;
  result = fraction_array[0];
  for (int i = 1; i < numFraction; i++) {
    result = result*fraction_array[i];
  }
  cout <<endl<<"Multiplying the array gives: " << "\n" << " Decimial notation:"<<result.floatVersion()<< "\n"<<" Fraction notation:"<<result.formatVersion()<< "\n";
}

void DivideArray(){
  Fraction result;
  result = fraction_array[0];
  for (int i = 1; i < numFraction; i++) {
    result = result/fraction_array[i];
  }
  cout << endl<< "Dividing the array gives: " << "\n" << " Decimial notation:"<<result.floatVersion()<< "\n"<<" Fraction notation:"<<result.formatVersion()<< "\n";
}

void CompareFractions(){
  int num, den, num2, den2;
  cout<<"Enter the numerator of the first fraction:";
  cin >> num; 
  cout<<"Enter the denominator of the first fraction:";
  cin >> den;
  cout<<"Enter the numerator of the second fraction:";
  cin >> num2;
  cout<<"Enter the denominator of the second fraction:";
  cin >> den2;
  Fraction x(num,den);
  Fraction y(num2,den2);
  bool z;
  cout<<endl<<" "<<x.formatVersion()<<" > "<<y.formatVersion()<<endl;
  z = x>y;
  cout<<"  "<<boolalpha<<z<<endl;
  cout<<" "<<x.formatVersion()<<" < "<<y.formatVersion()<<endl;
  z = x<y;
  cout<<"  "<<boolalpha<<z<<endl;
  cout<<" "<<x.formatVersion()<<" = "<<y.formatVersion()<<endl;
  z = x==y;
  cout<<"  "<<boolalpha<<z<<endl;
}