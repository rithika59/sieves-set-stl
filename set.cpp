#include<iostream>
#include<set>

int main()
{
	int n;
	std::set<int> s;
	std::set<int>::iterator it;
	std::cout<<"Enter the number upto which primes should be found: ";
	std::cin>>n;
	
	for(int i =2;i<=n;i++)
	{
		s.insert(i);
	}
//	it = s.begin();
	//while(it != s.end())
	for(it = s.begin();it != s.end();it++)
	{
		for(int j =2; j*(*it)<n;j++)
		{
			s.erase((*it)*j);
		}
	}
	std::cout<<"The primes less than "<<n<<" are : \n";
	for(it = s.begin();it != s.end();it++)
	{
		std::cout<<(*it)<<" ";
	}
	std::cout<<std::endl;

	return 0;
}
