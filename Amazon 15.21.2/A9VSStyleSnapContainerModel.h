//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSModesViewModelBaseProtocol-Protocol.h"
#import "A9VSNetworkObserver-Protocol.h"
#import "A9VSStyleSnapContainerInterface-Protocol.h"

@class A9VSNetwork, A9VSSearchHistoryCoordinator, NSDictionary, NSMutableArray, NSString;
@protocol A9VSStyleSnapContainerModelDelegate;

@interface A9VSStyleSnapContainerModel : NSObject <A9VSNetworkObserver, A9VSModesViewModelBaseProtocol, A9VSStyleSnapContainerInterface>
{
    _Bool _delayLicense;
    _Bool _shouldDismissViewAfterSearch;
    NSString *fireflyModeName;
    NSString *metricName;
    NSDictionary *_imageCompressionFactors;
    id <A9VSStyleSnapContainerModelDelegate> _delegate;
    A9VSNetwork *_network;
    NSMutableArray *_coordinators;
    NSMutableArray *_activeCoordinators;
    A9VSSearchHistoryCoordinator *_searchHistoryCoordinator;
    NSDictionary *_deeplinkParam;
    NSDictionary *_expectedBox;
}

@property(retain, nonatomic) NSDictionary *expectedBox; // @synthesize expectedBox=_expectedBox;
@property(nonatomic) _Bool shouldDismissViewAfterSearch; // @synthesize shouldDismissViewAfterSearch=_shouldDismissViewAfterSearch;
@property(retain, nonatomic) NSDictionary *deeplinkParam; // @synthesize deeplinkParam=_deeplinkParam;
@property(retain, nonatomic) A9VSSearchHistoryCoordinator *searchHistoryCoordinator; // @synthesize searchHistoryCoordinator=_searchHistoryCoordinator;
@property(retain, nonatomic) NSMutableArray *activeCoordinators; // @synthesize activeCoordinators=_activeCoordinators;
@property(retain, nonatomic) NSMutableArray *coordinators; // @synthesize coordinators=_coordinators;
@property(retain, nonatomic) A9VSNetwork *network; // @synthesize network=_network;
@property(nonatomic) __weak id <A9VSStyleSnapContainerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool delayLicense; // @synthesize delayLicense=_delayLicense;
@property(retain, nonatomic) NSDictionary *imageCompressionFactors; // @synthesize imageCompressionFactors=_imageCompressionFactors;
@property(retain, nonatomic) NSString *metricName; // @synthesize metricName;
@property(retain, nonatomic) NSString *fireflyModeName; // @synthesize fireflyModeName;
- (void).cxx_destruct;
- (void)updateActiveCoordinators;
@property(readonly, nonatomic) _Bool isPhotoPermissionRequiredForDeeplink;
@property(readonly, nonatomic) _Bool deeplink;
- (void)launchDeeplinkIfRequired;
- (void)transitionAnimationCompleted;
- (void)scrollViewDidEndDragging;
- (void)dismissContainerView;
- (void)didReceiveSnapScanDestinationWithData:(id)arg1;
- (void)applicationWillResignActive;
- (void)prepareDeeplinks;
- (void)applicationDidBecomeActive;
- (void)didTapOnUploadPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (void)networkErrorWasResolved;
- (void)didReceiveNetworkError;
- (id)headerTitle;
- (void)reloadViews;
- (void)reloadViewFor:(id)arg1;
- (void)storeImageInfo:(id)arg1 forImage:(id)arg2;
- (unsigned long long)numberOfViewsToDisplay;
- (struct CGSize)sizeOfTheDisplayViewAtIndexPath:(id)arg1;
- (id)viewControllerToDisplayAtIndexPath:(id)arg1;
- (id)allActiveViewControllers;
- (_Bool)shouldDismissSelf;
- (_Bool)isFirstTimeStyleSnapCustomer;
- (void)searchFromImageHash:(id)arg1 displayImage:(id)arg2 screenPos:(struct CGPoint)arg3 imageSource:(id)arg4 fromViewController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)searchForImage:(id)arg1;
- (void)configurePreSearchUI:(id)arg1 screenPos:(struct CGPoint)arg2 fromViewController:(id)arg3 imageSource:(id)arg4;
- (void)startSearchForImage:(id)arg1 screenPos:(struct CGPoint)arg2 imageSource:(id)arg3 fromViewController:(id)arg4;
- (void)startSearchForImage:(id)arg1 screenPos:(struct CGPoint)arg2 imageSource:(id)arg3 fromViewController:(id)arg4 shouldDismissViewAfterSearch:(_Bool)arg5;
- (void)resumeSearchForImage:(id)arg1;
- (_Bool)willStartImageSearch;
- (void)network:(id)arg1 didChangeStatus:(unsigned long long)arg2;
- (void)startMonitoringNetwork;
- (id)styleFeedCoordinator;
- (id)createCoordinatorsFromCards:(id)arg1;
- (void)updateWithModelConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
