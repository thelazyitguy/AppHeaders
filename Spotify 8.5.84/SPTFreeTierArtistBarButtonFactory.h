//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierArtistUBILogger;
@protocol SPTCollectionPlatformConfiguration, SPTContextMenuActionsProvider, SPTContextMenuPresenterFactory, SPTFollowModelFactory, SPTFreeTierArtistTestManager, SPTLogCenter, SPTModerationReportDecorationRegistry, SPTModerationServiceState;

@interface SPTFreeTierArtistBarButtonFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _contextMenuActionFactory;
    id <SPTFreeTierArtistTestManager> _freeTierArtistTestManager;
    id <SPTLogCenter> _logCenter;
    id <SPTModerationReportDecorationRegistry> _decorationRegistry;
    id <SPTModerationServiceState> _moderationFeatureState;
    SPTFreeTierArtistUBILogger *_ubiLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTFreeTierArtistUBILogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTModerationServiceState> moderationFeatureState; // @synthesize moderationFeatureState=_moderationFeatureState;
@property(readonly, nonatomic) id <SPTModerationReportDecorationRegistry> decorationRegistry; // @synthesize decorationRegistry=_decorationRegistry;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTFreeTierArtistTestManager> freeTierArtistTestManager; // @synthesize freeTierArtistTestManager=_freeTierArtistTestManager;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionFactory; // @synthesize contextMenuActionFactory=_contextMenuActionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (id)createContextMenuButtonViewModelForViewURI:(id)arg1;
- (id)createFeedbackButtonViewModelForViewURI:(id)arg1 networkConnectivityController:(id)arg2;
- (id)initWithCollectionConfiguration:(id)arg1 followModelFactory:(id)arg2 contextMenuPresenterFactory:(id)arg3 contextMenuActionFactory:(id)arg4 freeTierArtistTestManager:(id)arg5 logCenter:(id)arg6 decorationRegistry:(id)arg7 moderationFeatureState:(id)arg8 ubiLogger:(id)arg9;

@end
