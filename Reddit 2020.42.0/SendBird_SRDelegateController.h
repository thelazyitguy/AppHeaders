//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue, SendBird_SRWebSocketDelegate;

@interface SendBird_SRDelegateController : NSObject
{
    struct SendBird_SRDelegateAvailableMethods _availableDelegateMethods;
    id <SendBird_SRWebSocketDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property struct SendBird_SRDelegateAvailableMethods availableDelegateMethods; // @synthesize availableDelegateMethods=_availableDelegateMethods;
- (void).cxx_destruct;
- (void)performDelegateQueueBlock:(CDUnknownBlockType)arg1;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <SendBird_SRWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

