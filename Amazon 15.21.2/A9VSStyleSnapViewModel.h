//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSProductSearchViewModel.h"

@class NSTimer;
@protocol A9VSStyleSnapModelDelegate;

@interface A9VSStyleSnapViewModel : A9VSProductSearchViewModel
{
    _Bool _viewDismissed;
    NSTimer *_delayTimer;
}

@property(nonatomic) _Bool viewDismissed; // @synthesize viewDismissed=_viewDismissed;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
- (void).cxx_destruct;
- (void)moveToDefaultState;
- (void)resetToInitialState;
- (void)didTouchCameraSearch;
- (void)didTapTryAgain;
- (void)backgroundApplication;
- (void)cleanupPhotoSearch;
- (void)cleanupPhotoSearchAndGoToDefaultMode;
- (void)resetFLPOrResultsForStartState;
- (void)openPhotoGallery;
- (void)proceedWithUploadAPhoto;
- (void)configureInitialState;
- (void)willMoveOutOfScanItExperience;

// Remaining properties
@property(nonatomic) __weak id <A9VSStyleSnapModelDelegate> delegate; // @dynamic delegate;

@end
