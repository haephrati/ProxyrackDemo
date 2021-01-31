/*
	Proxyrack demo using C++:
	https://www.proxyrack.com/

	Developed by Michael Haephrati, Secured Globe, Inc.
	https://www.securedglobe.net

	January 2021

*/
#include "stdafx.h"
#include "proxyrack.h"
#include "utils.h"
wchar_t LOGFILENAME[1024]{ L"" };


// Function:	WriteLogFile
// Purpose:		Print a message to the log file and (in DEBUG) to the Console
int WriteLogFile(LPCWSTR lpText, ...)
{
	FILE *fp;
	CTime Today = CTime::GetCurrentTime();

	CAtlString sMsg;
	CAtlString sLine;
	va_list ptr;
	errno_t errCode;
	va_start(ptr, lpText);
	sMsg.FormatV(lpText, ptr);

	sLine.Format(L"%s: %s\n", (LPCTSTR)Today.FormatGmt(L"%d.%m.%Y %H:%M"), (LPCTSTR)sMsg);
	CStringA line = (CStringA)sMsg + "\n";
	try
	{
		errCode = _wfopen_s(&fp, LOGFILENAME, L"a,ccs=UTF-8");
		if (fp && (errCode == 0))
		{
			fwprintf(fp, L"%s\n", sLine.GetBuffer());

			// Added by BOZO
			sLine.ReleaseBuffer();

			if (fp->_Placeholder)
				fclose(fp);
		}
#ifdef _DEBUG
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
#else
		wprintf(L"%S\n", line.GetBuffer());
#endif
		if (hConsole)
		{
			WriteFile(
				hConsole,               // output handle 
				line.GetBuffer(),       // prompt string 
				line.GetLength(),		// string length 
				NULL,					// bytes written 
				NULL);
		}
	}
	catch (...)
	{
		if (fp->_Placeholder)
			fclose(fp);

		return FALSE;
	}

	return TRUE;
}


