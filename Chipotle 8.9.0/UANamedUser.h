//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/UAComponent.h>

@class NSString, UAChannel, UANamedUserAPIClient, UAPreferenceDataStore, UARuntimeConfig, UATagGroupsRegistrar;

@interface UANamedUser : UAComponent
{
    UATagGroupsRegistrar *_tagGroupsRegistrar;
    UANamedUserAPIClient *_namedUserAPIClient;
    UAPreferenceDataStore *_dataStore;
    UAChannel *_channel;
    UARuntimeConfig *_config;
}

+ (id)namedUserWithChannel:(id)arg1 config:(id)arg2 dataStore:(id)arg3 tagGroupsRegistrar:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UARuntimeConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) UAChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UANamedUserAPIClient *namedUserAPIClient; // @synthesize namedUserAPIClient=_namedUserAPIClient;
@property(retain, nonatomic) UATagGroupsRegistrar *tagGroupsRegistrar; // @synthesize tagGroupsRegistrar=_tagGroupsRegistrar;
- (void)onDataCollectionEnabledChanged;
- (void)onComponentEnableChange;
- (void)channelCreated:(id)arg1;
- (void)updateTags;
- (void)setTags:(id)arg1 group:(id)arg2;
- (void)removeTags:(id)arg1 group:(id)arg2;
- (void)addTags:(id)arg1 group:(id)arg2;
- (void)forceUpdate;
- (void)disassociateNamedUserIfNil;
- (void)disassociateNamedUser;
- (void)associateNamedUser;
@property(copy, nonatomic) NSString *lastChannelID;
@property(copy, nonatomic) NSString *lastUpdatedToken;
@property(copy, nonatomic) NSString *changeToken;
@property(copy, nonatomic) NSString *identifier;
- (void)update;
- (id)initWithChannel:(id)arg1 config:(id)arg2 dataStore:(id)arg3 tagGroupsRegistrar:(id)arg4;

@end
