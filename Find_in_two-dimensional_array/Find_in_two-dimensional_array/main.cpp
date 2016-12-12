#include <vector>
using namespace std;
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {

		int rowSize = array.size();
		int ColumnSize = array[0].size();

		for (int i=rowSize-1,j=0;(i>=0)&&(j<ColumnSize);)
		{
			if (target > array[i][j])
			{
				j++;
			}
			else if (target < array[i][j])
			{
				i--;
			}
			else
			{
				return true;
			}
		}

		return false;
	}
};

void main()
{
	Solution So;
	vector<vector<int> > array;
	array.reserve(5);
	for (int i = 0; i < 5; i++)
	{
		vector<int> myVec;
		myVec.reserve(10);   // 此时不能用[]访问元素 
		for (int i = 0; i < 10; i++)
		{
			myVec.push_back(i); //新元素这时才构造 
		}
		array.push_back(myVec);
	}
	bool aaa=So.Find(11, array);
	aaa;
	bool bb = aaa;


}