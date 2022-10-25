#include "TableOfContents.h"

namespace org::carte
{

	void TableOfContents::print()
	{
		std::wcout << this->something << std::endl;
	}

	void TableOfContents::add(std::shared_ptr<Element> element)
	{

	}

	void TableOfContents::remove(std::shared_ptr<Element> element)
	{

	}

	std::shared_ptr<Element> TableOfContents::get()
	{
		return nullptr;
	}
}
