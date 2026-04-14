#include <iostream>
#include <string>
#include <regex>
#include <math.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    const unsigned int nMaxOctDigits = static_cast<unsigned int>(ceil(log2(UINT32_MAX)/3));
    const std::regex oRegEx("^[0-7]+$");
    long long nOctPower = 1L;
    long long nDecNum = 0L;
    std::string strLine;
    system("cls");
    std::cout << "Input an octal number\r\n";
    std::getline(std::cin, strLine);
    unsigned int nStrLen = static_cast<unsigned int>(strLine.length());
    bool bIsRightString = (nStrLen <= nMaxOctDigits) && (std::regex_match(strLine, oRegEx));
    if (!bIsRightString)
    {
        std::cout << "Wrong octal number format!!!\r\n";
        std::cin.get();
        return 0;
    }
    for (unsigned int i = 0; i < nStrLen; i++)
    {
        unsigned int nOctDigit = strLine[nStrLen - 1 - i] - '0';
        nDecNum += (nOctDigit * nOctPower);
        nOctPower *= 8L;
    }
    std::cout << "The decimal equivalent of the octal number "
              << strLine << " is: " << nDecNum << "\r\n";
    std::cin.get();
    return 0;
}
