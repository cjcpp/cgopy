#ifndef CGOPY_COLOR_TEXT_HPP
#define CGOPY_COLOR_TEXT_HPP

#include <string>
#include <fmt/format.h>

namespace cgopy {

class color_text {
 public:
  static std::string black(const std::string& text) {
    return fmt::format("\033[30m{}\033[0m", text);
  }

  static std::string red(const std::string& text) {
    return fmt::format("\033[31m{}\033[0m", text);
  }

  static std::string green(const std::string& text) {
    return fmt::format("\033[32m{}\033[0m", text);
  }

  static std::string yellow(const std::string& text) {
    return fmt::format("\033[33m{}\033[0m", text);
  }

  static std::string blue(const std::string& text) {
    return fmt::format("\033[34m{}\033[0m", text);
  }

  static std::string magenta(const std::string& text) {
    return fmt::format("\033[35m{}\033[0m", text);
  }

  static std::string cyan(const std::string& text) {
    return fmt::format("\033[36m{}\033[0m", text);
  }

  static std::string white(const std::string& text) {
    return fmt::format("\033[37m{}\033[0m", text);
  }

  static std::string bold_black(const std::string& text) {
    return fmt::format("\033[1m\033[30m{}\033[0m", text);
  }

  static std::string bold_red(const std::string& text) {
    return fmt::format("\033[1m\033[31m{}\033[0m", text);
  }

  static std::string bold_green(const std::string& text) {
    return fmt::format("\033[1m\033[32m{}\033[0m", text);
  }

  static std::string bold_yellow(const std::string& text) {
    return fmt::format("\033[1m\033[33m{}\033[0m", text);
  }

  static std::string bold_blue(const std::string& text) {
    return fmt::format("\033[1m\033[34m{}\033[0m", text);
  }

  static std::string bold_magenta(const std::string& text) {
    return fmt::format("\033[1m\033[35m{}\033[0m", text);
  }

  static std::string bold_cyan(const std::string& text) {
    return fmt::format("\033[1m\033[36m{}\033[0m", text);
  }

  static std::string bold_white(const std::string& text) {
    return fmt::format("\033[1m\033[37m{}\033[0m", text);
  }
};

}  // namespace cgopy

#endif  // CGOPY_COLOR_TEXT_HPP