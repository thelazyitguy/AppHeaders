//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierAlbumTestManager-Protocol.h"

@class NSString, SPTFreeTierAlbumFeatureProperties;
@protocol SPTRemoteConfigurationResolver;

@interface SPTFreeTierAlbumTestManagerImplementation : NSObject <SPTFreeTierAlbumTestManager>
{
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTFreeTierAlbumFeatureProperties *_properties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTFreeTierAlbumFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
- (_Bool)isTrackHeartButtonEnabled;
- (_Bool)isAlbumPageLoaderDisabled;
- (_Bool)isAlbumOfflineMangementEnabled;
- (id)initWithRemoteConfigurationResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
