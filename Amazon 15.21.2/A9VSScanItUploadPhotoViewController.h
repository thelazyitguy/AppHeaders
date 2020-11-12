//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class A9VSScanItDataHandler, FlowManager, NSString, NSTimer, UIImageView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol A9VSScanItUploadPhotoDelegate, FlowCameraProcessorDelegate, FlowClientSessionContext;

@interface A9VSScanItUploadPhotoViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _canStartNewPhotoSearchSession;
    _Bool _isImageMatchRequestInProgress;
    _Bool _shouldSendImageRequest;
    id <A9VSScanItUploadPhotoDelegate> _delegate;
    A9VSScanItDataHandler *_dataHandler;
    id <FlowCameraProcessorDelegate> _photoFlowManagerDelegate;
    NSString *_fireflyModeName;
    NSString *_modeMetricName;
    UIImageView *_selectedImage;
    FlowManager *_photoFlowManager;
    id <FlowClientSessionContext> _flowClientSessionContext;
    UIPanGestureRecognizer *_panGesture;
    UILongPressGestureRecognizer *_pressGesture;
    UITapGestureRecognizer *_tapGesture;
    UIView *_header;
    UILabel *_infoHeaderLabel;
    double _imageCenterYBeforeSearch;
    NSTimer *_searchTimer;
    UIView *_messageViewForSearchText;
    UILabel *_searchTextLabel;
    struct CGPoint _originalImageCenter;
    struct CGAffineTransform _originalImageTransform;
}

@property(retain, nonatomic) UILabel *searchTextLabel; // @synthesize searchTextLabel=_searchTextLabel;
@property(retain, nonatomic) UIView *messageViewForSearchText; // @synthesize messageViewForSearchText=_messageViewForSearchText;
@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer=_searchTimer;
@property _Bool shouldSendImageRequest; // @synthesize shouldSendImageRequest=_shouldSendImageRequest;
@property(nonatomic) struct CGPoint originalImageCenter; // @synthesize originalImageCenter=_originalImageCenter;
@property(nonatomic) double imageCenterYBeforeSearch; // @synthesize imageCenterYBeforeSearch=_imageCenterYBeforeSearch;
@property(retain, nonatomic) UILabel *infoHeaderLabel; // @synthesize infoHeaderLabel=_infoHeaderLabel;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *pressGesture; // @synthesize pressGesture=_pressGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) struct CGAffineTransform originalImageTransform; // @synthesize originalImageTransform=_originalImageTransform;
@property _Bool isImageMatchRequestInProgress; // @synthesize isImageMatchRequestInProgress=_isImageMatchRequestInProgress;
@property(retain, nonatomic) id <FlowClientSessionContext> flowClientSessionContext; // @synthesize flowClientSessionContext=_flowClientSessionContext;
@property(retain, nonatomic) FlowManager *photoFlowManager; // @synthesize photoFlowManager=_photoFlowManager;
@property(retain, nonatomic) UIImageView *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) _Bool canStartNewPhotoSearchSession; // @synthesize canStartNewPhotoSearchSession=_canStartNewPhotoSearchSession;
@property(retain, nonatomic) NSString *modeMetricName; // @synthesize modeMetricName=_modeMetricName;
@property(retain, nonatomic) NSString *fireflyModeName; // @synthesize fireflyModeName=_fireflyModeName;
@property(nonatomic) __weak id <FlowCameraProcessorDelegate> photoFlowManagerDelegate; // @synthesize photoFlowManagerDelegate=_photoFlowManagerDelegate;
@property(retain, nonatomic) A9VSScanItDataHandler *dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic) __weak id <A9VSScanItUploadPhotoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginSearch;
- (void)startPhotoSearch;
- (void)cancelPhotoSearch;
- (void)stopSearchTimer;
- (void)setupFlowManager;
- (void)backButtonPressed;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)willShowError;
- (void)willShowNoResults;
- (void)willResolveResults;
- (void)saveStateBeforeFinishingSearch;
- (void)completePhotoSearchFinished;
- (void)updateUIForPhotoSearchFinished;
- (void)resetHeaderView;
- (void)showUploadPhotoPicker;
- (void)performPostImageSearchOperations;
- (void)resetToStartState;
- (void)cleanup;
- (void)viewDidLoad;
- (id)initWithFlowClientSessionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
