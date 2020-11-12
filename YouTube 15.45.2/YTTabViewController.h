//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTVariableHeightHeaderViewController.h>

#import "YTCollectionConfigurationResponderProvider-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTTopScrolling-Protocol.h"

@class GIMMe, NSString, UIViewController, YTColdConfig, YTITabRenderer;
@protocol YTInnerTubeUIService, YTRendererController, YTResponder, YTResponseViewController;

@interface YTTabViewController : YTVariableHeightHeaderViewController <YTCollectionConfigurationResponderProvider, YTResponseViewController, YTTopScrolling>
{
    id <YTInnerTubeUIService> _innerTubeService;
    UIViewController<YTResponseViewController> *_contentViewController;
    UIViewController<YTResponseViewController> *_headerViewController;
    UIViewController<YTRendererController> *_footerViewController;
    YTITabRenderer *_model;
    YTColdConfig *_coldConfig;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)viewControllerForModel:(id)arg1 isDefaultModel:(_Bool)arg2;
- (id)elementsConfiguration;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
- (_Bool)hasEqualModel:(id)arg1;
- (void)loadWithModel:(id)arg1 isDefaultModel:(_Bool)arg2;
- (void)loadWithDefaultModel:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (void)loadWithError:(id)arg1;
- (void)setEmptyMessage:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)didFinishRefreshing;
- (void)willStartRefreshing;
- (void)willMakeRequest:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *overrideStyleContext;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end
