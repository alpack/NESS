#include "rapidjson/stringbuffer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/document.h"
#include <iostream>

using namespace rapidjson;
using namespace std;

template <typename Writer>
void display (Writer& writer);

template <typename Document>
void changeDom(Document& d);

int main() {
    StringBuffer s;
    Document d;
    PrettyWriter<StringBuffer> writer(s);
    display(writer);
    cout << s.GetString() << endl;  // GetString() stringify the JSON

    /* código para alterar o documento */
    // d.Parse(s.GetString());
    // changeDom(d);
    // s.Clear();
    // d.Accept(writer);
    return 0;
}

template <typename Writer>
void display(Writer& writer) {
    writer.StartObject();  // write "{"
    writer.String("hello"); // write string "hello"
    writer.String("world");
    writer.String("t");
    writer.Bool(true);   // write boolean value true
    writer.String("f");
    writer.Bool(false);
    writer.String("n");
    writer.Null();        // write null
    writer.String("i");
    writer.Uint(123);     // write unsigned integer value
    writer.String("pi");
    writer.Double(3.1416); // write floating point numbers
    writer.String("a");
    writer.StartArray();  // write "["
    for (unsigned i = 0; i < 4; i++)
    writer.Uint(i);
    writer.EndArray();   // End Array "]"
    writer.EndObject();  // end Object "}"
}

template <typename Document>
void changeDom(Document& d) {
    Value& node = d["hello"];
    node.setString("c++");
    d["f"] = true;
    d["t"].SetBool(false);
}

/* CÓDIGO TEMPLATE QUE PEGUEI DO SITE https://codeflu.blog/2015/02/26/understanding-rapidjson/ *

/*
#include "rapidjson/stringbuffer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/document.h"
#include <iostream>

using namespace rapidjson;
using namespace std;

template <typename Writer>
void display(Writer& writer);

template <typename Document>
void changeDom(Document& d);

int main() {
 StringBuffer s;
 Document d;
 PrettyWriter<StringBuffer> writer(s);
 display(writer);
 cout << "Before Manupulation\n" << s.GetString() << endl ;
 d.Parse(s.GetString());
 changeDom(d);
 s.Clear();   // clear the buffer to prepare for a new json document
 writer.Reset(s);  // resetting writer for a fresh json doc
 d.Accept(writer); // writing parsed document to buffer
 cout << "After Manupulation\n" << s.GetString() << endl;
 }

template <typename Document>
void changeDom(Document& d){
Value& node = d["hello"];
node.SetString("c++");
d["f"] = true;
d["t"].SetBool(false);
}

template <typename Writer>
void display(Writer& writer){
 writer.StartObject();
 writer.String("hello");
 writer.String("world");
 writer.String("t");
 writer.Bool(true);
 writer.String("f");
 writer.Bool(false);
 writer.String("n");
 writer.Null();
 writer.String("i");
 writer.Uint(123);
 writer.String("pi");
 writer.Double(3.1416);
 writer.String("a");
 writer.StartArray();
 for (unsigned i = 0; i < 4; i++)
 writer.Uint(i);
 writer.EndArray();
 writer.EndObject();
}
*/
