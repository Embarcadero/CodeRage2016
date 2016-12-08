#include <vcl.h>
#include <windows.h>

#pragma hdrstop
#pragma argsused

#include <tchar.h>
#include <stdio.h>
#include <System.Classes.hpp>
#include <memory>
#include <algorithm>
#include <vector>

int _tmain(int argc, _TCHAR* argv[])
{
	auto printInt = [](int value) {
	  std::cout << value << std::endl;
	};
	auto printString = [](String value) {
	  std::wcout << value.c_str() << std::endl; // wcout - String is wide
	};

	// DynamicArray<T>::iterator
	// -------------------------
	// DynamicArray<T> is common, and many types are aliases of it
	System::DynamicArray<int> array { 1, 2, 3, 4, 5};
	std::cout << "Printing array: " << std::endl;
	// for_each:
	for_each(array.begin(), array.end(), printInt);

	// Modifying:
	std::random_shuffle(array.begin(), array.end());
	std::cout << "Printing array after shuffle: " << std::endl;
	for_each(array.begin(), array.end(), printInt);

	std::sort(array.begin(), array.end());
	// Range-based for loop:
	std::cout << "Printing array after sort: " << std::endl;
	for (auto i : array) {
		std::cout << i << std::endl;
	}

	// TRandomIterator<T>
	// ---------------
	// Most RTL types have a value return for operator [], including
	// TStringList. Can only access items by reference if [] is a reference
	// type. So, can't use iterator-> to access fields or modify, or use
	// modifying STL algorithms like std::sort
	std::unique_ptr<TStringList> sl(new TStringList(nullptr));
	sl->Add(L"One");
	sl->Add(L"Two");
	sl->Add(L"Three");

	std::cout << "Printing string list: " << std::endl;
	// Non-member begin() and end(); call on ptr directly
	std::for_each(begin(sl.get()), end(sl.get()), printString);

	// Won't compile:
	// "No viable 'begin' function available
	//for (auto it : *sl) { }
	// "No matching function for call to 'swap'"
//	 std::random_shuffle(begin(sl.get()), end(sl.get()));

	// TEnumerableIterator<T>
	// ----------------------
	// For all enumerable (GetEnumerator) containers
	// Read-only, forward-only. Non-member begin() and end(). So support
	// range-for, and non-modifying algorithms


	// Insertion iterators
	// -------------------
	// Can insert or remove new elements to copy to/from RTL and STL containers
	// System::back_inserter<T>(T *container)
	// System::front_inserter<T>(T *container)
	// System::make_inserter<T>(T *container, size_t place)

	std::vector<String> v { L"A", L"B", L"C" };
//	std::copy(v.begin(), v.end(), back_inserter(sl.get()));

	// Also copy_if:
	std::copy_if(v.begin(), v.end(), back_inserter(sl.get()),
		[](const String& str) { return str == L"C"; });

	std::cout << "vector copied to string list: " << std::endl;
	std::for_each(begin(sl.get()), end(sl.get()), printString);


    system("pause");
	return 0;
}
