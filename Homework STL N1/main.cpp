#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

int main()
{
	std::string str = "Hello, world!";
	std::map<std::string, int>map;
	for (auto s : str)
	{
		std::string s1(1, s);
		map[s1] = 0;
	}
	for (auto s : str)
	{
		std::string s1(1, s);
		map[s1]++;
	}
	std::vector<std::pair<std::string, int>> map_copy;
	for (auto vec : map)
	{
		map_copy.push_back(vec);
	}
	std::sort(map_copy.begin(), map_copy.end(), [](auto first, auto second)
		{
			return first.second > second.second;
		});
	for (auto map : map_copy)
	{
		std::cout << map.first << ": " << map.second << std::endl;
	}
	return 0;
}