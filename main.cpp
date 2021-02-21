#include <span>
#include <cstdio>

int main(int argc, char *argv[]) {

    std::span<char*, std::dynamic_extent> args(argv, argc);

    for (const auto *arg : args) {
        std::puts(arg);
    }

}