#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

#include <mypath.h>

int main(int argc, char **argv)
{
    char path[255] = { 0 };
    char mylist[255] = { 0 };
    int rez=0;
    //opterr=0;
    while ( (rez = getopt(argc,argv,"f:h")) != -1){
        switch (rez){
        case 'f': //printf("folder is \"f = %s\".\n",optarg);
                  strcpy(path, optarg);
                  print_dir_contents(path);
                  break;
        case 'h': printf("Usage: myls OPTION\n");
                  printf("  -f Specify folder\n");
                  printf("  -h This help text\n");
                  printf("Example: %s -f /tmp\n",argv[0]);
                  return 0;
        case '?': printf("Unknown argument: %s Try -h for help\n", argv[optind-1]);
                  return 1;
        };
    };

    //if (argc < 2) {
        //printf("main: error: please input path\n");
    //}
    //else {
        //printf("path = %s\n", argv[0]);
        //path = "/home";
    //
    //print_dir_contents(path);
    //}

    return 0;
}
