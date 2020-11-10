//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIOverlayPickerViewController.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "NFUIOverlayPickerViewControllerDataSource-Protocol.h"
#import "NFUIOverlayPickerViewControllerDelegate-Protocol.h"

@class MFMessageComposeViewController, NFUILabel, NFUILottieAnimationView, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, ShareSheetController, UIActivityIndicatorView, UIImage, UIImageView, UITableView, UIView, UIViewController;
@protocol NFUISimpleSharingDelegate;

@interface NFUISimpleSharingViewController : NFUIOverlayPickerViewController <NFUIOverlayPickerViewControllerDelegate, NFUIOverlayPickerViewControllerDataSource, MFMessageComposeViewControllerDelegate>
{
    _Bool _isFetchingStoryImages;
    _Bool _shouldDrawTitleTreatment;
    _Bool _shouldCallDismissForAllSharingTypes;
    NSLayoutConstraint *_tableViewHeight;
    NSLayoutConstraint *_tableViewBottom;
    NFUILabel *_shareToLabel;
    UIActivityIndicatorView *_activityIndicator;
    UITableView *_tableView;
    NFUILabel *_processingLabel;
    UIView *_checkAnimationContainer;
    NFUILottieAnimationView *_checkAnimationView;
    ShareSheetController<NFUISimpleSharingDelegate> *_shareController;
    UIViewController *_hostViewController;
    UIView *_sourceView;
    NSArray *_sharingOptions;
    UIImage *_titleTreatmentImage;
    UIImage *_backgroundImage;
    NSString *_targetServiceIdentifier;
    UIImageView *_highlightedItemDummyView;
    NSMutableArray *_urlsBeingFetched;
    MFMessageComposeViewController *_composeVC;
    NSNumber *_selectedItemFocusId;
    NSNumber *_selectedItemCommandId;
}

+ (id)URLShemeForIdentifier:(id)arg1;
+ (id)validSharingOptions;
+ (_Bool)hasMinimalViableShareOptions;
+ (id)sharingSourceIdentifiersDict;
+ (id)availableSharingOptions;
+ (id)newWithShareController:(id)arg1 hostViewController:(id)arg2 sourceView:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCallDismissForAllSharingTypes; // @synthesize shouldCallDismissForAllSharingTypes=_shouldCallDismissForAllSharingTypes;
@property(retain, nonatomic) NSNumber *selectedItemCommandId; // @synthesize selectedItemCommandId=_selectedItemCommandId;
@property(retain, nonatomic) NSNumber *selectedItemFocusId; // @synthesize selectedItemFocusId=_selectedItemFocusId;
@property(retain, nonatomic) MFMessageComposeViewController *composeVC; // @synthesize composeVC=_composeVC;
@property(retain, nonatomic) NSMutableArray *urlsBeingFetched; // @synthesize urlsBeingFetched=_urlsBeingFetched;
@property(nonatomic) _Bool shouldDrawTitleTreatment; // @synthesize shouldDrawTitleTreatment=_shouldDrawTitleTreatment;
@property(nonatomic) _Bool isFetchingStoryImages; // @synthesize isFetchingStoryImages=_isFetchingStoryImages;
@property(retain, nonatomic) UIImageView *highlightedItemDummyView; // @synthesize highlightedItemDummyView=_highlightedItemDummyView;
@property(retain, nonatomic) NSString *targetServiceIdentifier; // @synthesize targetServiceIdentifier=_targetServiceIdentifier;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *titleTreatmentImage; // @synthesize titleTreatmentImage=_titleTreatmentImage;
@property(retain, nonatomic) NSArray *sharingOptions; // @synthesize sharingOptions=_sharingOptions;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) ShareSheetController<NFUISimpleSharingDelegate> *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) NFUILottieAnimationView *checkAnimationView; // @synthesize checkAnimationView=_checkAnimationView;
@property(nonatomic) UIView *checkAnimationContainer; // @synthesize checkAnimationContainer=_checkAnimationContainer;
@property(nonatomic) NFUILabel *processingLabel; // @synthesize processingLabel=_processingLabel;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) NFUILabel *shareToLabel; // @synthesize shareToLabel=_shareToLabel;
@property(nonatomic) NSLayoutConstraint *tableViewBottom; // @synthesize tableViewBottom=_tableViewBottom;
@property(nonatomic) NSLayoutConstraint *tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
- (void)showErrorMessage;
- (void)hideActivityIndicator;
- (void)showActivityIndicator;
- (void)highlightCellWithIdentifier:(id)arg1;
- (id)tableCellWithIdentifier:(id)arg1;
- (void)copyCurrentItemToPasteboard:(id)arg1;
- (void)shareToFacebook;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)composeMessage;
- (void)completeStoriesSharingIfReady;
- (id)drawTitleTreatment:(id)arg1 onImage:(id)arg2;
- (id)addGradientOnImage:(id)arg1;
- (void)fetchBackgroundImageAndTitleTreatments;
- (void)shareCurrentItemToFacebookStories;
- (void)shareCurrentItemToSnap;
- (void)shareCurrentItemToInstagramStories;
- (id)verticalBackgroundURLForCurrentItem;
- (id)imageURLForCurrentItem;
- (id)titleTreatmentURLForCurrentItem;
- (id)messageTextAndLinkForWithIdentifer:(id)arg1;
- (id)boxArtURLForCurrentItem;
- (id)titleForCurrentItem;
- (id)shareableURLStringForIdentifier:(id)arg1;
- (id)urlForCurrentItem;
- (id)identifiersSupportingTextInURLs;
- (id)URLForIdentifier:(id)arg1;
- (void)endShareSession:(id)arg1 identifier:(id)arg2 success:(_Bool)arg3;
- (void)endLoggerFocusAndCommandSessions;
- (void)overlayPickerDidDisappear;
- (void)overlayPickerDidAppear;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (_Bool)shouldDismissForItemAtIndexPath:(id)arg1;
- (id)identifiersNotDismiss;
- (id)identifierAtIndexPath:(id)arg1;
- (id)itemStringForRowAtIndexPath:(id)arg1;
- (long long)numberOfItemsInPicker;
- (void)configureCheckAnimation;
- (void)configureTableViewHeight;
- (void)adjustTableViewPosition;
- (void)configureData;
- (void)setupTableView;
- (void)showMoreOptions:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

