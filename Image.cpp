#include "Image.h"

namespace org::carte
{

	Image::Image(const std::wstring &imageName)
	{
		this->url = imageName;
	}

	void Image::print()
	{
		std::wcout << L"Image with name: " << url << std::endl;
	}

	void Image::add(std::shared_ptr<Element> element)
	{

	}

	void Image::remove(std::shared_ptr<Element> element)
	{

	}

	std::shared_ptr<Element> Image::get()
	{
		return nullptr;
	}
}
