# ----------------------------
# Makefile Options
# ----------------------------

NAME = INSPID
# ICON = icon.png
DESCRIPTION = "A game?"
COMPRESSED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
