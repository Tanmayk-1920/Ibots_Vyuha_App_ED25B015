Okay so there are a bunch of files in here. You'll have to figure out which exact files to link and which exact order to link.
Slowly go through the error messages that come for clues. Some of the files are probably useless too.
Or they aren't.

You are not allowed to modify the contents of any of the files. 

I WILL perform a diff-check.


Do note, some of the errors can be red-herrings. Study them carefully. 








































If you see a big wall of text, do not fret. Patiently go through it.





































































oh also

add this to the end of your CMakeLists.txt to get a successful compile:

target_compile_definitions(macaque_defense PRIVATE
    SYSTEM_VERSION="\\\"v4.2-Bonnet-Edition\\\""
)