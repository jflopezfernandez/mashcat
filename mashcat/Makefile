
###############################################################################
#
#                            Buildchain Definitions
#
###############################################################################

.SUFFIXES: 
.SUFFIXES: .c .o

vpath %.c src
vpath %.h include

SHELL = /bin/sh

SRCDIR = src
INCLUDE_DIR = include

SRCS = mashcat.c

CFLAGS = -Og
ALL_CFLAGS = -I $(INCLUDE_DIR) -O3 -mtune=intel -march=skylake -mavx2 $(CFLAGS)

TAGS = ctags
TAGS_FILE = tags
TAGS_CONFIG = --language-force=c --with-list-header=yes --list-aliases=all --list-excludes= --list-extras=all --list-features --list-fields=all --list-kinds=all --list-kinds-full=all --list-map-extensions=all --list-map-patterns=all --list-maps=all --list-mline-regex-flags --list-params=all --list-pseudo-tags --list-roles=all --list-languages --put-field-prefix --recurse=yes --pseudo-tags=ptag --pseudo-tags=* --tag-relative=yes --output-format=u-ctags --sort=yes

PROGRAM = mashcat

prefix = /usr/local
includedir = $(prefix)/include
oldincludedir = /usr/include
docdir = $(datarootdir)/doc/$(PROGRAM)
infodir = $(datarootdir)/info
libdir = $(exec_prefix)/lib
mandir = $(datarootdir)/man

DOXYGEN_CONFIG = doxygen.config
DOXYGEN = doxygen

AUX = ChangeLog \
      COPYING   \
      NEWS

###############################################################################
#
#                                 Main Build
#
###############################################################################

.PHONY: all
all: $(PROGRAM)

.PHONY: everything
everything: DOCS TAGS $(PROGRAM)
	@echo Source tags generated.

$(PROGRAM): mashcat.o
	$(CC) $(CPPFLAGS) $(ALL_CFLAGS) -o $@ $^

mashcat.o: mashcat.c
	$(CC) -c $(CPPFLAGS) $(ALL_CFLAGS) -o $@ $^

.PHONY: TAGS
TAGS: $(TAGS_FILE)
	$(TAGS) $(TAGS_CONFIG) $(TAGS_FILE)

$(TAGS_FILE):
	$(TAGS) $(TAGS_CONFIG) -f $(TAGS_FILE)

###############################################################################
#
#                            Generate Documentation
#
###############################################################################

DOCS: $(DOXYGEN_CONFIG)
	$(DOXYGEN) $(DOXYGEN_CONFIG)

$(DOXYGEN_CONFIG):
	@echo Generate configuration file...
	$(DOXYGEN) -g - | sed -n -E -e 's/^(OUTPUT_DIRECTORY\s*=\s*)/\1 doc/;/.*/p' > $(DOXYGEN_CONFIG)

###############################################################################
#
#                            Auxiliary Functions
#
###############################################################################

.PHONY: clean
clean:
	rm -rf $(PROGRAM)
	rm -rf *.o
	rm -rf $(DOXYGEN_CONFIG)
	rm -rf tags
