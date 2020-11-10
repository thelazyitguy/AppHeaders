//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YCHLiveChatActionPanelViewDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatBannerDataSourceDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatBuyFlowViewControllerDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatCardDataSourceDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatCardsActionPanelResponderProvider-Protocol.h>
#import <Module_Framework/YCHLiveChatDataSourceDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatHeaderSubMenuButtonDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatScreenModeResponderProvider-Protocol.h>
#import <Module_Framework/YCHLiveChatStatusViewDelegate-Protocol.h>
#import <Module_Framework/YCHLiveChatTickerDataSourceDelegate-Protocol.h>
#import <Module_Framework/YTCollectionViewScrollObserverResponderProvider-Protocol.h>
#import <Module_Framework/YTEntityStoreObserver-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTRendererController-Protocol.h>
#import <Module_Framework/YTResponseViewController-Protocol.h>
#import <Module_Framework/YTUpdatedMetadataServiceObserver-Protocol.h>

@class GIMMe, NSArray, NSString, UIView, YCHLiveChatBannerDataSource, YCHLiveChatBuyFlowErrorViewController, YCHLiveChatBuyFlowViewController, YCHLiveChatCardDataSource, YCHLiveChatCardRouter, YCHLiveChatCellViewController, YCHLiveChatDataSource, YCHLiveChatProductPickerPanelViewController, YCHLiveChatTickerDataSource, YCHLiveChatTickerViewController, YTEmojiCustomEmojiParser, YTICommand, YTILiveChatPurchaseMessageEndpoint, YTILiveChatRenderer, YTInnerTubeCollectionViewController;
@protocol YCHLiveChatBannerDataSourceDelegate><YCHLiveChatBannerVisibilityProtocol, YCHLiveChatCollectionViewControllerProtocol, YCHLiveChatHeaderViewProtocol, YCHLiveChatViewProtocol, YTResponder;

@interface YCHLiveChatViewController : UIViewController <YCHLiveChatActionPanelViewDelegate, YCHLiveChatBuyFlowViewControllerDelegate, YCHLiveChatDataSourceDelegate, YCHLiveChatStatusViewDelegate, YCHLiveChatTickerDataSourceDelegate, YCHLiveChatBannerDataSourceDelegate, YCHLiveChatHeaderSubMenuButtonDelegate, YTGraftingViewController, YTUpdatedMetadataServiceObserver, YCHLiveChatCardDataSourceDelegate, YTEntityStoreObserver, YTRendererController, YTCollectionViewScrollObserverResponderProvider, YCHLiveChatScreenModeResponderProvider, YCHLiveChatCardsActionPanelResponderProvider, YTResponseViewController>
{
    NSString *_viewCountEntityKey;
    _Bool _engagementPanelActive;
    _Bool _viewCountEntityUpdateEnabled;
    _Bool _isBuyFlowErrorViewEnabled;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UIView<YCHLiveChatHeaderViewProtocol> *_headerView;
    YCHLiveChatDataSource *_dataSource;
    NSString *_activeVideoID;
    YTInnerTubeCollectionViewController<YCHLiveChatCollectionViewControllerProtocol> *_collectionViewController;
    YCHLiveChatTickerDataSource *_tickerDataSource;
    YCHLiveChatTickerViewController *_tickerViewController;
    YCHLiveChatBannerDataSource *_bannerDataSource;
    YTInnerTubeCollectionViewController<YCHLiveChatBannerDataSourceDelegate><YCHLiveChatBannerVisibilityProtocol> *_bannerCollectionViewController;
    YTILiveChatRenderer *_liveChatRenderer;
    YTICommand *_liveChatEndpoint;
    YCHLiveChatCellViewController *_cellViewController;
    NSArray *_appStoreProducts;
    YCHLiveChatBuyFlowErrorViewController *_buyFlowErrorViewController;
    YCHLiveChatBuyFlowViewController *_buyFlowViewController;
    YCHLiveChatProductPickerPanelViewController *_productPickerPanelViewController;
    YTILiveChatRenderer *_initialLiveChatRenderer;
    YTILiveChatPurchaseMessageEndpoint *_purchaseMessageEndpointToRetry;
    YCHLiveChatCardRouter *_cardRouter;
    YCHLiveChatCardDataSource *_cardDataSource;
    YTEmojiCustomEmojiParser *_emojiParser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTEmojiCustomEmojiParser *emojiParser; // @synthesize emojiParser=_emojiParser;
@property(readonly, nonatomic) YCHLiveChatCardDataSource *cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) YCHLiveChatCardRouter *cardRouter; // @synthesize cardRouter=_cardRouter;
@property(retain, nonatomic) YTILiveChatPurchaseMessageEndpoint *purchaseMessageEndpointToRetry; // @synthesize purchaseMessageEndpointToRetry=_purchaseMessageEndpointToRetry;
@property(retain, nonatomic) YTILiveChatRenderer *initialLiveChatRenderer; // @synthesize initialLiveChatRenderer=_initialLiveChatRenderer;
@property(retain, nonatomic) YCHLiveChatProductPickerPanelViewController *productPickerPanelViewController; // @synthesize productPickerPanelViewController=_productPickerPanelViewController;
@property(retain, nonatomic) YCHLiveChatBuyFlowViewController *buyFlowViewController; // @synthesize buyFlowViewController=_buyFlowViewController;
@property(retain, nonatomic) YCHLiveChatBuyFlowErrorViewController *buyFlowErrorViewController; // @synthesize buyFlowErrorViewController=_buyFlowErrorViewController;
@property(nonatomic) _Bool isBuyFlowErrorViewEnabled; // @synthesize isBuyFlowErrorViewEnabled=_isBuyFlowErrorViewEnabled;
@property(retain, nonatomic) NSArray *appStoreProducts; // @synthesize appStoreProducts=_appStoreProducts;
@property(nonatomic) __weak YCHLiveChatCellViewController *cellViewController; // @synthesize cellViewController=_cellViewController;
@property(readonly, nonatomic) YTICommand *liveChatEndpoint; // @synthesize liveChatEndpoint=_liveChatEndpoint;
@property(readonly, nonatomic) YTILiveChatRenderer *liveChatRenderer; // @synthesize liveChatRenderer=_liveChatRenderer;
@property(readonly, nonatomic) YTInnerTubeCollectionViewController<YCHLiveChatBannerDataSourceDelegate><YCHLiveChatBannerVisibilityProtocol> *bannerCollectionViewController; // @synthesize bannerCollectionViewController=_bannerCollectionViewController;
@property(readonly, nonatomic) YCHLiveChatBannerDataSource *bannerDataSource; // @synthesize bannerDataSource=_bannerDataSource;
@property(readonly, nonatomic) YCHLiveChatTickerViewController *tickerViewController; // @synthesize tickerViewController=_tickerViewController;
@property(readonly, nonatomic) YCHLiveChatTickerDataSource *tickerDataSource; // @synthesize tickerDataSource=_tickerDataSource;
@property(readonly, nonatomic) YTInnerTubeCollectionViewController<YCHLiveChatCollectionViewControllerProtocol> *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic, getter=isViewCountEntityUpdateEnabled) _Bool viewCountEntityUpdateEnabled; // @synthesize viewCountEntityUpdateEnabled=_viewCountEntityUpdateEnabled;
@property(copy, nonatomic) NSString *activeVideoID; // @synthesize activeVideoID=_activeVideoID;
@property(nonatomic, getter=isEngagementPanelActive) _Bool engagementPanelActive; // @synthesize engagementPanelActive=_engagementPanelActive;
@property(readonly, nonatomic) YCHLiveChatDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIView<YCHLiveChatHeaderViewProtocol> *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)removeViewCountEntityStoreObserver;
- (void)addViewCountEntityStoreObserver;
- (void)didUpdateKey:(id)arg1 inEntityStore:(id)arg2 withUpdateType:(unsigned long long)arg3 previousEntity:(id)arg4 entity:(id)arg5;
- (void)didUpdateDonationProgress:(float)arg1 donatedAmount:(id)arg2 forVideoID:(id)arg3;
- (void)didUpdateExtraShortVideoViewCount:(id)arg1 forVideoID:(id)arg2;
- (void)reloadWithContinuation:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)presentBuyFlowErrorViewController;
- (void)updateHeaderStyle;
- (void)updateHeader:(id)arg1;
- (void)presentBuyFlowViewController;
- (void)handleLiveChatPurchaseMessageEndpoint:(id)arg1;
- (void)handleLiveChatDialogEndpoint:(id)arg1;
- (void)updateLiveChatViews;
- (void)displayBannerView:(_Bool)arg1;
- (void)displayTickerView:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isPresenting;
@property(readonly, nonatomic) long long screenMode;
- (void)removeScrollObserver:(id)arg1;
- (void)addScrollObserver:(id)arg1;
- (void)buyFlowViewControllerDidUpdateMessageTier:(id)arg1;
- (void)didTapStatusView:(id)arg1;
- (void)dataSource:(id)arg1 handleLiveChatAction:(id)arg2;
- (void)dataSource:(id)arg1 replaceBannerItems:(id)arg2;
- (void)dataSource:(id)arg1 removeBannerItems:(id)arg2;
- (void)dataSource:(id)arg1 addBannerItems:(id)arg2;
- (void)dataSource:(id)arg1 shouldShowFlare:(id)arg2;
- (void)dataSource:(id)arg1 timeoutTickerItems:(id)arg2;
- (void)dataSource:(id)arg1 updateTickerItems:(id)arg2;
- (void)dataSource:(id)arg1 addTickerItems:(id)arg2;
- (void)dataSource:(id)arg1 didReceiveTooltip:(id)arg2;
- (void)dataSource:(id)arg1 didReceiveLiveChatRenderer:(id)arg2;
- (void)didCompleteSeekWithDataSource:(id)arg1;
- (void)willStartSeekRequestWithDataSource:(id)arg1;
- (void)dataSourceDidFinishInitialLoad:(id)arg1 error:(id)arg2 liveChatRenderer:(id)arg3 fromResponse:(id)arg4;
- (void)dataSource:(id)arg1 shouldUpdateHeader:(id)arg2;
- (void)dataSource:(id)arg1 shouldUpdateActionPanel:(id)arg2;
- (void)dataSource:(id)arg1 shouldApplyUpdateItems:(id)arg2;
- (void)actionPanelView:(id)arg1 didShowCreatorSupportButton:(id)arg2;
- (void)actionPanelDidTapInlineAfterMessageButton:(id)arg1;
- (void)actionPanelViewDidTapProductPickerPanelButton:(id)arg1;
- (void)actionPanelTextDidChange:(id)arg1;
- (void)actionPanelView:(id)arg1 didTapUpsellWithCommand:(id)arg2;
- (void)actionPanelViewDidTapSend:(id)arg1;
- (id)navEndpoint;
- (void)dropdownButton:(id)arg1 didSelectOption:(id)arg2;
- (void)loadWithModel:(id)arg1;
- (id)createStatusView;
- (id)createActionPanelView;
- (void)dismissKeyboard;
- (void)stopChat;
- (void)startChat;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;
@property(readonly, nonatomic) UIView<YCHLiveChatViewProtocol> *view; // @dynamic view;

@end
