//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "A9VSScanItRecommendationsCarouselDelegate-Protocol.h"

@class A9VSScanItRecommendationsCarouselViewController, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIView;
@protocol A9VSScanItRecommendationsViewDelegate;

@interface A9VSScanItRecommendationsViewController : UIViewController <A9VSScanItRecommendationsCarouselDelegate>
{
    _Bool _isPlayerPresented;
    _Bool _isInPhotoMode;
    id <A9VSScanItRecommendationsViewDelegate> _delegate;
    UIButton *_closeButton;
    UIView *_bottomSheet;
    A9VSScanItRecommendationsCarouselViewController *_carouselVC;
    NSArray *_recommendations;
    UILabel *_carouselLabel;
    UILabel *_headerlabel;
    NSMutableArray *_paginationImages;
    unsigned long long _selectedIndex;
    UIView *_paginationView;
    UIButton *_backToCameraButton;
    NSString *_modeName;
}

@property(retain, nonatomic) NSString *modeName; // @synthesize modeName=_modeName;
@property(nonatomic) _Bool isInPhotoMode; // @synthesize isInPhotoMode=_isInPhotoMode;
@property(retain, nonatomic) UIButton *backToCameraButton; // @synthesize backToCameraButton=_backToCameraButton;
@property(retain, nonatomic) UIView *paginationView; // @synthesize paginationView=_paginationView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *paginationImages; // @synthesize paginationImages=_paginationImages;
@property(nonatomic) _Bool isPlayerPresented; // @synthesize isPlayerPresented=_isPlayerPresented;
@property(retain, nonatomic) UILabel *headerlabel; // @synthesize headerlabel=_headerlabel;
@property(retain, nonatomic) UILabel *carouselLabel; // @synthesize carouselLabel=_carouselLabel;
@property(retain, nonatomic) NSArray *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) A9VSScanItRecommendationsCarouselViewController *carouselVC; // @synthesize carouselVC=_carouselVC;
@property(retain, nonatomic) UIView *bottomSheet; // @synthesize bottomSheet=_bottomSheet;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <A9VSScanItRecommendationsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)canLogFailureModuleDisplayedItem;
- (void)didEncounterError:(id)arg1;
- (struct CGSize)collectionViewCellSize;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)didScrollToItemAtIndexPath:(id)arg1;
- (id)buildButtonWithTitle:(id)arg1 selector:(SEL)arg2;
- (void)loadAVPlayerWithURL:(id)arg1;
- (void)dismissAndGoBackToCameraSearch;
- (void)didTouchCloseButton:(id)arg1;
- (void)didTouchBackToCameraButton:(id)arg1;
- (void)didTouchTypeYourSearchButton:(id)arg1;
- (void)setupModesBottomSheet;
- (void)setUpCarousel;
- (void)setUpHeaderlabel;
- (id)source;
- (void)shouldChangeBackTitleForPhotos:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRecommendations:(id)arg1 mode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
