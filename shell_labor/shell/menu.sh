#!/bin/bash
function menu {
    clear 
    echo 
    echo -e "\t\t\tSys Admin Menu\n"
    echo -e " \t1 Display disk space"
    echo -e " \t2 Display logged on users"
    echo -e " \t3 display memory usage"
    echo -e " \t0 Exit Menu\n\n"
    echo -en "\t\t Enter option:\n "
    read -n 1 option
}

function diskspace {
    clear
    df -k
    #echo "thsi is where the diskspace command will go "
}

function whoseon {
    clear 
    who 
}

function memusage {

    clear
    cat /proc/meminfo

}

#main
#while [ 1 ]
#do
    #clear
    #menu
    #case $option in 
        #0)
            #break  ;;
        #1)
            #diskspace ;;
        #2)
            #whoseon ;;
        #3)
            #memusage ;;
        #*)
            #clear
            #echo "sorry wrong selection"
    #esac
    #echo -en "\n\n\t\t\tHit any key to continue"
    #read -n 1 line
#done
#clear




PS3="
1 diskspace 
2 whoseon
3 memusage
4 Exit  
Enter option: "
select option in "1111" "2222" "3333" "Exit"
do
    case $option in
        "1111")
            diskspace 
            echo "1\n" ;;
        "2222")
            whoseon 
            echo "2\n" ;;
        "3333")
            memusage 
            echo "3\n" ;;
        "Exit")
            break ;;

        *)
            clear 
            echo "sorry ........................."
    esac
done
