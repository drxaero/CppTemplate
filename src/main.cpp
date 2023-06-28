#include <icecream.h>
#include <boost/multiprecision/cpp_int.hpp>

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace boost::multiprecision;


static auto boost_product(long long A, long long B)
{
    return (int128_t)A * B;
}

int	main(void)
{
	write (1, "\n       ICECREAM\n\n", 18);
	write (1, "    [From lib base]\n\n", 21);
	base_milk();
	base_water();
	write (1, "\n    [From lib arom]\n\n", 22);
	arom_coco();
	arom_cherry();
	write (1, "\n    [From lib m]\n\n", 19);
	printf("m: pow(2,2) = %f\n\n", pow(2,2));

	{
		// two very very long integers are stored in two respective variables called first and second  and then multiplied with each other and stored in a variable of type big data integer type  prod and then their product is displayed as the output on the screen
		long long first = 123456789987654321;
		long long second = 987654321123456789;
		const auto prod = (int128_t)first * second;

		std::cout << "The product of the given two long long integers is:"
				  << boost_product(first, second)
				  << std::endl;
	}

	return EXIT_SUCCESS;
}
