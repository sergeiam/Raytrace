#ifndef ___INC_NANOCORE_STRING
#define ___INC_NANOCORE_STRING

#include <string>
#include <vector>

namespace NanoCore {

int          StrPatternMatch( const char * buffer, const char * match, ... );
std::wstring StrGetPath( std::wstring wFilename );
std::wstring StrGetFilename( std::wstring wPathname );
std::wstring StrGetExtension( std::wstring wFilename );
void         StrReplaceExtension( std::wstring & file, const wchar_t * newext );
std::wstring StrMbsToWcs( const char * str );
std::string  StrWcsToMbs( const wchar_t * str );
void         StrSplit( const char * str, const char * separators, std::vector<std::string> & result );
void         StrTrim( std::string & str );
void         StrLwr( std::string & s );

}
#endif