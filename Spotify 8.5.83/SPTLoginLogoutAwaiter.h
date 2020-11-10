//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginStateObserver-Protocol.h"

@class NSMutableArray, NSString;

@interface SPTLoginLogoutAwaiter : NSObject <SPTLoginStateObserver>
{
    NSMutableArray *_handlers;
    unsigned long long _currentState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
- (void)userDidLogout;
- (void)userDidLogin;
- (void)invokeHandlersAndDisposeOfHandlers;
- (void)awaitLogoutWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

