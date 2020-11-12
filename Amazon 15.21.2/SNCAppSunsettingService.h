//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SNCAppSunsettingArcusClient;

@interface SNCAppSunsettingService : NSObject
{
    SNCAppSunsettingArcusClient *_arcusClient;
}

@property(retain) SNCAppSunsettingArcusClient *arcusClient; // @synthesize arcusClient=_arcusClient;
- (void).cxx_destruct;
- (void)clearUserSunsetStatusAndOSValues;
- (_Bool)hasUserUpdatedOS;
- (void)setOSBlockOrWarningVersionIfNecessary:(id)arg1;
- (void)checkForRemoteConfigUpdate;
- (_Bool)shouldShowAppSunsetInterstitial:(_Bool)arg1;
- (void)updateNSUserDefaultsSunsetStatus:(id)arg1;
- (void)updateUserSunsetStatus;
- (id)init;

@end
