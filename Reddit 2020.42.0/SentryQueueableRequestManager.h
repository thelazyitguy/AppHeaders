//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentryRequestManager-Protocol.h>

@class NSOperationQueue, NSURLSession;

@interface SentryQueueableRequestManager : NSObject <SentryRequestManager>
{
    NSOperationQueue *_queue;
    NSURLSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)cancelAllOperations;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (id)initWithSession:(id)arg1;

@end

