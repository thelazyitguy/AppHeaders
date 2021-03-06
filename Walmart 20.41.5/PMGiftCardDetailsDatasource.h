//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/PaymentMethodsDatasource.h>

@class NSDictionary, PMMutableCardInformation, UIImage;

@interface PMGiftCardDetailsDatasource : PaymentMethodsDatasource
{
    _Bool _isInstructionAreaExpanded;
    _Bool _isSavingsCatcher;
    _Bool _textWasValidLastCheck;
    _Bool _isNew;
    unsigned long long _initialType;
    PMMutableCardInformation *_cardBeingEdited;
    PMMutableCardInformation *_cardErrors;
    NSDictionary *_fraudHeaders;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *fraudHeaders; // @synthesize fraudHeaders=_fraudHeaders;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool textWasValidLastCheck; // @synthesize textWasValidLastCheck=_textWasValidLastCheck;
@property(retain, nonatomic) PMMutableCardInformation *cardErrors; // @synthesize cardErrors=_cardErrors;
@property(nonatomic) _Bool isSavingsCatcher; // @synthesize isSavingsCatcher=_isSavingsCatcher;
@property(nonatomic) _Bool isInstructionAreaExpanded; // @synthesize isInstructionAreaExpanded=_isInstructionAreaExpanded;
@property(retain, nonatomic) PMMutableCardInformation *cardBeingEdited; // @synthesize cardBeingEdited=_cardBeingEdited;
@property(nonatomic) unsigned long long initialType; // @synthesize initialType=_initialType;
- (void)expandContactInstructionsAction:(id)arg1;
- (void)labelTextChanged:(id)arg1;
- (void)pinTextChanged:(id)arg1;
- (void)eGiftCardTextChanged:(id)arg1;
- (void)cardNumberTextChanged:(id)arg1;
- (void)p_updateValidationAfterTextChange;
- (_Bool)validatePIN;
- (_Bool)validateCardNumber;
- (_Bool)validateRequiredEntryIsNumeric:(id)arg1;
- (_Bool)validateRequiredEntry:(id)arg1;
- (void)removeCard:(CDUnknownBlockType)arg1;
- (void)saveCard:(CDUnknownBlockType)arg1;
- (_Bool)allFieldsAreValid;
- (void)rebuildValidationMessaging;
- (void)p_notifyDelegate;
- (void)p_notifyDelegateOfValidationChange;
@property(readonly, nonatomic) UIImage *cardLogoImage;
- (void)refreshData;
- (id)initWithConsumer:(id)arg1 andCardInformation:(id)arg2;
- (id)initWithConsumer:(id)arg1;

@end

