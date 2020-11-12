//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSModesBaseContainerDelegate-Protocol.h"

@class NSString;

@interface A9VSModesBaseContainer : NSObject <A9VSModesBaseContainerDelegate>
{
}

- (id)createWebPageWithURLString:(id)arg1 backButtonTitle:(id)arg2 withDelegate:(id)arg3;
- (void)toggleFlashButton:(id)arg1 forCameraVC:(id)arg2;
- (void)hideMessageCard:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showMessageCard:(id)arg1 onParentView:(id)arg2 forChildViewController:(id)arg3 forRightControlPanel:(id)arg4 bottomControlPanel:(id)arg5 bottomHeightConstant:(double)arg6;
- (void)stopCameraActionForCameraVC:(id)arg1;
- (void)pauseCameraActionForCameraVC:(id)arg1;
- (void)startCameraActionForCameraVC:(id)arg1;
- (void)destroyCameraVC:(id *)arg1;
- (void)addNewChildViewController:(id)arg1 inViewController:(id)arg2 parentView:(id)arg3;
- (void)refreshFlashButton:(id)arg1 forCameraVC:(id)arg2 shouldToggle:(_Bool)arg3;
- (void)setupControlPanel:(id)arg1 forMode:(id)arg2 withFlashButton:(id *)arg3 cameraVC:(id)arg4 controlAxisVertical:(_Bool)arg5;
- (void)setupRightControlPanel:(id)arg1 forMode:(id)arg2 withFlashButton:(id *)arg3 cameraVC:(id)arg4;
- (id)createControlPanelWithAligningView:(id)arg1 inParentView:(id)arg2 controlAxisVertical:(_Bool)arg3;
- (id)createRightControlPanelWithAligningView:(id)arg1 inParentView:(id)arg2;
- (void)alignView:(id)arg1 inParentView:(id)arg2 alignedWithView:(id)arg3 shrinkSidePadding:(_Bool)arg4;
- (void)alignView:(id)arg1 inParentView:(id)arg2 alignedWithView:(id)arg3;
- (id)createInfoHeaderViewInParentView:(id)arg1 alignedWithView:(id)arg2;
- (void)setupCameraViewForVC:(id)arg1 inParentViewController:(id)arg2 forView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
