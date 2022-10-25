#include "Paragraph.h"

namespace org::carte
{

	Paragraph::Paragraph(const std::wstring &text)
	{
		this->text = text;
	}

	void Paragraph::print()
	{
		std::wcout << L"Paragraph: " << text << std::endl;
	}

	void Paragraph::add(std::shared_ptr<Element> element)
	{

	}

	void Paragraph::remove(std::shared_ptr<Element> element)
	{

	}

	std::shared_ptr<Element> Paragraph::get()
	{
		return nullptr;
	}
}
