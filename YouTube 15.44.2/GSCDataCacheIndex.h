//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface GSCDataCacheIndex : NSObject
{
    _Bool _existedWhenOpened;
    _Bool _rebuiltOnOpen;
    int _fileDescriptor;
    NSURL *_fileURL;
    NSString *_indexName;
    long long _fileSize;
    long long _initialStorageSize;
    void *_mmappedMemory;
    CDStruct_9482d3c1 *_header;
    CDStruct_cec6887f *_entries;
    struct __CFDictionary *_keyMap;
    long long _keyMapRebuildCount;
}

+ (unsigned int)calcFileSizeForEntryAmount:(unsigned int)arg1;
+ (void)setIndexKey:(CDStruct_8c9fbaa1 *)arg1 withString:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long keyMapRebuildCount; // @synthesize keyMapRebuildCount=_keyMapRebuildCount;
@property(readonly, nonatomic) struct __CFDictionary *keyMap; // @synthesize keyMap=_keyMap;
@property(readonly, nonatomic) CDStruct_cec6887f *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) CDStruct_9482d3c1 *header; // @synthesize header=_header;
@property(readonly, nonatomic) void *mmappedMemory; // @synthesize mmappedMemory=_mmappedMemory;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(readonly, nonatomic) _Bool rebuiltOnOpen; // @synthesize rebuiltOnOpen=_rebuiltOnOpen;
@property(readonly, nonatomic) _Bool existedWhenOpened; // @synthesize existedWhenOpened=_existedWhenOpened;
@property(readonly, nonatomic) long long initialStorageSize; // @synthesize initialStorageSize=_initialStorageSize;
@property(readonly, nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)LRUPromoteAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfFreeEntry;
- (void)setFreeEntry:(unsigned int)arg1;
- (void)addToHead:(unsigned int)arg1;
- (void)addToTail:(unsigned int)arg1;
- (void)removeFromLRUList:(unsigned int)arg1;
- (void)rebuildKeyMap;
- (void)deleteFile;
- (_Bool)validateHeaderAndSize;
- (_Bool)addMoreEntries:(unsigned int)arg1;
- (_Bool)reopenMMapFile;
- (void)closeFile;
- (_Bool)openIndexFile;
- (unsigned int)indexForKey:(CDStruct_8c9fbaa1 *)arg1;
- (id)unusedStorageIDs;
- (id)storageIDsToReclaimForSize:(long long)arg1 bytesReclaimed:(long long *)arg2;
- (void)removeAllEntries;
- (void)removeEntryForKey:(CDStruct_8c9fbaa1 *)arg1;
- (CDStruct_cec6887f *)newEntryForKey:(CDStruct_8c9fbaa1 *)arg1;
- (CDStruct_cec6887f *)entryForKey:(CDStruct_8c9fbaa1 *)arg1 touch:(_Bool)arg2;
- (_Bool)replaceKey:(id)arg1 withKey:(id)arg2;
- (_Bool)containsKey:(id)arg1;
- (unsigned int)storageIDForEntry:(CDStruct_cec6887f *)arg1;
- (_Bool)restoreFromDisk;
- (void)dealloc;
- (id)initWithDirectoryURL:(id)arg1;

@end

