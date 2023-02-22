#include <stdio.h>
int sum(int test1, int test2);
int avg(int sum, int n);

int main(void) {
  // A C Program to calculate the total scores and average of 5 students in a Logical Test
  // Student 1
 int test1 = 80;
 int test2 = 68;
 int Student1 = sum(80, 68);
 int n = 2;


  printf("Student1 scored a total of %d\n", Student1);
  printf("average score for Student 1 is: %d\n", avg(Student1, n));
  
// Student 2
   test1 = 50;
   test2 = 70;
int Student2 = sum(50, 70);
  printf("Student2 scored a total of %d\n", Student2);
  printf("average score for Student 2 is: %d\n", avg(Student2, n));

// Student 3
  test1 = 80;
  test2 = 96;
  int Student3 = sum(60, 70);

  printf(" Student3 scored a total of %d\n", Student3);
  printf("average score for Student 3 is: %d\n", avg(Student3, n));
  
  // Student 4
   test1 = 74;
   test2 = 84;
  int Student4 = sum(74, 84);
  printf("Student 4 scored a total of %d\n", Student4);
  printf(" average score for Student 4 is: %d\n", avg(Student4, n));

  // Student 5
   test1 = 88;
   test2 = 96;
  int Student5 = sum(88,96);
  printf("Student 5 scored a total of %d\n", Student5);

  printf("average score for Student 5 is: %d\n", avg(Student5, n));

  }


int sum(int test1, int test2)
{
   return (test1 + test2);
}

int avg(int sum, int n)
{

  return (sum / n);
  
}
  