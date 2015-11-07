#include <iostream>
using namespace std;

class Array
{
public:
	Array(int num);   //constructor to get size of array
	void setValues(); //function to get array value
	void getValues(); //function to display array value
	void showMessage();
private:
	int* arrayList; //pointer to the array
	int sizeOfarray; //variable for the size of the array
};




Array :: Array(int num) //constructor defination
{
    sizeOfarray = num;
    arrayList = new int [num];
}

void Array :: setValues()
{
    for(int i = 0; i < sizeOfarray; i++)
    {
        cout<<"Enter the elements of the array"<<endl;
        cin>> this->arrayList[i];
    }
}

void Array :: getValues()
{
    for(int i = 0; i < sizeOfarray; i++)
    {
        cout<<"array elemets are "<<endl<<arrayList[i]<<endl;
    }
}


void Array :: showMessage()
{
	cout<<"Welcome to the array program"<<endl;
}


int main()

{

    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    Array obj(size);
    obj.setValues();
    obj.getValues();
    return 0;
}
