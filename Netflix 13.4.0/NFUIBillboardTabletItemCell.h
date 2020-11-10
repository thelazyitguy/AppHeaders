//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIBillboardBaseItemCell.h"

#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUIDynamicStackButtonsDataSource-Protocol.h"
#import "NFUIDynamicStackButtonsDelegate-Protocol.h"
#import "NFUIReusableViewProtocol-Protocol.h"

@class IPInsetLabel, LolomoListViewModel, NFUIBillboardItemViewModel, NFUIDynamicStackButtonsView, NFUIGradientView, NFUILabel, NSArray, NSLayoutConstraint, NSString, UICollectionView, UIViewController;

@interface NFUIBillboardTabletItemCell : NFUIBillboardBaseItemCell <NFUIDynamicStackButtonsDelegate, NFUIDynamicStackButtonsDataSource, NFUICellFactoryItemProtocol, NFUIReusableViewProtocol>
{
    _Bool hasInlineVideo;
    _Bool _isLayoutPass;
    id delegate;
    LolomoListViewModel *_delegateListViewModel;
    UICollectionView *_delegateCollectionView;
    UIViewController *_delegateViewController;
    NFUIBillboardItemViewModel *_viewModel;
    NFUIGradientView *_imageGradientView;
    NSLayoutConstraint *_itemDetailWidthConstraint;
    NSLayoutConstraint *_itemDetailHeightConstraint;
    NFUILabel *_supplementalMessage;
    NFUILabel *_synopsis;
    IPInsetLabel *_badgeLabel;
    NFUIDynamicStackButtonsView *_buttonsView;
    NSLayoutConstraint *_badgeHeight;
    NSLayoutConstraint *_synopsisHeight;
    NSLayoutConstraint *_SupplementalHeight;
    NSArray *_localCallToActions;
}

+ (id)viewModelForEntityId:(id)arg1;
+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
+ (id)reuseIdentifier;
+ (void)load;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak NSArray *localCallToActions; // @synthesize localCallToActions=_localCallToActions;
@property(nonatomic) __weak NSLayoutConstraint *SupplementalHeight; // @synthesize SupplementalHeight=_SupplementalHeight;
@property(nonatomic) __weak NSLayoutConstraint *synopsisHeight; // @synthesize synopsisHeight=_synopsisHeight;
@property(nonatomic) __weak NSLayoutConstraint *badgeHeight; // @synthesize badgeHeight=_badgeHeight;
@property(nonatomic) __weak NFUIDynamicStackButtonsView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(nonatomic) __weak IPInsetLabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(nonatomic) __weak NFUILabel *synopsis; // @synthesize synopsis=_synopsis;
@property(nonatomic) __weak NFUILabel *supplementalMessage; // @synthesize supplementalMessage=_supplementalMessage;
@property(nonatomic) __weak NSLayoutConstraint *itemDetailHeightConstraint; // @synthesize itemDetailHeightConstraint=_itemDetailHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *itemDetailWidthConstraint; // @synthesize itemDetailWidthConstraint=_itemDetailWidthConstraint;
@property(nonatomic) __weak NFUIGradientView *imageGradientView; // @synthesize imageGradientView=_imageGradientView;
@property(retain, nonatomic) NFUIBillboardItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isLayoutPass; // @synthesize isLayoutPass=_isLayoutPass;
@property(nonatomic) _Bool hasInlineVideo; // @synthesize hasInlineVideo;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController=_delegateViewController;
@property(nonatomic) __weak UICollectionView *delegateCollectionView; // @synthesize delegateCollectionView=_delegateCollectionView;
@property(nonatomic) __weak LolomoListViewModel *delegateListViewModel; // @synthesize delegateListViewModel=_delegateListViewModel;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (id)trackingInfo;
- (unsigned long long)listStatus;
- (void)seeAllTappedWithUserInfo:(id)arg1;
- (void)myListButtonPressed:(id)arg1 withAction:(id)arg2 focusView:(id)arg3 trackingInfo:(id)arg4;
- (void)infoTapped:(id)arg1;
- (void)playTapped:(id)arg1 userInfo:(id)arg2;
- (void)playButtonClicked:(id)arg1;
- (void)moreInfoClicked;
- (void)volatileDataFetched:(id)arg1 myListStatus:(unsigned long long)arg2;
- (void)volatileDataFetched;
- (void)titleAvailable;
- (void)titleAvailable:(id)arg1;
- (void)queueModified:(id)arg1;
- (unsigned long long)stackButtonCustomHeightForIndex:(long long)arg1;
- (unsigned long long)stackButtonStyleTypeForIndex:(long long)arg1;
- (unsigned long long)stackButtonLayoutTypeForIndex:(long long)arg1;
- (void)buttonClicked:(id)arg1 withAction:(id)arg2;
- (void)prepareForReuse;
- (void)setupConstraints;
- (void)setupViews;
- (void)commonInit;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldBlockDetailsAction;
@property(nonatomic) _Bool shouldSkipViewModelCreationWhenSizing;
@property(readonly) Class superclass;

@end

