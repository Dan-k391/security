#!/bin/sh

dailyCrons="/etc/cron.daily/xbash"
hourlyCrons="/etc/cron.hourly/0anacron"
# add if needed

files="/usr/lib/local/crtres_c /usr/lib/local/crtres_c.pid /usr/adxintrin_b /usr/.adxintrin_b /var/spool/cron/root
 /etc/opt/gcc_y /etc/libnl/gcc_y /etc/postfix/gcc_y /home/lib/gcc_y /home/lib64/gcc_y /sbin/gcc_y /var/kernel/gcc_y
 /var/log/gcc_y /var/crash/gcc_y /mnt/gcc_y /root/gcc_y /etc/lib/libgcc_a.tar.gz"
dirs="/root/gcclib /usr/spirit /var/spirit /etc/xbash"

pidFiles="/usr/adxintrin_b.pid /usr/lib/local/crtres_c.pid /etc/xbash/cronman.pid"

crontab="/\/etc\/xbash\/xbash/d"
preload="/\/usr\/local\/lib/d"
preloads="/usr/local/lib/pkit.so /usr/local/lib/fkit.so /usr/local/lib/skit.so /usr/local/lib/sshkit.so /usr/local/lib/sshpkit.so"

processName="libgcc_a"

deleteFile() {  
    echo "Attempting to delete file $1"
    if [ -e $1 ]; then
        echo "File exists"
        rm -f $1
        echo "File deleted"
    else 
        echo "File does not exist"
    fi
}

deleteDir() {
    echo "Deleting dir $1"
    rm -rf $1
}

fixCrontab() {
    sed -e $crontab /etc/crontab > /etc/crontab
}

fixPreload() {
    echo "Fixing /etc/ld.so.preload file"
    sed -e $preload /etc/ld.so.preload > /etc/ld.so.preload

    echo "deleting preloads"
    for i in $preloads; do
        deleteFile $i
    done
}

fixPortForward() {
    echo > "/etc/xinetd.d/smtp_forward"
    echo > "/etc/xinetd.d/http_forward"
    echo > "/etc/xinetd.d/http_stream"
    echo > "/etc/xinetd.d/https_stream"
    echo > "/etc/xinetd.d/timesync"
}

fixSshConfig() {
   echo "Reloading the sshd bacckup config file" 
   cp /etc/ssh/sshd_config.1 /etc/ssh/sshd_config
   echo "Restarting sshd service"
   service sshd restart
}

killProcesses() {
    pkill -f $processName
    for i in $pidFiles; do
        pid=cat $i
        kill -9 $pid
    done
}

fixCrontab

fixPreload

fixPortForward

fixSshConfig

killProcesses

for i in $dailyCrons; do
    deleteFile $i
done

for i in $hourlyCrons; do
    deleteFile $i
done

for i in $files; do
    deleteFile $i
done

for i in $dirs; do
    deleteDir $i
done

