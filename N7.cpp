//7.Գրել ֆունկցիա, որը ստանում է զանգված եւ տպում է զանգվածի տարրերը էկրանին ռեկուրսիվ տարբերակով։

#include <iostream>

void print(int*,int);

int main(){
int size;
std::cout<<"Enter the size of the array: ";
std::cin>>size;
int arr[size];
std::cout<<"Enter the elements of the array.";
for(int i=0;i<size;++i)
{
std::cin>>arr[i];
}
print(arr,size);
return 0;
}

 void print(int* arr,int size){
if(size<=0)
{return;}
print(arr,size-1);
std::cout<<arr[size-1];
}