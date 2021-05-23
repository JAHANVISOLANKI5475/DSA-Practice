#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array) {
if(array.empty())
{
    return{};
}

	int startindx = 0;
	int smallindx;
	while( startindx < array.size()-1)
	{
       smallindx = startindx;
		   for(int i = startindx+1;i<array.size();i++)
			 {
               if(array[smallindx]>array[i])
							 {
                         smallindx = i;
							 }
			 }
		swap(array[startindx],array[smallindx]);
		startindx++;
	}
	    return array;
}
