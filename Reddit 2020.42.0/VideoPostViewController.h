//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PostViewController.h"

#import "AttributedLabelRegularDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "VideoPostViewControllerDelegate-Protocol.h"

@class AVURLAsset, BaseButton, BaseView, BottomLabelButton, CorrelationID, NSDictionary, NSFileManager, NSString, NSURL, NSUUID, PowerupsMarketingBadgeView, UIView, _TtC6Reddit15RedditVideoNode, _TtC7Economy17SubredditPowerups;

@interface VideoPostViewController : PostViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, AttributedLabelRegularDelegate, VideoPostViewControllerDelegate>
{
    _Bool _wasTrimmed;
    _Bool _isGif;
    NSURL *_videoURL;
    NSFileManager *_fileManager;
    BaseView *_actionView;
    BottomLabelButton *_cameraButton;
    BottomLabelButton *_photosButton;
    BaseView *_videoPreview;
    BaseView *_loadingPickerBackground;
    UIView *_separatorView;
    _TtC6Reddit15RedditVideoNode *_videoNode;
    BaseView *_snapshotView;
    AVURLAsset *_sourceAsset;
    PowerupsMarketingBadgeView *_powerupsMarketingBadgeView;
    NSUUID *_videoUUID;
    NSDictionary *_mediaInfo;
    BaseButton *_removeButton;
    NSString *_linkUploadURL;
    NSString *_linkImageUploadURL;
    double _linkUploadPercent;
    _TtC7Economy17SubredditPowerups *_subredditPowerups;
    CorrelationID *_correlationID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CorrelationID *correlationID; // @synthesize correlationID=_correlationID;
@property(copy, nonatomic) _TtC7Economy17SubredditPowerups *subredditPowerups; // @synthesize subredditPowerups=_subredditPowerups;
@property(nonatomic) _Bool isGif; // @synthesize isGif=_isGif;
@property(nonatomic) double linkUploadPercent; // @synthesize linkUploadPercent=_linkUploadPercent;
@property(retain, nonatomic) NSString *linkImageUploadURL; // @synthesize linkImageUploadURL=_linkImageUploadURL;
@property(retain, nonatomic) NSString *linkUploadURL; // @synthesize linkUploadURL=_linkUploadURL;
@property(nonatomic) _Bool wasTrimmed; // @synthesize wasTrimmed=_wasTrimmed;
@property(retain, nonatomic) BaseButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSUUID *videoUUID; // @synthesize videoUUID=_videoUUID;
@property(retain, nonatomic) PowerupsMarketingBadgeView *powerupsMarketingBadgeView; // @synthesize powerupsMarketingBadgeView=_powerupsMarketingBadgeView;
@property(retain, nonatomic) AVURLAsset *sourceAsset; // @synthesize sourceAsset=_sourceAsset;
@property(retain, nonatomic) BaseView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) _TtC6Reddit15RedditVideoNode *videoNode; // @synthesize videoNode=_videoNode;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) BaseView *loadingPickerBackground; // @synthesize loadingPickerBackground=_loadingPickerBackground;
@property(retain, nonatomic) BaseView *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(retain, nonatomic) BottomLabelButton *photosButton; // @synthesize photosButton=_photosButton;
@property(retain, nonatomic) BottomLabelButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) BaseView *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void)configureForTrimmedMovie:(id)arg1 makeGif:(_Bool)arg2 wasTrimmed:(_Bool)arg3;
- (void)didFinishTrimmingMedia:(id)arg1 makeGif:(_Bool)arg2 wasTrimmed:(_Bool)arg3;
- (void)cancelTrimView:(id)arg1;
- (id)analyticsPostComposerType;
- (id)analyticsScreenViewName;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)showEditVideoViewControllerWithVideoURL:(id)arg1;
- (void)copyOriginalVideo:(id)arg1 compressedVideo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigateToPowerupsMarketingPageForSubreddit:(id)arg1;
- (void)toggleLoadingPickerBackground:(_Bool)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)didTapPostButton:(id)arg1;
- (void)didTapClosePost;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)didTapPhotosButton;
- (void)didTapCameraButton;
- (_Bool)hasRequiredPermissions;
- (void)requestMicrophonePermission;
- (void)didTapRemoveButton;
- (void)removeVideo;
- (_Bool)resignFirstResponder;
- (id)powerupsEventsLogger;
- (void)testAndShowUnallowedPostDisplayTypeWarning;
- (void)configureWithSubreddit:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTitle;
- (void)layoutTextFieldsInScroller;
- (void)configureWithPostToEdit:(id)arg1;
- (void)configureVideoForEditPost:(id)arg1;
- (void)configureForPickedMovie:(id)arg1 fromSource:(long long)arg2;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)didTapPowerupsMarketingBadgeView;
- (id)postErrorSeparator;
- (id)postErrorView;
- (id)initWithAccountContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
