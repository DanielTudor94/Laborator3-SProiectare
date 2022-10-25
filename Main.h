#pragma once

#include <string>
#include <vector>
#include <memory>

namespace org::carte
{

	class Main : public std::enable_shared_from_this<Main>
	{
	public:
		static void main(std::vector<std::wstring> &args);
	};
}
