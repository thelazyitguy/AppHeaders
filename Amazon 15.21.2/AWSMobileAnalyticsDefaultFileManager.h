//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSMobileAnalyticsFileManager-Protocol.h"

@class AWSMobileAnalyticsFile, NSFileManager, NSString;

@interface AWSMobileAnalyticsDefaultFileManager : NSObject <AWSMobileAnalyticsFileManager>
{
    NSFileManager *_fileManager;
    AWSMobileAnalyticsFile *_rootFile;
}

@property(retain, nonatomic) AWSMobileAnalyticsFile *rootFile; // @synthesize rootFile=_rootFile;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (_Bool)writeData:(id)arg1 toFile:(id)arg2 withWriter:(id)arg3 withDataProcessor:(CDUnknownBlockType)arg4 withFormat:(long long)arg5 withError:(id *)arg6;
- (_Bool)writeData:(id)arg1 toFile:(id)arg2 withFormat:(long long)arg3 withDataProcessor:(CDUnknownBlockType)arg4 withError:(id *)arg5;
- (_Bool)writeData:(id)arg1 toFile:(id)arg2 withFormat:(long long)arg3 withError:(id *)arg4;
- (id)readDataFromFile:(id)arg1 withReader:(id)arg2 withDataProcessor:(CDUnknownBlockType)arg3 withFormat:(long long)arg4 withError:(id *)arg5;
- (id)readDataFromFile:(id)arg1 withFormat:(long long)arg2 withDataProcessor:(CDUnknownBlockType)arg3 withError:(id *)arg4;
- (id)readDataFromFile:(id)arg1 withFormat:(long long)arg2 withError:(id *)arg3;
- (id)tryCreateReaderWithFile:(id)arg1 withError:(id *)arg2;
- (id)tryCreateWriterWithFile:(id)arg1 withError:(id *)arg2;
- (id)newOutputStream:(id)arg1 appendMode:(_Bool)arg2 error:(id *)arg3;
- (id)newOutputStreamWithPath:(id)arg1 appendMode:(_Bool)arg2 error:(id *)arg3;
- (id)newInputStream:(id)arg1 error:(id *)arg2;
- (id)newInputStreamWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFile:(id)arg1 error:(id *)arg2;
- (_Bool)deleteFileWithPath:(id)arg1 error:(id *)arg2;
- (id)createFile:(id)arg1 error:(id *)arg2;
- (id)createFileWithPath:(id)arg1 error:(id *)arg2;
- (id)listFilesInDirectory:(id)arg1 error:(id *)arg2;
- (id)listFilesInDirectoryWithPath:(id)arg1 error:(id *)arg2;
- (id)getDirectory:(id)arg1 error:(id *)arg2;
- (id)createDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)containsRootPath:(id)arg1;
- (id)init;
- (id)initWithFileManager:(id)arg1 withRootFile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
