//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGAbstractSurveyViewController.h>

#import <Instabug/UITextViewDelegate-Protocol.h>

@class IBGSurveyView, NSString;

@interface IBGSurveyViewController : IBGAbstractSurveyViewController <UITextViewDelegate>
{
    IBGSurveyView *_surveyView;
}

@property(retain, nonatomic) IBGSurveyView *surveyView; // @synthesize surveyView=_surveyView;
- (void).cxx_destruct;
- (void)reloadView;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
