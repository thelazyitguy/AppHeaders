//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleNetWebchannelClientXplatChannelRequest;
@protocol JavaUtilList, JavaUtilSet;

@interface ComGoogleNetWebchannelClientXplatForwardChannelRequestPool : NSObject
{
    int maxPoolSizeConfigured_;
    int maxSize_;
    id <JavaUtilSet> requestPool_;
    ComGoogleNetWebchannelClientXplatChannelRequest *request_;
    id <JavaUtilList> pendingMessages_;
}

- (void)dealloc;
- (_Bool)forceCompleteWithComGoogleNetWebchannelClientXplatForwardChannelRequestPool_CompletionCallback:(id)arg1;
- (void)clearPendingMessages;
- (void)addPendingMessagesWithJavaUtilList:(id)arg1;
- (id)getPendingMessages;
- (_Bool)hasPendingRequest;
- (void)cancel;
- (_Bool)removeRequestWithComGoogleNetWebchannelClientXplatChannelRequest:(id)arg1;
- (void)addRequestWithComGoogleNetWebchannelClientXplatChannelRequest:(id)arg1;
- (_Bool)hasRequestWithComGoogleNetWebchannelClientXplatChannelRequest:(id)arg1;
- (int)getRequestCount;
- (int)getMaxSize;
- (_Bool)isFull;
- (void)applyClientProtocolWithNSString:(id)arg1;

@end

