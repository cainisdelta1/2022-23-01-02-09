#include <iostream>

int main() {
  int a[3] = { 1, 2, 3};
  int * pa = a;

  std::cout << "a = " << a << std::endl;
  std::cout << "pa = " << pa << std::endl;
  std::cout << std::endl << std::endl;

  //pointer arithmetic (++, --, +, -)

  //pointer comparison
  int n1 = 100;
  int n2 = 100;
  if(n1 == n2)
  {
    std::cout << "n1 is equal to n2" << std::endl;
  }

  int * pn1 = &n1;
  int * pn2 = &n2;
  std::cout << "pn1 = " << pn1 << std::endl;
  std::cout << "pn2 = " << pn2 << std::endl;

  // pointer comparison
  if (pn1 == pn2)
  {
    std::cout << "pn1 == pn2" << std::endl;
  }

  // a value comparison
  if(*pn1 == *pn2)
  {
    std::cout << "*pn1 is equal to *pn2" << std::endl;
  }

  // always null your pointers...
  int * pnum = NULL;
  //std::cout << "*pnum = " << *pnum << std::endl; // very bad practice
  //*pnum = 999;
  //std::cout << "*pnum = " << *pnum << std::endl;
  
  if (pnum)
  {
    std::cout << "it is ok to use pnum" << std::endl;
  }
  else
  {
    std::cout << "do not use pnum!!!" << std::endl;
  }

  int n3 = 200;
  pnum = &n3;

  if (pnum)
  {
    std::cout << "it is ok to use pnum" << std::endl;
  }
  else
  {
    std::cout << "do not use pnum!!!" << std::endl;
  }

  std::cout << std::endl << std::endl;
  
  int score = 0;
  int * p_score = &score; 
  
  std::cout << "score = " << p_score << std::endl;
  std::cout << "score = " << score << std::endl;
  std::cout << "score = " << ++(*p_score) << std::endl;
  std::cout << "score = " << ++(*p_score) << std::endl;
  std::cout << "score = " << p_score << std::endl;
  std::cout << std::endl << std::endl;
  
  //a is an array of ints
  //pa is a pointer to a
  std::cout << "pa = " << pa << std::endl;
  std::cout << "*pa = " << *pa << std::endl;
  std::cout << "pa = " << ++pa << std::endl;
  std::cout << "*pa = " << *pa << std::endl;
  std::cout << "pa = " << ++pa << std::endl;
  std::cout << "*pa = " << *pa << std::endl;
  
  return 0;
}