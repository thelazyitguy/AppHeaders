//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "XPTHasLifecycle-Protocol.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTEventListener, JavaUtilList;

@protocol JBTOfflineSyncEventPublisher <XPTHasLifecycle, JavaObject>
- (_Bool)hasListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (id <JavaUtilList>)getSyncedDocIds;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSyncedHints;
@end

