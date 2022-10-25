#pragma once

#include "Element.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>

namespace org::carte
{

	

	class Section : public std::enable_shared_from_this<Section>, public Element
	{
	public:
		std::wstring title;
		std::vector<std::shared_ptr<Element>> children;

		Section(const std::wstring &title);


		void print() override;

		void add(std::shared_ptr<Element> element) override;

		void remove(std::shared_ptr<Element> element) override;

		std::shared_ptr<Element> get() override;
	};

}
