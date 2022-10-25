#include "Author.h"

namespace org::carte
{

	Author::Author(const std::wstring &name, const std::wstring &surname)
	{
		this->name = name;
		this->surname = surname;
	};

	void Author::print()
	{
		std::wcout << L"Author: " << this->name << L" " << this->surname << std::endl;
	}
}
