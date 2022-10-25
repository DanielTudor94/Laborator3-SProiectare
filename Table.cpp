#include "Table.h"

namespace org::carte
{

	Table::Table(const std::wstring &title)
	{
		this->something = title;
	}

	void Table::print()
	{
		std::wcout << something << std::endl;
	}

	void Table::add(std::shared_ptr<Element> element)
	{

	}

	void Table::remove(std::shared_ptr<Element> element)
	{

	}

	std::shared_ptr<Element> Table::get()
	{
		return nullptr;
	}
}
