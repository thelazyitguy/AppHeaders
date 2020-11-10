//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, YTICommand, YTIFormattedString, YTIValidationRuleset;

@interface YTIFormfillTextInputRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *errorText; // @dynamic errorText;
@property(nonatomic) _Bool hasErrorText; // @dynamic hasErrorText;
@property(nonatomic) _Bool hasHelpCommand; // @dynamic hasHelpCommand;
@property(nonatomic) _Bool hasHelperText; // @dynamic hasHelperText;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasObfuscatedText; // @dynamic hasObfuscatedText;
@property(nonatomic) _Bool hasPrefilledText; // @dynamic hasPrefilledText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasValidationRuleset; // @dynamic hasValidationRuleset;
@property(retain, nonatomic) YTICommand *helpCommand; // @dynamic helpCommand;
@property(retain, nonatomic) YTIFormattedString *helperText; // @dynamic helperText;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(copy, nonatomic) NSString *obfuscatedText; // @dynamic obfuscatedText;
@property(copy, nonatomic) NSString *prefilledText; // @dynamic prefilledText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) YTIValidationRuleset *validationRuleset; // @dynamic validationRuleset;

@end
