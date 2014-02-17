// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#include "superList.h"
#include <string>


class FileInfo : public IListItem
{
public:
    DWORDLONG	FileRefNo;
    DWORDLONG	ParentRefNo;
    DWORD		FileAttributes;
	FILETIME	createDate;
	FILETIME	modifyDate;
	FILETIME	lastAccessTime;
	int			fileSize;
	std::string Name;
	std::string NameUppered;
	std::string path;
	bool		pathSetted;

	FileInfo();
};
