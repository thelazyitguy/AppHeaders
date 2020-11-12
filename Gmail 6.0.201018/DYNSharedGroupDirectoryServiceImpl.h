//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSharedGroupDirectoryService-Protocol.h"

@class DYNSharedGroupDirectoryOptions, NSString, NSURL;

@interface DYNSharedGroupDirectoryServiceImpl : NSObject <DYNSharedGroupDirectoryService>
{
    DYNSharedGroupDirectoryOptions *_options;
    NSURL *_sharedGroupRootDirectoryURL;
    NSURL *_notificationExtensionDirectoryURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *notificationExtensionDirectoryURL;
@property(readonly, nonatomic) NSURL *sharedGroupRootDirectoryURL;
@property(readonly, nonatomic) NSString *sharedGroupName;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
