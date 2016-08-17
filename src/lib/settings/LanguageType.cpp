#include "settings/LanguageType.h"

std::string languageTypeToString(LanguageType t)
{
	switch (t)
	{
	case LANGUAGE_C:
		return "C";
	case LANGUAGE_CPP:
		return "C++";
	case LANGUAGE_JAVA:
		return "Java";
	}
	return "unknown";
}

LanguageType stringToLanguageType(std::string s)
{
	if (s == "C")
	{
		return LANGUAGE_C;
	}
	else if (s == "C++")
	{
		return LANGUAGE_CPP;
	}
	else if (s == "Java")
	{
		return LANGUAGE_JAVA;
	}
	return LANGUAGE_UNKNOWN;
}