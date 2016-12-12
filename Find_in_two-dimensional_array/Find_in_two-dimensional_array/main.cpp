#include <vector>
using namespace std;
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {

		int size = array.size();
		for (int i = size-1; i >=0; i--)
		{
			vector<int> myVec= array[i];
			if (myVec[0]==target)
			{ 
				return true;

			}
			else if (target>myVec[0])
			{
				int size2 = myVec.size();

				int low = 0;
				int high = size2 - 1;
				int mid = 0;

				while (low <= high)
				{
					mid = (low + high) / 2;

					if (myVec[mid] < target)
						low = mid + 1;
					else if (myVec[mid] > target)
						high = mid - 1;
					else
						return true;
				}


				for (int j = 0; j < size2; j++)
				{
					if (target == myVec[j])
					{
						return true;
					}
				}
			}
			else 
			{
				continue;
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
		myVec.reserve(100);   // 此时不能用[]访问元素 
		for (int i = 0; i < 100; i++)
		{
			myVec.push_back(i); //新元素这时才构造 
		}
		array.push_back(myVec);
	}
	bool aaa=So.Find(11, array);
	aaa;
	bool bb = aaa;


}