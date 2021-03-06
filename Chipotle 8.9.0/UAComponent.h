//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UAPreferenceDataStore;

@interface UAComponent : NSObject
{
    _Bool _dataCollectionEnabled;
    UAPreferenceDataStore *_componentDataStore;
}

+ (id)shared;
- (void).cxx_destruct;
@property(nonatomic, getter=isDataCollectionEnabled) _Bool dataCollectionEnabled; // @synthesize dataCollectionEnabled=_dataCollectionEnabled;
@property(retain, nonatomic) UAPreferenceDataStore *componentDataStore; // @synthesize componentDataStore=_componentDataStore;
- (void)airshipReady:(id)arg1;
- (void)applyRemoteConfig:(id)arg1;
- (void)onDataCollectionEnabledChanged;
- (void)onComponentEnableChange;
@property(readonly, nonatomic) _Bool isDataCollectionEnabled;
- (id)componentEnabledKey;
@property _Bool componentEnabled;
- (id)componentIdentifier;
- (id)initWithDataStore:(id)arg1;

@end

