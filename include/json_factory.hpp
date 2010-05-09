#ifndef JSON_FACTORY_HPP
#define JSON_FACTORY_HPP

#include "output_factory.hpp"
#include "json_writer.hpp"
#include "json_formatter.hpp"

/**
 * factory for JSON writers and parsers.
 */
class json_factory 
  : public output_factory {
public:
  json_factory();
  ~json_factory();
  json_writer &create_writer(boost::shared_ptr<output_buffer> &out, bool indent = true);
  json_formatter &create_formatter(cache<long int, changeset> &changeset_cache);

private:
  boost::shared_ptr<json_writer> writer;
  boost::shared_ptr<json_formatter> formatter;
};

#endif /* JSON_FACTORY_HPP */
