//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Funny/IFActivityFilterObserver-Protocol.h>
#import <Funny/IFActivityIndicatorManagerDelegate-Protocol.h>
#import <Funny/IFActivityTableEventHandler-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/IFScrollContainerViewProtocol-Protocol.h>
#import <Funny/UITableViewDataSource-Protocol.h>
#import <Funny/UITableViewDelegate-Protocol.h>

@class IFActivitiesRouter, IFActivityFilterObservable, IFActivityIndicatorManager, IFActivityTableView, IFNoInternetView, NSLayoutConstraint, NSMutableDictionary, NSObject, NSString, UILabel, UIScrollView, UIView, _TtC8libFunny13ModuleFactory;
@protocol FNWaterfallThumbsViewData, IFActivitiesModelProtocol, IFScrollContainerViewDelegate, IFViewProtocol;

@interface IFActivitiesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IFActivityTableEventHandler, IFActivityIndicatorManagerDelegate, IFControllerProtocol, IFScrollContainerViewProtocol, IFActivityFilterObserver>
{
    _Bool _freshActivitiesShown;
    _Bool _activitiesLoading;
    _Bool _isEmbeded;
    NSObject<IFScrollContainerViewDelegate> *delegate;
    IFActivityTableView *_activitiesTableView;
    IFActivitiesRouter *_router;
    NSObject<IFActivitiesModelProtocol> *_model;
    NSLayoutConstraint *_containerHeight;
    NSString *_emojiText;
    IFActivityFilterObservable *_activityFilterObservable;
    NSLayoutConstraint *_activitiesLeadingContraint;
    NSLayoutConstraint *_activitiesTrailingContraint;
    UIView *_emptyActivitiesView;
    UILabel *_emptyActivitiesLabel;
    UILabel *_emptyEmojiActivitiesLabel;
    NSObject<FNWaterfallThumbsViewData> *_memesData;
    NSMutableDictionary *_activityCellViewInfoCache;
    double _tableViewHeight;
    IFNoInternetView *_noInternetView;
    _TtC8libFunny13ModuleFactory *_moduleFactory;
    IFActivityIndicatorManager *_indicatorManager;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEmbeded; // @synthesize isEmbeded=_isEmbeded;
@property(retain, nonatomic) IFActivityIndicatorManager *indicatorManager; // @synthesize indicatorManager=_indicatorManager;
@property(retain, nonatomic) _TtC8libFunny13ModuleFactory *moduleFactory; // @synthesize moduleFactory=_moduleFactory;
@property(nonatomic) __weak IFNoInternetView *noInternetView; // @synthesize noInternetView=_noInternetView;
@property(nonatomic) _Bool activitiesLoading; // @synthesize activitiesLoading=_activitiesLoading;
@property(nonatomic) _Bool freshActivitiesShown; // @synthesize freshActivitiesShown=_freshActivitiesShown;
@property(nonatomic) double tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
@property(retain, nonatomic) NSMutableDictionary *activityCellViewInfoCache; // @synthesize activityCellViewInfoCache=_activityCellViewInfoCache;
@property(nonatomic) __weak NSObject<FNWaterfallThumbsViewData> *memesData; // @synthesize memesData=_memesData;
@property(nonatomic) __weak UILabel *emptyEmojiActivitiesLabel; // @synthesize emptyEmojiActivitiesLabel=_emptyEmojiActivitiesLabel;
@property(nonatomic) __weak UILabel *emptyActivitiesLabel; // @synthesize emptyActivitiesLabel=_emptyActivitiesLabel;
@property(nonatomic) __weak UIView *emptyActivitiesView; // @synthesize emptyActivitiesView=_emptyActivitiesView;
@property(nonatomic) __weak NSLayoutConstraint *activitiesTrailingContraint; // @synthesize activitiesTrailingContraint=_activitiesTrailingContraint;
@property(nonatomic) __weak NSLayoutConstraint *activitiesLeadingContraint; // @synthesize activitiesLeadingContraint=_activitiesLeadingContraint;
@property(retain, nonatomic) IFActivityFilterObservable *activityFilterObservable; // @synthesize activityFilterObservable=_activityFilterObservable;
@property(retain, nonatomic) NSString *emojiText; // @synthesize emojiText=_emojiText;
@property(retain, nonatomic) NSLayoutConstraint *containerHeight; // @synthesize containerHeight=_containerHeight;
@property(retain, nonatomic) NSObject<IFActivitiesModelProtocol> *model; // @synthesize model=_model;
@property(retain, nonatomic) IFActivitiesRouter *router; // @synthesize router=_router;
@property(nonatomic) __weak IFActivityTableView *activitiesTableView; // @synthesize activitiesTableView=_activitiesTableView;
@property(nonatomic) __weak NSObject<IFScrollContainerViewDelegate> *delegate; // @synthesize delegate;
@property(readonly, nonatomic) UIView *parentSuccessAlertView;
@property(readonly, nonatomic) UIView *parentActivityView;
- (void)unsubscribeFromNotifications;
- (void)subscribeToNotifications;
- (void)dealloc;
- (void)activityFilterUpdated;
- (void)contentDidTappedAtCell:(id)arg1;
- (void)nicknameDidTappedAtCell:(id)arg1;
- (void)userInfoDidTappedAtCell:(id)arg1;
- (void)allItemDidTappedAtCell:(id)arg1;
- (id)cellInfoForCell:(id)arg1;
- (void)activitiesLoadError:(id)arg1;
- (void)activitiesDidUpdated;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)activityCellInfoByIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) double validYOffset;
@property(nonatomic) _Bool allowAutoAdjustContentOffset;
@property(readonly, nonatomic) struct CGSize contentSize;
- (long long)itemsCount;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)loadNewData;
- (void)resetAndReloadData;
- (void)loadNextData;
- (void)setContainerActive:(_Bool)arg1;
- (void)onRecieveNotifications:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEmbeded:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end
