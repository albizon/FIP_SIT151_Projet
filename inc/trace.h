#ifndef TRACE_H
#define TRACE_H

#include <stdio.h>
#include <time.h>

extern FILE *stdlog;


#define TRACE_LOG(message)               																									\
{																																			\
	time_t timestamp; 																														\
	struct tm * t; 																															\
	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	  	\
	timestamp = time(NULL);																													\
	t = localtime(×tamp);																													\
																																			\
																																			\
																																			\
	fprintf( stdlog,															                                       						\
			"%02u/%02u/%04u, %02u:%02u:%02u : %s (%s:%d) : %s\n",           				  												\
			t->tm_mday, t->tm_mon, 1900 + t->tm_year, t->tm_hour, t->tm_min, t->tm_sec, __FUNCTION__, __FILE__, __LINE__,(message));		\
	free(t)																																	\
}																																			\

void init_log(char* pathLog);

void close_log(void);

#endif
