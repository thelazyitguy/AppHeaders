//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ServiceKnowledge/SCAppearanceApplicator-Protocol.h>
#import <ServiceKnowledge/SCSArticleSearchable-Protocol.h>
#import <ServiceKnowledge/SCSAttachmentOverlay-Protocol.h>

@class NSString, SCKnowledgeInterface, SCSArticleSearchController, SCSKnowledgeManager;

@interface SCSEmptySearchViewController : UIViewController <SCSAttachmentOverlay, SCAppearanceApplicator, SCSArticleSearchable>
{
    SCSArticleSearchController *_searchController;
    SCKnowledgeInterface *_knowledgeInterface;
    SCSKnowledgeManager *_knowledgeManager;
}

+ (void)applyAppearanceForConfiguration:(id)arg1;
@property(nonatomic) __weak SCSKnowledgeManager *knowledgeManager; // @synthesize knowledgeManager=_knowledgeManager;
@property(nonatomic) __weak SCKnowledgeInterface *knowledgeInterface; // @synthesize knowledgeInterface=_knowledgeInterface;
@property(retain, nonatomic) SCSArticleSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (_Bool)shouldShowAttachmentOverlay:(id)arg1;
- (void)searchControllerWillDismissNotification:(id)arg1;
- (_Bool)hasSearchController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithKnowledgeInterface:(id)arg1 knowledgeManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

