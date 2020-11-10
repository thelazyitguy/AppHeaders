//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIComponentFactory-Protocol.h"

@class NSString, SPTHomeUIComponentDependencies, SPTHomeUIContextMenuActionHandlerImplementation, SPTHomeUIPodcastEntityProvider, SPTHomeUITopBarDependencies;
@protocol SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTEncoreNavigationRowFactory, SPTEncorePromoCardWrappedFactory, SPTSnackbarConditionalPresenter;

@interface SPTHomeUIComponentFactoryImplementation : NSObject <SPTHomeUIComponentFactory>
{
    SPTHomeUIComponentDependencies *_componentDependencies;
    SPTHomeUITopBarDependencies *_topBarDependencies;
    SPTHomeUIPodcastEntityProvider *_podcastEntityProvider;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTHomeUIContextMenuActionHandlerImplementation *_contextMenuActionHandler;
    id <SPTEncorePromoCardWrappedFactory> _encorePromoCardWrappedFactory;
    id <SPTEncoreNavigationRowFactory> _encoreNavigationRowFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTEncoreNavigationRowFactory> encoreNavigationRowFactory; // @synthesize encoreNavigationRowFactory=_encoreNavigationRowFactory;
@property(readonly, nonatomic) id <SPTEncorePromoCardWrappedFactory> encorePromoCardWrappedFactory; // @synthesize encorePromoCardWrappedFactory=_encorePromoCardWrappedFactory;
@property(readonly, nonatomic) SPTHomeUIContextMenuActionHandlerImplementation *contextMenuActionHandler; // @synthesize contextMenuActionHandler=_contextMenuActionHandler;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) SPTHomeUIPodcastEntityProvider *podcastEntityProvider; // @synthesize podcastEntityProvider=_podcastEntityProvider;
@property(readonly, nonatomic) SPTHomeUITopBarDependencies *topBarDependencies; // @synthesize topBarDependencies=_topBarDependencies;
@property(readonly, nonatomic) SPTHomeUIComponentDependencies *componentDependencies; // @synthesize componentDependencies=_componentDependencies;
- (id)createNavigationRowComponent;
- (id)createPromoCardWrappedComponent;
- (id)createDimmedViewComponent;
- (id)createTopBarComponent;
- (id)createTooltipComponent;
- (id)createTappableSectionHeaderComponent;
- (id)createShortcutsCardComponent;
- (id)createShortcutsContainerComponent;
- (id)createSingleItemComponent;
- (id)createSectionHeaderComponent;
- (id)createRowLargeComponent;
- (id)createPromoV2Component;
- (id)createPromoComponent;
- (id)createCarouselComponent;
- (id)createLargeCardComponent;
- (id)createMediumCardComponent;
- (id)createSmallCardComponent;
- (void)unregisterHomeComponentsFromComponentRegistry:(id)arg1;
- (void)registerHomeComponentsToComponentRegistry:(id)arg1;
- (id)provideHomeHubComponents;
- (id)initWithComponentDependencies:(id)arg1 topBarDependencies:(id)arg2 podcastEntityProvider:(id)arg3 contextMenuPresenterFactory:(id)arg4 contextMenuOptionsFactory:(id)arg5 snackbarPresenter:(id)arg6 contextMenuActionHandler:(id)arg7 encorePromoCardWrappedFactory:(id)arg8 encoreNavigationRowFactory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
