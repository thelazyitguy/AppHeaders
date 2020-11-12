//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezViewController.h"

#import "A9VSFezDoormanViewControllerDelegate-Protocol.h"
#import "A9VSFezDrawerViewControllerDelegate-Protocol.h"
#import "A9VSFezSceneGestureHandlerOverlayDelegate-Protocol.h"
#import "A9VSFezSceneGestureListener-Protocol.h"

@class A9VSFezDoormanViewController, A9VSFezLiveARViewController, A9VSFezNoSavedRoomViewController, A9VSFezRoomViewController, NSString;

@interface A9VSFezSaveYourRoomViewController : A9VSFezViewController <A9VSFezDoormanViewControllerDelegate, A9VSFezDrawerViewControllerDelegate, A9VSFezSceneGestureHandlerOverlayDelegate, A9VSFezSceneGestureListener>
{
    _Bool _roomsExistsForCustomerOnIngress;
    A9VSFezDoormanViewController *_doormanViewController;
    A9VSFezLiveARViewController *_liveARViewController;
    A9VSFezRoomViewController *_roomViewController;
    A9VSFezNoSavedRoomViewController *_noSavedRoomViewController;
}

@property(nonatomic) _Bool roomsExistsForCustomerOnIngress; // @synthesize roomsExistsForCustomerOnIngress=_roomsExistsForCustomerOnIngress;
@property(nonatomic) __weak A9VSFezNoSavedRoomViewController *noSavedRoomViewController; // @synthesize noSavedRoomViewController=_noSavedRoomViewController;
@property(nonatomic) __weak A9VSFezRoomViewController *roomViewController; // @synthesize roomViewController=_roomViewController;
@property(nonatomic) __weak A9VSFezLiveARViewController *liveARViewController; // @synthesize liveARViewController=_liveARViewController;
@property(nonatomic) __weak A9VSFezDoormanViewController *doormanViewController; // @synthesize doormanViewController=_doormanViewController;
- (void).cxx_destruct;
- (void)didFailToLoadProductForASIN:(id)arg1 withError:(id)arg2;
- (void)didFailToLoadProductModelForProduct:(id)arg1 withError:(id)arg2;
- (void)didLoadProductModelForProduct:(id)arg1;
- (void)willDownloadProductModelForProduct:(id)arg1;
- (void)didPerformTwoFingerRotationInView:(id)arg1 state:(long long)arg2 rotation:(double)arg3 velocity:(double)arg4;
- (void)didPerformTwoFingerPanInView:(id)arg1 state:(long long)arg2 position:(struct CGPoint)arg3 velocity:(struct CGPoint)arg4;
- (void)showDownloadProgressMessageIfNeeded;
- (void)didPerformOneFingerPanInView:(id)arg1 state:(long long)arg2 position:(struct CGPoint)arg3 velocity:(struct CGPoint)arg4;
- (void)didPerformOneFingerTouchDownInView:(id)arg1 state:(long long)arg2 position:(struct CGPoint)arg3;
- (void)didPerformOneFingerTapInView:(id)arg1 state:(long long)arg2 position:(struct CGPoint)arg3;
- (void)debounceGuidanceIfNeeded;
- (void)engine:(id)arg1 didDeleteProduct:(id)arg2;
- (void)engine:(id)arg1 didHighlightProduct:(id)arg2 previouslyHighlightedProduct:(id)arg3;
- (void)engine:(id)arg1 didChangePlaneHitTestAreaType:(long long)arg2;
- (void)engine:(id)arg1 didPerformModelHitTest:(id)arg2;
- (void)engine:(id)arg1 didPerformHitTest:(id)arg2;
- (void)engine:(id)arg1 didLoadProduct:(id)arg2 withIntent:(id)arg3;
- (void)engine:(id)arg1 didDropOffProduct:(id)arg2;
- (void)engine:(id)arg1 didRerunConfiguration:(id)arg2;
- (void)engine:(id)arg1 didRunConfiguration:(id)arg2;
- (void)setUpHorizontalRigControllerForProduct:(id)arg1;
- (void)doormanViewController:(id)arg1 didSelectRoom:(id)arg2;
- (void)doormanViewControllerDidSelectLiveAR:(id)arg1;
- (id)activeSYROverlayController;
- (void)displayRoom:(id)arg1 withAssetData:(id)arg2;
- (void)didSelectRescan:(id)arg1;
- (void)didSelectContinue:(id)arg1;
- (id)overlayViewsForSceneGestureHandler:(id)arg1;
- (void)engineDidRunOrRerunConfigurationWithSessionTypeAR;
- (void)layoutLiveARController;
- (void)layoutDoormanViewController;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dismissRoomsViewController;
- (_Bool)shouldPresentSavedRoomsOutroScreen;
- (void)showNoSavedRoomsViewController;
- (void)showRoomsViewController;
- (void)showLiveARViewController;
- (void)showDoormanViewController;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
