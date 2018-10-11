#!/bin/bash
function testFunc()
{
    local_result='local value'
    echo "local_result: $local_result"
}
 
result=$(testFunc)
echo "outresult: $result"
