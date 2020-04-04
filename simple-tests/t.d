import std.stdio;
import std.string;

extern(C) 
  void main() {
    int[string] aa;
    aa["foo"] = 9999;
    import core.stdc.stdio : printf;
    printf("Hello betterC\n");
}


