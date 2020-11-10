//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityOfflineDelegate-Protocol.h"
#import "SPTFreeTierPlaylistEncoreHeaderController-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTSortingFilteringPickerDelegate-Protocol.h"

@class NSString, NSURL, UIColor, UIImage, UIView, VISREFFreeTierPlaylistFollowButtonViewModel, VISREFPlaylistContextMenuViewModel;
@protocol SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistVISREFHeaderControllerDelegate, SPTFreeTierPlaylistVISREFHeaderViewModel, SPTImageLoader, SPTSortingFilteringUIFactory;

@interface SPTFreeTierPlaylistEncoreBaseHeaderControllerImplementation : NSObject <SPTImageLoaderDelegate, SPTFreeTierEntityOfflineDelegate, SPTFreeTierPlaylistEncoreHeaderController, SPTSortingFilteringPickerDelegate>
{
    _Bool _hasDescription;
    _Bool _hasCreatorRow;
    id <SPTFreeTierPlaylistVISREFHeaderControllerDelegate> _delegate;
    UIView *_headerView;
    CDUnknownBlockType _backButtonTappedBlock;
    CDUnknownBlockType _searchButtonTappedBlock;
    CDUnknownBlockType _filterButtonTappedBlock;
    id <SPTFreeTierEntityOfflineViewModel> _playlistOfflineViewModel;
    id <SPTFreeTierPlaylistDefaultHeaderViewModel> _defaultHeaderViewModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistVISREFHeaderViewModel> _visrefHeaderViewModel;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    double _topAccessoryViewHeight;
    double _minimumHeight;
    long long _headerType;
    UIColor *_lastExtractedColor;
    UIImage *_lastImage;
    VISREFFreeTierPlaylistFollowButtonViewModel *_followButtonViewModel;
    VISREFPlaylistContextMenuViewModel *_contextMenuViewModel;
    id <SPTImageLoader> _imageLoader;
    id <SPTFreeTierPlaylistFullbleedHeaderViewModel> _fullbleedHeaderViewModel;
    double _headerHeight;
    unsigned long long _currentOfflineAvailability;
    double _navigationBarHeight;
    NSURL *_lastImageURL;
    UIImage *_placeHolderImage;
    UIImage *_lastCreatorImage;
    long long _contentComponent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasCreatorRow; // @synthesize hasCreatorRow=_hasCreatorRow;
@property(nonatomic) _Bool hasDescription; // @synthesize hasDescription=_hasDescription;
@property(nonatomic) long long contentComponent; // @synthesize contentComponent=_contentComponent;
@property(retain, nonatomic) UIImage *lastCreatorImage; // @synthesize lastCreatorImage=_lastCreatorImage;
@property(retain, nonatomic) UIImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) unsigned long long currentOfflineAvailability; // @synthesize currentOfflineAvailability=_currentOfflineAvailability;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedHeaderViewModel; // @synthesize fullbleedHeaderViewModel=_fullbleedHeaderViewModel;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) VISREFPlaylistContextMenuViewModel *contextMenuViewModel; // @synthesize contextMenuViewModel=_contextMenuViewModel;
@property(retain, nonatomic) VISREFFreeTierPlaylistFollowButtonViewModel *followButtonViewModel; // @synthesize followButtonViewModel=_followButtonViewModel;
@property(retain, nonatomic) UIImage *lastImage; // @synthesize lastImage=_lastImage;
@property(retain, nonatomic) UIColor *lastExtractedColor; // @synthesize lastExtractedColor=_lastExtractedColor;
@property(readonly, nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) double topAccessoryViewHeight; // @synthesize topAccessoryViewHeight=_topAccessoryViewHeight;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) id <SPTFreeTierPlaylistVISREFHeaderViewModel> visrefHeaderViewModel; // @synthesize visrefHeaderViewModel=_visrefHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel; // @synthesize defaultHeaderViewModel=_defaultHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierEntityOfflineViewModel> playlistOfflineViewModel; // @synthesize playlistOfflineViewModel=_playlistOfflineViewModel;
@property(copy, nonatomic) CDUnknownBlockType filterButtonTappedBlock; // @synthesize filterButtonTappedBlock=_filterButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType searchButtonTappedBlock; // @synthesize searchButtonTappedBlock=_searchButtonTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <SPTFreeTierPlaylistVISREFHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)didCancelSortingFilteringPicker:(id)arg1 reason:(unsigned long long)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (void)viewModel:(id)arg1 offlineAvailabilityChanged:(unsigned long long)arg2;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)setContextMenuModel:(id)arg1;
- (long long)currenDownloadState;
- (void)update;
- (void)configureWithHeaderConfiguration:(id)arg1 filterSortBarView:(id)arg2;
- (void)headerHeightDidChange:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1 previousTraitCollection:(id)arg2 headerHeight:(double)arg3;
- (double)calculateHeaderHeight;
- (double)minimumHeaderHeight;
- (void)setImage:(id)arg1;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (_Bool)shouldUsePlaceholderImage;
- (void)updatePlaylistImageWithURL:(id)arg1;
- (id)imageURL;
- (id)getLastImage;
- (void)setup;
- (id)initWithImageLoader:(id)arg1 sortingFilteringUIFactory:(id)arg2 headerType:(long long)arg3 contentComponent:(long long)arg4 hasDescription:(_Bool)arg5 hasCreatorRow:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

