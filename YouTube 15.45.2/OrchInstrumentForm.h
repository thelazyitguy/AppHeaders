//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchBankAccountForm, OrchCardForm, OrchCreditCardForm, OrchRedirectForm, OrchSimpleForm, OrchUiField;

@interface OrchInstrumentForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchBankAccountForm *bankAccount; // @dynamic bankAccount;
@property(retain, nonatomic) OrchCardForm *card; // @dynamic card;
@property(retain, nonatomic) OrchCreditCardForm *creditCard; // @dynamic creditCard;
@property(nonatomic) _Bool hasBankAccount; // @dynamic hasBankAccount;
@property(nonatomic) _Bool hasCard; // @dynamic hasCard;
@property(nonatomic) _Bool hasCreditCard; // @dynamic hasCreditCard;
@property(nonatomic) _Bool hasInstrumentRank; // @dynamic hasInstrumentRank;
@property(nonatomic) _Bool hasRedirect; // @dynamic hasRedirect;
@property(nonatomic) _Bool hasSimpleForm; // @dynamic hasSimpleForm;
@property(retain, nonatomic) OrchUiField *instrumentRank; // @dynamic instrumentRank;
@property(retain, nonatomic) OrchRedirectForm *redirect; // @dynamic redirect;
@property(retain, nonatomic) OrchSimpleForm *simpleForm; // @dynamic simpleForm;

@end

