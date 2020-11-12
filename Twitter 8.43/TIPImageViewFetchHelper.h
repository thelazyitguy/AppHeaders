//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImageFetchDelegate-Protocol.h>

@class NSError, NSString, NSURL, TIPImageFetchMetrics, TIPImageFetchOperation, UIColor, UILabel, UIView;
@protocol TIPImageFetchRequest, TIPImageFetchable, TIPImageViewFetchHelperDataSource, TIPImageViewFetchHelperDelegate;

@interface TIPImageViewFetchHelper : NSObject <TIPImageFetchDelegate>
{
    TIPImageFetchOperation *_fetchOperation;
    long long _priorPriority;
    UILabel *_debugInfoView;
    struct {
        unsigned int transitioningAppearance:1;
        unsigned int didCancelOnDisapper:1;
        unsigned int didChangePriorityOnDisappear:1;
        unsigned int isLoadedImageFinal:1;
        unsigned int isLoadedImageProgressive:1;
        unsigned int isLoadedImagePreview:1;
        unsigned int isLoadedImageScaled:1;
        unsigned int treatAsPlaceholder:1;
        unsigned int didTreatBackgroundingAsDisappearance:1;
    } _flags;
    NSString *_loadedImageType;
    UIColor *_debugImageHighlightColor;
    UIColor *_debugInfoTextColor;
    id _opaqueNotificationObserver;
    NSString *_observedPipelineIdentifier;
    _Bool _shouldTreatApplicationBackgroundAsViewDisappearance;
    float _fetchProgress;
    long long _disappearanceBehavior;
    UIView<TIPImageFetchable> *_fetchView;
    id <TIPImageFetchRequest> _fetchRequest;
    NSError *_fetchError;
    TIPImageFetchMetrics *_fetchMetrics;
    long long _fetchSource;
    NSURL *_fetchedImageURL;
    id <TIPImageViewFetchHelperDelegate> _delegate;
    id <TIPImageViewFetchHelperDataSource> _dataSource;
    id <TIPImageViewFetchHelperDelegate> _atomicDelegate;
    struct CGSize _fetchResultDimensions;
}

+ (void)notifyAllFetchHelpersToRetryFailedLoads;
+ (void)transitionView:(id)arg1 fromFetchHelper:(id)arg2 toFetchHelper:(id)arg3;
+ (_Bool)isDebugInfoVisible;
+ (void)setDebugInfoVisible:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TIPImageViewFetchHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TIPImageViewFetchHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *fetchedImageURL; // @synthesize fetchedImageURL=_fetchedImageURL;
@property(nonatomic) long long fetchSource; // @synthesize fetchSource=_fetchSource;
@property(nonatomic) struct CGSize fetchResultDimensions; // @synthesize fetchResultDimensions=_fetchResultDimensions;
@property(retain, nonatomic) TIPImageFetchMetrics *fetchMetrics; // @synthesize fetchMetrics=_fetchMetrics;
@property(retain, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property(nonatomic) float fetchProgress; // @synthesize fetchProgress=_fetchProgress;
@property(retain, nonatomic) id <TIPImageFetchRequest> fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(nonatomic) __weak UIView<TIPImageFetchable> *fetchView; // @synthesize fetchView=_fetchView;
@property(nonatomic) _Bool shouldTreatApplicationBackgroundAsViewDisappearance; // @synthesize shouldTreatApplicationBackgroundAsViewDisappearance=_shouldTreatApplicationBackgroundAsViewDisappearance;
@property(nonatomic) long long disappearanceBehavior; // @synthesize disappearanceBehavior=_disappearanceBehavior;
- (void)triggerViewDidAppear;
- (void)triggerViewWillAppear;
- (void)triggerViewDidDisappear;
- (void)triggerViewWillDisappear;
- (void)triggerViewLayingOutSubviews;
- (void)triggerApplicationWillEnterForeground;
- (void)triggerApplicationDidEnterBackground;
- (void)triggerViewDidMoveToWindow;
- (void)triggerViewWillMoveToWindow:(id)arg1;
- (void)markAsIfPlaceholder;
- (void)setImageContainerAsIfPlaceholder:(id)arg1;
- (void)setImageAsIfPlaceholder:(id)arg1;
- (void)markAsIfLoaded;
- (void)setImageContainerAsIfLoaded:(id)arg1;
- (void)setImageAsIfLoaded:(id)arg1;
- (void)reload;
- (void)clearImage;
- (void)cancelFetchRequest;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool didLoadAny;
@property(readonly, nonatomic) _Bool fetchedImageIsFullLoad;
@property(readonly, nonatomic) _Bool fetchedImageIsScaledPreviewAsFinal;
@property(readonly, nonatomic) _Bool fetchedImageIsProgressiveFrame;
@property(readonly, nonatomic) _Bool fetchedImageIsPreview;
@property(readonly, nonatomic) _Bool fetchedImageTreatedAsPlaceholder;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (id)init;
@property(nonatomic) long long fetchDisappearanceBehavior;
- (void)tip_imageFetchOperation:(id)arg1 willAttemptToLoadFromSource:(long long)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didUpdateProgress:(float)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFirstAnimatedImageFrame:(id)arg2 progress:(float)arg3;
- (void)tip_imageFetchOperation:(id)arg1 didUpdateProgressiveImage:(id)arg2 progress:(float)arg3;
- (_Bool)tip_imageFetchOperation:(id)arg1 shouldLoadProgressivelyWithIdentifier:(id)arg2 URL:(id)arg3 imageType:(id)arg4 originalDimensions:(struct CGSize)arg5;
- (void)tip_imageFetchOperation:(id)arg1 didLoadPreviewImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tip_imageFetchOperationDidStart:(id)arg1;
- (void)tip_imageFetchOperation:(id)arg1 didLoadDirtyPreviewImage:(id)arg2;
- (void)_tip_retryFailedLoadsNotification:(id)arg1;
- (void)_tip_didUpdateDebugVisibility;
- (void)_tip_imageDidUpdate:(id)arg1;
- (void)setDebugInfoNeedsUpdate;
- (id)debugInfoStrings;
@property(retain, nonatomic) UIColor *debugImageHighlightColor;
@property(retain, nonatomic) UIColor *debugInfoTextColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
