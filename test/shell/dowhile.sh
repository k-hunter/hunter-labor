#!/bin/bash
show_process_bar()
{
    touch stop_processbar_flag.txt 
    stop_processbar_flag="damn_it_stop_now"
    while [[ "$stop_processbar_flag" != "$(cat stop_processbar_flag.txt)" ]];
    do 
        sleep 0.1
        echo -n "|"
    done
}

show_process_bar
