#include "Arduino.h"
#include "TerminalSerial.h"

using namespace std;

TerminalSerial Serial;

TerminalSerial::TerminalSerial()
{
}

void TerminalSerial::begin(unsigned long, uint8_t)
{
}

void TerminalSerial::end()
{

}

/* we read a char at the time to avoid reading all in one go.
 *
 */
int TerminalSerial::available(void)
{
    return 0;
}

int TerminalSerial::peek(void)
{
    return 0;
}
int TerminalSerial::read(void)
{

    return 0;

}

int TerminalSerial::availableForWrite(void)
{
	return 1000;
}

void TerminalSerial::flush(void)
{
}

size_t TerminalSerial::write(uint8_t val)
{
	char mychar=val;
    cout << mychar;
    cout.flush();
	return 1;
}

size_t TerminalSerial::write(const uint8_t *buffer, size_t size)
{
    cout.write((const char *)buffer,size);
    cout.flush();
	return size;
}

