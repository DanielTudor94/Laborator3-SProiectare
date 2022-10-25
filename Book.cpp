#include "Book.h"

namespace org::carte
{
	

	Book::Book(const std::wstring &title) : Section(title)
	{
		this->authors = std::vector<std::shared_ptr<Author>>();
		this->content = std::vector<std::shared_ptr<Element>>();
	}

	void Book::addAuthor(std::shared_ptr<Author> author)
	{
		this->authors.push_back(author);
	};

	void Book::addContent(std::shared_ptr<Element> element)
	{
	   this->content.push_back(element);
	}

	void Book::print()
	{
		std::wcout << L"Book: " << title << L"\n" << std::endl;

		std::wcout << L"Authors: " << std::endl;
		for (int i = 0; i < authors.size(); i++)
		{
			authors[i]->print();
		}
		std::wcout << std::endl;

		for (int i = 0; i < content.size(); i++)
		{
			content[i]->print();
		}



	}
}
