#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
/* headers em excessor por motivo de vários testes diferentes */

using namespace rapidjson;
using namespace std;

void output(const rapidjson::Document & document);

int main(void) {

	//char meuArray[] = "teste de json";

	/* cria o objeto como root */
	rapidjson::Document meuDocumento;

	/* coloca como objeto */
	meuDocumento.SetObject();

	/* nao entendi ao certo entao peguei um comentario da internet */
	// create a rapidjson array type with similar syntax to std::vector
	rapidjson::Value array(rapidjson::kArrayType);

	/* aloca memória quando o objeto requisitar */
	rapidjson::Document::AllocatorType& allocator = meuDocumento.GetAllocator();

	// chain methods as rapidjson provides a fluent interface when modifying its objects
	array.PushBack("hello", allocator).PushBack("world", allocator);

	/* cria as classes no array (creio que seja essa denominação) */
	meuDocumento.AddMember("hello", "world", allocator);
	meuDocumento.AddMember("number", 2, allocator);
	meuDocumento.AddMember("array", array, allocator);
	//meuDocumento.AddMember("string", meuArray, allocator);

	/* cria o objeto tipo JSON */
	rapidjson::Value object(rapidjson::kObjectType);
	object.AddMember("hello", "world", allocator);
	meuDocumento.AddMember("object", object, allocator);
	meuDocumento["object"]["hello"] = "world";

	output(meuDocumento);

	return 0;
}

void output(const rapidjson::Document & document) {
	// treats object types similar to std::map when querrying
	std::cout << document["hello"].GetString() << std::endl;
	std::cout << document["number"].GetInt() << std::endl;

	/* requires SizeType since the literal zero in C++ can mean a numeric type or a null pointer */
	std::cout << document["array"][rapidjson::SizeType(0)].GetString() << std::endl;
	std::cout << document["array"][1].GetString() << std::endl;
	std::cout << document["object"]["hello"].GetString() << std::endl;
	//std::cout << document["string"].GetString() << std::endl;
}
