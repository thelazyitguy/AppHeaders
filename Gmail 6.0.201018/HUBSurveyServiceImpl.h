//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBSurveyService-Protocol.h"
#import "UVSSurveyEventListener-Protocol.h"

@class HUBSurveyServiceImplOptions, NSString, UVSSurveyMetadata;
@protocol GIPAccountID, HUBSurveyServiceImplDeps;

@interface HUBSurveyServiceImpl : NSObject <UVSSurveyEventListener, HUBSurveyService>
{
    id <GIPAccountID> _accountID;
    id <HUBSurveyServiceImplDeps> _deps;
    HUBSurveyServiceImplOptions *_options;
    double _bottomMargin;
    UVSSurveyMetadata *_currentSurveyMetadata;
    _Bool _isEnglish;
}

- (void).cxx_destruct;
- (void)surveyWasClosed:(id)arg1;
- (void)survey:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withPositioningCoordinator:(id)arg3;
- (void)surveyWasPrompted:(id)arg1 error:(id)arg2;
- (void)presentSurvey:(id)arg1 authParams:(id)arg2 inViewController:(id)arg3 withBottomMargin:(double)arg4;
- (void)maybePresentSurvey:(id)arg1 inViewController:(id)arg2 withBottomMargin:(double)arg3;
- (id)triggerIDForSurveyType:(int)arg1;
- (id)surveyAuthParams;
- (void)maybeDismissSurvey;
- (void)triggerSurveyType:(int)arg1 inViewController:(id)arg2 withBottomMargin:(double)arg3;
- (void)triggerSurveyType:(int)arg1 inViewController:(id)arg2;
- (id)initWithAccountID:(id)arg1 deps:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
