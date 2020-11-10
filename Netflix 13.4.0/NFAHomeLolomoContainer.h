//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFALolomoContainer.h"

#import "NFUIAROCategoriesHeaderViewDelegate-Protocol.h"
#import "NFUINetflixNavigationBarLogoDelegate-Protocol.h"
#import "_TtP4Argo24NFUIAROFilterBarDelegate_-Protocol.h"

@class NFUIAROCategoriesHeaderView, NFUINavigationManagerTranslationGradientView, NSString, _TtC4Argo16NFUIAROFilterBar, _TtC4Argo39NFUINavigationBarSubHeaderContainerView;

@interface NFAHomeLolomoContainer : NFALolomoContainer <NFUIAROCategoriesHeaderViewDelegate, _TtP4Argo24NFUIAROFilterBarDelegate_, NFUINetflixNavigationBarLogoDelegate>
{
    _Bool _mdxButtonEnabled;
    NFUIAROCategoriesHeaderView *_headerView;
    _TtC4Argo16NFUIAROFilterBar *_filterHeaderView;
    NFUINavigationManagerTranslationGradientView *_gradientView;
    _TtC4Argo39NFUINavigationBarSubHeaderContainerView *_headerContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC4Argo39NFUINavigationBarSubHeaderContainerView *headerContainer; // @synthesize headerContainer=_headerContainer;
@property(retain, nonatomic) NFUINavigationManagerTranslationGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) _TtC4Argo16NFUIAROFilterBar *filterHeaderView; // @synthesize filterHeaderView=_filterHeaderView;
@property(retain, nonatomic) NFUIAROCategoriesHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool mdxButtonEnabled; // @synthesize mdxButtonEnabled=_mdxButtonEnabled;
- (id)a11yNavTitle;
- (void)filterBarDidNavigate:(id)arg1 toItem:(id)arg2 parentItem:(id)arg3;
- (id)lolomoTransition:(_Bool)arg1;
- (void)showModalPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)itemSelected:(id)arg1 navigationView:(id)arg2;
- (void)handleSearchButtonAction;
- (void)redundantTap;
- (void)logoTapped;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)lolomoLoaded:(id)arg1;
- (id)subnavigationBarView;
- (void)viewDidLayoutSubviews;
- (double)statusBarHeight;
- (void)viewDidLoad;
- (id)createLolomoViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

