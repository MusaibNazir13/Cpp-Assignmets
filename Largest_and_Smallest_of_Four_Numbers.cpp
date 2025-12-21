#include <iostream>
using namespace std;
// Largest and Smallest of Four Numbers
// part 1: Write a program to input four integers and determine both the largest 
// part 2: and the smallest number using nested if-else or conditional operator chaining.
    int largest;
    int smallest;

void nestIf(int arr[]){
      if (arr[0]>arr[1])
  {
    if (arr[0>arr[2]])
    {
        if (arr[0]>arr[3])
        {
            largest = arr[0];
        }else{
            largest=arr[3];
        }
        
    }else{
        if (arr[2]>arr[3])
        {
            largest = arr[2];
        }
        
    }
    
  }else{
    if (arr[1]>arr[2])
    {
        if (arr[1]>arr[3])
        {
            largest = arr[1]; 
        }else{
            largest = arr[3];
        }
        
    }else{
        if (arr[2]>arr[3])
        {
            largest=arr[2];
        }else{
            largest=arr[3];
        }
        
    }
    
  }
  
    
    cout <<"Largest among above four nums: "<<largest<<endl;
//45 21 12 12

    if (arr[0]<arr[1])
    {
        if (arr[1]<arr[2])
        {
            if (arr[2]<arr[3]){
                smallest = arr[2];
            }else{
                smallest = arr[3];
            }
            
        }else{
            if (arr[2]<arr[3])
            {
                smallest=arr[2];
            }else{
                smallest=arr[3];
            }
            
        }
        
    }else{
        if (arr[1]<arr[2])
        {
            if (arr[2]<arr[3])
            {
                smallest=arr[2];
            }else{
                smallest=arr[3];
            }
            
        }else{
            if (arr[2]<arr[3])
            {
                smallest=arr[2];
            }else{
                smallest=arr[3];
            }
            
        }
        
    }
        

    cout<<"Smallest among the above four nums: "<<smallest<<endl;
}

int main(){
    int arr[4];
    cout<<"Enter 4 numbers: ";  
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];  

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Your entered inputs are: "<<endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout<<"Num "<<i+1<<" : "<<arr[i]<<endl;
    }

    nestIf(arr);

    
}

