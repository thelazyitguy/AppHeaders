//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTCallback-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplItemlistsCommonItemListImpl, JBTCommand_Type, NSString;
@protocol JBTCallback, JBTCommand_Config, JBTSpan;

@interface ComGoogleAppsBigtopSyncClientImplItemlistsCommonItemListImpl_4 : NSObject <JBTCallback>
{
    ComGoogleAppsBigtopSyncClientImplItemlistsCommonItemListImpl *this$0_;
    JBTCommand_Type *val$commandType_;
    id <JBTCommand_Config> val$config_;
    id <JBTCallback> val$localCallback_;
    id <JBTCallback> val$combinedRemoteCallback_;
    id <JBTSpan> val$span_;
}

- (void)dealloc;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
