#pragma once

#include "Section.h"
#include "Author.h"
#include "Element.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>

namespace org::carte
{

	

	class Book : public Section
	{
	public:
		std::vector<std::shared_ptr<Author>> authors;
		std::vector<std::shared_ptr<Element>> content;


		Book(const std::wstring &title);


		virtual void addAuthor(std::shared_ptr<Author> author);
		virtual void addContent(std::shared_ptr<Element> element);

		void print() override;

	protected:
		std::shared_ptr<Book> shared_from_this()
		{
			return std::static_pointer_cast<Book>(Section::shared_from_this());
		}
	};

}
