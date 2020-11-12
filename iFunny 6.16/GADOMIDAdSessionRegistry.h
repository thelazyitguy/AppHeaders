//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/GADOMIDAdSessionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSPointerArray, NSString;

@interface GADOMIDAdSessionRegistry : NSObject <GADOMIDAdSessionDelegate>
{
    NSPointerArray *_adSessions;
    NSMutableArray *_activeAdSessions;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)adSession:(id)arg1 didRegisterAdView:(id)arg2;
- (void)adSessionDidFinish:(id)arg1;
- (void)adSessionDidStart:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (void)removeAdSession:(id)arg1;
- (void)addAdSession:(id)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSArray *observers;
@property(readonly, nonatomic) NSArray *activeAdSessions;
@property(readonly, nonatomic) NSArray *adSessions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
