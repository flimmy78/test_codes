
#include "stdio.h" 
#include "windows.h" 

void readFile(char* filePath)
{
	FILE* pf = fopen(filePath, "r");
	char buf[1024] = {0};
	while (fscanf(pf, "%s", buf) > 0)
	{
		printf("%s\n", buf);
	}
	fclose(pf);
}

void ListDir(char * lpPath) 
{ 
	char szFind[MAX_PATH], szFile[MAX_PATH]; 
	WIN32_FIND_DATA FindFileData; 

	strcpy(szFind, lpPath); 
	strcat(szFind, "\\*.*");
	HANDLE hFind = ::FindFirstFile(szFind, &FindFileData); 

	if(INVALID_HANDLE_VALUE == hFind) 
		return; 

	while(TRUE) 
	{ 
		if(FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) 
		{ 
			if(FindFileData.cFileName[0] != '.') 
			{ 
				strcpy(szFile, lpPath); 
				strcat(szFile, "\\"); 
				strcat(szFile, FindFileData.cFileName); 
				ListDir(szFile);
			} 
		} 
		else 
		{ 
			printf("%s\\%s\n", lpPath, FindFileData.cFileName);
			strcpy(szFile, lpPath); 
			strcat(szFile, "\\"); 
			strcat(szFile, FindFileData.cFileName); 
			readFile(szFile);
		} 

		if(!FindNextFile (hFind, &FindFileData) ) 
			break; 
	} 
}

void main() 
{ 
	char filepath[MAX_PATH] = ".\\TestDir"; 
	ListDir(filepath); 
}
