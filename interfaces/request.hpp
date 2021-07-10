#ifndef NT_HTTP_SERVER_REQUEST_INTERFACE__
#define NT_HTTP_SERVER_REQUEST_INTERFACE__

#include <sstream>
#include <unordered_map>
#include <algorithm>

#include "file.hpp"

namespace nt { namespace http { namespace interfaces {


class Request
{
public:
    std::string                                           method;
    std::string                                           body;
    std::unordered_map<std::string, std::string>          headers;
    std::unordered_map<std::string, std::string>          post_data;
    std::string                                           uri;
    std::string                                           query_string;
    std::unordered_map<std::string, std::string>          query_data;
    std::unordered_map<std::string, std::string>          cookies;
    std::unordered_map<std::string, nt::interfaces::File> files;

public:
    Request() = default;
    virtual ~Request() = 0;

};

}}}

#endif /* NT_HTTP_SERVER_REQUEST_INTERFACE__ */
