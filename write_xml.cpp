#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <iostream>
 
const std::string XML = 
        "<file>"
          "<people>"
            "<person>"
              "<forename>Andrew</forename>"
              "<surname>Jones</surname>"
            "</person>"
            "<person>"
              "<forename>David</forename>"
              "<surname>Matthews</surname>"
            "</person>"
            "<person>"
              "<forename>Jason</forename>"
              "<surname>Perkins</surname>"
            "</person>"
          "</people>"
        "</file>";

using namespace std;


int main()
{
    using boost::property_tree::ptree;

    ptree pt1;

    read_xml("file_parse.xml",pt1);

    ptree pt2;
    ptree pt3;

    pt3.put("a.b","10");
    pt2.add_child("v",pt3);

    write_xml("chunon.xml",pt2);

    cout << "Jambabau";

    return 0;
}