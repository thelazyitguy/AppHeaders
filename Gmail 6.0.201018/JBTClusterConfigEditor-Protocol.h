//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@protocol JBTCallback, JBTClusterConfig, JBTEventListener, JBTSpan;

@protocol JBTClusterConfigEditor <JavaObject>
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)stopWithJBTSpan:(id <JBTSpan>)arg1;
- (void)startWithJBTSpan:(id <JBTSpan>)arg1;
- (id <JBTClusterConfig>)getClusterConfig;
- (void)updateWithJBTClusterConfig:(id <JBTClusterConfig>)arg1 withJBTCallback:(id <JBTCallback>)arg2 withJBTSpan:(id <JBTSpan>)arg3;
@end

