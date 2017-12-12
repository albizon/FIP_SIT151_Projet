#include "trace.h"



void init_log(char* pathLog)
{
	if(pathLog!=NULL)
	{
		stdlog = fopen(pathLog, "a");
	}
}

void close_log(void)
{
	fclose(stdlog);
}
