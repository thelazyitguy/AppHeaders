//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1WebViewController.h>

@class T1BlockOrReportActionContext, TFNBarButtonItem, UIBarButtonItem;

@interface T1ReportViewController : T1WebViewController
{
    TFNBarButtonItem *_backButton;
    T1BlockOrReportActionContext *_context;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
}

+ (void)presentReportFromViewController:(id)arg1 account:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(retain, nonatomic) T1BlockOrReportActionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TFNBarButtonItem *backButton; // @synthesize backButton=_backButton;
- (_Bool)hasCustomNavigationBar;
- (_Bool)shouldHideSecuredIcon;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (void)_refreshDMsIfNecessary;
- (void)_performDM;
- (void)_performUnfollow;
- (void)_performBlock;
- (void)_performMute;
- (void)_performFinalAction:(CDUnknownBlockType)arg1;
- (void)_performNativeAction;
- (void)_cleanUpTimelineIfNeeded;
- (void)didFinishLoadingWithError:(id)arg1;
- (void)_presentNewWebViewWithURLString:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (id)scribeImpressionParameters;
- (id)scribe;
- (void)_goBack:(id)arg1;
- (void)_doneAction;
- (void)_cancelAction;
- (id)scribeElement;
- (id)scribeComponent;
- (id)scribeSection;
- (id)scribePage;
- (id)navigationMetadata;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (long long)_reportViewState;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 sourceStatus:(id)arg3 scribeComponent:(id)arg4;
- (id)initWithContext:(id)arg1 account:(id)arg2;

@end

