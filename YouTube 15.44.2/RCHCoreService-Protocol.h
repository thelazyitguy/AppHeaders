//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol RCHInterstitialWebviewControllerProtocol, RCHNotificationsServiceProtocol, RCHPersistenceServiceProtocol;

@protocol RCHCoreService <NSObject>
@property(readonly, nonatomic) id <RCHInterstitialWebviewControllerProtocol> interstitialController;
@property(readonly, nonatomic) id <RCHNotificationsServiceProtocol> notificationsService;
@property(readonly, nonatomic) id <RCHPersistenceServiceProtocol> persistenceService;
@end

