//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistTestManager-Protocol.h"

@class NSString, SPTFreeTierPlaylistFeatureProperties;
@protocol SPTProductState;

@interface SPTFreeTierPlaylistTestManagerImplementation : NSObject <SPTFreeTierPlaylistTestManager>
{
    id <SPTProductState> _productState;
    SPTFreeTierPlaylistFeatureProperties *_featureProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTFreeTierPlaylistFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) _Bool enableEditModeForFree;
@property(readonly, nonatomic) _Bool showAddedByAsFace;
@property(readonly, nonatomic) _Bool showInviteFriendsAction;
@property(readonly, nonatomic) _Bool showCollaboratingUsersInHeader;
@property(readonly, nonatomic, getter=isWeigthedShufflePlayDisabled) _Bool weigthedShufflePlayDisabled;
@property(readonly, nonatomic) unsigned long long tableviewUpdateStrategy;
@property(readonly, nonatomic, getter=isEpisodesInPlaylistDisabled) _Bool episodesInPlaylistDisabled;
@property(readonly, nonatomic, getter=isScrollPerformanceTrackingEnabled) _Bool scrollPerformanceTrackingEnabled;
@property(readonly, nonatomic) _Bool dontOpenNPVOnVideoPlayback;
@property(readonly, nonatomic, getter=isDoubleStatePlayButtonEnabled) _Bool doubleStatePlayButtonEnabled;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
- (id)initWithFeatureProperties:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
