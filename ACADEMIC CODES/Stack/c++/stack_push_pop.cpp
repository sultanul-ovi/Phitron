#include <iostream>
using namespace std;

int stack[100],i,j,choice=0,n = 10,top=-1;  


void push(int a)  
{  
    int val = a;      
    if (top == n )   
    printf("\n Overflow");   
    else   
    {  
        
        top = top + 1;   
        stack[top] = val; 
        printf("\n %d",stack[top]);  
    }   
}   

void pop ()   
{   
    if(top == -1)   
    printf("\n Underflow");  
    else{
        printf("\n %d",stack[top]);
        top = top -1; 
    } 

}  


void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("\n %d",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("\n []");  
    }  
} 

int main ()  
{   
    printf("\nInitial stack: "); 
    show();

    printf("\nStack After Pushing few elements: ");
    push(1);
    push(2);
    push(3);

    printf("\nPopped Elements are:"); 
    pop();
    pop();
    pop();

    printf("\nStack After Popping few elements: ");
    show();

}   
