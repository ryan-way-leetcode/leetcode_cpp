#!/usr/bin/python3.8

import sys
import os
from os import path

if len(sys.argv) < 4:
    print("Usage: %s number title difficulty" % sys.argv[0])
    sys.exit(1)

if not sys.argv[1].isdigit():
    print("Expected number value for first argument")
    sys.exit(1)

if sys.argv[3] not in [ 'med', 'easy', 'hard']:
    print("Unsupported difficulty level: %s" % sys.argv[3])
    sys.exit(1)

number = int(sys.argv[1])
title = sys.argv[2]
diff = sys.argv[3]

test_file = "./test/templateTests.cpp"
source_file = "./src/template.cpp"
header_file = "./include/template.hpp"

new_test_file = "./test/%s/%sTests.cpp" % (diff, str(number)+title)
new_source_file = "./src/%s/%s.cpp" % (diff, str(number)+title)
new_header_file = "./include/%s/%s.hpp" % (diff, str(number)+title)
source_cmake = "./src/%s/CMakeLists.txt" % diff
test_cmake = "./test/CMakeLists.txt"
temp_file = "temp.txt"

files = {
    test_file : new_test_file,
    source_file : new_source_file,
    header_file : new_header_file
}

replace = { 
    '../' : '../../',
    'template.hpp' : "%s/%s.hpp" % (diff, str(number)+title),
    'template' : title.lower(),
    'Template' : title,
    'TEMPLATE' : title.upper()
}


for temp, new in files.items():

    print("Generating new file: %s..." % new)

    if path.exists(new):
        print("File already exists: %s" % new)
        sys.exit(1)
    
    with open(temp, "r") as fro:
        with open(new, "w") as to:
            for line in fro:
                for i,j in replace.items():
                    line = line.replace(i, j)
                to.write(line)

    print("Done!")


print("Adding SOURCE file to CMAKE")

with open(temp_file, 'w') as out:
    with open(source_cmake, "r") as fro:
        state = 'begin'
        for line in fro:
            if state == 'begin' and diff in line:
                state = 'findParen'
            elif state == 'findParen' and ')' in line:
                out.write('  %s.cpp\n' % (str(number)+title))
                state = 'done'
            out.write(line)
os.rename(temp_file, source_cmake)

print("Done!")

print("Adding TEST file to CMAKE")

with open(temp_file, 'w') as out:
    with open(test_cmake, "r") as fro:
        state = 'begin'
        for line in fro:
            if state == 'begin' and diff in line:
                state = 'findEnd'
            elif state == 'findEnd' and diff not in line:
                out.write("    %s/%sTests.cpp\n" % (diff, str(number)+title))
                state = 'done'
            out.write(line)
os.rename(temp_file, test_cmake)

print("Done!")
