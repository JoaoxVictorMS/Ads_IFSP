import subprocess as sp
import re
import sys
if len(sys.argv) == 1:
    sys.exit(1)
DEBUG_ARG = ""
if sys.argv[1] == "E" or sys.argv[1] == "e":
    if len(sys.argv) > 2:
        build_env(sys.argv[2])
    else:
        print("Missing project name")
    sys.exit(1)
if sys.argv[1] == "D" or sys.argv[1] == "d":
    DEBUG_ARG = " -g "
else:
    DEBUG_ARG = " -s "
CXX = "g++.exe "
CXXFLAGS = " -W -Wall -std=c++17 "
if len(sys.argv) == 3:
    CXXFLAGS += sys.argv[2]
COMPILE = " -c "
INCLUDE_PATH =  " -I\"include\""
LIBS_FOLDER = " -L\"lib\" "
LIBS =  " " #-lnana_v143_Release_x64 "#-lglfw3dll -lglew32 -lopengl32
OUT = "app/bin/app.exe "
CXXFILES = sp.run("dir /a-D /S /B src\*.cpp",shell=True, capture_output=True, text=False).stdout.splitlines()
TARGETS = []
pattern = re.compile(r'[A-Za-z0-9_]+.(cpp|cxx|cc)')
err = False
for FILE in CXXFILES:
    src_file = FILE.decode("utf8").strip()
    target_file = src_file.replace(".cpp", ".o")
    cmd = CXX + COMPILE + src_file + CXXFLAGS + DEBUG_ARG + INCLUDE_PATH + " -o "  + target_file
    TARGETS.append(target_file)
    file_name = pattern.search(src_file).group()
    print("Compiling " + file_name)
    info = sp.run(cmd, shell=True, capture_output=True)
    if  info.returncode != 0:
        err = True
        print(info.stderr.decode("utf8").strip())
        continue
    print("Done")
if err == True:
    print("Can't build project, not all sources have been compiled. Try again")
    sys.exit(1)
cmd = CXX + " ".join(TARGETS) + LIBS_FOLDER + " -o " + OUT + LIBS
print("Building project")
info = sp.run(cmd, shell=True, capture_output=True)
if info.returncode == 1:
    print(info.stderr.decode("utf8").strip())
    sys.exit(1)
print("Done")
sys.exit(0)
