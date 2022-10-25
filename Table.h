#pragma once

#include "Element.h"
#include <string>
#include <iostream>
#include <memory>

namespace org::carte
{

	class Table : public std::enable_shared_from_this<Table>, public Element
	{
	public:
		std::wstring something;

		Table(const std::wstring &title);

		void print() override;

		void add(std::shared_ptr<Element> element) override;

		void remove(std::shared_ptr<Element> element) override;

		std::shared_ptr<Element> get() override;
	};

}
