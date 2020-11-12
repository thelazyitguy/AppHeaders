//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTICommand, YTIFormattedString, YTIValidationRuleset;

@interface YTIFormfillPhoneNumberInputRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *errorText; // @dynamic errorText;
@property(nonatomic) _Bool hasErrorText; // @dynamic hasErrorText;
@property(nonatomic) _Bool hasHelpCommand; // @dynamic hasHelpCommand;
@property(nonatomic) _Bool hasHelperText; // @dynamic hasHelperText;
@property(nonatomic) _Bool hasObfuscatedText; // @dynamic hasObfuscatedText;
@property(nonatomic) _Bool hasPhoneNumber; // @dynamic hasPhoneNumber;
@property(nonatomic) _Bool hasPhoneNumberLabel; // @dynamic hasPhoneNumberLabel;
@property(nonatomic) _Bool hasRegionCode; // @dynamic hasRegionCode;
@property(nonatomic) _Bool hasRegionLabel; // @dynamic hasRegionLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasValidationRuleset; // @dynamic hasValidationRuleset;
@property(retain, nonatomic) YTICommand *helpCommand; // @dynamic helpCommand;
@property(retain, nonatomic) YTIFormattedString *helperText; // @dynamic helperText;
@property(copy, nonatomic) NSString *obfuscatedText; // @dynamic obfuscatedText;
@property(copy, nonatomic) NSString *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) YTIFormattedString *phoneNumberLabel; // @dynamic phoneNumberLabel;
@property(copy, nonatomic) NSString *regionCode; // @dynamic regionCode;
@property(retain, nonatomic) YTIFormattedString *regionLabel; // @dynamic regionLabel;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIValidationRuleset *validationRuleset; // @dynamic validationRuleset;

@end
