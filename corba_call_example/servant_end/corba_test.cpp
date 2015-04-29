

#include "src/AccessCorbaDef_Impl.h"

int main()
{
	{
		printf("start...\n");
		int a = 2;

		Base_Bus::AccessCorbaDef_Impl obj(6000, "my_first_obj");

		Sleep(5000);
		char c;
		while (scanf("%c", &c))
		{
			break;
		}
		printf("end.\n");
	}
	return 0;
}