from __future__ import print_function
import sys, os, timeit
from distutils.core import setup, Extension, Command
from distutils.util import get_platform



sources = ["helloWrap.c"]
sources.extend(["hello.c"])
m = Extension("hello", sources=sources)



setup(name="hello",
      ext_modules=[m]
      )
