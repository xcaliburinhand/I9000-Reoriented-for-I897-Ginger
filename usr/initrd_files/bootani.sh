#!/bin/sh
/system/bin/bootanimation &
ps | /bin/grep "com.android.systemui">/dev/null
Davcache="$(echo $?)"

while [ "$Davcache" = "1" ]
do
	ps | /bin/grep "com.android.systemui">/dev/null
	Davcache="$(echo $?)"
	echo "sleeping"		
	sleep 5
done
kill $!
