#!/usr/bin/python3.8

import sys
from os import path

if len(sys.argv) < 4:
    print("Usage: %s number title difficulty" % sys.argv[0])
    sys.exit(1)

if not sys.argv[1].isdigit():
    print("Expected number value for first argument")

number = int(sys.argv[1])
title = sys.argv[2]
diff = sys.argv[3]

test_file = "./test/templateTests.cpp"
source_file = "./src/template.cpp"
header_file = "./include/template.hpp"

replace = { 
    'template' : title.lower(),
    'Template' : title,
    'TEMPLATE' : title.upper()
}


for i in [ test_file, source_file, header_file ]:

    parse = i.split('/')

    new_file_name = "/".join(parse[:-1] + [sys.argv[3]] + parse[-1:])
    new_file_name = new_file_name.replace('template', number+title)
    print("Generating new file: %s..." % new_file_name)

    if path.exists(new_file_name):
        print("File already exists: %s" % new_file_name)
    
    with open(i, "r") as fro:
        with open(new_file_name, "w") as to:
            for line in fro:
                for i,j in enumerate(replace):
                    line = line.replace(i, j)
                to.write(line)

    print("Done!")
