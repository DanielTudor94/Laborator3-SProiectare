#include "Main.h"
#include "Book.h"
#include "Author.h"
#include "Section.h"
#include "Paragraph.h"
#include "Image.h"

namespace org::carte
{

	void Main::main(std::vector<std::wstring> &args)
	{
		std::shared_ptr<Book> noapteBuna = std::make_shared<Book>(L"Noapte buna, copii!");
		std::shared_ptr<Author> rpGheo = std::make_shared<Author>(L"Radu Pavel",L"Gheo");
		noapteBuna->addAuthor(rpGheo);
		std::shared_ptr<Section> cap1 = std::make_shared<Section>(L"Capitolul 1");
		std::shared_ptr<Section> cap11 = std::make_shared<Section>(L"Capitolul 1.1");
		std::shared_ptr<Section> cap111 = std::make_shared<Section>(L"Capitolul 1.1.1");
		std::shared_ptr<Section> cap1111 = std::make_shared<Section>(L"Subchapter 1.1.1.1");
		noapteBuna->addContent(std::make_shared<Paragraph>(L"Multumesc celor care ..."));
		noapteBuna->addContent(cap1);
		cap1->add(std::make_shared<Paragraph>(L"Moto capitol"));
		cap1->add(cap11);
		cap11->add(std::make_shared<Paragraph>(L"Text from subchapter 1.1"));
		cap11->add(cap111);
		cap111->add(std::make_shared<Paragraph>(L"Text from subchapter 1.1.1"));
		cap111->add(cap1111);
		cap1111->add(std::make_shared<Image>(L"Image subchapter 1.1.1.1"));
		noapteBuna->print();

	}
}
