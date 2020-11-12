//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <LinkKit/PLKCustomizable-Protocol.h>
#import <LinkKit/PLKFlowCoordinated-Protocol.h>

@class NSString, PLKFlowContext, UIButton, UILabel, UIView;
@protocol PLKFlowCoordinator;

@interface PLKMicrodepositsIntroductoryPaneViewController : UIViewController <PLKFlowCoordinated, PLKCustomizable>
{
    id <PLKFlowCoordinator> _flowCoordinator;
    PLKFlowContext *_flowContext;
    UILabel *_headingLabel;
    UILabel *_listTitleLabel;
    UILabel *_firstListItemLabel;
    UILabel *_secondListItemLabel;
    UILabel *_thirdListItemLabel;
    UIButton *_continueButton;
    UIView *_continueView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *continueView; // @synthesize continueView=_continueView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UILabel *thirdListItemLabel; // @synthesize thirdListItemLabel=_thirdListItemLabel;
@property(retain, nonatomic) UILabel *secondListItemLabel; // @synthesize secondListItemLabel=_secondListItemLabel;
@property(retain, nonatomic) UILabel *firstListItemLabel; // @synthesize firstListItemLabel=_firstListItemLabel;
@property(retain, nonatomic) UILabel *listTitleLabel; // @synthesize listTitleLabel=_listTitleLabel;
@property(retain, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(retain, nonatomic) PLKFlowContext *flowContext; // @synthesize flowContext=_flowContext;
@property(nonatomic) __weak id <PLKFlowCoordinator> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void)customizeWithConfiguration:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
