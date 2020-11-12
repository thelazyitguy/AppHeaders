//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoOutputStream.h"

@class JavaUtilConcurrentSemaphore;
@protocol JavaUtilConcurrentExecutor;

@interface JBTDSocketNsOutputStream : JavaIoOutputStream
{
    id nsOutputStream_;
    id <JavaUtilConcurrentExecutor> socketExecutor_;
    JavaUtilConcurrentSemaphore *spaceAvailableSemaphore_;
}

- (void)dealloc;
- (id)nativeNsOutputStream;
- (void)close;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithInt:(int)arg1;
- (void)respondToNSStreamEventHasSpaceAvailable;
- (_Bool)isConnected;
- (void)startTls;

@end
