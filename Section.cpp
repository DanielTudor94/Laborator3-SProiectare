#include "Section.h"

namespace org::carte
{
	

	Section::Section(const std::wstring &title)
	{
		this->title = title;
		this->children = std::vector<std::shared_ptr<Element>>();
	}

	void Section::print()
	{
		std::wcout << title << std::endl;
		for (int i = 0; i < children.size(); i++)
		{
			children[i]->print();
		}
	}

	void Section::add(std::shared_ptr<Element> element)
	{
		this->children.push_back(element);
	}

	void Section::remove(std::shared_ptr<Element> element)
	{

	}

	std::shared_ptr<Element> Section::get()
	{
		return nullptr;
	}
}
