//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNEventListener : NSObject
{
    id _refreshEventSubscription;
}

@property(retain, nonatomic) id refreshEventSubscription; // @synthesize refreshEventSubscription=_refreshEventSubscription;
- (void).cxx_destruct;
- (id)subscribeToDispatcherEvent:(id)arg1 performFunc:(SEL)arg2 fromObject:(id)arg3;
- (void)unsubscribeEventListener;
- (void)resubscribeEventListener:(id)arg1 performFunc:(SEL)arg2 fromObject:(id)arg3;
- (void)dealloc;
- (id)initWithEventStr:(id)arg1 performFunc:(SEL)arg2 fromObject:(id)arg3;

@end

