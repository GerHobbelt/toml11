#include <toml.hpp>

int read_a(const toml::table&);

#if defined(BUILD_MONOLITHIC)
#define main    toml11_multiple_translation_units_test_main
#endif

extern "C"
int main()
{
    const std::string content("a = 0");
    std::istringstream iss(content);
    const auto data = toml::parse(iss, "test_multiple_translation_unit.toml");
    return read_a(toml::get<toml::table>(data));
}
