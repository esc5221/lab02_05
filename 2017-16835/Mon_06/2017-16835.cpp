#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<int> ivec;
	int num = 0;
	int temp = 0;
	int i, j;
	while (cin >> num){
		ivec.push_back(num);
	}

	for (i = 0; i < ivec.size()-1; i++)
	{
		for (j = 0; j < ivec.size()-i-1; j++)
		{
			if (ivec[j] < ivec[j + 1])
			{
				temp = ivec[j];
				ivec[j] = ivec[j + 1];
				ivec[j + 1] = temp;
			}
		}
	}

	for (auto i : ivec) {
		cout << i << " ";
	}

	system("pause");
}

