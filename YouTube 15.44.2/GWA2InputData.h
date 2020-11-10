//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2Data.h>

#import <Module_Framework/GWA2InputDataHandler-Protocol.h>
#import <Module_Framework/GWA2InputDataValidatorDelegate-Protocol.h>

@class GWA2InputDataValidationState, GWA2InputDataValidator, NSArray, NSMutableArray, NSNumber, NSString;

@interface GWA2InputData : GWA2Data <GWA2InputDataHandler, GWA2InputDataValidatorDelegate>
{
    _Bool _errorTextVisible;
    _Bool _isComplete;
    NSString *_input;
    GWA2InputDataValidationState *_validationState;
    NSMutableArray *_validationIDs;
    NSNumber *_scopeDataReference;
    GWA2InputDataValidator *_inputValidator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2InputDataValidator *inputValidator; // @synthesize inputValidator=_inputValidator;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) NSNumber *scopeDataReference; // @synthesize scopeDataReference=_scopeDataReference;
@property(readonly, nonatomic) NSMutableArray *validationIDs; // @synthesize validationIDs=_validationIDs;
@property(retain, nonatomic) GWA2InputDataValidationState *validationState; // @synthesize validationState=_validationState;
@property(retain, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic, getter=isErrorTextVisible) _Bool errorTextVisible; // @synthesize errorTextVisible=_errorTextVisible;
- (id)dataAccessibilityLabel;
- (id)inputFromDataWithReference:(long long)arg1;
- (id)displayText;
- (_Bool)isEmpty;
- (_Bool)isOptional;
- (_Bool)validateRecursively:(_Bool)arg1 displayAnyError:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *inputTransformations;
- (id)formattedInputFromText:(id)arg1;
- (id)rawInputFromText:(id)arg1;
- (void)updateValidationIDsWithValidationAction:(id)arg1;
- (void)runResultingAction:(id)arg1 triggeredByEventRuleId:(long long)arg2;
- (_Bool)conditionMatched:(id)arg1;
- (unsigned long long)triggerTypeFromTrigger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

