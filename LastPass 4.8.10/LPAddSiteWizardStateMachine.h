//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LPAddSiteWizardStateMachine : NSObject
{
    _Bool _siteSelected;
    unsigned long long _state;
    NSString *_currentUrl;
}

+ (void)resetAddSiteTutorialShown;
+ (void)setAddSiteTutorialShown;
+ (_Bool)addSiteTutorialShown;
- (void).cxx_destruct;
@property(nonatomic) _Bool siteSelected; // @synthesize siteSelected=_siteSelected;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)showedFinalOverlay;
- (void)canceledSite;
- (void)savedSite;
- (void)showedStepFourOverlay;
- (void)showedEditSite;
- (void)showedStepThreeOverlay;
- (void)promptedToSaveSiteForUrl:(id)arg1;
- (void)showedStepTwoOverlay;
- (void)pageLoadedForUrl:(id)arg1;
- (void)selectedSiteUrl:(id)arg1;
- (void)selectedTemplateSite:(id)arg1;
- (void)enteredUrl:(id)arg1;
- (void)showedStepOneOverlay;
- (void)selectedAddCustom;
- (void)showedAddSizeWizard;
- (void)reset;
- (_Bool)shouldShowFilteredAddSiteStepTwoOverlay;
- (_Bool)shouldShowFilteredAddSiteStepOneOverlay;
@property(readonly, nonatomic) _Bool shouldShowFilteredFinalOverlay;
@property(readonly, nonatomic) _Bool shouldShowFinalOverlay;
@property(readonly, nonatomic) _Bool shouldShowFilteredStepFourOverlay;
@property(readonly, nonatomic) _Bool shouldShowStepFourOverlay; // @dynamic shouldShowStepFourOverlay;
@property(readonly, nonatomic) _Bool shouldShowStepThreeOverlay; // @dynamic shouldShowStepThreeOverlay;
@property(readonly, nonatomic) _Bool shouldShowStepTwoOverlay; // @dynamic shouldShowStepTwoOverlay;
@property(readonly, nonatomic) _Bool shouldShowStepOneOverlay; // @dynamic shouldShowStepOneOverlay;
@property(readonly, nonatomic) _Bool shouldShowAddSiteWizard;
- (void)dealloc;
- (id)init;

@end
