//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMultiSizeViewController.h>

#import <Module_Framework/UICollectionViewDataSource-Protocol.h>
#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class GIMMe, NSArray, NSString, NSURL, UIImage, YTCommandResponderEvent, YTICommand, YTIFormattedString, YTIMobileStreamEndscreenRenderer, YTLCMovieSequence, YTLCStreamEndView, YTLCStreamMetadata, YTLCStreamUploadController;
@protocol YTResponder;

@interface YTLCStreamEndViewController : YTMultiSizeViewController <UICollectionViewDataSource, YTFormattedStringLabelDelegate, YTTopController, YTGraftingViewController>
{
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTLCStreamEndView *_streamEndView;
    YTIMobileStreamEndscreenRenderer *_model;
    NSArray *_statistics;
    UIImage *_backgroundImage;
    NSURL *_thumbnailURL;
    YTICommand *_navigationEndpoint;
    YTIFormattedString *_errorMessage;
    YTLCMovieSequence *_movieSequence;
    YTLCStreamUploadController *_streamUploadController;
    YTLCStreamMetadata *_streamMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTLCStreamMetadata *streamMetadata; // @synthesize streamMetadata=_streamMetadata;
@property(retain, nonatomic) YTLCStreamUploadController *streamUploadController; // @synthesize streamUploadController=_streamUploadController;
@property(retain, nonatomic) YTLCMovieSequence *movieSequence; // @synthesize movieSequence=_movieSequence;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSArray *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) YTIMobileStreamEndscreenRenderer *model; // @synthesize model=_model;
@property(retain, nonatomic) YTLCStreamEndView *streamEndView; // @synthesize streamEndView=_streamEndView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)showUploadingActivity;
- (void)transitionToNextScreen;
- (void)tappedDone;
- (void)updateOrientation;
- (void)fillThumbnail;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)navEndpoint;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)willAnimateTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 backgroundImage:(id)arg2 streamMetadata:(id)arg3 movieSequence:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

