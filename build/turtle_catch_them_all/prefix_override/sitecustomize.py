import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/praveen/turtlesim_project/install/turtle_catch_them_all'
