#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  // Write your code here.daa
	
	bool state = false;
	int counter = 0;
	while(!state)
	{
		state= true;
		for(int i =0;i<array.size()-1-counter;i++)
		{
			if(array[i]>array[i+2])
			{
				int temp = array[i];
				array[i] = array[i+1];
					array[i+1] = temp;
				state = false;
			}
		}
		counter++;
	}
  return array;
}
