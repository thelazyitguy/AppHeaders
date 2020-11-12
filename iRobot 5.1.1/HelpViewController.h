//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseWelcomeVideoViewController.h"

#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HelpContent, NSArray, NSMutableArray, NSString, SectionTitleHeader, UITableView;

@interface HelpViewController : BaseWelcomeVideoViewController <UITableViewDataSource, UITableViewDelegate, UIDocumentInteractionControllerDelegate>
{
    UITableView *_tableView;
    SectionTitleHeader *_documentsCopyHeaderView;
    HelpContent *_helpContent;
    NSString *_localizedTypeName;
    NSArray *_sections;
    NSMutableArray *_FAQRows;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *FAQRows; // @synthesize FAQRows=_FAQRows;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *localizedTypeName; // @synthesize localizedTypeName=_localizedTypeName;
@property(retain, nonatomic) HelpContent *helpContent; // @synthesize helpContent=_helpContent;
@property(retain, nonatomic) SectionTitleHeader *documentsCopyHeaderView; // @synthesize documentsCopyHeaderView=_documentsCopyHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)configureAccessibility;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)downloadDocument:(id)arg1 documentTitle:(id)arg2;
- (void)populateFAQRowsWithQuestions:(id)arg1 type:(long long)arg2;
- (void)configureUIWithHelpContent:(id)arg1;
- (void)configureTableSections;
- (void)removeEventSubscribers;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)showReportAProblem;
- (void)showQuestionViewWithGuidedTourPage:(id)arg1 QuestionList:(id)arg2 withTitle:(id)arg3;
- (void)showTroubleShootingWithTitle:(id)arg1;
- (void)showCareAndMaintenanceFAQ:(id)arg1;
- (void)showVoiceAssistanceWithTitle:(id)arg1;
- (void)showHowRoombaWorkWithTitle:(id)arg1;
- (id)pageNumberFromVideoType:(long long)arg1;
- (id)getGuidedTourPageWithVideoType:(long long)arg1;
- (void)showPrepareHomeWithTitle:(id)arg1;
- (void)showGettingStartedWithTitle:(id)arg1;
- (void)showCommonQuestionsWithTitle:(id)arg1;
- (void)showCareMaintenance;
- (void)showContact;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)configureDocumentsDescription;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getFAQCellId:(long long)arg1;
- (long long)getSectionId:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
