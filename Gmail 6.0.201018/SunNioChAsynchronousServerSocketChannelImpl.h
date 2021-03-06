//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNioChannelsAsynchronousServerSocketChannel.h"

#import "SunNioChCancellable-Protocol.h"
#import "SunNioChGroupable-Protocol.h"

@class JavaIoFileDescriptor, NSString;
@protocol JavaUtilConcurrentLocksReadWriteLock;

@interface SunNioChAsynchronousServerSocketChannelImpl : JavaNioChannelsAsynchronousServerSocketChannel <SunNioChCancellable, SunNioChGroupable>
{
    JavaIoFileDescriptor *fd_;
    unsigned long long localAddress_;
    id stateLock_;
    id <JavaUtilConcurrentLocksReadWriteLock> closeLock_;
    // Error parsing type: AB, name: open_
    // Error parsing type: AB, name: acceptKilled_
    _Bool isReuseAddress_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)supportedOptions;
- (id)getOptionWithJavaNetSocketOption:(id)arg1;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)getLocalAddress;
- (id)bindWithJavaNetSocketAddress:(id)arg1 withInt:(int)arg2;
- (void)onCancelWithSunNioChPendingFuture:(id)arg1;
- (_Bool)isAcceptKilled;
- (void)acceptWithId:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2;
- (id)accept;
- (id)implAcceptWithId:(id)arg1 withJavaNioChannelsCompletionHandler:(id)arg2;
- (void)close;
- (void)implClose;
- (void)end;
- (void)begin;
- (_Bool)isOpen;
- (id)initPackagePrivateWithSunNioChAsynchronousChannelGroupImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

