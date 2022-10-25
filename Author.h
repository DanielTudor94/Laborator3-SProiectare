#pragma once

#include "Book.h"
#include <string>
#include <iostream>
#include <memory>

namespace org::carte
{
	class Author : public std::enable_shared_from_this<Author>
	{
	public:
		std::wstring name;
		std::wstring surname;
		std::shared_ptr<Book> book;

		Author(const std::wstring &name, const std::wstring &surname);
		virtual void print();
	};

}
