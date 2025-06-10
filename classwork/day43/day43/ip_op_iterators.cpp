#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
	std::istream_iterator<int>inIt(std::cin);//begin of input stream
	std::istream_iterator<int>endIt;//end-0f-stream iterator
	std::vector<int>numbers(inIt, endIt);//reads until EOF(ctrl+Z)

	//vector<int>num={1,2,3};
	/*for (int n : numbers)
	{
		std::cout << n << " ";
	}*/
	std::ostream_iterator<int>outIt(std::cout, "|");//output with a space
	std::copy(numbers.begin(), numbers.end(), outIt);//write to output
	return 0;
}

