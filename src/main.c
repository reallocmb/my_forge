#include"my_forge/my_forge.h"
int main(int argc, char **argv)
{
    f_debug_memory_init(NULL, NULL, NULL);
    char *buffer = malloc(20 * sizeof(*buffer));

    f_debug_mem_print(0);

    return 0;
}
