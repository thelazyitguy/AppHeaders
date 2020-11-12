//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTLiveList-Protocol.h"

@class GBTListenersProxy, NSArray, NSString;
@protocol JBTEventListener;

@interface GBTArrayLiveList : NSObject <JBTLiveList>
{
    GBTListenersProxy<JBTEventListener> *_listeners;
    _Bool _started;
    _Bool _paused;
    NSArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void)notifyListeners;
- (int)getVersion;
- (_Bool)isOfflineOnly;
- (void)setOfflineOnly;
- (id)getPriority;
- (void)setPriorityWithJBTPriority:(id)arg1 withJBTSpan:(id)arg2;
- (id)getSectionManager;
- (_Bool)doesElementHaveDeferredRankChangeWithJBTId:(id)arg1;
- (void)unlockElementWithJBTId:(id)arg1 withJBTSpan:(id)arg2;
- (void)lockElementToRankWithJBTId:(id)arg1;
- (_Bool)isElementLockedWithJBTId:(id)arg1;
- (void)setMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (void)increaseMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (int)getMaxElements;
- (_Bool)hasMoreElements;
- (void)checkServerNowWithBackfillRequestPriorityWithJBTRequestPriority:(id)arg1;
- (void)checkServerNowWithJBTSpan:(id)arg1;
- (_Bool)isExpectingRemoteResults;
- (_Bool)isExpectingMoreChanges;
- (_Bool)isRunning;
- (_Bool)isStarted;
- (_Bool)isPaused;
- (void)resume;
- (void)pause;
- (void)stopWithJBTSpan:(id)arg1;
- (void)startWithJBTSpan:(id)arg1;
- (id)getAllElements;
- (id)getElementByIndexWithInt:(int)arg1;
- (int)getSize;
- (id)getElementByIdWithJBTId:(id)arg1;
- (_Bool)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
