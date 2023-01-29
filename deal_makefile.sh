#!/bin/env bash
# remove all makefile
rm_makefile(){
    find . -name Makefile | grep -E -v "Demo"
}

# copy makefile
copy_makefile(){
    rm_makefile
    for n in $(ls | grep -E "^[0-9]" | paste -sd\ ); do
        cp ./Demo/Makefile ./"$n"/Makefile
    done
}

# Clean all *.o, *.out, *.d files
clean_all(){
    copy_makefile
    for m in $(ls | grep -E "^[0-9]" | paste -sd\ ); do
        cd ./"$m" ; \
        make clean; \
        cd ..
    done
}

# Make all projects
make_all(){
    copy_makefile
    for m in $(ls | grep -E "^[0-9]" | paste -sd\ ); do
        echo "$m"; \
        cd ./"$m" ; \
        make; \
        echo ''; \
        cd ..
    done
}