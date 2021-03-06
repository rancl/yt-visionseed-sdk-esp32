/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.2 at Fri Sep  6 14:27:18 2019. */

#include "FileListResult.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t FileInfo_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, POINTER , FIRST, FileInfo, name, name, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, FileInfo, isFolder, name, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, FileInfo, size, isFolder, 0),
    PB_LAST_FIELD
};

const pb_field_t FileListResult_fields[4] = {
    PB_FIELD(  1, STRING  , REQUIRED, POINTER , FIRST, FileListResult, folder, folder, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, FileListResult, total, folder, 0),
    PB_FIELD(  3, MESSAGE , REPEATED, POINTER , OTHER, FileListResult, files, total, &FileInfo_fields),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
