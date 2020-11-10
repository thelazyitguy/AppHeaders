//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NOZEncoder, NOZEncoderContext;

@interface NOZZipper : NSObject
{
    NSString *_standardizedZipFilePath;
    id <NOZEncoder> _currentEncoder;
    id <NOZEncoderContext> _currentEncoderContext;
    struct {
        struct __sFILE *file;
        struct _NOZFileEntryT *firstEntry;
        struct _NOZFileEntryT *lastEntry;
        long long beginBytePosition;
        long long writingPositionOffset;
        struct _NOZFileEntryT *currentEntry;
        struct _NOZEndOfCentralDirectoryRecordT endOfCentralDirectoryRecord;
        char *comment;
        unsigned int ownsComment:1;
    } _internal;
    NSString *_zipFilePath;
    NSString *_globalComment;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *globalComment; // @synthesize globalComment=_globalComment;
@property(readonly, nonatomic) NSString *zipFilePath; // @synthesize zipFilePath=_zipFilePath;
- (_Bool)addEntry:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (_Bool)forciblyCloseAndReturnError:(out id *)arg1;
- (_Bool)closeAndReturnError:(out id *)arg1;
- (_Bool)openWithMode:(long long)arg1 error:(out id *)arg2;
- (void)dealloc;
- (id)initWithZipFile:(id)arg1;
- (id)init;
- (_Bool)private_writeEndOfCentralDirectoryRecord;
- (_Bool)private_writeCentralDirectoryRecord:(struct _NOZFileEntryT *)arg1;
- (_Bool)private_writeCentralDirectoryRecords;
- (_Bool)private_writeCurrentLocalFileDescriptor:(_Bool)arg1;
- (_Bool)private_writeLocalFileDescriptorForEntry:(struct _NOZFileEntryT *)arg1 signature:(_Bool)arg2;
- (_Bool)private_finishEncoding;
- (_Bool)private_writeLocalFileHeaderForCurrentEntryAndReturnError:(out id *)arg1;
- (_Bool)private_writeLocalFileHeaderForEntry:(struct _NOZFileEntryT *)arg1 signature:(_Bool)arg2;
- (_Bool)private_populateRecordsForCurrentOpenEntryWithEntry:(id)arg1 error:(out id *)arg2;
- (_Bool)private_flushWriteBuffer:(const char *)arg1 length:(unsigned long long)arg2;
- (void)private_freeLinkedList;
- (_Bool)private_closeCurrentOpenEntryAndReturnError:(out id *)arg1;
- (_Bool)private_writeEntry:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(out id *)arg3 abortRef:(_Bool *)arg4;
- (_Bool)private_openEntry:(id)arg1 error:(out id *)arg2;
- (_Bool)private_forciblyClose:(_Bool)arg1 error:(out id *)arg2;

@end

