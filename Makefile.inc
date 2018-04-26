# PYTHIA configuration file.
# Generated on Fri Apr 20 16:03:34 EDT 2018 with the user supplied options:
# --prefix=/Users/rappoccio/software/pythia8235-install/
# --with-fastjet3=/Users/rappoccio/software_installs/fastjet-3.3.0-install/
# --with-lhapdf6=/Users/rappoccio/software/LHAPDF-6.2.1-install/
# --with-root=/Users/rappoccio/software/root-v6-install/
# --with-python=/opt/local/Library/Frameworks/Python.framework/Versions/2.7/
# --with-python-include=/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7/

# Install directory prefixes.
PREFIX_BIN=/Users/rappoccio/software/pythia8235-install//bin
PREFIX_INCLUDE=/Users/rappoccio/software/pythia8235-install//include
PREFIX_LIB=/Users/rappoccio/software/pythia8235-install//lib
PREFIX_SHARE=/Users/rappoccio/software/pythia8235-install//share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
ENABLE_SHARED=false
CXX=g++
CXX_COMMON=-O2  -pedantic -W -Wall -Wshadow -fPIC
CXX_SHARED=-dynamiclib
CXX_SONAME=-Wl,-dylib_install_name,@rpath/
LIB_SUFFIX=.dylib

# EVTGEN configuration.
EVTGEN_USE=false
EVTGEN_BIN=
EVTGEN_INCLUDE=./
EVTGEN_LIB=./

# FASTJET3 configuration.
FASTJET3_USE=true
FASTJET3_BIN=/Users/rappoccio/software_installs/fastjet-3.3.0-install//bin/
FASTJET3_INCLUDE=/Users/rappoccio/software_installs/fastjet-3.3.0-install//include
FASTJET3_LIB=/Users/rappoccio/software_installs/fastjet-3.3.0-install//lib

# HEPMC2 configuration.
HEPMC2_USE=false
HEPMC2_BIN=
HEPMC2_INCLUDE=./
HEPMC2_LIB=./

# HEPMC3 configuration.
HEPMC3_USE=false
HEPMC3_BIN=
HEPMC3_INCLUDE=./
HEPMC3_LIB=./

# LHAPDF5 configuration.
LHAPDF5_USE=false
LHAPDF5_BIN=
LHAPDF5_INCLUDE=./
LHAPDF5_LIB=./

# LHAPDF6 configuration.
LHAPDF6_USE=true
LHAPDF6_BIN=/Users/rappoccio/software/LHAPDF-6.2.1-install//bin/
LHAPDF6_INCLUDE=/Users/rappoccio/software/LHAPDF-6.2.1-install//include
LHAPDF6_LIB=/Users/rappoccio/software/LHAPDF-6.2.1-install//lib

# POWHEG configuration.
POWHEG_USE=false
POWHEG_BIN=
POWHEG_INCLUDE=./
POWHEG_LIB=./

# PROMC configuration.
PROMC_USE=false
PROMC_BIN=
PROMC_INCLUDE=./
PROMC_LIB=./

# ROOT configuration.
ROOT_USE=true
ROOT_BIN=/Users/rappoccio/software/root-v6-install//bin/
ROOT_INCLUDE=/Users/rappoccio/software/root-v6-install//include
ROOT_LIB=/Users/rappoccio/software/root-v6-install//lib

# GZIP configuration.
GZIP_USE=false
GZIP_BIN=
GZIP_INCLUDE=./
GZIP_LIB=./

# BOOST configuration.
BOOST_USE=false
BOOST_BIN=
BOOST_INCLUDE=./
BOOST_LIB=./

# PYTHON configuration.
PYTHON_USE=true
PYTHON_BIN=/opt/local/Library/Frameworks/Python.framework/Versions/2.7//bin/
PYTHON_INCLUDE=/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7/
PYTHON_LIB=/opt/local/Library/Frameworks/Python.framework/Versions/2.7//lib