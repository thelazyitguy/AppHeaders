//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCollectionViewController.h>

#import <Module_Framework/YCHLiveChatCollectionViewControllerProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewScrollObserver-Protocol.h>
#import <Module_Framework/YTInnerTubeCollectionAppearanceResponderProvider-Protocol.h>

@class NSString;

@interface YCHAsyncLiveChatCollectionViewController : YTInnerTubeCollectionViewController <YTInnerTubeCollectionAppearanceResponderProvider, YTCollectionViewScrollObserver, YCHLiveChatCollectionViewControllerProtocol>
{
}

- (_Bool)areAnyItemsVisible;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionViewControllerDidScroll:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)statusViewSectionControllerWithState:(int)arg1;
- (void)setPullRefreshEnabled:(_Bool)arg1;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (void)resetFadeOut;
- (void)handleUpdateItems:(id)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 UIFormatter:(id)arg3 layout:(id)arg4 controllerFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
