/*
	1
*/
#define I "int open(const char *pathname, int flags, int mode);int dprintf(int fd, const char *format, ...);"
#define FT() int open(const char *pathname, int flags, int mode);int dprintf(int fd, const char *format, ...); int main(){dprintf(open("Grace_kid.c",2|64|512,0777),A,10,9,10,10,34,I,34,10,I,34,34,10,34,A,34,10);}
#define A "/*%c%c1%c*/%c#define I %c%s%c%c#define FT() %s int main(){dprintf(open(%cGrace_kid.c%c,2|64|512,0777),A,10,9,10,10,34,I,34,10,I,34,34,10,34,A,34,10);}%c#define A %c%s%c%cFT()"
FT()