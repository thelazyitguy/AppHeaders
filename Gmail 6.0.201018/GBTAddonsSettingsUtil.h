//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSettings_SettingChangeListener-Protocol.h"

@class NSString;
@protocol GBTClient;

@interface GBTAddonsSettingsUtil : NSObject <JBTSettings_SettingChangeListener>
{
    id <GBTClient> _client;
}

- (void).cxx_destruct;
- (_Bool)isEnabledForAddons;
- (void)onChangeWithId:(id)arg1 withId:(id)arg2;
- (void)stopMonitoring;
- (void)startMonitoring;
- (_Bool)isFixedFooterEnabled;
- (_Bool)isCmlRebindingEnabled;
- (_Bool)isEnabledForCompose;
- (_Bool)isEnabledForMessage;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
