#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int 	fd = open("input_file.txt", O_RDONLY);
    FILE	*fp = fdopen(fd, "r");
    struct stat	stat;
    int		sz;
    char	*buf;

    fstat(fd, &stat);
    sz = stat.st_size;
    buf = malloc(sz);

    printf("buffered: %s", fgets(buf, sz, fp));
    
    read(fd, buf, 11);
    printf("unbuffrd: %s", buf);

    printf("buffered: %s", fgets(buf, sz, fp));
    
    read(fd, buf, 11);
    printf("unbuffrd: %s", buf);

    return 0;
}
