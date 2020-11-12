//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (DSC)
- (_Bool)dsc_touchFileAtPath:(id)arg1 error:(id *)arg2;
- (id)dsc_cacheDirectoryURLForPath:(id)arg1;
- (id)dsc_cacheFileURLForPath:(id)arg1;
- (id)dsc_cacheDirectoryURL;
- (_Bool)dsc_truncateFileAtPath:(id)arg1 toSize:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)dsc_fileSizeAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)dsc_removeContentsOfDirectoryAtURL:(id)arg1 keepingNewest:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)dsc_removeContentsOfDirectoryAtURL:(id)arg1 withNamePrefix:(id)arg2 error:(id *)arg3;
- (_Bool)dsc_removeItemAtURL:(id)arg1 error:(id *)arg2;
@end
