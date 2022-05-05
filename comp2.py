import os
os.system("clear")
os.system("git clone https://github.com/cutefishos/filemanager --branch=0.3 ~/Downloads/cutefish/filemanager")
os.system("cd ~/Downloads/cutefish/filemanager && dpkg-buildpackage -uc -us -b")
os.system("git clone https://github.com/cutefishos/settings --branch=0.3 ~/Downloads/cutefish/settings")
os.system("cd ~/Downloads/cutefish/settings && dpkg-buildpackage -uc -us -b")
os.system("git clone https://github.com/cutefishos/statusbar --branch=0.3 ~/Downloads/cutefish/statusbar")
os.system("cd ~/Downloads/cutefish/statusbar && dpkg-buildpackage -uc -us -b")
os.system("git clone https://github.com/cutefishos/core --branch=0.3 ~/Downloads/cutefish/core")
os.system("cd ~/Downloads/cutefish/core && dpkg-buildpackage -uc -us -b")
os.system("cd ~/Downloads/cutefish && sudo apt-get install -y ./*.deb")
os.system("git clone https://github.com/cutefishos/calculator --branch=0.3 ~/Downloads/cutefish/calculator && cd ~/Downloads/cutefish/calculator && mkdir build && cd build/ && cmake .. && make && sudo make install")
os.system("git clone https://github.com/cutefishos/icons --branch=0.3 ~/Downloads/cutefish/icons && cd ~/Downloads/cutefish/icons && mkdir build && cd build && cmake .. && make && sudo make install")
#end
