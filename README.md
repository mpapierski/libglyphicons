libglyphicons
-------------

This library contains statically compiled all of the Glyphicons FREE package.

Requirements
============

cmake, imagemagick (with `convert` app somewhere in your $PATH)

How to use it
==========

Each of the Glyphicons FREE .png images are first converted to XPM, and then glued together into a simple array. The glued array size is not known at compile time but it contains NULL at the end.

Examples
========

FLTK (1.3.x)

	static Fl_Pixmap email(glyphicons[419]);

TODO
====

- Generate glue code using CMake.
- Save icon names in glue code.

License
=======

GLYPHICONS FREE are released under the Creative Commons Attribution 3.0 Unported (CC BY 3.0). The Glyphicons FREE can be used both commercially and for personal use, but you must always add a link to www.glyphicons.com in a prominent place (e.g. the footer of a website), include the CC-BY license and the reference to www.glyphicons.com on every page using Glyphicons.

Glyphicons Halflings are also a part of Bootstrap by Twitter, and are released under the same Apache 2.0 license as Bootstrap. While you are not required to include attribution on your Bootstrap-based projects, I'd certainly appreciate a visibile link back to glyphicons.com in any place you find appropriate (footer, docs, etc).

All logos and trademarks in social icons are the property of the respective trademark owners.®

Authors
=======

Michał Papierski <michal@papierski.net>
