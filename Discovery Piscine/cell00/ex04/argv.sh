argv=("$@")
if [ $# = 0 ]
then
	echo 'No arguments supplied'
else

	for i in {0..2..1}
	do
		if [ $# -gt $i ]
		then
			echo ${argv[i]}
		fi
	done
fi
