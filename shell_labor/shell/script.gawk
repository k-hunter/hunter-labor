/*{*/
    /*text = "'s home directory is "*/
        /*print $1 text $6*/
/*}*/
/*{*/
    /*[>print "***********************************"<]*/
/*}*/

BEGIN {
print "the user and shells"
    print "UserID \t\t Shell"
    print "------- \t ------"
FS=":"

}

{
print $1 "      \t " $7

}

END {
print "========== The End ============="


}
