//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonUtilConcurrentAsyncFunction-Protocol.h"

@class DYNSSyncFileSyncManager, JavaUtilOptional, NSString;

@interface DYNSSyncFileSyncManager_$Lambda$9 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    DYNSSyncFileSyncManager *this$0_;
    NSString *val$attachmentToken_;
    NSString *val$driveId_;
    JavaUtilOptional *val$uniqueId_;
    JavaUtilOptional *val$spaceId_;
}

- (void)dealloc;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
