//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWAUiFieldsView.h>

#import <Module_Framework/GWAMegalogsSupportingComponent-Protocol.h>

@class GWAMegalogsContext, GWAUiFieldDateFieldView, GWAUiFieldTextFieldView, NSArray, NSNumber, NSString, OrchDate, OrchTooltip;

@interface GWACreditCardMetadataFieldView : GWAUiFieldsView <GWAMegalogsSupportingComponent>
{
    OrchDate *_minDate;
    OrchDate *_maxDate;
    unsigned long long _cvcLength;
    OrchTooltip *_cvcTooltip;
    _Bool _hideExpirationField;
    _Bool _hideCVCField;
    _Bool _cvcHintEnabled;
    GWAMegalogsContext *megalogsParentContext;
    GWAMegalogsContext *megalogsContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    GWAUiFieldDateFieldView *_expirationField;
    GWAUiFieldTextFieldView *_cvcField;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cvcHintEnabled; // @synthesize cvcHintEnabled=_cvcHintEnabled;
@property(nonatomic) _Bool hideCVCField; // @synthesize hideCVCField=_hideCVCField;
@property(nonatomic) _Bool hideExpirationField; // @synthesize hideExpirationField=_hideExpirationField;
@property(readonly, nonatomic) GWAUiFieldTextFieldView *cvcField; // @synthesize cvcField=_cvcField;
@property(readonly, nonatomic) GWAUiFieldDateFieldView *expirationField; // @synthesize expirationField=_expirationField;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
- (void)prepareMegalogsContexts;
- (void)updateCVCFieldWithCardType:(id)arg1;
- (id)validationMessageForCVC;
- (id)validationMessageForExpirationDate;
@property(readonly, nonatomic) NSString *cvcValue;
@property(readonly, nonatomic) int expirationYearValue;
@property(readonly, nonatomic) int expirationMonthValue;
- (id)cvcFieldText;
- (id)expirationFieldText;
- (id)initWithUiFields:(id)arg1 widgetStyle:(unsigned long long)arg2 configuration:(id)arg3 hideExpirationField:(_Bool)arg4 hideCVCField:(_Bool)arg5;
- (id)initWithUiFields:(id)arg1 configuration:(id)arg2 hideExpirationField:(_Bool)arg3 hideCVCField:(_Bool)arg4;
- (id)initWithUiFields:(id)arg1 configuration:(id)arg2;
- (id)initWithUiFields:(id)arg1 widgetStyle:(unsigned long long)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

