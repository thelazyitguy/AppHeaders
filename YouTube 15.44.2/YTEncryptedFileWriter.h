//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString, YTCryptor;

@interface YTEncryptedFileWriter : NSObject
{
    YTCryptor *_cryptor;
    NSFileHandle *_fileHandle;
    char *_buffer;
    unsigned long long _bufferSize;
    unsigned long long _bufferPosition;
    NSString *_filePath;
    unsigned long long _bytesWritten;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)encryptAndWriteBuffer;
- (void)writeData:(id)arg1;
- (void)seekToBeginning;
- (void)closeFile;
- (_Bool)openFile;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 cryptor:(id)arg2;

@end

