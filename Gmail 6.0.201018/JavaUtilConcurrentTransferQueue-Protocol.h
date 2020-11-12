//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilConcurrentBlockingQueue-Protocol.h"

@class JavaUtilConcurrentTimeUnit;

@protocol JavaUtilConcurrentTransferQueue <JavaUtilConcurrentBlockingQueue, JavaObject>
- (int)getWaitingConsumerCount;
- (_Bool)hasWaitingConsumer;
- (_Bool)tryTransferWithId:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg3;
- (void)transferWithId:(id)arg1;
- (_Bool)tryTransferWithId:(id)arg1;
@end
