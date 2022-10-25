#pragma once

#include <memory>

namespace org::carte
{

	class Element
	{
	public:
		virtual void print() = 0;
		virtual void add(std::shared_ptr<Element> element) = 0;
		virtual void remove(std::shared_ptr<Element> element) = 0;
		virtual std::shared_ptr<Element> get() = 0;
	};

}
