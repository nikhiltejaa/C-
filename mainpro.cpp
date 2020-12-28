#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2;      //1
    int *ptr1,*ptr2;    //2
    int product;              //3
    cout << "Please enter the value to num1: "<< endl;    //4
    cin>>num1;                           //5
    cout << "Please enter the value to num2: "<< endl;       //6
    cin>>num2;                            //7
    ptr1=&num1;                                      //8
    ptr2=&num2;
    product=*ptr1 * *ptr2;                                 //10
    cout<<"Product of the two integer values is: "<<product;  //11
    getch();
    return 0;
    return 0;
}
