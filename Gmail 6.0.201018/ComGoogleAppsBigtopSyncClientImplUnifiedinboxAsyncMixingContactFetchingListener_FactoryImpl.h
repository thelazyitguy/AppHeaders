//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplConversationsApiInternalContactFetchingListener_Factory-Protocol.h"

@class ComGoogleCommonCollectImmutableMap, NSString;

@interface ComGoogleAppsBigtopSyncClientImplUnifiedinboxAsyncMixingContactFetchingListener_FactoryImpl : NSObject <ComGoogleAppsBigtopSyncClientImplConversationsApiInternalContactFetchingListener_Factory>
{
    ComGoogleCommonCollectImmutableMap *perAccountFactory_;
}

- (void)dealloc;
- (id)createWithJBTLiveList:(id)arg1 withJBTEventListener:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

