#include <iostream>

using namespace std;

void print(int type,int Arr[],int arr_size,int sum1,int sum2)//here my function we pass type 1 then arr then the size of array then sum1 and 2 to save them
{
    for (int i=type; i<arr_size; i+=2)//to add all and put the into sum 1 type the method of jump
    {
        if (i<arr_size-1){
            sum1+=Arr[i];
            }
    }
    sum1+=Arr[arr_size-1];//we must add  the last element at array
    if (type==2)//after used the the second method compaire betwen sum2 and 1
    {
        if(sum2<=sum1)
            cout<<sum2<<endl;
        else
            cout<<sum1<<endl;
        return;
    }
    else
    {
        sum2=sum1;//sum2 act like a temp in the first type the jumps would be at sum2 in second at sum1
        print(type+1,Arr,arr_size,0,sum2);
    }
}
int main()
{
    int Arr[]= {0,3,80,6,57,10};
    int arr_size=sizeof (Arr)/sizeof(Arr[0]);//to know the size of array
    cout<<"the min cost is: ";
    print(1,Arr,arr_size,0,0);
    return 0;
}
