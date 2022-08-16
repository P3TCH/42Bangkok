check=$(lsblk | grep "lvm" | wc -l)
#!/bin/bash
wall	"	#Architecture: $(uname -a)
	#CPU physical: $(grep "physical id" /proc/cpuinfo | wc -l | uniq | wc -l)
	#vCPU physical : $(grep "processor" /proc/cpuinfo | wc -l)
	#Memory Usage: $(free -m | awk '$1=="Mem:" {print $3}')/$(free -m | awk '$1=="Mem:" {print $2}')MB ($(free -m | awk '$1=="Mem:" {printf("%d"), $3/$2*100}')%)
	#Disk Usage: $(df -Bm | grep '^/dev/' | grep -v '/boot$' | awk '{sum += $3} END {print sum}')/$(df -Bg | grep '^/dev/' | grep -v '/boot$' | awk '{gb_sum += $2} END {print gb_sum}')Gb ($(df -Bg | grep '^/dev/' | grep -v '/boot$' | awk '{mu_sum += $3} {all_sum += $2} END {printf("%d",mu_sum/all_sum*100)}')%)
	#CPU load: $(top -bn1 | grep '%Cpu' | cut -c 9- | xargs | awk '{printf("%.1f%%"), $1 + $3}')
	#Last boot: $(who -b | cut -c23-)
	#LVM use: $(if [$check -eq 0]; then echo no; else echo yes; fi)
	#Connection TCP : $(cat /proc/net/sockstat | awk '$1=="TCP:" {print $3}')
	#User log: $(users | wc -w)
	#Network: IP $(hostname -I) ($(cat /sys/class/net/enp0s3/address))
	#Sudo : $(grep "COMMAND" /var/log/sudo/sudo.log | wc -l) cmd"
