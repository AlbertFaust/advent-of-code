#include <iostream>
#include <fstream>
using namespace std;

int floorNum(char* array){
	int fl;
	for(int i = 0; array[i] != '\0'; i++){
		if(array[i] == '(')
			fl++;
		else if(array[i] == ')')
			fl--;
	}
	return fl;
}
int main(){
	int size = 9001; //want to make a new solution without hardcoded int
	char* array = new char[size];
	ifstream fin("input.txt");
	int position = 0;
	
    if(fin.is_open())
    {
		while(!fin.eof() && position < size)
        {
        	fin.get(array[position]);
            position++;
        }
        array[position-1] = '\0';
	}
	cout << floorNum(array) << endl;
}
