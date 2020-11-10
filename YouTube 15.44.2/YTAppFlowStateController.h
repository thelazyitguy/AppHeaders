//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTUserChangedObserver-Protocol.h>

@class GIMMe, NSString;

@interface YTAppFlowStateController : NSObject <YTUserChangedObserver>
{
    double _lastOpenedFromDeepLink;
    double _lastUserChange;
    _Bool _deepLinkViaWatchEndpoint;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (double)now;
- (void)userDidChange;
- (_Bool)isRecentlySignedIn;
- (void)openedFromDeepLink:(id)arg1;
- (_Bool)isOpenedFromWatchDeepLink;
- (_Bool)isRecentlyOpenedFromDeepLink;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

