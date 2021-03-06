//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ServiceKnowledge/SCAppearanceApplicator-Protocol.h>
#import <ServiceKnowledge/SCSArticleServerDelegate-Protocol.h>
#import <ServiceKnowledge/SCSArticleViewDelegate-Protocol.h>
#import <ServiceKnowledge/SCSAttachmentOverlay-Protocol.h>
#import <ServiceKnowledge/UIScrollViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSObject, NSString, NSURL, SCArticleHeaderView, SCSArticle, SCSArticleServer, SCSCategory, SCSKnowledgeManager, UIView;
@protocol SCSArticleView, SCSArticleViewControllerDelegate;

@interface SCSArticleViewController : UIViewController <UIScrollViewDelegate, SCSAttachmentOverlay, SCAppearanceApplicator, SCSArticleViewDelegate, SCSArticleServerDelegate>
{
    SCSCategory *_category;
    _Bool _shouldRefreshData;
    _Bool _viewVisible;
    _Bool _searchedArticle;
    _Bool _deflectedArticle;
    SCSArticle *_article;
    NSObject<SCSArticleViewControllerDelegate> *_delegate;
    NSLayoutConstraint *_headerTopConstraint;
    NSLayoutConstraint *_headerHeightConstraint;
    UIView *_headerView;
    double _headerHeight;
    SCSArticleServer *_articleServer;
    SCArticleHeaderView *_defaultHeaderView;
    SCSKnowledgeManager *_knowledgeManager;
}

+ (Class)articleViewClass;
+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(nonatomic, getter=isDeflectedArticle) _Bool deflectedArticle; // @synthesize deflectedArticle=_deflectedArticle;
@property(nonatomic, getter=isSearchedArticle) _Bool searchedArticle; // @synthesize searchedArticle=_searchedArticle;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) _Bool shouldRefreshData; // @synthesize shouldRefreshData=_shouldRefreshData;
@property(retain, nonatomic) SCSKnowledgeManager *knowledgeManager; // @synthesize knowledgeManager=_knowledgeManager;
@property(retain, nonatomic) SCArticleHeaderView *defaultHeaderView; // @synthesize defaultHeaderView=_defaultHeaderView;
@property(retain, nonatomic) SCSArticleServer *articleServer; // @synthesize articleServer=_articleServer;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerTopConstraint; // @synthesize headerTopConstraint=_headerTopConstraint;
@property(nonatomic) __weak NSObject<SCSArticleViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCSArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (id)delegate_additionalJavascriptForArticle:(id)arg1;
- (id)delegate_additionalCSSForArticle:(id)arg1;
- (id)delegate_headerViewForArticle:(id)arg1 isDelegateDefined:(_Bool *)arg2;
- (double)delegate_heightForHeaderView:(id)arg1;
- (void)delegate_didShowArticle:(id)arg1;
- (void)delegate_willShowArticle:(id)arg1;
- (void)delegate_categoryDidChange:(id)arg1;
- (void)articleViewFinishedLoading:(id)arg1;
- (void)articleViewStartedLoading:(id)arg1;
- (void)articleView:(id)arg1 errorReceived:(id)arg2;
- (void)articleViewContentStartedArriving:(id)arg1;
- (_Bool)articleView:(id)arg1 shouldNavigateForStatusCode:(long long)arg2;
- (_Bool)articleView:(id)arg1 shouldNavigateToLink:(id)arg2;
- (void)articleServer:(id)arg1 loadedURL:(id)arg2 forArticle:(id)arg3 error:(id)arg4;
- (id)articleServer:(id)arg1 additionalJavascriptForArticle:(id)arg2;
- (id)articleServer:(id)arg1 additionalCSSForArticle:(id)arg2;
- (_Bool)articleServer:(id)arg1 isViewingArticle:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openSmartLink:(id)arg1;
- (void)updateAndShowError:(id)arg1 animated:(_Bool)arg2;
- (void)updateHTMLContent;
- (void)updateHeader;
- (void)updateContentInsets;
- (void)updateViewConstraints;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredContentStyle;
- (id)scrollViewInfluencingAttachment:(id)arg1;
- (_Bool)shouldShowAttachmentOverlay:(id)arg1;
- (void)modalDoneTapped:(id)arg1;
- (id)minimizeButton;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSURL *baseURL;
@property(retain, nonatomic) SCSCategory *category;
- (void)minimizeButtonTapped:(id)arg1;
- (void)dealloc;
- (void)authenticationSettingsChangedNotification:(id)arg1;
- (void)setup;
- (id)initWithKnowledgeInterface:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<SCSArticleView> *view; // @dynamic view;

@end

