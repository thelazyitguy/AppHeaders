//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFreeTierAlbumUBILogger;
@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration, SPTCollectionPlatformTestManager, SPTContextMenuActionsProvider, SPTContextMenuPresenterFactory, SPTLogCenter;

@interface SPTFreeTierAlbumBarButtonFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _contextMenuActionFactory;
    id <SPTLogCenter> _logCenter;
    SPTFreeTierAlbumUBILogger *_ubiLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTFreeTierAlbumUBILogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionFactory; // @synthesize contextMenuActionFactory=_contextMenuActionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (id)createContextMenuButtonViewModelForViewURI:(id)arg1 albumViewModel:(id)arg2;
- (id)createFeedbackButtonViewModelForViewURI:(id)arg1;
- (id)initWithCollectionPlatform:(id)arg1 collectionTestManager:(id)arg2 contextMenuPresenterFactory:(id)arg3 contextMenuActionFactory:(id)arg4 logCenter:(id)arg5 ubiLogger:(id)arg6;

@end

