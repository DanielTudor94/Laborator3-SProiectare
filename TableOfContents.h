#pragma once

#include "Element.h"
#include <string>
#include <iostream>
#include <memory>

namespace org::carte
{

	class TableOfContents : public std::enable_shared_from_this<TableOfContents>, public Element
	{
	public:
		std::wstring something;
		void print() override;

		void add(std::shared_ptr<Element> element) override;

		void remove(std::shared_ptr<Element> element) override;

		std::shared_ptr<Element> get() override;
	};

}
