import os
os.system("clear")
print()
print(input('This is the first part of compilation, avoid "breaking" the terminal... Type A Key!'))
os.system("clear")
os.system("git clone https://github.com/cutefishos/libcutefish --branch=0.2 ~/Downloads/cutefish/libcutefish")
os.system("dpkg-buildpackage -uc -us -b ~/Downloads/cutefish/libcutefish")