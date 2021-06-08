#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction :: Fraction(){
  numerator=0;
  denominator=1;
}

Fraction :: Fraction(int num, int den){
  int cd;
  cd = std::gcd(num,den);
  numerator=num/cd;
  denominator=den/cd;
			
}
    
string Fraction :: formatVersion(){
  string formated = to_string(numerator) + "/" + to_string(denominator);
  return formated;
}

int Fraction :: getNumerator(){
  return numerator;
}

int Fraction :: getDenominator(){
  return denominator;
}

Fraction Fraction :: operator+(const Fraction& val){
  Fraction result(this->numerator*val.denominator + val.numerator*this->denominator,this->denominator*val.denominator);
  return result;
}

Fraction Fraction :: operator-(const Fraction& val){
  Fraction result(this->numerator*val.denominator - val.numerator*this->denominator,this->denominator*val.denominator);
  return result;
}

Fraction Fraction :: operator*(const Fraction& val){
  Fraction result(this->numerator*val.numerator,this->denominator*val.denominator);
  return result;
}

Fraction Fraction ::  operator/(const Fraction& val){
  Fraction result(this->numerator*val.denominator,this->denominator*val.numerator);
  return result;
}

string Fraction :: addSpaces(int spaces){
  string str_spaces;
  for(int i = 0;i<spaces;i++){
    str_spaces = str_spaces+" ";
  }
  string formated = str_spaces+to_string(numerator) + "/" + str_spaces+ to_string(denominator);
  return formated;
}

bool Fraction :: operator<(const Fraction& val){
  bool result;
  if(this->numerator*val.denominator < this->denominator*val.numerator){
    result = true;
  }
  else{
    result = false;
  }
  return result;
}
bool Fraction :: operator>(const Fraction& val){
  bool result;
  if(this->numerator*val.denominator > this->denominator*val.numerator){
    result = true;
  }
  else{
    result = false;
  }
  return result;
}
bool Fraction :: operator==(const Fraction& val){
  bool result;
  if(this->numerator*val.denominator == this->denominator*val.numerator){
    result = true;
  }
  else{
    result = false;
  }
  return result;
}

float Fraction::floatVersion(){
  float result;
  result = (float)numerator/denominator;
  return result;
}