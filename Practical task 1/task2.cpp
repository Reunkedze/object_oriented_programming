#include <iostream>
#include <cstdint>

using namespace std;

class RGBA {
	uint8_t m_red{ 0 };
	uint8_t m_green{ 0 };
	uint8_t m_blue{ 0 };
	uint8_t m_alpha{ 255 };

public:
	RGBA(uint8_t r, uint8_t g, uint8_t b, uint8_t a) : m_red(r), m_green(g), m_blue(b), m_alpha(a) {}
	void print() {
		cout << "red: " << m_red << endl << "green: " << m_green << endl << "blue: " << m_blue << endl;
	}
};

int main(int argc, const char** argv)
{
	RGBA color(30, 65, 50, 231);
	color.print();
	return 0;
}
