#!/bin/bash

#-----------------------------------------------------------
#
# start Jimmy Choo Application
#
#-----------------------------------------------------------

echo '-> Jimmy Choo App Script'

dir=$(dirname $0)
cd $dir

echo '-> Starting Jimmy Choo Application'

PROCESS=JimmyChooShopWi

cd ../OpenFrameworks/JimmyChooShopWindowApp/bin/

amixer set PCM -- 100%

while true; do
	if pgrep $PROCESS
		then
			continue
		else
			echo '-> Starting JimmyChooShopWi process...'
			./JimmyChooShopWindowApp &
	fi
	sleep 10
done
