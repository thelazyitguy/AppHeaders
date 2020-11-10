//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GDTCORDirectorySizeTracker : NSObject
{
    NSString *_directoryPath;
    NSNumber *_cachedSizeBytes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *cachedSizeBytes; // @synthesize cachedSizeBytes=_cachedSizeBytes;
@property(readonly, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (unsigned long long)fileSizeAtURL:(id)arg1;
- (unsigned long long)calculateDirectoryContentSize;
- (void)resetCachedSize;
- (void)fileWasRemovedAtPath:(id)arg1 withSize:(unsigned long long)arg2;
- (void)fileWasAddedAtPath:(id)arg1 withSize:(unsigned long long)arg2;
- (unsigned long long)directoryContentSize;
- (id)initWithDirectoryPath:(id)arg1;

@end

