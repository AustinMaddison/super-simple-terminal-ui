#include <iostream>
#include <string>

class ui {
private:
  static int DEFAULT_WIDTH;
  static std::string DEFAULT_VERTICAL_CHAR;

public:
  static std::string repeatChar(std::string c, int repeatNum) {
    std::string s{};

    for (int i = 0; i < repeatNum; i++)
      s.append(c);

    return s;
  }

  static std::string header(const char *title, int width = DEFAULT_WIDTH) {
    std::string s{};
    int title_len = ((std::string)title).length();
    int tailing_len = (width - title_len) / 2;

    s.append(repeatChar(DEFAULT_VERTICAL_CHAR, width));
    s.append(title);
    s.append(repeatChar(DEFAULT_VERTICAL_CHAR, width));

    return s;
  }
};

std::string ui::DEFAULT_VERTICAL_CHAR = "■";
int ui::DEFAULT_WIDTH = 20;

int main() {
  std::cout << ui::header("TITLE") << std::endl;
  return 0;
}
