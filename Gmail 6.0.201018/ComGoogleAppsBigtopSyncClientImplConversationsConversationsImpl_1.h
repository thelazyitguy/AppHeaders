//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTEventListener-Protocol.h"

@class NSString;
@protocol JBTCallback, JBTConversationMessageList, JBTSpan;

@interface ComGoogleAppsBigtopSyncClientImplConversationsConversationsImpl_1 : NSObject <JBTEventListener>
{
    id <JBTConversationMessageList> val$conversationMessageList_;
    id <JBTCallback> val$callback_;
    id <JBTSpan> val$span_;
    id <JBTSpan> val$spanToUse_;
}

- (void)dealloc;
- (void)onEventWithJBTEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
