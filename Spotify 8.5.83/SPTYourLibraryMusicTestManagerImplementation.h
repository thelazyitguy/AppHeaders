//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTYourLibraryMusicTestManager-Protocol.h"

@class NSString, SPTYourLibraryMusicFeatureProperties;
@protocol SPTCollectionPlatformTestManager, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState, SPTRemoteConfigurationResolver, _TtP22YourLibraryBetaFeature29SPTYourLibraryBetaTestManager_;

@interface SPTYourLibraryMusicTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTYourLibraryMusicTestManager>
{
    _Bool _consolidatedExperienceEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTYourLibraryMusicFeatureProperties *_remoteConfigurationProperties;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <_TtP22YourLibraryBetaFeature29SPTYourLibraryBetaTestManager_> _yourLibraryBetaTestManager;
    id <SPTFeatureFlagSignal> _consolidatedExperienceSignal;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isConsolidatedExperienceEnabled) _Bool consolidatedExperienceEnabled; // @synthesize consolidatedExperienceEnabled=_consolidatedExperienceEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedExperienceSignal; // @synthesize consolidatedExperienceSignal=_consolidatedExperienceSignal;
@property(readonly, nonatomic) id <_TtP22YourLibraryBetaFeature29SPTYourLibraryBetaTestManager_> yourLibraryBetaTestManager; // @synthesize yourLibraryBetaTestManager=_yourLibraryBetaTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(retain, nonatomic) SPTYourLibraryMusicFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic, getter=isAccessibleSearchBarEnabled) _Bool accessibleSearchBarEnabled;
@property(readonly, nonatomic, getter=isFrecencySortOrderDefaultInPlaylistsEnabled) _Bool frecencySortOrderDefaultInPlaylistsEnabled;
@property(readonly, nonatomic, getter=isLikedSongsFiltersEnabled) _Bool likedSongsFiltersEnabled;
@property(readonly, nonatomic) unsigned long long likedSongsFiltersSource;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, nonatomic, getter=isYourLibraryBetaEnabled) _Bool yourLibraryBetaEnabled;
@property(readonly, nonatomic, getter=isShowAlbumArtistRecommendationsEnabled) _Bool showAlbumArtistRecommendationsEnabled;
- (void)setupRemoteConfigurationProperties;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 remoteConfigurationResolver:(id)arg3 collectionPlatformTestManager:(id)arg4 yourLibraryBetaTestManager:(id)arg5 consolidatedExperienceSignal:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

