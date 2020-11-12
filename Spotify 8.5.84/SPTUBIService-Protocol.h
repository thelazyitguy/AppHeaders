//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTUBILogForwarder, SPTUBIMenuControllerObserver, SPTUBINavigationObserver, SPTUBIPageInstanceIdentifierManager, SPTUBIPageInstanceIdentifierProvider, SPTUBISessionServiceResponder, SPTUBIUserBehaviourInstrumentation;

@protocol SPTUBIService <SPTService>
- (id <SPTUBIMenuControllerObserver>)provideMenuControllerObserver;
- (id <SPTUBISessionServiceResponder>)provideSessionServiceResponder;
- (id <SPTUBIPageInstanceIdentifierManager>)pageInstanceIdManager;
- (id <SPTUBIPageInstanceIdentifierProvider>)pageInstanceIdProvider;
- (id <SPTUBILogForwarder>)provideLogForwarder;
- (void)removeObserver:(id <SPTUBINavigationObserver>)arg1;
- (void)addObserver:(id <SPTUBINavigationObserver>)arg1;
- (id <SPTUBIUserBehaviourInstrumentation>)provideUserBehaviourInstrumentation;
@end
